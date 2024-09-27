/**
*   @file    eMcem_MemMap.h
*   @version 0.4.0
*
*   @brief   MIMX_SAF SafetyBase - Memory mapping specification.
*   @details This document specifies mechanisms for the mapping of code and data to specific
*            memory sections via memory mapping file. For many ECUs and microcontroller platforms
*            it is of utmost necessity to be able to map code, variables and constants module
*            wise to specific memory sections.
*            This file contains sample code only. It is not part of the production code deliverables
*   @addtogroup SAFETY_BASE_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : MIMX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.4.0
*   Build Version        : MIMX9X_SAF_0_4_0
*
*   Copyright 2011-2016 Freescale Semiconductor, Inc.
*   Copyright 2017-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_MEMMAP_H
#define EMCEM_MEMMAP_H

#ifdef __cplusplus
extern "C"{
#endif
/**
* @page misra_violations MISRA-C:2012 violations
* @section eMcem_MemMap_h_REF_1
* Violates MISRA 2012 Advisory Rule 20.5, #undef shall not be used.
* This is due to #undef MEMMAP_ERROR and #undef <section_type> and cannot be removed as it is
* required by Autosar Specification - Specification of Memory Mapping.
* @section eMcem_MemMap_h_REF_2
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header being included more than once.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
* @section eMcem_MemMap_h_REF_3
* Violates MISRA 2012 Advisory Rule 20.1, #include directives should only be preceded by
* preprocessor directives or comments.
* This comes from the order of includes in the .c. MemMap is required by AutoSAR to be included in
* the middle of the source file(s).
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, Identifiers (internal and external) shall not rely  on the significance of more than 31 characters. All compilers used support more than 31 chars for identifiers.
* @section [global]
* Violates MISRA 2012 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 character significance and case  sensitivity are supported for external identifiers. This violation is due to the naming convention for the memory ssections.
* @section [global]
* Violates MISRA 2012 Required Rule 3.4, All uses of the pragma directive shall be documented and explained. The pragma directives are used MemMap.h file to define memory sections.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*
* @violates @ref eMcem_MemMap_h_REF_2
* @violates @ref eMcem_MemMap_h_REF_3
*/
#include "MIMX_SAF_Version.h"
#include "CompilerDefinition.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @{
* @brief Parameters that shall be published within the memory map header file and also in the
*       module's description file
*/
#define EMCEM_MEMMAP_SW_MAJOR_VERSION             0
#define EMCEM_MEMMAP_SW_MINOR_VERSION             4
#define EMCEM_MEMMAP_SW_PATCH_VERSION             0
/**@}*/
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX_SAF version header file are of the same software version */
#if ((EMCEM_MEMMAP_SW_MAJOR_VERSION != MIMX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_MEMMAP_SW_MINOR_VERSION != MIMX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_MEMMAP_SW_PATCH_VERSION != MIMX_SAF_SW_PATCH_VERSION))
#error "Software Version Numbers of eMcem_MemMap.h and MIMX_SAF version are different"
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
//#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

/**
* @brief Symbol used for checking correctness of the includes
*/
#define MEMMAP_ERROR

/**************************************************************************************************/
/********************************************* GREENHILLS *****************************************/
/**************************************************************************************************/
#ifdef _GREENHILLS_C_MIMX95XX_
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_0"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_1"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_2"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_3"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_4"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mimx_saf_const_flash_5"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".mimx_saf_text"
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".ramcode"
    #pragma ghs inlineprologue
    #pragma ghs callmode=far
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
    #pragma ghs callmode=default
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".ramcode_no_cacheable"
    #pragma ghs inlineprologue
    #pragma ghs callmode=far
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
    #pragma ghs callmode=default
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".ramcode_no_cacheable_128"
    #pragma ghs inlineprologue
    #pragma ghs callmode=far
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
    #pragma ghs callmode=default
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".acemcem_code_rom"
    #pragma ghs inlineprologue
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_full_access"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_64k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_64k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_16k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_16k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_8k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_8k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_8k_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_exec_8k_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_shared_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_persist_reset"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_scheck_faults_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_scheck_requests_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_tcm_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_tcm_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_tcm_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_4"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_5"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_6"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_7"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_8"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_9"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_10"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_11"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_12"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_13"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_14"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_15"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_16"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_17"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_18"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_19"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_20"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_21"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_22"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_23"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_24"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_25"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_26"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_27"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_sram_28"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss_dram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif
/**************************************************************************************************/
/********************************************* DIAB ***********************************************/
/**************************************************************************************************/
#elif defined(_DIABDATA_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_0"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_1"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_2"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_3"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_4"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=".mimx_saf_const_flash_5"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section rodata=""
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section text=".mimx_saf_text"
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section text=""
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section text=".ramcode"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma clang section text=""
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section text=".ramcode_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma clang section text=""
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section text=".ramcode_no_cacheable_128"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma clang section text=""
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* use code relative addressing mode to ensure Position-independent Code (PIC) */
    #pragma clang section text=".acemcem_code_rom"
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma clang section text=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_full_access"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_64k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_64k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_16k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_16k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_8k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_8k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_8k_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_exec_8k_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section data=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_shared_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_persist_reset"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_scheck_faults_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_scheck_requests_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_tcm_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_tcm_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_tcm_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_4"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_5"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_6"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_7"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_8"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_9"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_10"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_11"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_12"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_13"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_14"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_15"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_16"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_17"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_18"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_19"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_20"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_21"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_22"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_23"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_24"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_25"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_26"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_27"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_sram_28"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss_dram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=""
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma clang section bss=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif
/**************************************************************************************************/
/********************************************* CODEWARRIOR ****************************************/
/**************************************************************************************************/
#elif defined(_CODEWARRIOR_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_cfg
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_cfg
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_cfg
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_cfg
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_0
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_1
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_2
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_3
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_4
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mimx_saf_const_flash_5
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG mimx_saf_text
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG ramcode
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG ramcode_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG ramcode_no_cacheable_128
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG acemcem_code_rom
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_full_access
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_64k_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_64k_1
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_16k_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_16k_1
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_8k_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_8k_1
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_8k_2
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_exec_8k_3
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_data_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_shared_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_persist_reset
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_scheck_faults_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_scheck_requests_no_cacheable
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_tcm_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_tcm_1
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_tcm_2
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_1
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_2
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_3
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_4
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_5
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_6
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_7
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_8
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_9
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_10
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_11
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_12
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_13
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_14
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_15
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_16
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_17
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_18
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_19
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_20
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_21
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_22
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_23
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_24
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_25
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_26
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_27
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_sram_28
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss_dram_0
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mimx_saf_bss
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif
/**************************************************************************************************/
/********************************************* COSMIC *********************************************/
/**************************************************************************************************/
#elif defined(_COSMIC_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_cfg}
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_cfg}
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_cfg}
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_cfg}
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const}
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const}
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const}
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const}
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_0}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_1}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_2}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_3}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_4}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {mimx_saf_const_flash_5}
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section (mimx_saf_text)
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section (ramcode)
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section (ramcode_no_cacheable)
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section (ramcode_no_cacheable_128)
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section (acemcem_code_rom)
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_full_access]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_64k_0]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_64k_1]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_16k_0}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_16k_1}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_8k_0}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_8k_1}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_8k_2}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_exec_8k_3}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_no_cacheable}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_no_cacheable}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_no_cacheable}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_no_cacheable}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {mimx_saf_data_no_cacheable}
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_shared_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_persist_reset]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_scheck_faults_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_scheck_requests_no_cacheable]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_tcm_0]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_tcm_1]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_tcm_2]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_0]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_1]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_2]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_3]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_4]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_5]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_6]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_7]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_8]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_9]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_10]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_11]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_12]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_13]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_14]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_15]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_16]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_17]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_18]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_19]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_20]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_21]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_22]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_23]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_24]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_25]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_26]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_27]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_sram_28]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss_dram_0]
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section [mimx_saf_bss]
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif
/**************************************************************************************************/
/********************************************* HighTec ********************************************/
/**************************************************************************************************/
#elif defined(_HITECH_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_cfg" a
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_cfg" a
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_cfg" a
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_cfg" a
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_0" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_1" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_2" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_3" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_4" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_const_flash_5" a
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_text" avx
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".ramcode" avx
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".ramcode_no_cacheable" avx
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".ramcode_no_cacheable_128" avx
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".acemcem_code_rom" avx
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_full_access" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_64k_0" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_64k_1" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_16k_0" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_16k_1" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_8k_0" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_8k_1" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_8k_2" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_exec_8k_3" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_no_cacheable" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_no_cacheable" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_no_cacheable" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_no_cacheable" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_data_no_cacheable" aws
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_shared_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_persist_reset" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_scheck_faults_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_scheck_requests_no_cacheable" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_tcm_0" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_tcm_1" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_tcm_2" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_0" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_1" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_2" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_3" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_4" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_5" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_6" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_7" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_8" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_9" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_10" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_11" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_12" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_13" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_14" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_15" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_16" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_17" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_18" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_19" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_20" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_21" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_22" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_23" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_24" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_25" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_26" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_27" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_sram_28" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss_dram_0" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section ".mimx_saf_bss" awsB
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif
/**************************************************************************************************/
/********************************************* Linaro *********************************************/
/**************************************************************************************************/
#elif defined(_LINARO_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_0"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_1"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_2"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_3"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_4"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mimx_saf_const_flash_5"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata "default"
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".mimx_saf_text"
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text "default"
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".ramcode"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text "default"
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".ramcode_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text "default"
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".ramcode_no_cacheable_128"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text "default"
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".acemcem_code_rom"
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_full_access"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_64k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_64k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_16k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_16k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_8k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_8k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_8k_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_exec_8k_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_shared_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_persist_reset"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_scheck_faults_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_scheck_requests_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_tcm_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_tcm_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_tcm_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_4"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_5"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_6"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_7"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_8"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_9"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_10"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_11"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_12"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_13"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_14"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_15"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_16"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_17"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_18"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_19"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_20"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_21"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_22"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_23"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_24"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_25"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_26"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_27"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_sram_28"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss_dram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss "default"
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR

#endif
/**************************************************************************************************/
/********************************************* DS5 ************************************************/
/**************************************************************************************************/
#elif defined(_ARM_DS5_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_0"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_1"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_2"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_3"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_4"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rodata=".mimx_saf_const_flash_5"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section code=".mimx_saf_text"
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section code=".ramcode"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section code=".ramcode_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section code=".ramcode_no_cacheable_128"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section code=".acemcem_code_rom"
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_full_access"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_64k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_64k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_16k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_16k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_8k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_8k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_8k_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_exec_8k_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_shared_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_persist_reset"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_scheck_faults_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_scheck_requests_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_tcm_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_tcm_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_tcm_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_4"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_5"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_6"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_7"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_8"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_9"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_10"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_11"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_12"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_13"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_14"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_15"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_16"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_17"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_18"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_19"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_20"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_21"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_22"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_23"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_24"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_25"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_26"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_27"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_sram_28"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss_dram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma arm section zidata=".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif
/**************************************************************************************************/
/********************************************* IAR ************************************************/
/**************************************************************************************************/
#elif defined(_IAR_C_MIMX95XX_)
/**************************************** EMCEM *******************************/
#ifdef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_cfg"
#endif

#ifdef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_0"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_1"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_2"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_3"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_4"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_const_flash_5"
#endif

#ifdef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CONST_UNSPECIFIED_FLASH_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".mimx_saf_text"
#endif

#ifdef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".ramcode"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".ramcode_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".ramcode_no_cacheable_128"
#endif

#ifdef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_RAMCODE_NO_CACHEABLE_128
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".acemcem_code_rom"
#endif

#ifdef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_CODE_AC
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_full_access"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_FULL_ACCESS
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_64k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_64k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_65536_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_16k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_16k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16384_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_8k_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_8k_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_8k_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_exec_8k_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8192_EXEC_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_data_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_shared_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_SHARED_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_persist_reset"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_PERSIST_RESET
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_scheck_faults_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_FAULTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_scheck_requests_no_cacheable"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_REQUESTS_NO_CACHEABLE
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_tcm_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_tcm_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_tcm_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_TCM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_1"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_1
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_2"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_2
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_3"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_3
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_4"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_4
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_5"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_5
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_6"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_6
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_7"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_7
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_8"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_9"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_9
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_10"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_10
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_11"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_11
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_12"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_12
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_13"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_13
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_14"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_14
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_15"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_15
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_16"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_17"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_17
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_18"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_18
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_19"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_19
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_20"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_20
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_21"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_21
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_22"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_22
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_23"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_23
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_24"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_24
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_25"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_25
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_26"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_26
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_27"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_27
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_sram_28"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_SRAM_28
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss_dram_0"
#endif

#ifdef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_DRAM_0
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_BOOLEAN
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_8
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_16
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_32
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mimx_saf_bss"
#endif

#ifdef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    /**
    * @file eMcem_MemMap.h
    * @violates @ref eMcem_MemMap_h_REF_1
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif
#endif
/**************************************************************************************************/
/****************************************** Report error ******************************************/
/**************************************************************************************************/
#ifdef MEMMAP_ERROR
    #error "eMcem_MemMap.h, no valid memory mapping symbol defined."
#endif

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_MEMMAP_H */