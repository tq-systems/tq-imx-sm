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
/* File containing the implementation of the System Control and Management  */
/* Interface (SCMI) pinctrl protocol.                                       */
/*==========================================================================*/

/* Includes */

#include "rpc_scmi_internal.h"
#include "lmm.h"

/* Local defines */

/* Protocol version */
#define PROTOCOL_VERSION  0x10000U

/* SCMI pinctrl protocol message IDs and masks */
#define COMMAND_PROTOCOL_VERSION             0x0U
#define COMMAND_PROTOCOL_ATTRIBUTES          0x1U
#define COMMAND_PROTOCOL_MESSAGE_ATTRIBUTES  0x2U
#define COMMAND_PINCTRL_ATTRIBUTES           0x3U
#define COMMAND_PINCTRL_SETTINGS_GET         0x5U
#define COMMAND_PINCTRL_SETTINGS_CONFIGURE   0x6U
#define COMMAND_PINCTRL_REQUEST              0x7U
#define COMMAND_PINCTRL_RELEASE              0x8U
#define COMMAND_NEGOTIATE_PROTOCOL_VERSION   0x10U
#define COMMAND_SUPPORTED_MASK               0x101EFUL

/* SCMI max pin control argument lengths */
#define PINCTRL_MAX_NAME       16U
#define PINCTRL_MAX_CONFIGS    SCMI_ARRAY(12U, pin_config_t)
#define PINCTRL_MAX_CONFIGS_T  SCMI_ARRAY(8U, pin_config_t)

/* SCMI pin control selectors */
#define PINCTRL_SEL_PIN    0U
#define PINCTRL_SEL_GROUP  1U
#define PINCTRL_SEL_FUNC   2U

/* SCMI pin control types */
#define PINCTRL_TYPE_MUX        192U
#define PINCTRL_TYPE_CONFIG     193U
#define PINCTRL_TYPE_DAISY_ID   194U
#define PINCTRL_TYPE_DAISY_CFG  195U

/* SCMI pin control selectors */
#define PINCTRL_CONFIG_FLAG_TYPE  0U
#define PINCTRL_CONFIG_FLAG_ALL   1U
#define PINCTRL_CONFIG_FLAG_NONE  2U

/* SCMI pin control selectors */
#define PINCTRL_FUNC_NONE  0xFFFFFFFFU

/* Local macros */

/* SCMI pin control protocol attributes (low) */
#define PINCTRL_PROTO_ATTR_LOW_NUM_GROUPS(x)  (((x) & 0xFFFFU) << 16U)
#define PINCTRL_PROTO_ATTR_LOW_NUM_PINS(x)    (((x) & 0xFFFFU) << 0U)

/* SCMI pin control protocol attributes (high) */
#define PINCTRL_PROTO_ATTR_HIGH_NUM_FUNCTIONS(x)  (((x) & 0xFFFFU) << 0U)

/* SCMI pin control flags */
#define PINCTRL_FLAGS_SELECTOR(x)  (((x) & 0x3U) >> 0U)

/* SCMI pin attributes */
#define PINCTRL_ATTR_EXT_NAME(x)  (((x) & 0x1U) << 31U)
#define PINCTRL_ATTR_GPIO(x)      (((x) & 0x1U) << 17U)
#define PINCTRL_ATTR_PIN_ONLY(x)  (((x) & 0x1U) << 16U)
#define PINCTRL_ATTR_NUM(x)       (((x) & 0xFFFFU) << 0U)

/* SCMI pin control get attributes */
#define PINCTRL_GET_ATTR_CONFIG(x)        (((x) & 0xC0000U) >> 18U)
#define PINCTRL_GET_ATTR_SELECTOR(x)      (((x) & 0x30000U) >> 16U)
#define PINCTRL_GET_ATTR_SKIP_CONFIGS(x)  (((x) & 0xFF00U) >> 8U)
#define PINCTRL_GET_ATTR_CONFIG_TYPE(x)   (((x) & 0xFFU) >> 0U)

/* SCMI pin control num config flags */
#define PINCTRL_NUM_CONFIG_FLAGS_REMAING_CONFIGS(x)  (((x) & 0xFFU) << 24U)
#define PINCTRL_NUM_CONFIG_FLAGS_NUM_CONFIGS(x)      (((x) & 0xFFU) << 0U)

/* SCMI pin control set attributes */
#define PINCTRL_SET_ATTR_FUNCTION(x)     (((x) & 0x400U) >> 10U)
#define PINCTRL_SET_ATTR_NUM_CONFIGS(x)  (((x) & 0x3FCU) >> 2U)
#define PINCTRL_SET_ATTR_SELECTOR(x)     (((x) & 0x3U) >> 0U)

/* Local types */

/* SCMI pin control config */
typedef struct
{
    /* The type of config */
    uint32_t type;
    /* The configuration value */
    uint32_t value;
} pin_config_t;

/* Response type for ProtocolVersion() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Protocol version */
    uint32_t version;
} msg_tpinctrl0_t;

/* Response type for ProtocolAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Low protocol attributes */
    uint32_t attributesLow;
    /* High protocol attributes */
    uint32_t attributesHigh;
} msg_tpinctrl1_t;

/* Request type for ProtocolMessageAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* message ID of the message */
    uint32_t messageId;
} msg_rpinctrl2_t;

/* Response type for ProtocolMessageAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Message attributes */
    uint32_t attributes;
} msg_tpinctrl2_t;

/* Request type for PinctrlAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier for the pin, group, or function */
    uint32_t identifier;
    /* Selector */
    uint32_t flags;
} msg_rpinctrl3_t;

/* Response type for PinctrlAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Pin attributes */
    uint32_t attributes;
    /* ASCII name string */
    uint8_t name[PINCTRL_MAX_NAME];
} msg_tpinctrl3_t;

/* Request type for PinctrlSettingsGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier for the pin or group */
    uint32_t identifier;
    /* Pin control set attributes */
    uint32_t attributes;
} msg_rpinctrl5_t;

/* Response type for PinctrlSettingsGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Function select */
    uint32_t functionSelected;
    /* Number of configs */
    uint32_t numConfigs;
    /* Array of configurations */
    pin_config_t configs[PINCTRL_MAX_CONFIGS];
} msg_tpinctrl5_t;

/* Request type for PinctrlSettingsConfigure() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier for the pin or group */
    uint32_t identifier;
    /* Function ID */
    uint32_t functionId;
    /* Pin control get attributes */
    uint32_t attributes;
    /* Array of configurations */
    pin_config_t configs[PINCTRL_MAX_CONFIGS_T];
} msg_rpinctrl6_t;

/* Request type for PinctrlRequest() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier for the pin or group */
    uint32_t identifier;
    /* Selector */
    uint32_t flags;
} msg_rpinctrl7_t;

/* Request type for PinctrlRelease() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier for the pin or group */
    uint32_t identifier;
    /* Selector */
    uint32_t flags;
} msg_rpinctrl8_t;

/* Request type for NegotiateProtocolVersion() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* The negotiated protocol version the agent intends to use */
    uint32_t version;
} msg_rpinctrl16_t;

/* Local functions */

static int32_t PinctrlProtocolVersion(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tpinctrl0_t *out);
static int32_t PinctrlProtocolAttributes(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tpinctrl1_t *out);
static int32_t PinctrlProtocolMessageAttributes(const scmi_caller_t *caller,
    const msg_rpinctrl2_t *in, msg_tpinctrl2_t *out);
static int32_t PinctrlAttributes(const scmi_caller_t *caller,
    const msg_rpinctrl3_t *in, msg_tpinctrl3_t *out);
static int32_t PinctrlSettingsGet(const scmi_caller_t *caller,
    const msg_rpinctrl5_t *in, msg_tpinctrl5_t *out, uint32_t *len);
static int32_t PinctrlSettingsConfigure(const scmi_caller_t *caller,
    const msg_rpinctrl6_t *in, const scmi_msg_status_t *out);
static int32_t PinctrlRequest(const scmi_caller_t *caller,
    const msg_rpinctrl7_t *in, const scmi_msg_status_t *out);
static int32_t PinctrlRelease(const scmi_caller_t *caller,
    const msg_rpinctrl8_t *in, const scmi_msg_status_t *out);
static int32_t PinctrlNegotiateProtocolVersion(const scmi_caller_t *caller,
    const msg_rpinctrl16_t *in, const scmi_msg_status_t *out);
static int32_t PinctrlResetAgentConfig(uint32_t lmId, uint32_t agentId,
    bool permissionsReset);

/*--------------------------------------------------------------------------*/
/* Dispatch SCMI command                                                    */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - messageId: Message ID to dispatch                                      */
/*--------------------------------------------------------------------------*/
int32_t RPC_SCMI_PinctrlDispatchCommand(scmi_caller_t *caller,
    uint32_t messageId)
{
    int32_t status = SM_ERR_SUCCESS;
    const scmi_msg_t *in = caller->msgCopy;
    scmi_msg_status_t *out = caller->msg;
    uint32_t lenOut = sizeof(scmi_msg_status_t);

    /* Handle standard messages */
    switch (messageId)
    {
        case COMMAND_PROTOCOL_VERSION:
            lenOut = sizeof(msg_tpinctrl0_t);
            status = PinctrlProtocolVersion(caller,
                (const scmi_msg_header_t*) in, (msg_tpinctrl0_t*) out);
            break;
        case COMMAND_PROTOCOL_ATTRIBUTES:
            lenOut = sizeof(msg_tpinctrl1_t);
            status = PinctrlProtocolAttributes(caller,
                (const scmi_msg_header_t*) in, (msg_tpinctrl1_t*) out);
            break;
        case COMMAND_PROTOCOL_MESSAGE_ATTRIBUTES:
            lenOut = sizeof(msg_tpinctrl2_t);
            status = PinctrlProtocolMessageAttributes(caller,
                (const msg_rpinctrl2_t*) in, (msg_tpinctrl2_t*) out);
            break;
        case COMMAND_PINCTRL_ATTRIBUTES:
            lenOut = sizeof(msg_tpinctrl3_t);
            status = PinctrlAttributes(caller, (const msg_rpinctrl3_t*) in,
                (msg_tpinctrl3_t*) out);
            break;
        case COMMAND_PINCTRL_SETTINGS_GET:
            lenOut = sizeof(msg_tpinctrl5_t);
            status = PinctrlSettingsGet(caller, (const msg_rpinctrl5_t*) in,
                (msg_tpinctrl5_t*) out, &lenOut);
            break;
        case COMMAND_PINCTRL_SETTINGS_CONFIGURE:
            lenOut = sizeof(const scmi_msg_status_t);
            status = PinctrlSettingsConfigure(caller,
                (const msg_rpinctrl6_t*) in, (const scmi_msg_status_t*) out);
            break;
        case COMMAND_PINCTRL_REQUEST:
            lenOut = sizeof(const scmi_msg_status_t);
            status = PinctrlRequest(caller, (const msg_rpinctrl7_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_PINCTRL_RELEASE:
            lenOut = sizeof(const scmi_msg_status_t);
            status = PinctrlRelease(caller, (const msg_rpinctrl8_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_NEGOTIATE_PROTOCOL_VERSION:
            lenOut = sizeof(const scmi_msg_status_t);
            status = PinctrlNegotiateProtocolVersion(caller,
                (const msg_rpinctrl16_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        default:
            status = SM_ERR_NOT_SUPPORTED;
            break;
    }

    /* Update length */
    caller->lenMsg = lenOut;

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dispatch SCMI reset                                                      */
/*                                                                          */
/* Parameters:                                                              */
/* - lmId: LM to reset                                                      */
/* - agentId: Message ID to dispatch                                        */
/* - permissionsReset: True to reset permissions                            */
/*--------------------------------------------------------------------------*/
int32_t RPC_SCMI_PinctrlDispatchReset(uint32_t lmId, uint32_t agentId,
    bool permissionsReset)
{
    return PinctrlResetAgentConfig(lmId, agentId, permissionsReset);
}

/*==========================================================================*/
/* Custom Protocol Implementation                                           */
/*==========================================================================*/

/*--------------------------------------------------------------------------*/
/* Get protocol version                                                     */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - out->version: Protocol version. For this revision of the               */
/*   specification, this value must be 0x10000                              */
/*                                                                          */
/* Process the PROTOCOL_VERSION message. Platform handler for               */
/* SCMI_PinctrlProtocolVersion(). See section 4.11.2.1 in the SCMI spec.    */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlProtocolVersion(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tpinctrl0_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        /* Return version */
        out->version = PROTOCOL_VERSION;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get protocol attributes                                                  */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - out->attributesLow: Low protocol attributes:                           */
/*   Bits[31:16] Number of pin groups.                                      */
/*   Bits[15:0] Number of pins                                              */
/* - out->attributesHigh: High protocol attributes:                         */
/*   Bits[31:16] Reserved, must be zero.                                    */
/*   Bits[15:0] Number of functions                                         */
/*                                                                          */
/* Process the PROTOCOL_ATTRIBUTES message. Platform handler for            */
/* SCMI_PinctrlProtocolAttributes(). See section 4.11.2.3 in the SCMI       */
/* spec.                                                                    */
/*                                                                          */
/*  Access macros:                                                          */
/* - PINCTRL_PROTO_ATTR_LOW_NUM_GROUPS() - Number of groups                 */
/* - PINCTRL_PROTO_ATTR_LOW_NUM_PINS() - Number of pins                     */
/* - PINCTRL_PROTO_ATTR_HIGH_NUM_FUNCTIONS() - Number of functions          */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlProtocolAttributes(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tpinctrl1_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        /* Return number of pins, no groups */
        out->attributesLow
            = PINCTRL_PROTO_ATTR_LOW_NUM_GROUPS(0UL)
            | PINCTRL_PROTO_ATTR_LOW_NUM_PINS((uint32_t) SM_NUM_PIN);

        /* No functions */
        out->attributesHigh = PINCTRL_PROTO_ATTR_HIGH_NUM_FUNCTIONS(0U);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get protocol message attributes                                          */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->messageId: Message ID of the message                               */
/* - out->attributes: Message attributes. Flags that are associated with a  */
/*   specific function in the protocol.                                     */
/*   In the current version of the specification, this value is always 0    */
/*                                                                          */
/* Process the PROTOCOL_MESSAGE_ATTRIBUTES message. Platform handler for    */
/* SCMI_PinctrlProtocolMessageAttributes(). See section 4.11.2.4 in the     */
/* SCMI spec.                                                               */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: in case the message is implemented and available to    */
/*   use.                                                                   */
/* - SM_ERR_NOT_FOUND: if the message identified by messageId is invalid    */
/*   or not implemented.                                                    */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlProtocolMessageAttributes(const scmi_caller_t *caller,
    const msg_rpinctrl2_t *in, msg_tpinctrl2_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        /* Always zero */
        out->attributes = 0U;

        /* Is message supported ? */
        if ((in->messageId >= 32U)
            || (((COMMAND_SUPPORTED_MASK >> in->messageId) & 0x1U) == 0U))
        {
            status = SM_ERR_NOT_FOUND;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get pin attributes                                                       */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->identifier: Identifier for the pin, group, or function.            */
/*   Identifiers are limited to 16 bits, and the upper 16 bits of this      */
/*   field are ignored by the platform                                      */
/* - in->flags: Selector:                                                   */
/*   Bits[31:2] Reserved, must be zero.                                     */
/*   Bits[1:0] Selector: Whether the identifier field selects a pin, a      */
/*   group, or a function.                                                  */
/*   0 - Pin                                                                */
/*   1 - Group                                                              */
/*   2 - Function                                                           */
/*   All other values are reserved for future use                           */
/* - out->attributes: Pin attributes:                                       */
/*   The attributes of the pin, group, or function identified by the        */
/*   identifier field in combination with Bits[1:0] of the flag field in    */
/*   the function.                                                          */
/*   Bit[31] Extended name.                                                 */
/*   If set to 1, the name is greater than 16 bytes.                        */
/*   If set to 0, extended name is not supported.                           */
/*   Bits[30:18] Reserved, must be zero.                                    */
/*   Bit[17] GPIO function descriptor                                       */
/*   Set to 0 if Bits[1:0] of the flags field in the command is set to 2,   */
/*   and the function does not support GPIO functionality.                  */
/*   Set to 1 if Bits[1:0] of the flags field in the command is set to 2,   */
/*   and the function supports GPIO functionality.                          */
/*   The agent should ignore the value of this bit if Bits[1:0] of flags    */
/*   field in the command is set to 0 or 1.                                 */
/*   This value of bit must not be 1 for more than one function associated  */
/*   with a pin or a group.                                                 */
/*   Bit[16] Pin-only function descriptor.                                  */
/*   Set to 0 if Bits[1:0] of the flags field in the command is set to 2,   */
/*   and the function is only supported by groups.                          */
/*   Set to 1 if Bits[1:0] of the flags field in the command is set to 2,   */
/*   the function is a single-pin function, and it is not supported by any  */
/*   group. The function is only supported by individual pins.              */
/*   The agent should ignore the value of this bit if Bits[1:0] of flags    */
/*   field in the command is set to 0 or 1.                                 */
/*   Bits[15:0] Number of pins or groups.                                   */
/*   - Set to 1, if Bits[1:0] of flags field in the command is set to 0.    */
/*   - Set to the number of pins in the group, if Bits[1:0] of flags field  */
/*   in the command is set to 1.                                            */
/*   - Set to the number of pins which can support the function, if         */
/*   Bits[1:0] of flags field in the command is set to 2 and Bit[16] of     */
/*   attributes field is set to 1.                                          */
/*   - Set to the number of groups which can support the function in all    */
/*   other cases.                                                           */
/* - out->name: Null-terminated ASCII string of up to 16 bytes in length    */
/*   describing the pin, group, or function name. When Bit[31] of           */
/*   attributes field is set to 1, this field contains the lower 15 bytes   */
/*   of the NULL terminated name                                            */
/*                                                                          */
/* Process the PINCTRL_ATTRIBUTES message. Platform handler for             */
/* SCMI_PinctrlAttributes(). See section 4.11.2.5 in the SCMI spec.         */
/*                                                                          */
/*  Access macros:                                                          */
/* - PINCTRL_FLAGS_SELECTOR() - Selector                                    */
/* - PINCTRL_ATTR_EXT_NAME() - Extended name                                */
/* - PINCTRL_ATTR_GPIO() - GPIO function descriptor                         */
/* - PINCTRL_ATTR_PIN_ONLY() - Pin-only function descriptor                 */
/* - PINCTRL_ATTR_NUM() - Number of pins or groups                          */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if valid attributes were returned.                     */
/* - SM_ERR_NOT_FOUND: if the identifier field pertains to a                */
/*   non-existent pin, group, or function.                                  */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlAttributes(const scmi_caller_t *caller,
    const msg_rpinctrl3_t *in, msg_tpinctrl3_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    const uint8_t *nameAddr = (const uint8_t*) "";
    uint32_t sel = PINCTRL_FLAGS_SELECTOR(in->flags);

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check selector */
    if ((status == SM_ERR_SUCCESS) && (sel != PINCTRL_SEL_PIN))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Check pin */
    if ((status == SM_ERR_SUCCESS) && (in->identifier >= SM_NUM_PIN))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Get the pin name */
    if (status == SM_ERR_SUCCESS)
    {
        status = SM_PINNAMEGET(in->identifier, (string*) &nameAddr, NULL);
    }

    /* Return results */
    if (status == SM_ERR_SUCCESS)
    {
        /* No notifications */
        out->attributes
            = PINCTRL_ATTR_EXT_NAME(0UL)
            | PINCTRL_ATTR_GPIO(0UL)
            | PINCTRL_ATTR_PIN_ONLY(0UL)
            | PINCTRL_ATTR_NUM(1UL);

        /* Copy out name */
        RPC_SCMI_StrCpy(out->name, nameAddr, PINCTRL_MAX_NAME);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get pin configuration                                                    */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->identifier: Identifier for the pin or group                        */
/* - in->attributes: Pin control set attributes:                            */
/*   Bits[31:20] Reserved, must be zero.                                    */
/*   Bit[19:18] Config flag.                                                */
/*   When set to 0, only the configuration value for the configuration      */
/*   type specified by Bits[7:0] needs to be returned.                      */
/*   When set to 1, configuration values for all relevant configuration     */
/*   types associated with the pin or group need to be returned. The        */
/*   returned configuration array is sorted in numerically increasing       */
/*   order of config types.                                                 */
/*   When set to 2, no configuration values need to be returned. The        */
/*   command only returns the function selected for the pin or the group.   */
/*   All other values are reserved for future use.                          */
/*   Bits[17:16] Selector: Whether the identifier field refers to a pin or  */
/*   a group.                                                               */
/*   0 - Pin                                                                */
/*   1 - Group                                                              */
/*   All other values are reserved for future use.                          */
/*   Bits[15:8] skipConfigs                                                 */
/*   The number of configuration types to skip over, before returning the   */
/*   first configuration type and value in the return configuration array.  */
/*   This field is ignored if Bit[19:18] is set to 0 or 2.                  */
/*   Bits[7:0] ConfigType: The type of config.                              */
/*   This field is ignored if Bit[19:18] is set to 1 or 2                   */
/* - out->functionSelected: Function select:                                */
/*   The function currently selected to be enabled by the pin or group      */
/*   specified in the input identifier field.                               */
/*   This field is set to 0xFFFFFFFF if no function is currently enabled    */
/*   by the pin or group specified                                          */
/* - out->numConfigs: Number of configs:                                    */
/*   Bits[31:24] Number of remaining configurations.                        */
/*   Bits[23:8] Reserved, must be zero.                                     */
/*   Bits[7:0] Number of configurations that are returned by this call.     */
/*   This field should be set to 0 if Bit[19:18] of the attributes field    */
/*   of the command was set to 2.                                           */
/*   This field should be set to 1 if Bit[19:18] of the attributes field    */
/*   of the command was set to 0                                            */
/* - out->configs: Array of configurations: sorted in numerically           */
/*   increasing config type order.                                          */
/*   This field should be ignored if Bit[19:18] of the attributes field of  */
/*   the command was set to 2.                                              */
/*   Size is specified by Bits[7:0] of the numConfigs field.                */
/*   Each array entry is composed of two 32-bit words containing the type   */
/*   and value                                                              */
/* - len: Pointer to length (can modify)                                    */
/*                                                                          */
/* Process the PINCTRL_SETTINGS_GET message. Platform handler for           */
/* SCMI_PinctrlSettingsGet(). See section 4.11.2.7 in the SCMI spec.        */
/*                                                                          */
/*  Access macros:                                                          */
/* - PINCTRL_GET_ATTR_CONFIG() - Config flag                                */
/* - PINCTRL_GET_ATTR_SELECTOR() - Selector                                 */
/* - PINCTRL_GET_ATTR_SKIP_CONFIGS() - Skip Configs                         */
/* - PINCTRL_GET_ATTR_CONFIG_TYPE() - ConfigType                            */
/* - PINCTRL_NUM_CONFIG_FLAGS_REMAING_CONFIGS() - Number of remaining       */
/*   configurations                                                         */
/* - PINCTRL_NUM_CONFIG_FLAGS_NUM_CONFIGS() - Number of configurations      */
/*   that are returned by this call                                         */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the pin or group configuration was successfully     */
/*   returned.                                                              */
/* - SM_ERR_NOT_FOUND: if the identifier field does not point to a valid    */
/*   pin or group.                                                          */
/* - SM_ERR_INVALID_PARAMETERS, if the attributes flag specifies            */
/*   unsupported or invalid configurations.                                 */
/* - SM_ERR_NOT_SUPPORTED: if the request is not supported.                 */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlSettingsGet(const scmi_caller_t *caller,
    const msg_rpinctrl5_t *in, msg_tpinctrl5_t *out, uint32_t *len)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t cfg = PINCTRL_GET_ATTR_CONFIG(in->attributes);
    uint32_t sel = PINCTRL_GET_ATTR_SELECTOR(in->attributes);
    uint32_t skipConfigs = PINCTRL_GET_ATTR_SKIP_CONFIGS(in->attributes);
    uint32_t maxConfigs = 2U;
    uint32_t configList[2] =
    {
        PINCTRL_TYPE_MUX,
        PINCTRL_TYPE_CONFIG
    };

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check selector */
    if ((status == SM_ERR_SUCCESS) && (sel > PINCTRL_SEL_GROUP))
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }
    if ((status == SM_ERR_SUCCESS) && (sel != PINCTRL_SEL_PIN))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check ID */
    if ((status == SM_ERR_SUCCESS) && (in->identifier >= SM_NUM_PIN))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Get only one */
    if (cfg == PINCTRL_CONFIG_FLAG_TYPE)
    {
        skipConfigs = 0U;
        configList[0] = PINCTRL_GET_ATTR_CONFIG_TYPE(in->attributes);
        maxConfigs = 1U;
    }

    /* Get none */
    if (cfg == PINCTRL_CONFIG_FLAG_NONE)
    {
        maxConfigs = 0U;
    }

    /* Get configs? */
    if (status == SM_ERR_SUCCESS)
    {
        uint32_t index;

        out->numConfigs = 0U;
        for (index = 0U; index < PINCTRL_MAX_CONFIGS; index++)
        {
            uint32_t type;
            uint32_t value = 0U;

            /* Break out if done */
            if ((index + skipConfigs) >= maxConfigs)
            {
                break;
            };

            /* Determine parameters */
            switch (configList[index + skipConfigs])
            {
                case PINCTRL_TYPE_MUX:
                    type = DEV_SM_PIN_TYPE_MUX;
                    break;
                case PINCTRL_TYPE_CONFIG:
                    type = DEV_SM_PIN_TYPE_CONFIG;
                    break;
                default:
                    status = SM_ERR_NOT_SUPPORTED;
                    break;
            }

            /* Valid type? */
            if (status == SM_ERR_SUCCESS)
            {
                /* Get pin config */
                SM_PINCONFIGGET(type, in->identifier, &value);

                /* Copy out data */
                out->configs[index].type = configList[index + skipConfigs];
                out->configs[index].value = value;

                /* Increment count */
                (out->numConfigs)++;
            }
        }

        /* Update length */
        *len = (4U * sizeof(uint32_t))
            + (out->numConfigs * sizeof(pin_config_t));

        /* Append remaining levels */
        if (cfg != PINCTRL_CONFIG_FLAG_TYPE)
        {
            out->numConfigs |= PINCTRL_NUM_CONFIG_FLAGS_REMAING_CONFIGS(
                maxConfigs - (index + skipConfigs));
        }

        /* Update function */
        out->functionSelected = PINCTRL_FUNC_NONE;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Set pin configuration                                                    */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->identifier: Identifier for the pin or group                        */
/* - in->functionId: Function ID:                                           */
/*   Identifier for the function selected to be enabled for the selected    */
/*   pin or group.                                                          */
/*   This field is set to 0xFFFFFFFF if no function should be enabled by    */
/*   the pin or group.                                                      */
/*   This value of this field is ignored by the platform if Bit[10] of the  */
/*   attributes field is set to 0                                           */
/* - in->attributes: Pin control get attributes:                            */
/*   Bits[31:11] Reserved, must be zero.                                    */
/*   Bit[10] Function valid.                                                */
/*   When set to 0, the function selection for the pin or group does not    */
/*   need to change. The platform ignores the value of the function_id      */
/*   field.                                                                 */
/*   When set to 1, the function selection for the pin or group needs to    */
/*   change and is specified by the function_id field.                      */
/*   Bits[9:2] Number of configurations to set.                             */
/*   The maximum value of this field is limited by the transport used. The  */
/*   agent needs to specify this field such that the entire function can    */
/*   be accommodated within the transport chosen.                           */
/*   Bits[1:0] Selector: Whether the identifier field refers to a pin or a  */
/*   group.                                                                 */
/*   0 - Pin                                                                */
/*   1 - Group                                                              */
/*   All other values are reserved for future use                           */
/* - in->configs: Array of configurations: sorted in numerically            */
/*   increasing config type order.                                          */
/*   Size is specified by Bits[9:2] of the attributes field.                */
/*   Each array entry is composed of two 32-bit words containing the type   */
/*   and value                                                              */
/*                                                                          */
/* Process the PINCTRL_SETTINGS_CONFIGURE message. Platform handler for     */
/* SCMI_PinctrlSettingsConfigure(). Requires access greater than or equal   */
/* to EXCLUSIVE. See section 4.11.2.8 in the SCMI spec.                     */
/*                                                                          */
/*  Access macros:                                                          */
/* - PINCTRL_SET_ATTR_FUNCTION() - Function ID valid                        */
/* - PINCTRL_SET_ATTR_NUM_CONFIGS() - Number of configurations to set       */
/* - PINCTRL_SET_ATTR_SELECTOR() - Selector                                 */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the pin or group configuration was successfully     */
/*   set.                                                                   */
/* - SM_ERR_NOT_FOUND: if identifier field does not point to a valid pin    */
/*   or group.                                                              */
/* - SM_ERR_INVALID_PARAMETERS: if the input parameters specify             */
/*   incorrect or illegal values.                                           */
/* - SM_ERR_NOT_SUPPORTED: if the configuration requested by this           */
/*   function is not supported by the pin or group.                         */
/* - SM_ERR_DENIED: if the calling agent is not allowed to set the          */
/*   configuration of this pin or group.                                    */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlSettingsConfigure(const scmi_caller_t *caller,
    const msg_rpinctrl6_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t numConfigs = PINCTRL_SET_ATTR_NUM_CONFIGS(in->attributes);
    uint32_t sel = PINCTRL_SET_ATTR_SELECTOR(in->attributes);
    uint32_t daisyId = 0U;

    /* Check request length */
    if (caller->lenCopy < ((3U * sizeof(uint32_t))
        + (numConfigs * sizeof(pin_config_t))))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check selector */
    if ((status == SM_ERR_SUCCESS) && (sel > PINCTRL_SEL_GROUP))
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }
    if ((status == SM_ERR_SUCCESS) && (sel != PINCTRL_SEL_PIN))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Loop over configs */
    for (uint32_t cf = 0U; cf < numConfigs; cf++)
    {
        uint32_t id = in->identifier;
        uint32_t type = in->configs[cf].type;
        uint32_t value = in->configs[cf].value;
        uint32_t maxId = SM_NUM_PIN;
        const uint8_t *perms = NULL;

        /* Daisy ID? */
        if (type == PINCTRL_TYPE_DAISY_ID)
        {
            daisyId = value;
            continue;
        }

        /* Determine parameters */
        switch (type)
        {
            case PINCTRL_TYPE_MUX:
                type = DEV_SM_PIN_TYPE_MUX;
                perms = g_scmiAgentConfig[caller->agentId].pinPerms;
                break;
            case PINCTRL_TYPE_CONFIG:
                type = DEV_SM_PIN_TYPE_CONFIG;
                perms = g_scmiAgentConfig[caller->agentId].pinPerms;
                break;
            case PINCTRL_TYPE_DAISY_CFG:
                id = daisyId;
                type = DEV_SM_PIN_TYPE_DAISY;
                maxId = SM_NUM_DAISY;
                perms = g_scmiAgentConfig[caller->agentId].daisyPerms;
                break;
            default:
                status = SM_ERR_NOT_SUPPORTED;
                break;
        }

        /* Check ID */
        if ((status == SM_ERR_SUCCESS) && (id >= maxId))
        {
            status = SM_ERR_NOT_FOUND;
        }

        /* Check permissions */
        if ((status == SM_ERR_SUCCESS)
            && (perms[id] < SM_SCMI_PERM_EXCLUSIVE))
        {
            status = SM_ERR_DENIED;
        }

        /* Update pin config */
        if (status == SM_ERR_SUCCESS)
        {
            SM_PINCONFIGSET(type, id, value);
        }

    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Request a pin                                                            */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->identifier: Identifier for the pin or group                        */
/* - in->flags: Selector: Whether the identifier field selects a pin, or a  */
/*   group.                                                                 */
/*   0 - Pin                                                                */
/*   1 - Group                                                              */
/*   All other values are reserved for future use                           */
/*                                                                          */
/* Process the PINCTRL_REQUEST message. Platform handler for                */
/* SCMI_PinctrlRequest(). Requires access greater than or equal to          */
/* EXCLUSIVE. See section 4.11.2.9 in the SCMI spec.                        */
/*                                                                          */
/*  Access macros:                                                          */
/* - PINCTRL_FLAGS_SELECTOR() - Selector                                    */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if exclusive control of the pin or group was granted.  */
/* - SM_ERR_NOT_FOUND: if the identifier field does not point to a valid    */
/*   pin or group.                                                          */
/* - SM_ERR_INVALID_PARAMETERS: if the input parameters specify             */
/*   incorrect or illegal values.                                           */
/* - SM_ERR_DENIED: if the calling agent is not allowed to request this     */
/*   pin or group..                                                         */
/* - SM_ERR_IN_USE: if the pin or group is currently under exclusive        */
/*   control of another agent.                                              */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlRequest(const scmi_caller_t *caller,
    const msg_rpinctrl7_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t sel = PINCTRL_FLAGS_SELECTOR(in->flags);

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check selector */
    if ((status == SM_ERR_SUCCESS) && (sel != PINCTRL_SEL_PIN))
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }

    /* Check pin */
    if ((status == SM_ERR_SUCCESS) && (in->identifier >= SM_NUM_PIN))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].pinPerms[in->identifier]
        < SM_SCMI_PERM_EXCLUSIVE))
    {
        status = SM_ERR_DENIED;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Release a pin                                                            */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->identifier: Identifier for the pin or group                        */
/* - in->flags: Selector: Whether the identifier field selects a pin, or a  */
/*   group.                                                                 */
/*   0 - Pin                                                                */
/*   1 - Group                                                              */
/*   All other values are reserved for future use                           */
/*                                                                          */
/* Process the PINCTRL_RELEASE message. Platform handler for                */
/* SCMI_PinctrlRelease(). See section 4.11.2.10 in the SCMI spec.           */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if exclusive control of the pin or group was           */
/*   released.                                                              */
/* - SM_ERR_NOT_FOUND: if the identifier field does not point to a valid    */
/*   pin or group.                                                          */
/* - SM_ERR_INVALID_PARAMETERS: if the input parameters specify             */
/*   incorrect or illegal values.                                           */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlRelease(const scmi_caller_t *caller,
    const msg_rpinctrl8_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t sel = PINCTRL_FLAGS_SELECTOR(in->flags);

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check selector */
    if ((status == SM_ERR_SUCCESS) && (sel != PINCTRL_SEL_PIN))
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }

    /* Check pin */
    if ((status == SM_ERR_SUCCESS) && (in->identifier >= SM_NUM_PIN))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].pinPerms[in->identifier]
        < SM_SCMI_PERM_EXCLUSIVE))
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Negotiate the protocol version                                           */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->version: The negotiated protocol version the agent intends to use  */
/*                                                                          */
/* Process the NEGOTIATE_PROTOCOL_VERSION message. Platform handler for     */
/* SCMI_PinctrlNegotiateProtocolVersion(). See section 4.11.2.2 in the      */
/* SCMI spec.                                                               */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the negotiated protocol version is supported by     */
/*   the platform. All commands, responses, and notifications post          */
/*   successful return of this command must comply with the negotiated      */
/*   version.                                                               */
/* - SM_ERR_NOT_SUPPORTED: if the protocol version is not supported.        */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlNegotiateProtocolVersion(const scmi_caller_t *caller,
    const msg_rpinctrl16_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check major version */
    if ((status == SM_ERR_SUCCESS) && (SCMI_VER_MAJOR(in->version)
        == SCMI_VER_MAJOR(PROTOCOL_VERSION)))
    {
        /* Check minor version */
        if (SCMI_VER_MINOR(in->version) > SCMI_VER_MINOR(PROTOCOL_VERSION))
        {
            status = SM_ERR_NOT_SUPPORTED;
        }
    }
    else
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Reset agent configuration                                                */
/*                                                                          */
/* Parameters:                                                              */
/* - lmId: LM to reset                                                      */
/* - agentId: Message ID to dispatch                                        */
/* - permissionsReset: True to reset permissions                            */
/*--------------------------------------------------------------------------*/
static int32_t PinctrlResetAgentConfig(uint32_t lmId, uint32_t agentId,
    bool permissionsReset)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Return status */
    return status;
}

