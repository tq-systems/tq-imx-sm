// SPDX-License-Identifier: BSD-3-Clause
/*
** ###################################################################
**
**     Copyright 2023 NXP
**     Copyright (c) 2024 TQ-Systems GmbH <oss@tq-group.com>, D-82229 Seefeld, Germany.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/* File containing the implementation of the board controls.                */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "brd_sm.h"
#include "lmm.h"

/* Local defines */

/* Local types */

/* Local variables */

/*--------------------------------------------------------------------------*/
/* Get a control value                                                      */
/*--------------------------------------------------------------------------*/
int32_t BRD_SM_ControlGet(uint32_t ctrlId, uint32_t *numRtn, uint32_t *rtn)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check to see if ctrlId is within bounds*/
    if (ctrlId < SM_NUM_CTRL)
    {
        /* Check if device or board */
        if (ctrlId < DEV_SM_NUM_CTRL)
        {
            status = DEV_SM_ControlGet(ctrlId, numRtn, rtn);
        }
        else
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }
    else
    {
        *numRtn = 0U;
        status = SM_ERR_NOT_FOUND;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Configure notification flags                                             */
/*--------------------------------------------------------------------------*/
int32_t BRD_SM_ControlFlagsSet(uint32_t ctrlId, uint32_t flags)
{
    int32_t status = SM_ERR_SUCCESS;
    /* uint32_t enb = (flags != 0U) ? 0U : 1U; */

    switch (ctrlId)
    {
        case BRD_SM_CTRL_BUTTON:
            status = SM_ERR_NOT_SUPPORTED;
            break;
        default:
            status = SM_ERR_NOT_SUPPORTED;
            break;
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* TODO: */
    }

    return status;
}

/*--------------------------------------------------------------------------*/
/* Control handler                                                          */
/*--------------------------------------------------------------------------*/
void BRD_SM_ControlHandler(uint8_t status, uint8_t val)
{
    /* TODO: */
}

