/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_PF09_H
#define FSL_PF09_H

#include "fsl_lpi2c.h"

/*!
 * @addtogroup pf09
 * @{
 * @file
 * @brief
 *
 * Header file containing the API for the PF09A PMIC.
 */

/******************************************************************************
 * Definitions
 *****************************************************************************/

/*! PF09 driver version. */
#define FSL_PF09_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))

/*! PF09 device info. */
typedef struct
{
    LPI2C_Type *i2cBase;  /*!< I2C base address */
    uint8_t devAddr;      /*!< Device I2C address */
    bool crcEn;           /*!< CRC enabled */
    bool secureEn;        /*!< Secure writes enabled */
} PF09_Type;

/*! PF09 regulator info. */
typedef struct
{
    uint32_t minV;  /*!< Regulator Min Voltage in microvolts */
    uint32_t maxV;  /*!< Regulator Max Voltage in microvolts */
    uint32_t stepV; /*!< Regulator step in microvolts */
} PF09_RegInfo;

/*!
 * @name PF09 regulators
 */
/** @{ */
#define PF09_REG_SW1   1U  /*!< SW1 buck regulator */
#define PF09_REG_SW2   2U  /*!< SW2 buck regulator */
#define PF09_REG_SW3   3U  /*!< SW3 buck regulator */
#define PF09_REG_SW4   4U  /*!< SW4 buck regulator */
#define PF09_REG_SW5   5U  /*!< SW5 buck regulator */
#define PF09_REG_LDO1  6U  /*!< LDO1 linear regulator */
#define PF09_REG_LDO2  7U  /*!< LDO2 linear regulator */
#define PF09_REG_LDO3  8U  /*!< LDO3 linear regulator */
/** @} */

/*!
 * @name PF09 Buck regulator operation mode
 */
/** @{ */
#define PF09_SW_MODE_OFF  0U  /*!< Switcher off */
#define PF09_SW_MODE_PWM  1U  /*!< Switcher PWM */
#define PF09_SW_MODE_PFN  2U  /*!< Switcher PFN */
/** @} */

/*!
 * @name PF09 voltage state
 */
/** @{ */
#define PF09_STATE_VRUN   0U  /*!< RUN voltage */
#define PF09_STATE_VSTBY  1U  /*!< STBY voltage */
/** @} */

/*! Number of mask words */
#define PF09_MASK_LEN  12U

/*!
 * @name PF09 voltage state
 */
/** @{ */
#define PF09_MASK_IDX_STATUS1   0U   /*!< Status 1 mask */
#define PF09_MASK_IDX_STATUS2   1U   /*!< Status 2 mask */
#define PF09_MASK_IDX_STATUS3   2U   /*!< Status 3 mask */
#define PF09_MASK_IDX_SW_MODE   3U   /*!< Switcher mode mask */
#define PF09_MASK_IDX_SW_ILIM   4U   /*!< Switcher current limit mask */
#define PF09_MASK_IDX_LDO_ILIM  5U   /*!< LDO current limit mask */
#define PF09_MASK_IDX_SW_UV     6U   /*!< Switcher under volt mask */
#define PF09_MASK_IDX_SW_OV     7U   /*!< Switcher over volt mask */
#define PF09_MASK_IDX_LDO_UV    8U   /*!< LDO uncer volt mask */
#define PF09_MASK_IDX_LDO_OV    9U   /*!< LDO over volt mask */
#define PF09_MASK_IDX_PWRON     10U  /*!< Power on mask */
#define PF09_MASK_IDX_IO        11U  /*!< I/O mask */
/** @} */

/*!
 * @name PF09 voltage monitors
 */
/** @{ */
#define PF09_VMON1     1U  /*!< VMON1 monitor */
#define PF09_VMON2     2U  /*!< VMON2 monitor */
/** @} */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * Initialize a PF09
 *
 * @param[in]     dev        Device info.
 *
 * @return True if successful.
 */
bool PF09_Init(const PF09_Type *dev);

/*!
 * Get PF09 info
 *
 * @param[in]     dev      Device info.
 * @param[out]    info     Pointer to return pointer to info.
 * @param[out]    len      Number of info bytes.
 *
 * @return True if successful.
 */
bool PF09_PmicInfoGet(const PF09_Type *dev, uint8_t **info, uint8_t *len);

/*!
 * Write a PF09 register
 *
 * @param[in]     dev      Device info.
 * @param[in]     regAddr  Register address.
 * @param[in]     val      Value to write.
 * @param[in]     mask     Mask for RMW.
 *
 * @return True if successful.
 */
bool PF09_PmicWrite(const PF09_Type *dev, uint8_t regAddr, uint8_t val,
    uint8_t mask);

/*!
 * Read a PF09 register
 *
 * @param[in]     dev      Device info.
 * @param[in]     regAddr  Register address.
 * @param[out]    val      Pointer to return value.
 *
 * @return True if successful.
 */
bool PF09_PmicRead(const PF09_Type *dev, uint8_t regAddr, uint8_t *val);

/*!
 * Interrupt enable/disable
 *
 * @param[in]     dev      Device info.
 * @param[in]     mask     Array of masks to modify.
 * @param[in]     enable   true = enable, false = disable.
 *
 * @return True if successful.
 */
bool PF09_IntEnable(const PF09_Type *dev, const uint8_t *mask, bool enable);

/*!
 * Get interrupt status
 *
 * @param[in]     dev      Device info.
 * @param[in]     mask     Array of status masks.
 *
 * @return True if successful.
 */
bool PF09_IntStatus(const PF09_Type *dev, uint8_t *mask);

/*!
 * Clear interrupts
 *
 * @param[in]     dev      Device info.
 * @param[in]     mask     Array of masks to clear.
 *
 * @return True if successful.
 */
bool PF09_IntClear(const PF09_Type *dev, const uint8_t *mask);

/*!
 * Get PF09 regulator Info
 *
 * @param[in]     regulator  Regulator name SW or LDO.
 * @param[out]    regInfo    Regulator info.
 *
 * @return True if successful.
 */
bool PF09_RegulatorInfoGet(uint8_t regulator, PF09_RegInfo *regInfo);

/*!
 * Set the Buck regulator mode for the state
 *
 * @param[in]     dev        Device info.
 * @param[in]     regulator  Regulator name SW or LDO.
 * @param[in]     state      RUN or STBY voltage.
 * @param[in]     mode       Regulator operation mode.
 *
 * @return True if successful.
 */
bool PF09_SwModeSet(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    uint8_t mode);

/*!
 * Get the Buck regulator mode for the state
 *
 * @param[in]     dev        Device info.
 * @param[in]     regulator  Regulator name SW or LDO.
 * @param[in]     state      RUN or STBY voltage.
 * @param[out]    mode       Pointer to return the operation mode.
 *
 * @return True if successful.
 */
bool PF09_SwModeGet(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    uint8_t *mode);

/*!
 * Output Enable/Disable of LDO
 *
 * @param[in]     dev        Device info.
 * @param[in]     regulator  Regulator name of LDO.
 * @param[in]     state      RUN or STBY voltage.
 * @param[in]     ldoEn      Enable or Disable LDO output.
 *
 * @return True if successful.
 */
bool PF09_LdoEnable(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    bool ldoEn);

/*!
 * Status of LDO
 *
 * @param[in]     dev         Device info.
 * @param[in]     regulator   Regulator name of LDO.
 * @param[in]     state       RUN or STBY voltage.
 * @param[out]    ldoEn       Pointer to return the status of LDO.
 *
 * @return True if successful.
 */
bool PF09_LdoIsEnabled(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    bool *ldoEn);

/*!
 * Get the regulator voltage microVolts
 *
 * @param[in]     dev        Device info.
 * @param[in]     regulator  Regulator name SW or LDO.
 * @param[in]     state      RUN or STBY voltage.
 * @param[out]    microVolt  Pointer to return the regulator microVolts.
 *
 * Get the voltage preset codes for SW1-5, LDO1-3.
 *
 * @return True if successful.
 */
bool PF09_VoltageGet(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    uint32_t *microVolt);

/*!
 * Set the regulator voltage microVolts
 *
 * @param[in]     dev        Device info.
 * @param[in]     regulator  Regulator name SW or LDO.
 * @param[in]     state      RUN or STBY voltage.
 * @param[in]     microVolt  Regulator microVolts.
 *
 * @return True if successful.
 */
bool PF09_VoltageSet(const PF09_Type *dev, uint8_t regulator, uint8_t state,
    uint32_t microVolt);

/*!
 * Get sensor temp
 *
 * @param[in]     dev        Device info.
 * @param[out]    temp       Pointer to return the temp in C.
 *
 * @return True if successful.
 */
bool PF09_TempGet(const PF09_Type *dev, int32_t *temp);

/*!
 * Set temp sensor alarm
 *
 * @param[in]     dev        Device info.
 * @param[out]    temp       Temp in C.
 *
 * @return True if successful.
 */
bool PF09_TempAlarmSet(const PF09_Type *dev, int32_t temp);

/*!
 * Enable PF09 WatchDog
 *
 * @param[in]     dev       Device info.
 * @param[in]     wdogEn    WDOG Enable.
 *
 * @return True if successful.
 */
bool PF09_WdogEnable(const PF09_Type *dev, bool wdogEn);

/*!
 * Service PF09 Static/Dynamic WatchDog in Open window
 *
 * @param[in]     dev        Device info.
 * @param[in]     wdogMode   Static or Dynamic mode of wdog.
 *
 * @return True if successful.
 */
bool PF09_WdogService(const PF09_Type *dev, uint8_t wdogMode);

/*!
 * Set the monitor voltage in microVolts
 *
 * @param[in]     dev        Device info.
 * @param[in]     monitor    Monitor name.
 * @param[in]     state      RUN or STBY voltage.
 * @param[in]     microVolt  Regulator microVolts.
 *
 * @return True if successful.
 */
bool PF09_MonitorSet(const PF09_Type *dev, uint8_t monitor, uint8_t state,
    uint32_t microVolt);

/*!
 * Enable/disable the monitor
 *
 * @param[in]     dev        Device info.
 * @param[in]     monitor    Monitor name.
 * @param[in]     monEn      Enable or disable voltage monitoring.
 *
 * @return True if successful.
 */
bool PF09_MonitorEnable(const PF09_Type *dev, uint8_t monitor, bool monEn);

/*!
 * Enable/disable XRESET monitoring in STANDBY
 *
 * @param[in]     dev        Device info.
 * @param[in]     xrstEn     Enable or disable XRESET monitoring.
 *
 * @return True if successful.
 */
bool PF09_XrstStbyEnable(const PF09_Type *dev, bool xrstEn);

#if defined(__cplusplus)
}
#endif /*_cplusplus*/
/** @} */

#endif /* FSL_PF09_H */

