/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "board.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
#if (BOARD_DEBUG_UART_INSTANCE == 1U)
    /* Configure LPUART 1 */
    IOMUXC_SetPinMux(IOMUXC_PAD_UART1_RXD__LPUART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_UART1_RXD__LPUART1_RX, IOMUXC_PAD_PD(1U));

    IOMUXC_SetPinMux(IOMUXC_PAD_UART1_TXD__LPUART1_TX, 0);
    IOMUXC_SetPinConfig(IOMUXC_PAD_UART1_TXD__LPUART1_TX, IOMUXC_PAD_DSE(0xFU));
#elif (BOARD_DEBUG_UART_INSTANCE == 2U)
    /* Configure LPUART 2 */
    #error
#endif

#if (BOARD_I2C_INSTANCE == 1U)
    /* Configure LPI2C 1 */
    #error
#elif (BOARD_I2C_INSTANCE == 2U)
    /* Configure LPI2C 2 */
    IOMUXC_SetPinMux(IOMUXC_PAD_I2C2_SCL__LPI2C2_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_I2C2_SCL__LPI2C2_SCL, IOMUXC_PAD_DSE(0xFU)
        | IOMUXC_PAD_FSEL1(0x3U) | IOMUXC_PAD_PU(0x1U) | IOMUXC_PAD_OD(0x1U));

    IOMUXC_SetPinMux(IOMUXC_PAD_I2C2_SDA__LPI2C2_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_I2C2_SDA__LPI2C2_SDA, IOMUXC_PAD_DSE(0xFU)
        | IOMUXC_PAD_FSEL1(0x3U) | IOMUXC_PAD_PU(0x1U) | IOMUXC_PAD_OD(0x1U));
#endif
    /* PMIC IRQ */
    IOMUXC_SetPinMux(IOMUXC_PAD_SAI1_RXD0__GPIO1_IO_BIT14, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_SAI1_RXD0__GPIO1_IO_BIT14, IOMUXC_PAD_PU(0x1U));
}

