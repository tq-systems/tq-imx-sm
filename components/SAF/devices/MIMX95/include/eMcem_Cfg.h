/**
*   @file    eMcem_Cfg.h
*   @version 0.4.0
*
*   @brief   MIMX_SAF eMcem - Configuration Header.
*   @details Contains declarations of the eMcem configuration.
*
*   @addtogroup EMCEM_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : MIMX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.4.0
*   Build Version        : MIMX9X_SAF_0_4_0
*
*   Copyright 2023-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_CFG_H
#define EMCEM_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Cfg_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers do not enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Cfg_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers do not enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Cfg_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers do not enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Cfg_h_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers do not enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Cfg_h_REF_0809
* Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block scope.
* This variable cannot be defined at block scope as it is being generated by configuration tool.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/* Includes */
#include "MIMX_SAF_Version.h"
#include "eMcem_Types_Ext.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/* Defines */

/*!
 * @name EMCEM config software version
 */
/** @{ */
/*!
* @brief    eMCEM config SW major version
*/
#define EMCEM_CFG_SW_MAJOR_VERSION             0
/*!
* @brief    eMCEM config SW minor version
*/
#define EMCEM_CFG_SW_MINOR_VERSION             4
/*!
* @brief    eMCEM SW patch version
*/
#define EMCEM_CFG_SW_PATCH_VERSION             0
/** @} */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/*!< Check if current file and MIMX_SAF version header file are of the same Software version */
#if ((EMCEM_CFG_SW_MAJOR_VERSION != MIMX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_CFG_SW_MINOR_VERSION != MIMX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_CFG_SW_PATCH_VERSION != MIMX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Cfg.h and MIMX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/
/*!
 * @name EMCEM configuration events
 */
/** @{ */
/*!
* @brief    Availability of test API for sCheck module. sCheck module needs to be present in configuration to enable this option.
*/
#define EMCEM_TEST_API_AVAILABLE        (STD_OFF)

/*!
* @brief    Enable/Disable fault statistics. Mode Selector module needs to be present in configuration to allow enabling of this option.
*/
#define EMCEM_FAULT_STATISTICS_ENABLED  (STD_OFF)

/*!
* @brief    Enable/Disable extended diagnostics.
*/
#define EMCEM_EXT_DIAG_ENABLED          (STD_OFF)
/** @} */

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/* Types */
/*!
 * EMCEM FCCU configuration structure type
 *
 * Type to configure the fault reaction.
 */
typedef struct
{
    const uint8                             u8FaultHandlerId; /*!< Fault handler Id */
    const boolean                           bEnabled;         /*!< Fault config enabled */
    const boolean                           bWriteAccessEnabled; /*!< Write access Enabled */
    const uint32                            u32ImmReaction[EMCEM_REACTION_SET_COUNT]; /*!< Immediate reaction */
    const uint32                            u32DelReaction[EMCEM_REACTION_SET_COUNT]; /*!< Delayed reaction */
    const uint32                            u32FaultEnabled[EMCEM_CVFCCU_FAULT_ENABLE_REG_COUNT]; /*!< Fault enabled */
    const uint32                            u32FaultReactionSet[EMCEM_CVFCCU_REACTION_SET_REG_COUNT]; /*!< Fault reaction set */
    const eMcem_FccuHandlerType             eMcem_AlarmHandler[EMCEM_CVFCCU_MAX_FAULTS]; /*!< eMCEM alarm handler */
} eMcem_CVfccuFhidCfgType;

/*!
 * EMCEM EOUT configuration type
 *
 * Type to configure the Eout.
 */
typedef struct
{
    const uint32                            u32EoutTimerDisabled; /*!< Eout timer disabled */
    const uint32                            u32EoutPin[EMCEM_EOUT_PIN_COUNT]; /*!< Control mode, InvertInput, InputBufferEnabled, OutputBufferEnableValid */
    const uint32                            u32EoutOperatingMode[EMCEM_EOUT_PIN_COUNT]; /*!< Invert EOUT signaling, operating mode */
} eMcem_EoutCfgType;

/*!
 * EMCEM FCCU Instace configuration type
 *
 * Type to configure the Eout.
 */
typedef struct
{
    const boolean                           bDebugEnabled;     /*!< Enable debug */
    const boolean                           bConfigEnabled;    /*!< Cfg enabled */
    const uint32                            u32GlobalReactionTimerPeriod;     /*!< Global reaction timer period cfg */
    const uint32                            u32MinEoutDuration;    /*!< Eout duration cfg */
    const eMcem_EoutCfgType                 eMcem_EoutCfg;         /*!< EOUT cfg */
    const uint32                            au32Recovery[EMCEM_CVFCCU_FAULT_RECOVERY_REG_COUNT];     /*!< Fault lines cfg */
    const eMcem_CVfccuFhidCfgType           eMcem_FhidCfg;     /*!< Fault lines cfg */
} eMcem_CVfccuInstanceCfgType;

/*!
* Configuration struct type.
* eMCEM Driver configuration structure type.
*/
typedef struct
{
    const eMcem_CVfccuInstanceCfgType       *eMcem_CVfccuCfg;     /*!< EMCEM FCCU Instance */
} eMcem_ConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
/*!
* @brief    eMCEM start sec config data
*/
#define EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "eMcem_MemMap.h"

/*!
* @brief      eMCEM FCCU Instance configuration struct type.
*/
/* @violates @ref eMcem_Cfg_h_REF_0809 */
extern const eMcem_CVfccuInstanceCfgType CVfccuCfg;

/*!
* @brief      eMCEM configuration structures.
*/
/* @violates @ref eMcem_Cfg_h_REF_0809 */
extern const eMcem_ConfigType eMcem_Config;

/*!
* @brief      eMCEM stop sec configuration data.
*/
#define EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "eMcem_MemMap.h"

/* @violates @ref eMcem_Cfg_h_REF_0501 */
/* @violates @ref eMcem_Cfg_h_REF_0502 */
/* @violates @ref eMcem_Cfg_h_REF_0504 */
/* @violates @ref eMcem_Cfg_h_REF_0505 */
/*!
* @brief    eMCEM start sec no initializied variable
*/
#define EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "eMcem_MemMap.h"

/*!
* @brief    eMCEM start sec u32 constant
*/
#define EMCEM_START_SEC_CONST_32
#include "eMcem_MemMap.h"

/*!
* @brief      Array for masking out FCCU reserved faults.
*/
/* @violates @ref eMcem_Cfg_h_REF_0809 */
extern const uint32 eMcem_au32StaticFaultMasks[3U];

/*!
* @brief    eMCEM stop sec u32 constant
*/
#define EMCEM_STOP_SEC_CONST_32
#include "eMcem_MemMap.h"

/* @violates @ref eMcem_Cfg_h_REF_0501 */
/* @violates @ref eMcem_Cfg_h_REF_0502 */
/* @violates @ref eMcem_Cfg_h_REF_0504 */
/* @violates @ref eMcem_Cfg_h_REF_0505 */
/*!
* @brief    eMCEM start sec no initializied variable
*/
#define EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "eMcem_MemMap.h"

/**
* @brief      eMCEM pointer to configuration structure.
*/
extern const eMcem_ConfigType *eMcem_pConfigPtr;

/* @violates @ref eMcem_Cfg_h_REF_0501 */
/* @violates @ref eMcem_Cfg_h_REF_0502 */
/* @violates @ref eMcem_Cfg_h_REF_0504 */
/* @violates @ref eMcem_Cfg_h_REF_0505 */
/*!
* @brief    eMCEM stop sec no initializied variable
*/
#define EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "eMcem_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/*!
* @brief    eMCEM start sec code
*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Cfg_c_REF_0410 */
#include "eMcem_MemMap.h"

/*!
 * Alarm Handler function.
 *
 * @param[in]     nFaultId      Id of the fault
 *
 * @return     eMcem_ErrRecoveryType
 * @retval           EMCEM_ERR_RECOVERED      fault has been recovered successfully.
 * @retval           EMCEM_ERR_NOT_RECOVERED  fault has not been recovered.
 */
extern eMcem_ErrRecoveryType eMcemCVfccuAlarmHandler( eMcem_FaultType nFaultId );

/*!
* @brief    eMCEM stop sec code
*/
#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Cfg_c_REF_0410 */
/* @violates @ref eMcem_Cfg_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* EMCEM_CFG_H */

/** @} */
