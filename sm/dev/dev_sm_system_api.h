/*
** ###################################################################
**
**     Copyright 2023-2024 NXP
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
/*!
 * @addtogroup DEV_SM_SYS_API
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the SM API for the device system.
 */
/*==========================================================================*/

#ifndef DEV_SM_SYSTEM_API_H
#define DEV_SM_SYSTEM_API_H

/* Includes */

#include "sm.h"

/* Defines */

/*! System sleep mode */
#define DEV_SM_SLEEP_MODE(x)   (((x) & 0xFF0000U) >> 16U)

/*! System sleep flags */
#define DEV_SM_SLEEP_FLAGS(x)  (((x) & 0xFFFFU) >> 0U)

/* Types */

/*!
 * Device reset record
 */
typedef struct
{
    /*! Flag to indicate if valid */
    bool valid;
    /*! Flag to indicate known to be a reset */
    bool reset;
    /*! Reset reason */
    uint32_t reason;
    /*! Flag to indicate if errId is valid */
    bool validErr;
    /*! Error ID (fault ID for faults) */
    uint32_t errId;
    /*! Flag to indicate if origin is valid */
    bool validOrigin;
    /*! LM that caused the reset */
    uint32_t origin;
    /*! Number of extended info words */
    uint32_t extLen;
    /*! Extended info (PC, BFAR, etc. for exceptions) */
    uint32_t extInfo[DEV_SM_NUM_EXT_INFO];
} dev_sm_rst_rec_t;

/* Functions */

/*!
 * Initialize the device system functions.
 *
 * A copy of the shutdown record is loaded at boot using
 * BRD_SM_ShutdownRecordLoad(). If the device has a non-POR reset
 * reason that will replace the one stored in persistent storage.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemInit(void);

/*!
 * Store the sleep mode and flags.
 *
 * @param[in]     sleepMode   Mode to store
 * @param[in]     sleepFlags  Flags to store
 */
void DEV_SM_SystemSleepModeSet(uint32_t sleepMode, uint32_t sleepFlags);

/*!
 * Reset the system.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemReset(void);

/*!
 * Reset the system to a specific stage and container.
 *
 * @param[in]     stage      Stage to reset to
 * @param[in]     container  Container to reset to
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemStageReset(uint32_t stage, uint32_t container);

/*!
 * Shutdown (turn off) the system.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemShutdown(void);

/*!
 * Store shutdown record.
 *
 * @param[in]     shutdownRec  Record to store
 *
 * Calls BRD_SM_ShutdownRecordSave().
 */
void DEV_SM_SystemShutdownRecSet(dev_sm_rst_rec_t shutdownRec);

/*!
 * Load a shutdown record.
 *
 * @param[out]    shutdownRec  Return point for record
 *
 * Returns the shutdown record loaded at boot in DEV_SM_SystemInit().
 */
void DEV_SM_SystemShutdownRecGet(dev_sm_rst_rec_t *shutdownRec);

/*!
 * Get a reset reason name.
 *
 * @param[in]     resetReason     Clock name to get
 * @param[out]    reasonNameAddr  Return pointer to name
 * @param[out]    len             Return max length of all clock names
 *
 * This function allows the caller to get the name of a reset
 * reason.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_NOT_FOUND: if \a resetReason is invalid.
 */
int32_t DEV_SM_SystemReasonNameGet(uint32_t resetReason,
    string *reasonNameAddr, int32_t *len);

/*!
 * System post-boot complete.
 *
 * @param[in]     mSel       Boot mode selection
 * @param[in]     initFlags  Init flags from makefile
 *
 * Do any housekeeping after booting all LM.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 */
int32_t DEV_SM_SystemPostBoot(uint32_t mSel, uint32_t initFlags);

/*!
 * Complete a reset.
 *
 * @param[in]     resetRec  Reset record to store
 *
 * Used to report a need for a reset. Calls ::SM_SYSTEMRSTCOMP to send
 * all the required notifications, save the reset record, and reset the
 * system.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - others returned by ::SM_SYSTEMRSTCOMP
 */
int32_t DEV_SM_SystemRstComp(const dev_sm_rst_rec_t *resetRec);

/*!
 * Report an SM system error.
 *
 * @param[in]     status  Status code
 * @param[in]     pc      PC of caller
 *
 * Error is logged as reset reason and then system reset.
 */
void DEV_SM_SystemError(int32_t status, uint32_t pc);

/*!
 * Transition the system to sleep mode.
 *
 * @param[in]     sleepMode   system sleep mode
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemSleep(uint32_t sleepMode);

/*!
 * Transition the system to idle mode.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemIdle(void);

/*!
 * Place the system DRAM into retention.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemDramRetentionEnter(void);

/*!
 * Exit the system DRAM from retention.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 */
int32_t DEV_SM_SystemDramRetentionExit(void);

#endif /* DEV_SM_SYSTEM_API_H */

/** @} */

