/*
** ###################################################################
**
** Copyright 2023-2024 NXP
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** o Redistributions of source code must retain the above copyright notice, this list
**   of conditions and the following disclaimer.
**
** o Redistributions in binary form must reproduce the above copyright notice, this
**   list of conditions and the following disclaimer in the documentation and/or
**   other materials provided with the distribution.
**
** o Neither the name of the copyright holder nor the names of its
**   contributors may be used to endorse or promote products derived from this
**   software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
** ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/* Main SM entry point.                                                     */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "brd_sm.h"
#include "lmm.h"
#ifdef RUN_TEST
#include "test.h"
#endif
#ifdef MONITOR
#include "monitor.h"
#endif

/* Local defines */
#if !defined(__stringify)
#define __stringify_1(x...)     #x
#define __stringify(x...)       __stringify_1(x)
#endif
#define CONFIG_STR __stringify(SM_CONFIGURATION)
/* Local types */

/* Local variables */

/* Flag to indicate if the LMM has initialized */
static bool s_lmmInited = false;

/* Global variables */

/* Boot times */
// coverity[misra_c_2012_rule_8_9_violation:FALSE]
uint64_t g_bootTime[SM_BT_SUB + 1U];

#ifdef HAS_SM_TEST_MODE
uint32_t g_testMode = SM_TEST_MODE_OFF;
#endif

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Main function                                                            */
/*--------------------------------------------------------------------------*/
int main(int argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    uint64_t delta;
    uint32_t mSel = 0U;

    /* Store boot start time */
    g_bootTime[SM_BT_START] = DEV_SM_Usec64Get();

#ifdef INC_LIBC
    /* Configure stdio for no buffering */
    (void) setvbuf(stdin, NULL, _IONBF, 0);
    (void) setvbuf(stdout, NULL, _IONBF, 0);
#endif

    /* Init the system hardware */
    status = BRD_SM_Init(argc, argv, &mSel);
    printf("BRD_SM_Init: %d\n", status);

    /* Save start banner time */
    delta = DEV_SM_Usec64Get();

    /* Print banner */
    printf("\nHello from SM (Build %lu, Commit %08lx, %s %s)\n",
        SM_BUILD, SM_COMMIT, SM_DATE, SM_TIME);
    printf("SM Configuration: %s\n\n", CONFIG_STR);

#if MONITOR_MODE == 2
    printf("Press key to enter monitor mode.\n\n",
        SM_BUILD, SM_COMMIT, SM_DATE, SM_TIME);
#endif

    /* Add to subtract time */
    g_bootTime[SM_BT_SUB] += (DEV_SM_Usec64Get() - delta);

    /* Init LMM */
    if (status == SM_ERR_SUCCESS)
    {
        /* mSel from BRD_SM_Init(), LMM_INIT_FLAGS from Makefile */
        status = LMM_Init(&mSel, LMM_INIT_FLAGS);
        printf("LMM_Init: %d\n", status);
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* Mark LMM inited */
        s_lmmInited = true;

        /* Boot LMs */
        status = LMM_Boot();
        printf("LMM_Boot: %d\n", status);
    }

#ifdef RUN_TEST
    /* Init client API for test */
    if (status == SM_ERR_SUCCESS)
    {
        status = TEST_Config();
        printf("TEST_Config: %d\n", status);
    }
#endif

    /* Post-boot cleanup */
    if (status == SM_ERR_SUCCESS)
    {
        status = LMM_PostBoot();
    }

    /* Report any error during init */
    if (status != SM_ERR_SUCCESS)
    {
        printf("Init error: %d\n", status);
    }

#ifdef RUN_TEST
    /* Run test */
    if (status == SM_ERR_SUCCESS)
    {
        printf("\n*** SM Test Mode - no further booting ***\n");
        TEST();
    }
#endif

#if MONITOR_MODE == 1
    /* Call monitor */
    MONITOR_Cmd("\n*** SM Debug Monitor ***\n");
#endif

#ifndef SIMU
#if MONITOR_MODE == 2
    /* Idle loop */
    while (status == SM_ERR_SUCCESS)
    {
        bool runMonitor = false;
        const board_uart_config_t *uartConfig = BOARD_GetDebugUart();

        /* Grab sleep count to detect idle/sleep */
        uint32_t prevSleepCnt = g_syslog.sysSleepRecord.sleepCnt;

        /* Enter system idle */
        status = DEV_SM_SystemIdle();

        /* Check if system idle succeeded */
        if ((status == SM_ERR_SUCCESS) && (uartConfig != NULL))
        {
            /* Check if if system entered sleep */
            if (prevSleepCnt != g_syslog.sysSleepRecord.sleepCnt)
            {
                /* Check if system sleep wake source was console UART */
                if (g_syslog.sysSleepRecord.wakeSource ==
                    (uartConfig->irq + 16U))
                {
                    runMonitor = true;
                }
            }
            else
            {
                /* Check for console character */
                runMonitor = MONITOR_CharPending();
            }
        }

        if ((status == SM_ERR_SUCCESS) && runMonitor)
        {
            /* Call monitor */
            MONITOR_Cmd("\n*** SM Debug Monitor ***\n");
        }
    }
#elif !defined(RUN_TEST)
    printf("\n*** SM Main Loop ***\n");
    /* Loop - services handled via interrupts */
    while (status == SM_ERR_SUCCESS)
    {
        status = DEV_SM_SystemIdle();
    }
#endif
#endif

    printf("\nGood-bye from SM\n\n");

    return status;
}

/*--------------------------------------------------------------------------*/
/* Report error                                                             */
/*--------------------------------------------------------------------------*/
void SM_Error(int32_t status)
{
    if (s_lmmInited)
    {
        uint32_t pc = 0U;

#if !defined(SIMU) && !defined(CPPCHECK)
        /* Get the LR as PC */
        // coverity[misra_c_2012_rule_1_2_violation:FALSE]
        __ASM ("MOV %0, LR\n" : "=r" (pc));
#endif

#ifdef USES_FUSA
        /* Report to FuSa */
        LMM_FuSaAssertionFailure(status);
#endif

        /* Request board reset */
        BRD_SM_Exit(status, pc);
    }
    else
    {
        /* Reset when LMM not initialized */
        (void) SM_SYSTEMRESET();
    }
}

#ifdef HAS_SM_TEST_MODE
/*--------------------------------------------------------------------------*/
/* Set test mode                                                            */
/*--------------------------------------------------------------------------*/
void SM_TestModeSet(uint32_t mode)
{
    g_testMode = mode;
}
#endif

#if !defined(SIMU) && !defined(INC_LIBC)
/*--------------------------------------------------------------------------*/
/* Exit function for no clib                                                */
/*--------------------------------------------------------------------------*/
// coverity[misra_c_2012_rule_21_2_violation:FALSE]
// coverity[misra_c_2012_rule_21_8_violation:FALSE]
// coverity[misra_c_2012_directive_4_6_violation:FALSE]
void exit(int status)
{
    if (s_lmmInited)
    {
        uint32_t pc;

        /* Get the LR as PC */
        // coverity[misra_c_2012_rule_1_2_violation:FALSE]
        __ASM ("MOV %0, LR\n" : "=r" (pc));

        /* Request board reset */
        BRD_SM_Exit((int32_t) status, pc);
        __builtin_unreachable();
    }
    else
    {
        /* Reset when LMM not initialized */
        (void) SM_SYSTEMRESET();
    }

    /* Hang */
    // coverity[infinite_loop:FALSE]
    while (true)
    {
        ; /* Intentional empty while */
    }
}
#endif

#if !defined(SIMU) && !defined(INC_LIBC)
/*--------------------------------------------------------------------------*/
/* C array init for no clib                                                 */
/*--------------------------------------------------------------------------*/
// coverity[misra_c_2012_rule_21_2_violation:FALSE]
void __libc_init_array(void)
{
}
#endif

