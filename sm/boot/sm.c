/*
** ###################################################################
**
** Copyright 2023 NXP
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

/* Local types */

/* Local variables */

/*! Boot times */
uint64_t g_bootTime[SM_BT_SUB + 1U];

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

#if defined(MONITOR) || defined(RUN_TEST) || defined(CONSOLE)
    /* Configure stdio for no buffering */
    (void) setvbuf(stdin, NULL, _IONBF, 0);
    (void) setvbuf(stdout, NULL, _IONBF, 0);
#endif

    /* Init the system hardware */
    status = BRD_SM_Init(argc, argv, &mSel);
    printf("BRD_SM_Init: %d)\n", status);

    /* Save start banner time */
    delta = DEV_SM_Usec64Get();

    /* Print banner */
    printf("\nHello from SM (Build %lu, Commit %08lx, %s %s)\n\n",
        SM_BUILD, SM_COMMIT, SM_DATE, SM_TIME);

    /* Add to subtract time */
    g_bootTime[SM_BT_SUB] += (DEV_SM_Usec64Get() - delta);

    /* Init LMM */
    if (status == SM_ERR_SUCCESS)
    {
        status = LMM_Init();
        printf("LMM_Init: %d)\n", status);
    }

    /* Boot LMs */
    if (status == SM_ERR_SUCCESS)
    {
        /* mSel from BRD_SM_Init(), LMM_INIT_FLAGS from Makefile */
        status = LMM_Boot(mSel, LMM_INIT_FLAGS);
        printf("LMM_Boot: %d)\n", status);
    }

#ifdef RUN_TEST
    /* Init client API for test */
    if (status == SM_ERR_SUCCESS)
    {
        status = TEST_Config();
        printf("TEST_Config: %d)\n", status);
    }
#endif

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

#ifdef MONITOR
    /* Call monitor */
    MONITOR_Cmd("\n*** SM Debug Monitor - no further booting ***\n");
#endif

#if !defined(RUN_TEST) && !defined(MONITOR)
    printf("\n*** SM Main Loop ***\n");
    /* Loop - services handled via interrupts */
    while(true)
    {
        ; /* TODO: enter low power mode */
    }
#endif

    printf("\nGood-bye from SM\n\n");

    return status;
}

#if !defined(SIMU) && !defined(MONITOR) && !defined(RUN_TEST)
/*--------------------------------------------------------------------------*/
/* Exit function for no clib                                                */
/*--------------------------------------------------------------------------*/
void exit(int status)
{
    BRD_SM_Exit((int32_t) status);
    __builtin_unreachable();
}
#endif

#if !defined(SIMU) && !defined(MONITOR) && !defined(RUN_TEST)
/*--------------------------------------------------------------------------*/
/* C array init for no clib                                                 */
/*--------------------------------------------------------------------------*/
void __libc_init_array(void)
{
}
#endif

