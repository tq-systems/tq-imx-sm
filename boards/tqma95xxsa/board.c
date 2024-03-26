/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "sm.h"
#include "board.h"
#include "fsl_lpuart.h"
#include "fsl_lpi2c.h"
#include "fsl_ccm.h"
#include "fsl_clock.h"
#include "fsl_bbnsm.h"
#include "fsl_reset.h"
#include "fsl_sysctr.h"
#include "fsl_systick.h"
#include "fsl_wdog32.h"
#include "fsl_cache.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* External board-level clock rates */
#define BOARD_EXT_CLK_RATE          25000000UL  /* 25MHz */

/* SM SysTick parameters */
#define BOARD_SYSTICK_CLKSRC    0U                      /* 0 = external ref  */
#define BOARD_SYSTICK_CLK_ROOT  CLOCK_ROOT_M33SYSTICK   /* Dedicated CCM root */

/* SM WDOG */
#define BOARD_WDOG_BASE_PTR         WDOG1
#define BOARD_WDOG_IRQn             WDOG1_IRQn
#define BOARD_WDOG_CLK_SRC          kWDOG32_ClockSource1  /* lpo_clk @ 32K */
#define BOARD_WDOG_TIMEOUT          0xFFFFU  /* 65535 ticks @ 32K = 2 sec */
#define BOARD_WDOG_SRMASK           (1UL << RST_REASON_WDOG1)
#define BOARD_WDOG_ANY_MASK         BLK_CTRL_S_AONMIX_WDOG_ANY_MASK_WDOG1_MASK
#define BOARD_WDOG_IPG_DEBUG        BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1_MASK

/* SM handlers configuration */
#define BOARD_HANDLER_PRIO_PREEMPT_CRITICAL         0U    // Highest premptive
#define BOARD_HANDLER_PRIO_PREEMPT_VERY_HIGH        1U
#define BOARD_HANDLER_PRIO_PREEMPT_HIGH             2U
#define BOARD_HANDLER_PRIO_PREEMPT_ABOVE_NORMAL     3U
#define BOARD_HANDLER_PRIO_PREEMPT_NORMAL           4U
#define BOARD_HANDLER_PRIO_PREEMPT_BELOW_NORMAL     5U
#define BOARD_HANDLER_PRIO_PREEMPT_LOW              6U
#define BOARD_HANDLER_PRIO_PREEMPT_VERY_LOW         7U    // Lowest premptive

#define BOARD_HANDLER_PRIO_NOPREEMPT_CRITICAL       8U    // Highest non-premptive
#define BOARD_HANDLER_PRIO_NOPREEMPT_VERY_HIGH      9U
#define BOARD_HANDLER_PRIO_NOPREEMPT_HIGH           10U
#define BOARD_HANDLER_PRIO_NOPREEMPT_ABOVE_NORMAL   11U
#define BOARD_HANDLER_PRIO_NOPREEMPT_NORMAL         12U
#define BOARD_HANDLER_PRIO_NOPREEMPT_BELOW_NORMAL   13U
#define BOARD_HANDLER_PRIO_NOPREEMPT_LOW            14U
#define BOARD_HANDLER_PRIO_NOPREEMPT_VERY_LOW       15U   // Lowest non-premptive

/* Priority grouping (PRIGROUP) configured as follows:
 *      1-bit group priority field
 *      3-bit subgroup priority field
 *
 *      Note:  actual bits of priority fields are MSB of fields as defined
 *             by __NVIC_PRIO_BITS
 */
#define BOARD_HANDLER_PRIGROUP                      6U

/* SWI configuration */
#define BOARD_SWI_PRIO              BOARD_HANDLER_PRIO_NOPREEMPT_NORMAL

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/*--------------------------------------------------------------------------*/
/* Configure CM33 MPU and XCACHE controller                                 */
/*--------------------------------------------------------------------------*/
void BOARD_ConfigMPU(void)
{
    uint8_t attr;

    /* Disable code cache(ICache) and system cache(DCache) */
    XCACHE_DisableCache(LPCAC_PC);
    XCACHE_DisableCache(LPCAC_PS);

    /* NOTE: All TCRAM is non-cacheable regardless of MPU setting. */

    /*
     * default cache policy(default memory access behavior) after enable
     * mpu on cortex-m33(according to RM of cortex-m33):
     * 0x00000000-0x1FFFFFFF Normal memory, Non-shareable, Write-Through,
     *                       not Write Allocate
     * 0x20000000-0x3FFFFFFF Normal memory, Non-shareable, Write-Back,
     *                       Write Allocate
     * 0x40000000-0x5FFFFFFF Device, Shareable
     * 0x60000000-0x7FFFFFFF Normal memory, Non-shareable, Write-Back,
     *                       Write Allocate
     * 0x80000000-0x9FFFFFFF Normal memory, Non-shareable, Write-Through,
     *                       not Write Allocate
     * 0xA0000000-0xDFFFFFFF Device, Shareable
     * 0xE0000000-0xE003FFFF Device, Shareable
     * 0xE0040000-0xE0043FFF Device, Shareable
     * 0xE0044000-0xE00EFFFF Device, Shareable
     * 0xF0000000-0xFFFFFFFF Device, Shareable
     */
    /* Disable MPU */
    ARM_MPU_Disable();

    /* Attr0: Device-nGnRnE */
    ARM_MPU_SetMemAttr(0U, ARM_MPU_ATTR(ARM_MPU_ATTR_DEVICE,
        ARM_MPU_ATTR_DEVICE));

    /* Attr1: Normal memory, Outer non-cacheable, Inner non-cacheable */
    ARM_MPU_SetMemAttr(1U, ARM_MPU_ATTR(ARM_MPU_ATTR_NON_CACHEABLE,
        ARM_MPU_ATTR_NON_CACHEABLE));

    /* Attr2: Normal memory, Inner write-through transient, read allocate.
     * Inner write-through transient, read allocate
     */
    attr = ARM_MPU_ATTR_MEMORY_(0U, 0U, 1U, 0U);
    ARM_MPU_SetMemAttr(2U, ARM_MPU_ATTR(attr, attr));

    /* Attr3: Normal memory, Outer write-back transient, read/write allocate.
     * Inner write-back transient, read/write
     * allocate */
    attr = ARM_MPU_ATTR_MEMORY_(0U, 1U, 1U, 1U);
    ARM_MPU_SetMemAttr(3U, ARM_MPU_ATTR(attr, attr));

    /*
     * Change macro definitions as follows when choose cache policy
     * as non-cacheable:
     * #define DDR_NONCACHEABLE (1U)
     * #define DDR_WRITE_THROUGH (0U)
     * #define DDR_WRITE_BACK (0U)
     *
     *
     * Change macro definitions as follows when choose cache policy
     * as Write-Through:
     * #define DDR_NONCACHEABLE (0U)
     * #define DDR_WRITE_THROUGH (1U)
     * #define DDR_WRITE_BACK (0U)
     *
     *
     * Change macro definitions as follows when choose cache policy
     * as Write-Back:
     * #define DDR_NONCACHEABLE (0U)
     * #define DDR_WRITE_THROUGH (0U)
     * #define DDR_WRITE_BACK (1U)
     */
#define DDR_NONCACHEABLE  (1U)
#define DDR_WRITE_THROUGH (0U)
#define DDR_WRITE_BACK    (0U)
#if DDR_NONCACHEABLE
    /* NOTE: DDR is used as shared memory for A/M core communication,
     * set it to non-cacheable. */
    /* Region 0: [0x80000000, 0xDFFFFFFF](DRAM), outer shareable,
     * read/write, any privileged, executable. Attr 1 (non-cacheable). */
    ARM_MPU_SetRegion(0U, ARM_MPU_RBAR(0x80000000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0xDFFFFFFFU, 1U));
#elif DDR_WRITE_THROUGH
    /* Region 0: [0x80000000, 0xDFFFFFFF](DRAM), outer shareable, read/write,
     * any privileged, executable. Attr 2
     * (Normal memory, Inner write-through transient, read allocate. Inner
     * write-through transient, read allocate). */
    ARM_MPU_SetRegion(0U, ARM_MPU_RBAR(0x80000000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0xDFFFFFFFU, 2U));
#elif DDR_WRITE_BACK
    /* Region 0: [0x80000000, 0xDFFFFFFF](DRAM), outer shareable, read/write,
     * any privileged, executable. Attr 3
     * (Normal memory, Outer write-back transient, read/write allocate. Inner
     * write-back transient, read/write allocate). */
    ARM_MPU_SetRegion(0U, ARM_MPU_RBAR(0x80000000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0xDFFFFFFFU, 3U));
#endif

#define OCRAM_NONCACHEABLE  (1U)
#define OCRAM_WRITE_THROUGH (0U)
#define OCRAM_WRITE_BACK    (0U)
#if OCRAM_NONCACHEABLE
    /* Region 1: [0x20480000, 0x2051FFFF](OCRAM), outer shareable, read/write,
     * any privileged, executable. Attr 1 (non-cacheable). */
    ARM_MPU_SetRegion(1U, ARM_MPU_RBAR(0x20480000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0x2051FFFFU, 1U));
#elif OCRAM_WRITE_THROUGH
    /* Region 1: [0x20480000, 0x2051FFFF](OCRAM), outer shareable,
     * read/write, any privileged, executable. Attr 2 (Normal memory, Inner
     * write-through transient, read allocate. Inner write-through transient,
     * read allocate). */
    ARM_MPU_SetRegion(1U, ARM_MPU_RBAR(0x20480000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0x2051FFFFU, 2U));
#elif OCRAM_WRITE_BACK
    /* Region 1: [0x20480000, 0x2051FFFF](OCRAM), outer shareable,
     * read/write, any privileged, executable. Attr 3 (Normal memory,
     * Outer write-back transient, read/write allocate. Inner write-back
     * transient, read/write allocate). */
    ARM_MPU_SetRegion(1U, ARM_MPU_RBAR(0x20480000U, ARM_MPU_SH_OUTER, 0U,
        1U, 0U), ARM_MPU_RLAR(0x2051FFFFU, 3U));
#endif

    /* Enable MPU(use default memory map when access the memory within
     * region) */
    ARM_MPU_Enable(MPU_CTRL_PRIVDEFENA_Msk);

    /* Enable ICache and DCache */
    XCACHE_EnableCache(LPCAC_PC);
    XCACHE_EnableCache(LPCAC_PS);
}

/*--------------------------------------------------------------------------*/
/* Initialize clocking                                                      */
/*--------------------------------------------------------------------------*/
void BOARD_InitClocks(void)
{
    /* Configure default EXT_CLK1 rate tied to XTAL_OUT/EXT_CLK pin */
    CLOCK_SourceSetRate(CLOCK_SRC_EXT1, BOARD_EXT_CLK_RATE, 0U);
}

/*--------------------------------------------------------------------------*/
/* Return the debug UART info                                               */
/*--------------------------------------------------------------------------*/
LPUART_Type *BOARD_GetDebugUart(uint8_t *inst, uint32_t *baud,
    uint32_t *clockId)
{
    static LPUART_Type *const s_uartBases[] = LPUART_BASE_PTRS;
    static uint32_t const s_uartClks[] =
    {
        0U,
        CLOCK_ROOT_LPUART1,
        CLOCK_ROOT_LPUART2,
        CLOCK_ROOT_LPUART3,
        CLOCK_ROOT_LPUART4,
        CLOCK_ROOT_LPUART5,
        CLOCK_ROOT_LPUART6,
        CLOCK_ROOT_LPUART7,
        CLOCK_ROOT_LPUART8
    };

    /* Return data */
    if (inst != NULL)
    {
        *inst = BOARD_DEBUG_UART_INSTANCE;
    }
    if (baud != NULL)
    {
        *baud = BOARD_DEBUG_UART_BAUDRATE;
    }
    if (clockId != NULL)
    {
        *clockId = s_uartClks[BOARD_DEBUG_UART_INSTANCE];
    }

    return s_uartBases[BOARD_DEBUG_UART_INSTANCE];
}

/*--------------------------------------------------------------------------*/
/* Initialize debug console                                                 */
/*--------------------------------------------------------------------------*/
void BOARD_InitDebugConsole(void)
{
    uint32_t baud;
    uint32_t clockId;
    LPUART_Type *base = BOARD_GetDebugUart(NULL, &baud, &clockId);
    uint64_t rate = CCM_RootGetRate(clockId);

    /* Configure debug UART */
    lpuart_config_t lpuart_config;
    LPUART_GetDefaultConfig(&lpuart_config);
    lpuart_config.baudRate_Bps = baud;
    lpuart_config.rxFifoWatermark = ((uint8_t)
        FSL_FEATURE_LPUART_FIFO_SIZEn(base)) - 1U;
    lpuart_config.txFifoWatermark = ((uint8_t)
        FSL_FEATURE_LPUART_FIFO_SIZEn(base)) - 1U;
    lpuart_config.enableTx = true;
    lpuart_config.enableRx = true;
    (void) LPUART_Init(base, &lpuart_config,
        (uint32_t) rate & 0xFFFFFFFFU);
}

/*--------------------------------------------------------------------------*/
/* Initialize IRQ handlers                                                  */
/*--------------------------------------------------------------------------*/
void BOARD_InitHandlers(void)
{
    /* Configure priority grouping */
    NVIC_SetPriorityGrouping(BOARD_HANDLER_PRIGROUP);

    /* Configure default priority of exceptions and IRQs */
    for (int32_t irq = ((int32_t) SVCall_IRQn); irq < ((int32_t)
        NUMBER_OF_INT_VECTORS); irq++)
    {
        NVIC_SetPriority((IRQn_Type) irq,
            BOARD_HANDLER_PRIO_NOPREEMPT_NORMAL);
    }

    /* Configure SWI handler */
    NVIC_SetPriority(BOARD_SWI_IRQn, BOARD_SWI_PRIO);
    NVIC_EnableIRQ(BOARD_SWI_IRQn);

    /* Enable BBNSM handler */
    NVIC_EnableIRQ(BBNSM_IRQn);

    /* Enable GPC SM handler */
    NVIC_EnableIRQ(GPC_SM_REQ_IRQn);

    /* Enable ELE Group IRQ handlers */
    NVIC_EnableIRQ(ELE_Group1_IRQn);
    NVIC_EnableIRQ(ELE_Group2_IRQn);
    NVIC_EnableIRQ(ELE_Group3_IRQn);

    /* Enable GPIO1 handler */
    NVIC_EnableIRQ(GPIO1_0_IRQn);
}

/*--------------------------------------------------------------------------*/
/* Initialize timers                                                        */
/*--------------------------------------------------------------------------*/
void BOARD_InitTimers(void)
{
    /* Configure and enable the BBNSM RTC */
    bbnsm_rtc_config_t rtcConfig;
    BBNSM_RTC_GetDefaultConfig(&rtcConfig);
    BBNSM_RTC_Init(BBNSM, &rtcConfig);

    /* Configure and enable system counter */
    SYSCTR_Init();

    /* Configure and enable M33 SysTick */
    uint64_t rate = CCM_RootGetRate(BOARD_SYSTICK_CLK_ROOT);
    uint32_t reloadVal = (uint32_t) (rate & 0xFFFFFFFFU);
    reloadVal = ((reloadVal * BOARD_TICK_PERIOD_MSEC) + 999U) / 1000U;
    SYSTICK_Init(1U, BOARD_SYSTICK_CLKSRC, (uint32_t) (rate & 0xFFFFFFFFU),
        reloadVal);
    NVIC_EnableIRQ(SysTick_IRQn);

    /* Configure and enable the WDOG */
    wdog32_config_t wdogConfig;
    WDOG32_GetDefaultConfig(&wdogConfig);
    wdogConfig.clockSource = BOARD_WDOG_CLK_SRC;
    wdogConfig.timeoutValue = BOARD_WDOG_TIMEOUT;
    wdogConfig.enableInterrupt = true;
    WDOG32_Init(BOARD_WDOG_BASE_PTR, &wdogConfig);
    NVIC_SetPriority(BOARD_WDOG_IRQn, BOARD_HANDLER_PRIO_PREEMPT_CRITICAL);
    NVIC_EnableIRQ(BOARD_WDOG_IRQn);

    /* Configure to just non-FCCU SM watchdogs */
    BLK_CTRL_S_AONMIX->WDOG_ANY_MASK = BOARD_WDOG_ANY_MASK;

    /* Halt SM WDOG on M33 debug entry */
    BLK_CTRL_NS_AONMIX->IPG_DEBUG_CM33 = (BOARD_WDOG_IPG_DEBUG);

    /* Halt CM7 WDOG on CM7 debug entry */
    BLK_CTRL_WAKEUPMIX->IPG_DEBUG_CM7 =
        BLK_CTRL_WAKEUPMIX_IPG_DEBUG_CM7_WDOG5_MASK;
}

/*--------------------------------------------------------------------------*/
/* Set watchdog mode                                                        */
/*--------------------------------------------------------------------------*/
void BOARD_WdogModeSet(uint32_t mode)
{
    switch (mode)
    {
        case BOARD_WDOG_MODE_WARM: /* warm */
            /* Allow WDOG to generate internal warm reset */
            SRC_GEN->SRMASK &= (~BOARD_WDOG_SRMASK);

            /* Disable WDOG_ANY */
            BLK_CTRL_S_AONMIX->WDOG_ANY_MASK = 0U;
            break;
        case BOARD_WDOG_MODE_COLD: /* cold */
            /* Allow WDOG to generate internal warm reset */
            SRC_GEN->SRMASK &= (~BOARD_WDOG_SRMASK);

            /* Enable WDOG_ANY */
            BLK_CTRL_S_AONMIX->WDOG_ANY_MASK = BOARD_WDOG_ANY_MASK;
            break;
        case BOARD_WDOG_MODE_IRQ: /* irq */
            /* Disallow WDOG to generate internal warm reset */
            SRC_GEN->SRMASK |= BOARD_WDOG_SRMASK;

            /* Disable WDOG_ANY */
            BLK_CTRL_S_AONMIX->WDOG_ANY_MASK = 0U;
            break;
        case BOARD_WDOG_MODE_OFF:  /* off */
            WDOG32_Deinit(BOARD_WDOG_BASE_PTR);
            break;
        case BOARD_WDOG_MODE_TRIGGER: /* trigger */
            BOARD_WDOG_BASE_PTR->CNT = 0U;
            break;
        default:
            ; /* Intentional empty default */
            break;
    }
}

/*--------------------------------------------------------------------------*/
/* Kick the watchdog timer                                                  */
/*--------------------------------------------------------------------------*/
void BOARD_WdogRefresh(void)
{
    WDOG32_Refresh(BOARD_WDOG_BASE_PTR);
}

/*--------------------------------------------------------------------------*/
/* Initialize serial bus for external devices                               */
/*--------------------------------------------------------------------------*/
void BOARD_InitSerialBus(void)
{
    static LPI2C_Type *const s_i2cBases[] = LPI2C_BASE_PTRS;
    LPI2C_Type *base = s_i2cBases[BOARD_I2C_INSTANCE];
    lpi2c_master_config_t lpi2cConfig = {0};
    static uint32_t const s_i2cClks[] =
    {
        0U,
        CLOCK_ROOT_LPI2C1,
        CLOCK_ROOT_LPI2C2
    };
    uint32_t clockId = s_i2cClks[BOARD_I2C_INSTANCE];

    uint32_t rate = (uint32_t) CCM_RootGetRate(clockId);

    LPI2C_MasterGetDefaultConfig(&lpi2cConfig);

    lpi2cConfig.baudRate_Hz = BOARD_I2C_BAUDRATE;
    lpi2cConfig.enableDoze = false;

    LPI2C_MasterInit(base, &lpi2cConfig, rate);
}

