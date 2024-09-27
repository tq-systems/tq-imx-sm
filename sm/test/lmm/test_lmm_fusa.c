/*
** ###################################################################
**
** Copyright 2024 NXP
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
/* Unit test for the device SM CPU API.                                     */
/*==========================================================================*/

/* LM_00010 */

/* Include Config */

/* Includes */

#include "test.h"
#include "dev_sm_api.h"
#include "dev_sm_system_api.h"
#include "lmm_sys.h"
#include "lmm_fusa.h"
#include "sm.h"

/* Local defines */

/* Local types */

/* Local variables */

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Test device SM CPU                                                       */
/*--------------------------------------------------------------------------*/
void TEST_LmmFuSa(void)
{
    /* LM tests */
    printf("**** LMM FuSa API Tests ***\n\n");

#ifdef SIMU
    uint32_t status = 0U;
    /* Recover from global error */
    {
        LMM_FusaGlobalRecovery(status);
    }
    /* Report assertion error */
    {
        LMM_FuSaAssertionFailure(status);
    }
    /* Report exception */
    {
        dev_sm_rst_rec_t rst_rec = {0};
        LMM_FuSaExceptionHandler(&rst_rec);
    }

    /* Invalid seenvId: Get S-EENV state */
    {
        lmm_fusa_id_t target = {0U}, caller = {0U};
        uint32_t seenvState = 0U;

        caller.seenvId = SM_LM_NUM_SEENV;
        caller.lmId = 0U;

        NECHECK(LMM_FusaSeenvStateGet(&caller, &target, &seenvState),
            SM_ERR_NOT_FOUND);
    }

    /* Invalid seenvId: Set S-EENV state */
    {
        lmm_fusa_id_t caller = {0U};
        uint32_t seenvState = 0U, pingCookie = 0U;

        caller.seenvId = SM_LM_NUM_SEENV;
        caller.lmId = 0U;

        NECHECK(LMM_FusaSeenvStateSet(&caller, seenvState, pingCookie),
            SM_ERR_NOT_FOUND);
    }
#endif
    /* Test API bounds */
    printf("\n**** LMM FuSa API Err Tests ***\n\n");

    printf("\n");
}

