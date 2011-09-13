/*
RENESAS MOBILE                                                    CONFIDENTIAL
                  uicc_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            uicc_wm_isi.h

version:         006.002

type:            incl


ISI header file for UICC Server

Current   ISI Version : 006.002
Supported ISI Versions: 001.000, 002.000, 002.001, 003.000, 004.000, 004.001, 
                        004.002, 005.000, 006.000, 006.001, 006.002

Copyright (c) Renesas Mobile Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _UICC_WM_ISI_H
#define _UICC_WM_ISI_H

#include "isi_conf.h"

#ifndef UICC_ISI_VERSION
#define UICC_ISI_VERSION
#define UICC_ISI_VERSION_Z   6
#define UICC_ISI_VERSION_Y   2
#endif

#define UICC_ISI_MIN_VERSION(z,y) \
 ((UICC_ISI_VERSION_Z == (z) && UICC_ISI_VERSION_Y >= (y)) || \
  (UICC_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* Value to be used when EF Identifier is not present */
#define UICC_EF_ID_NOT_PRESENT                   0x00
/* Value to be used when Short File Identifier is not present */
#define UICC_SFI_NOT_PRESENT                     0x00
/* Value used for Application ID when it is unknown */
#define UICC_APPL_ID_UNKNOWN                     0x00
/* Value for selecting last active application */
#define UICC_APPL_LAST                           0xFF
/* Value to be used when application ID is not required */
#define UICC_APPL_ID_NOT_USED                    0x00
/* Value to be used when there is no file access session needed */
#define UICC_SESSION_ID_NOT_USED                 0x00
/* constant for variable-length definitions */
#define UICC_ANY_SIZE                            1

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_STATUS_CONSTANTS                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_STATUS_CONSTANTS_CONST;

/* Request performed successfully */
#define UICC_STATUS_OK                           0x00
/* Error in performing the command */
#define UICC_STATUS_FAIL                         0x01
/* Status is Unknown */
#define UICC_STATUS_UNKNOWN                      0x02
/* Server is not ready */
#define UICC_STATUS_NOT_READY                    0x10
/* Server start up is completed */
#define UICC_STATUS_START_UP_COMPLETED           0x11
/* Server is shutting down */
#define UICC_STATUS_SHUTTING_DOWN                0x12
/* Smart card is not ready */
#define UICC_STATUS_CARD_NOT_READY               0x20
/* Smart card is ready */
#define UICC_STATUS_CARD_READY                   0x21
/* Smart card is disconnected */
#define UICC_STATUS_CARD_DISCONNECTED            0x22
/* Smart card is not present */
#define UICC_STATUS_CARD_NOT_PRESENT             0x23
/* Smart card has been rejected */
#define UICC_STATUS_CARD_REJECTED                0x24
/* Application is active */
#define UICC_STATUS_APPL_ACTIVE                  0x30
/* Application is not active */
#define UICC_STATUS_APPL_NOT_ACTIVE              0x31
/* PIN verification used */
#define UICC_STATUS_PIN_ENABLED                  0x40
/* PIN verification not used */
#define UICC_STATUS_PIN_DISABLED                 0x41

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_DETAILS_CONSTANTS                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_DETAILS_CONSTANTS_CONST;

/* Used when status differs from UICC_STATUS_FAIL */
#define UICC_NO_DETAILS                          0x00
/* Request was sent with one or more invalid parameters */
#define UICC_INVALID_PARAMETERS                  0x01
/* The file was not found */
#define UICC_FILE_NOT_FOUND                      0x02
/* User does not have the required priviledges for this */
#define UICC_SECURITY_CONDITIONS_NOT_SATISFIED   0x03
/* Application can not be activated due to already active application */
#define UICC_APPL_CONFLICT                       0x04
/* Card Communication error */
#define UICC_CARD_ERROR                          0x05
/* Operation not supported */
#define UICC_SERVICE_NOT_SUPPORTED               0x06
/* Session expired */
#define UICC_SESSION_EXPIRED                     0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APPL_TYPE_TABLE                                    */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_APPL_TYPE_TABLE_CONST;

#define UICC_APPL_TYPE_UNKNOWN                   0x00
#define UICC_APPL_TYPE_ICC_SIM                   0x01
#define UICC_APPL_TYPE_UICC_USIM                 0x02
#define UICC_APPL_TYPE_UICC_ISIM                 0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APPL_STATUS_TABLE - Obsolete from version 002.000  */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)
typedef uint8 UICC_APPL_STATUS_TABLE_CONST;

#define UICC_APPL_UNKNOWN                        0x00
#define UICC_APPL_ACTIVE                         0x01
#define UICC_APPL_NOT_ACTIVE                     0x02
#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APPL_START_UP_TYPE_TABLE - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_APPL_START_UP_TYPE_TABLE_CONST;

#define UICC_APPL_START_UP_NO_INIT_PROC          0x00
#define UICC_APPL_START_UP_INIT_PROC             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APDU_CMD_FORCE_TYPE_TABLE - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_APDU_CMD_FORCE_TYPE_TABLE_CONST;

#define UICC_APDU_CMD_FORCE_NOT_USED             0x00
#define UICC_APDU_CMD_FORCE                      0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_CARD_TYPE_TABLE                                    */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_CARD_TYPE_TABLE_CONST;

#define UICC_CARD_TYPE_UNKNOWN                   0x00
#define UICC_CARD_TYPE_ICC                       0x01
#define UICC_CARD_TYPE_UICC                      0x02
#define UICC_CARD_TYPE_USB                       0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_PIN_STATUS_TABLE - Obsolete from version 002.000   */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)
typedef uint8 UICC_PIN_STATUS_TABLE_CONST;

#define UICC_PIN_STATUS_UNKNOWN                  0x00
#define UICC_PIN_ENABLED                         0x01
#define UICC_PIN_DISABLED                        0x02
#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_PIN_QUALIFIER_TABLE                                */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_PIN_QUALIFIER_TABLE_CONST;

#define UICC_PIN_UNKNOWN                         0x00
#define UICC_PIN_NEW                             0x01
#define UICC_PIN_OLD                             0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_CHV_QUALIFIER_TABLE - Valid from version 002.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_CHV_QUALIFIER_TABLE_CONST;

#define UICC_CHV1                                0x01
#define UICC_CHV2                                0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_PIN_PROMPT_VERIFY_TABLE - Obsolete from version 002.000 */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)
typedef uint8 UICC_PIN_PROMPT_VERIFY_TABLE_CONST;

/* #define UICC_PIN_STATUS_UNKNOWN               0x00 (already defined) */
#define UICC_PIN_ALREADY_VERIFIED                0x01
#define UICC_PIN_NOT_VERIFIED                    0x02
#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_REFRESH_TYPE_CONSTANTS                             */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_REFRESH_TYPE_CONSTANTS_CONST;

#define UICC_REFRESH_NAA_INIT                    0x00
#define UICC_REFRESH_NAA_FILE_CHANGE             0x01
#define UICC_REFRESH_NAA_INIT_FILE_CHANGE        0x02
#define UICC_REFRESH_NAA_INIT_FULL_FILE_CHANGE   0x03
#define UICC_REFRESH_UICC_RESET                  0x04
#define UICC_REFRESH_NAA_APPLICATION_RESET       0x05
#define UICC_REFRESH_NAA_SESSION_RESET           0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_ACTION_CONSTANTS                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_ACTION_CONSTANTS_CONST;

#define UICC_CONTROL_COLD_RESET                  0x00
#define UICC_CONTROL_WARM_RESET                  0x01
#define UICC_CONTROL_CARD_ACTIVATE               0x02
#define UICC_CONTROL_CARD_DEACTIVATE             0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_SERVICE_TYPE_CONSTANTS                             */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_SERVICE_TYPE_CONSTANTS_CONST;

#define UICC_APPL_LIST                           0x01
#define UICC_APPL_HOST_ACTIVATE                  0x03

#if !UICC_ISI_MIN_VERSION(2,0)
#define UICC_APPL_DEACTIVATE                     0x04
#endif /* !UICC_ISI_MIN_VERSION(2,0) */

#define UICC_APPL_START_UP_COMPLETE              0x05

#if !UICC_ISI_MIN_VERSION(2,0)
#define UICC_SHUT_DOWN_INITIATED                 0x06
#endif /* !UICC_ISI_MIN_VERSION(2,0) */

#define UICC_APPL_SHUT_DOWN_INITIATED            0x06
#define UICC_APPL_STATUS_GET                     0x07
#define UICC_APPL_HOST_DEACTIVATE                0x09
#define UICC_PIN_VERIFY                          0x11
#define UICC_PIN_UNBLOCK                         0x12
#define UICC_PIN_DISABLE                         0x13
#define UICC_PIN_ENABLE                          0x14
#define UICC_PIN_CHANGE                          0x15
#define UICC_PIN_SUBSTITUTE                      0x16
#define UICC_PIN_INFO                            0x17
#define UICC_PIN_PROMPT_VERIFY                   0x18
#define UICC_APPL_READ_TRANSPARENT               0x21
#define UICC_APPL_UPDATE_TRANSPARENT             0x22
#define UICC_APPL_READ_LINEAR_FIXED              0x23
#define UICC_APPL_UPDATE_LINEAR_FIXED            0x24
#define UICC_APPL_FILE_INFO                      0x25
#define UICC_APPL_APDU_SEND                      0x26
#define UICC_APPL_CLEAR_CACHE                    0x27
#define UICC_APPL_SESSION_START                  0x28
#define UICC_APPL_SESSION_END                    0x29
#define UICC_APPL_READ_CYCLIC                    0x2A
#define UICC_APPL_UPDATE_CYCLIC                  0x2B

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)
#define UICC_APPL_CACHE_UPDATED                  0x30
#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */

#define UICC_CONNECT                             0x31
#define UICC_DISCONNECT                          0x32
#define UICC_RECONNECT                           0x33
#define UICC_CAT_ENABLE                          0x41
#define UICC_CAT_DISABLE                         0x42
#define UICC_CAT_TERMINAL_PROFILE                0x43
#define UICC_CAT_TERMINAL_RESPONSE               0x44
#define UICC_CAT_ENVELOPE                        0x45
#define UICC_CAT_POLLING_SET                     0x46
#define UICC_CAT_REFRESH                         0x47
#define UICC_CAT_POLL                            0x48
#define UICC_APDU_SEND                           0x51
#define UICC_APDU_ATR_GET                        0x52
#define UICC_APDU_CONTROL                        0x53
#define UICC_REFRESH_STATUS                      0x61
#define UICC_APPL_TERMINATED                     0x71
#define UICC_APPL_RECOVERED                      0x72

#if !UICC_ISI_MIN_VERSION(2,0)
#define UICC_APPL_UNAVAILABLE                    0x73
#endif /* !UICC_ISI_MIN_VERSION(2,0) */


#if !UICC_ISI_MIN_VERSION(2,0)
#define UICC_APPL_SHUT_DOWN                      0x74
#endif /* !UICC_ISI_MIN_VERSION(2,0) */

#define UICC_APPL_ACTIVATED                      0x75
#define UICC_PIN_VERIFY_NEEDED                   0x81
#define UICC_PIN_UNBLOCK_NEEDED                  0x82
#define UICC_PIN_PERMANENTLY_BLOCKED             0x83
#define UICC_PIN_VERIFIED                        0x84
#define UICC_CAT_FETCHED_CMD                     0x91
#define UICC_CAT_NOT_SUPPORTED                   0x92
#define UICC_CAT_REG_FAILED                      0x93
#define UICC_CAT_REG_OK                          0x94
#define UICC_REFRESH_PERMISSION                  0xA1
#define UICC_REFRESH_STARTING                    0xA2
#define UICC_REFRESH_CANCELLED                   0xA3
#define UICC_REFRESH_NOW                         0xA4
#define UICC_START_UP_COMPLETE                   0xB0
#define UICC_STATUS_GET                          0xB1
#define UICC_READY                               0xB2

#if !UICC_ISI_MIN_VERSION(2,0)
#define UICC_READY_FOR_ACTIVATION                0xB3
#endif /* !UICC_ISI_MIN_VERSION(2,0) */

#define UICC_INITIALIZED                         0xB4
#define UICC_SHUTTING_DOWN                       0xB5

#if UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0)
#define UICC_SHUT_DOWN_CONFIG                    0xB6
#endif /* UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0) */

#define UICC_SHUT_DOWN_CONFIG                    0xB6
#define UICC_ERROR                               0xB7
#define UICC_CARD_DISCONNECTED                   0xC0
#define UICC_CARD_REMOVED                        0xC1
#define UICC_CARD_NOT_PRESENT                    0xC2

#if UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(3,0)
#define UICC_CARD_RESET                          0xC3
#endif /* UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(3,0) */

#define UICC_CARD_READY                          0xC4
#define UICC_CARD_STATUS_GET                     0xC5
#define UICC_CARD_REJECTED                       0xC8
#define UICC_CARD_INFO_GET                       0xC9

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)
#define UICC_SIMLOCK_ACTIVE                      0xD0
#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */

#define UICC_APDU_SAP_ACTIVATE                   0xE1
#define UICC_APDU_SAP_DEACTIVATE                 0xE2
#define UICC_APDU_SAP_ATR_GET                    0xE3
#define UICC_APDU_SAP_COLD_RESET                 0xE4
#define UICC_APDU_SAP_WARM_RESET                 0xE5
#define UICC_APDU_SAP_APDU_SEND                  0xE6
#define UICC_APDU_SAP_RECOVERY                   0xE7
#define UICC_APDU_SAP_CONFIG_GET                 0xE8
#define UICC_PWR_CTRL_ENABLE                     0xF1
#define UICC_PWR_CTRL_DISABLE                    0xF2
#define UICC_PWR_CTRL_WAIT                       0xF3
#define UICC_PWR_CTRL_PROCEED                    0xF4
#define UICC_PWR_CTRL_POWER_ON                   0xF5
#define UICC_PWR_CTRL_POWER_CYCLE                0xF6
#define UICC_PWR_CTRL_POWER_STATUS_GET           0xF7
#define UICC_PWR_CTRL_PERMISSION                 0xFA
#define UICC_PWR_CTRL_POWER_ON_FAILED            0xFB

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_REFRESH_STATUS_TABLE - Valid from version 003.000  */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_REFRESH_STATUS_TABLE_CONST;

#define UICC_REFRESH_OK                          0x01
#define UICC_REFRESH_NOT_OK                      0x02
#define UICC_REFRESH_DONE                        0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_SIMLOCK_STATUS_TABLE - Versions 003.000 - 004.000  */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)
typedef uint8 UICC_SIMLOCK_STATUS_TABLE_CONST;

#define UICC_SIMLOCK_STATUS_ACTIVE               0x01
#define UICC_SIMLOCK_STATUS_INACTIVE             0x02
#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APDU_SAP_STATUS_TABLE - Valid from version 003.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_APDU_SAP_STATUS_TABLE_CONST;

#define UICC_APDU_SAP_OK                         0x01
#define UICC_APDU_SAP_FAIL                       0x02
#define UICC_APDU_SAP_CARD_ERROR                 0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_POWER_MODE_TABLE - Versions 004.000 - 005.000      */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0)
typedef uint8 UICC_POWER_MODE_TABLE_CONST;

/* UICC Server can power the UICC down when server is shut down */
#define UICC_POWER_MODE_LOW                      0x01
/* UICC Server shall leave the UICC powered on when server is shut down */
#define UICC_POWER_MODE_FULL                     0x02
#endif /* UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_POWER_MODE_TABLE - Valid from version 006.002      */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(6,2)
typedef uint8 UICC_POWER_MODE_TABLE_CONST;

/* The UICC Server will power down the UICC when the server is shut down */
#define UICC_POWER_MODE_OFF                      0x01
/* The UICC Server will leave the UICC powered on when the server is shut
   down
*/
#define UICC_POWER_MODE_ON                       0x02
#endif /* UICC_ISI_MIN_VERSION(6,2) */


/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_VOLTAGE_CLASS_TABLE - Valid from version 004.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_VOLTAGE_CLASS_TABLE_CONST;

/* Voltage class information not available */
#define UICC_VOLTAGE_CLASS_NOT_AVAILABLE         0x00
/* 7816-3 Class A: 5.0V */
#define UICC_VOLTAGE_CLASS_A                     0x50
/* 7816-3 Class B: 3.0V */
#define UICC_VOLTAGE_CLASS_B                     0x30
/* 7816-3 Class C: 1.8V */
#define UICC_VOLTAGE_CLASS_C                     0x18

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_CLF_IF_SUPPORT_TABLE - Valid from version 004.000  */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_CLF_IF_SUPPORT_TABLE_CONST;

/* CLF Interface is not supported by the UICC */
#define UICC_CLF_IF_NOT_SUPPORTED                0x01
/* CLF Interface is supported by the UICC */
#define UICC_CLF_IF_SUPPORTED                    0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_CARD_REJECT_CAUSE_TABLE - Valid from version 004.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_CARD_REJECT_CAUSE_TABLE_CONST;

/* Reject cause not available */
#define UICC_CARD_REJECT_CAUSE_NOT_AVAILABLE     0x00
/* Card rejected due to SIM Lock validation failure */
#define UICC_CARD_REJECT_CAUSE_SIMLOCK           0x01
/* Card rejected due to consecutive 6F00 Status Word responses */
#define UICC_CARD_REJECT_CAUSE_SW_6F00           0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_PROTOCOL_TABLE - Valid from version 004.000        */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_PROTOCOL_TABLE_CONST;

/* Protocol is not valid for the operation in question */
#define UICC_PROTOCOL_NOT_USED                   0x00
/* Allow UICC server select the Protocol */
#define UICC_PROTOCOL_NO_PREFERENCE              0x01
/* Force to use T=0 Protocol */
#define UICC_PROTOCOL_T0                         0x02
/* Force to use T=1 Protocol */
#define UICC_PROTOCOL_T1                         0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_APDU_SAP_IF_TYPE_TABLE - Valid from version 004.002 */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_APDU_SAP_IF_TYPE_TABLE_CONST;

/* Specification ISO 7816-3 */
#define UICC_IF_TYPE_ICC                         0x01
/* Specification ISO 7816-12 */
#define UICC_IF_TYPE_USB                         0x02
#define UICC_IF_TYPE_UNKNOWN                     0xFF  /* Unknown */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: UICC_RESP_INFO_BIT_TABLE - Valid from version 004.002    */
/* ----------------------------------------------------------------------- */
/* Response info bitfield */
typedef uint8 UICC_RESP_INFO_BIT_TABLE_CONST;

/* UICC_SB_STATUS_WORD is returned */
#define UICC_RESP_INFO_STATUS_WORD               0x01  /* -------1 */

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_ACCESS_MODE_TABLE - Valid from version 004.002     */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_ACCESS_MODE_TABLE_CONST;

/* Access mode read */
#define UICC_ACCESS_MODE_READ                    0x01
/* Access mode update */
#define UICC_ACCESS_MODE_UPDATE                  0x02
/* Access mode activate */
#define UICC_ACCESS_MODE_ACTIVATE                0x03
/* Access mode deactivate */
#define UICC_ACCESS_MODE_DEACTIVATE              0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: UICC_POWER_STATUS_TABLE - Valid from version 006.000    */
/* ----------------------------------------------------------------------- */
typedef uint8 UICC_POWER_STATUS_TABLE_CONST;

/* Card is not powered */
#define UICC_POWER_STATUS_OFF                    0x00
/* Card is powered */
#define UICC_POWER_STATUS_ON                     0x01

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define UICC_REQ                                 0x00
#define UICC_RESP                                0x01
#define UICC_IND                                 0x02
#define UICC_CARD_REQ                            0x03
#define UICC_CARD_RESP                           0x04
#define UICC_CARD_IND                            0x05
#define UICC_APPLICATION_REQ                     0x06
#define UICC_APPLICATION_RESP                    0x07
#define UICC_APPLICATION_IND                     0x08
#define UICC_PIN_REQ                             0x09
#define UICC_PIN_RESP                            0x0A
#define UICC_PIN_IND                             0x0B
#define UICC_APPL_CMD_REQ                        0x0C
#define UICC_APPL_CMD_RESP                       0x0D
#define UICC_APPL_CMD_IND                        0x0E
#define UICC_CONNECTOR_REQ                       0x0F
#define UICC_CONNECTOR_RESP                      0x10
#define UICC_CAT_REQ                             0x12
#define UICC_CAT_RESP                            0x13
#define UICC_CAT_IND                             0x14
#define UICC_APDU_REQ                            0x15
#define UICC_APDU_RESP                           0x16
#define UICC_APDU_RESET_IND                      0x17
#define UICC_REFRESH_REQ                         0x18
#define UICC_REFRESH_RESP                        0x19
#define UICC_REFRESH_IND                         0x1A
#define UICC_SIMLOCK_REQ                         0x1B
#define UICC_SIMLOCK_RESP                        0x1C
#define UICC_APDU_SAP_REQ                        0x1E
#define UICC_APDU_SAP_RESP                       0x1F
#define UICC_APDU_SAP_IND                        0x20
#define UICC_PWR_CTRL_REQ                        0x21
#define UICC_PWR_CTRL_RESP                       0x22
#define UICC_PWR_CTRL_IND                        0x23
#define UICC_CARD_READER_IND                     0x26

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define UICC_SB_SHUT_DOWN_CONFIG                 0x0023
#define UICC_SB_CARD_STATUS                      0x0001
#define UICC_SB_CARD_INFO                        0x0024
#define UICC_SB_CARD_REJECT_CAUSE                0x0025
#define UICC_SB_CLIENT                           0x001F
#define UICC_SB_APPL_DATA_OBJECT                 0x0002
#define UICC_SB_APPLICATION                      0x0003
#define UICC_SB_APPL_INFO                        0x0004
#define UICC_SB_APPL_STATUS                      0x0005
#define UICC_SB_FCP                              0x0007
#define UICC_SB_FCI                              0x001C
#define UICC_SB_CHV                              0x001B
#define UICC_SB_PIN                              0x0008
#define UICC_SB_PIN_REF                          0x0009
#define UICC_SB_PUK                              0x000A
#define UICC_SB_PIN_SUBST                        0x000B
#define UICC_SB_PIN_INFO                         0x000C
#define UICC_SB_APPL_PATH                        0x000D
#define UICC_SB_SESSION                          0x000E
#define UICC_SB_FILE_DATA                        0x000F
#define UICC_SB_APDU                             0x0014
#define UICC_SB_TRANSPARENT_READ                 0x0010
#define UICC_SB_TRANSPARENT_UPDATE               0x0011
#define UICC_SB_TRANSPARENT                      0x0012
#define UICC_SB_LINEAR_FIXED                     0x0013
#define UICC_SB_CYCLIC                           0x0026
#define UICC_SB_TERMINAL_PROFILE                 0x0015
#define UICC_SB_TERMINAL_RESPONSE                0x001D
#define UICC_SB_ENVELOPE                         0x0021
#define UICC_SB_POLLING_SET                      0x0016
#define UICC_SB_REFRESH                          0x0017
#define UICC_SB_AID                              0x0006
#define UICC_SB_REFRESH_RESULT                   0x0018
#define UICC_SB_APDU_ACTIONS                     0x0019
#define UICC_SB_OBJECT_ID                        0x001A
#define UICC_SB_STATUS_WORD                      0x0020
#define UICC_SB_APDU_SAP_INFO                    0x0022
#define UICC_SB_ACCESS_MODE                      0x0027
#define UICC_SB_RESP_INFO                        0x0028
#define UICC_SB_APDU_SAP_CONFIG                  0x0029
#define UICC_SB_POWER_STATUS                     0x002A

/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_SHUT_DOWN_CONFIG - Versions 004.000 - 005.000         */
/* ----------------------------------------------------------------------- */
/* Subblock for Server Request */

#if UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table UICC_POWER_MODE_TABLE */
    uint8   power_mode;
    /* Values from the constant table UICC_VOLTAGE_CLASS_TABLE */
    uint8   voltage_class;
    } UICC_SB_SHUT_DOWN_CONFIG_STR;

#define SIZE_UICC_SB_SHUT_DOWN_CONFIG_STR   \
        sizeof(UICC_SB_SHUT_DOWN_CONFIG_STR)

#endif /* UICC_ISI_MIN_VERSION(4,0) && !UICC_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_SHUT_DOWN_CONFIG - Valid from version 006.002         */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(6,2)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table UICC_POWER_MODE_TABLE */
    uint8   power_mode;
    uint8   fill1[3];
    } UICC_SB_SHUT_DOWN_CONFIG_STR;

#define SIZE_UICC_SB_SHUT_DOWN_CONFIG_STR   \
        sizeof(UICC_SB_SHUT_DOWN_CONFIG_STR)

#endif /* UICC_ISI_MIN_VERSION(6,2) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CARD_STATUS - Valid from version 003.000              */
/* ----------------------------------------------------------------------- */
/* Subblock for Card response */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   card_status;
    } UICC_SB_CARD_STATUS_STR;

#define SIZE_UICC_SB_CARD_STATUS_STR   sizeof(UICC_SB_CARD_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CARD_INFO - Valid from version 004.000                */
/* ----------------------------------------------------------------------- */
/* Subblock for Card response and Indication */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table UICC_VOLTAGE_CLASS_TABLE */
    uint8   voltage_class;
    /* Values from the constant table UICC_CLF_IF_SUPPORT_TABLE */
    uint8   clf_support;
    } UICC_SB_CARD_INFO_STR;

#define SIZE_UICC_SB_CARD_INFO_STR   sizeof(UICC_SB_CARD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CARD_REJECT_CAUSE - Valid from version 004.000        */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Indication */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* Values from the constant table UICC_CARD_REJECT_CAUSE_TABLE */
    uint8   reject_cause;
    } UICC_SB_CARD_REJECT_CAUSE_STR;

#define SIZE_UICC_SB_CARD_REJECT_CAUSE_STR   \
        sizeof(UICC_SB_CARD_REJECT_CAUSE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CLIENT - Valid from version 003.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    uint8   client_id;    /* Unique identifier for the Client */
    } UICC_SB_CLIENT_STR;

#define SIZE_UICC_SB_CLIENT_STR   sizeof(UICC_SB_CLIENT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPL_DATA_OBJECT                                      */
/* ----------------------------------------------------------------------- */
/* Subblock for Application request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table UICC_APPL_TYPE_TABLE */
    uint8   application_type;
    uint8   appl_id;      /* Unique identifier for the Application */
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   appl_status;
    uint8   appl_do_len;
    /* Byte string
       
    */
    uint8   appl_do[UICC_ANY_SIZE];
    } UICC_SB_APPL_DATA_OBJECT_STR;

#define SIZE_UICC_SB_APPL_DATA_OBJECT_STR   (2*sizeof(uint16) + \
        6*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPLICATION                                           */
/* ----------------------------------------------------------------------- */
/* Subblock for Application request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table UICC_APPL_TYPE_TABLE */
    uint8   application_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    } UICC_SB_APPLICATION_STR;

#define SIZE_UICC_SB_APPLICATION_STR   sizeof(UICC_SB_APPLICATION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPL_INFO - Valid from version 002.000                */
/* ----------------------------------------------------------------------- */
/* Subblock for Application request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* Values from the constant table UICC_APPL_START_UP_TYPE_TABLE */
    uint8   strat_up_type;
    } UICC_SB_APPL_INFO_STR;

#define SIZE_UICC_SB_APPL_INFO_STR   sizeof(UICC_SB_APPL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPL_STATUS - Valid from version 002.000              */
/* ----------------------------------------------------------------------- */
/* Subblock for Application response */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   appl_status;
    } UICC_SB_APPL_STATUS_STR;

#define SIZE_UICC_SB_APPL_STATUS_STR   sizeof(UICC_SB_APPL_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_FCP - Obsolete from version 002.000                   */
/* ----------------------------------------------------------------------- */
/* Subblock for Application response */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fcp_length;   /* The length of the FCP in bytes */
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   fill1;
    uint8   fcp[UICC_ANY_SIZE]; /* File Control Parameters */
    } UICC_SB_FCP_STR;

#define SIZE_UICC_SB_FCP_STR   (3*sizeof(uint16) + 2*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_FCI - Valid from version 002.000                      */
/* ----------------------------------------------------------------------- */
/* Subblock for Application Response */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fci_length;   /* The length of the FCI in bytes */
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   fill1;
    uint8   fci[UICC_ANY_SIZE]; /* File Control Info */
    } UICC_SB_FCI_STR;

#define SIZE_UICC_SB_FCI_STR   (3*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CHV - Valid from version 002.000                      */
/* ----------------------------------------------------------------------- */
/* Subblock for APPLICATION response */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table UICC_CHV_QUALIFIER_TABLE */
    uint8   chv_qualifier;
    uint8   pin_id;       /* The PIN ID used for the CHV  */
    uint8   fill1[2];
    } UICC_SB_CHV_STR;

#define SIZE_UICC_SB_CHV_STR   sizeof(UICC_SB_CHV_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_PIN                                                   */
/* ----------------------------------------------------------------------- */
/* Subblock for PIN request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI or the PIN ID from the subblock UICC_SB_CHV
    */
    uint8   pin_id;
    /* Values from the constant table UICC_PIN_QUALIFIER_TABLE */
    uint8   pin_qualifier;
    uint8   length;
    char    pin_code[8];
    } UICC_SB_PIN_STR;

#define SIZE_UICC_SB_PIN_STR   (2*sizeof(uint16) + 3*sizeof(uint8) + \
        8*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_PIN_REF                                               */
/* ----------------------------------------------------------------------- */
/* Subblock for PIN request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI or the PIN ID from the subblock UICC_SB_CHV
    */
    uint8   pin_id;
    uint8   fill1[3];
    } UICC_SB_PIN_REF_STR;

#define SIZE_UICC_SB_PIN_REF_STR   sizeof(UICC_SB_PIN_REF_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_PUK                                                   */
/* ----------------------------------------------------------------------- */
/* Subblock for PIN request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI or the PIN ID from the subblock UICC_SB_CHV
    */
    uint8   pin_id;
    uint8   puk_length;
    char    puk_code[8];
    } UICC_SB_PUK_STR;

#define SIZE_UICC_SB_PUK_STR   (2*sizeof(uint16) + 2*sizeof(uint8) + \
        8*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_PIN_SUBST                                             */
/* ----------------------------------------------------------------------- */
/* Subblock for PIN request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI
    */
    uint8   pin_id1;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI
    */
    uint8   pin_id2;
    uint8   fill1[2];
    } UICC_SB_PIN_SUBST_STR;

#define SIZE_UICC_SB_PIN_SUBST_STR   sizeof(UICC_SB_PIN_SUBST_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_PIN_INFO                                              */
/* ----------------------------------------------------------------------- */
/* Subblock for PIN request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   pin_status;
    uint8   pin_att;
    uint8   puk_att;
    uint8   fill1;
    } UICC_SB_PIN_INFO_STR;

#define SIZE_UICC_SB_PIN_INFO_STR   sizeof(UICC_SB_PIN_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPL_PATH - Obsolete from version 002.000             */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  ef;           /* The ID of the Elementary File */
    uint8   sfi;          /* The Elementary Files Short File Identifier  */
    uint8   fill1;
    uint8   df_length;   /* The length of the Dedicated File path in bytes */
    uint8   fill2;
    /* DF path starting from MF (3F00), coded as defined in ETSI TS 102.221
    */
    uint8   path[UICC_ANY_SIZE];
    } UICC_SB_APPL_PATH_STR;

#define SIZE_UICC_SB_APPL_PATH_STR   (3*sizeof(uint16) + 4*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APPL_PATH - Valid from version 002.000                */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  ef;           /* The ID of the Elementary File */
    uint8   sfi;          /* The Elementary Files Short File Identifier  */
    uint8   fill1;
    uint8   path_length; /* The length of the Dedicated File path in bytes */
    uint8   fill2;
    /* DF path starting from MF (3F00), coded as defined in ETSI TS 102.221
    */
    uint8   path[UICC_ANY_SIZE];
    } UICC_SB_APPL_PATH_STR;

#define SIZE_UICC_SB_APPL_PATH_STR   (3*sizeof(uint16) + 4*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_SESSION - Valid from version 002.000                  */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    uint8   session_id;   /* Unique identifier for the file access session */
    } UICC_SB_SESSION_STR;

#define SIZE_UICC_SB_SESSION_STR   sizeof(UICC_SB_SESSION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_FILE_DATA - Obsolete from version 002.000             */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  df_length;    /* The length of the file data in bytes */
    uint8   data[UICC_ANY_SIZE]; /* File data */
    } UICC_SB_FILE_DATA_STR;

#define SIZE_UICC_SB_FILE_DATA_STR   (2*sizeof(uint16) + sizeof(uint32))

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_FILE_DATA - Valid from version 002.000                */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  data_length;  /* The length of the file data in bytes */
    uint8   data[UICC_ANY_SIZE]; /* File data */
    } UICC_SB_FILE_DATA_STR;

#define SIZE_UICC_SB_FILE_DATA_STR   (2*sizeof(uint16) + sizeof(uint32))

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APDU - Obsolete from version 002.000                  */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint16  df_length;    /* The length of the APDU data in bytes */
    uint8   apdu[UICC_ANY_SIZE]; /* APDU */
    } UICC_SB_APDU_STR;

#define SIZE_UICC_SB_APDU_STR   (3*sizeof(uint16) + 2*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APDU - Valid from version 002.000                     */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table UICC_APDU_CMD_FORCE_TYPE_TABLE */
    uint8   cmd_force;
    uint8   fill1;
    uint16  apdu_length;  /* The length of the APDU data in bytes */
    uint8   apdu[UICC_ANY_SIZE]; /* APDU */
    } UICC_SB_APDU_STR;

#define SIZE_UICC_SB_APDU_STR   (3*sizeof(uint16) + 2*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_TRANSPARENT_READ - Obsolete from version 002.000      */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  offset;  /* The offset in the file (0 means beginning of file) */
    /* The amount of data to read in bytes (0 means read until end of file)
    */
    uint16  amount;
    } UICC_SB_TRANSPARENT_READ_STR;

#define SIZE_UICC_SB_TRANSPARENT_READ_STR   \
        sizeof(UICC_SB_TRANSPARENT_READ_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_TRANSPARENT_UPDATE - Obsolete from version 002.000    */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  offset;  /* The offset in the file (0 means beginning of file) */
    uint8   fill1[2];
    } UICC_SB_TRANSPARENT_UPDATE_STR;

#define SIZE_UICC_SB_TRANSPARENT_UPDATE_STR   \
        sizeof(UICC_SB_TRANSPARENT_UPDATE_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_TRANSPARENT - Valid from version 002.000              */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  offset;  /* The offset in the file (0 means beginning of file) */
    /* FIELD ONLY USED FOR READING: The amount of data to read in bytes (0
       means read until end of file)
    */
    uint16  amount;
    } UICC_SB_TRANSPARENT_STR;

#define SIZE_UICC_SB_TRANSPARENT_STR   sizeof(UICC_SB_TRANSPARENT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_LINEAR_FIXED                                          */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   record;       /* The record in the file */
    /* The offset in the record (0 means beginning of record) */
    uint8   offset;
    /* FIELD ONLY USED FOR READING: The amount of data in bytes (0 means read
       until end of record)
    */
    uint8   amount;
    uint8   fill1;
    } UICC_SB_LINEAR_FIXED_STR;

#define SIZE_UICC_SB_LINEAR_FIXED_STR   sizeof(UICC_SB_LINEAR_FIXED_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_CYCLIC - Valid from version 004.000                   */
/* ----------------------------------------------------------------------- */
/* Subblock for Application command request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The record in the file.
       Note: In case of update it is only possible to write to record 1
    */
    uint8   record;
    /* The offset in the record (0 means beginning of record) */
    uint8   offset;
    /* FIELD ONLY USED FOR READING: The amount of data in bytes (0 means read
       until end of record)
    */
    uint8   amount;
    uint8   fill1;
    } UICC_SB_CYCLIC_STR;

#define SIZE_UICC_SB_CYCLIC_STR   sizeof(UICC_SB_CYCLIC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_TERMINAL_PROFILE                                      */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint16  tp_length; /* The length of the TERMINAL PROFILE data in bytes */
    uint8   tp[UICC_ANY_SIZE];
    } UICC_SB_TERMINAL_PROFILE_STR;

#define SIZE_UICC_SB_TERMINAL_PROFILE_STR   (3*sizeof(uint16) + \
        2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_TERMINAL_RESPONSE - Valid from version 003.000        */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* The length of the TERMINAL RESPONSE data in bytes */
    uint16  tr_length;
    uint8   tr[UICC_ANY_SIZE];
    } UICC_SB_TERMINAL_RESPONSE_STR;

#define SIZE_UICC_SB_TERMINAL_RESPONSE_STR   (3*sizeof(uint16) + \
        2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_ENVELOPE - Valid from version 003.000                 */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint16  envelope_length; /* The length of the ENVELOPE data in bytes */
    uint8   envelope[UICC_ANY_SIZE];
    } UICC_SB_ENVELOPE_STR;

#define SIZE_UICC_SB_ENVELOPE_STR   (3*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_POLLING_SET                                           */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The polling interval in seconds (0 means proactive polling off) */
    uint16  poll_int;
    uint8   fill1[2];
    } UICC_SB_POLLING_SET_STR;

#define SIZE_UICC_SB_POLLING_SET_STR   sizeof(UICC_SB_POLLING_SET_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_REFRESH                                               */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table UICC_REFRESH_TYPE_CONSTANTS */
    uint8   type;
    uint8   fill1[3];
    } UICC_SB_REFRESH_STR;

#define SIZE_UICC_SB_REFRESH_STR   sizeof(UICC_SB_REFRESH_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_AID                                                   */
/* ----------------------------------------------------------------------- */
/* Subblock for Application and Card Application Toolkit requests */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   str_len;
    /* Full AID or truncated AID (i.e. RID + App Code) as defined in ETSI TS
       101.220 
       in bytes
    */
    uint8   str[UICC_ANY_SIZE];
    } UICC_SB_AID_STR;

#define SIZE_UICC_SB_AID_STR   (2*sizeof(uint16) + sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_REFRESH_RESULT - Obsolete from version 004.000        */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

#if !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* For possible refresh results, please see ETSI TS 102.223 */
    uint8   refresh_status;
    uint8   fill1[3];
    } UICC_SB_REFRESH_RESULT_STR;

#define SIZE_UICC_SB_REFRESH_RESULT_STR   sizeof(UICC_SB_REFRESH_RESULT_STR)

#endif /* !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_REFRESH_RESULT - Valid from version 004.000           */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

#if UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* For possible refresh results, please see ETSI TS 102.223 */
    uint8   refresh_status;
    uint8   fill1;
    uint8   additional_info_length;
    /* For possible Additional Information on result, please see ETSI TS
       102.223
    */
    uint8   additional_info[UICC_ANY_SIZE];
    } UICC_SB_REFRESH_RESULT_STR;

#define SIZE_UICC_SB_REFRESH_RESULT_STR   (2*sizeof(uint16) + 3*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APDU_ACTIONS                                          */
/* ----------------------------------------------------------------------- */
/* Subblock for Card Application Toolkit request */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table UICC_ACTION_CONSTANTS */
    uint8   action;
    /* Values from the constant table UICC_PROTOCOL_TABLE */
    uint8   protocol;
    uint8   fill1[2];
    } UICC_SB_APDU_ACTIONS_STR;

#define SIZE_UICC_SB_APDU_ACTIONS_STR   sizeof(UICC_SB_APDU_ACTIONS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_OBJECT_ID - Obsolete from version 003.000             */
/* ----------------------------------------------------------------------- */
/* Subblock for connector request */

#if !UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  obj_id;       /* The object ID */
    uint8   device_id;    /* The device ID */
    uint8   fill1;
    } UICC_SB_OBJECT_ID_STR;

#define SIZE_UICC_SB_OBJECT_ID_STR   sizeof(UICC_SB_OBJECT_ID_STR)

#endif /* !UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_STATUS_WORD - Valid from version 003.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint8   sw1;          /* Response APDU Status byte 1 */
    uint8   sw2;          /* Response APDU Status byte 2 */
    } UICC_SB_STATUS_WORD_STR;

#define SIZE_UICC_SB_STATUS_WORD_STR   sizeof(UICC_SB_STATUS_WORD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APDU_SAP_INFO - Valid from version 003.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   apdu_sap_id;  /* Unique identifier for the APDU SAP */
    uint8   fill1[3];
    } UICC_SB_APDU_SAP_INFO_STR;

#define SIZE_UICC_SB_APDU_SAP_INFO_STR   sizeof(UICC_SB_APDU_SAP_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_ACCESS_MODE - Valid from version 004.002              */
/* ----------------------------------------------------------------------- */
/* Subblock for defining access mode for PIN query */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* Values from the constant table UICC_ACCESS_MODE_TABLE */
    uint8   access_mode;
    } UICC_SB_ACCESS_MODE_STR;

#define SIZE_UICC_SB_ACCESS_MODE_STR   sizeof(UICC_SB_ACCESS_MODE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_RESP_INFO - Valid from version 004.002                */
/* ----------------------------------------------------------------------- */
/* Subblock for configuring optional response info */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* Values from the bitmask table UICC_RESP_INFO_BIT_TABLE */
    uint8   response_info;
    } UICC_SB_RESP_INFO_STR;

#define SIZE_UICC_SB_RESP_INFO_STR   sizeof(UICC_SB_RESP_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_APDU_SAP_CONFIG - Valid from version 004.002          */
/* ----------------------------------------------------------------------- */
/* Subblock for ADPU SAP  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table UICC_VOLTAGE_CLASS_TABLE */
    uint8   voltage_class;
    /* Values from the constant table UICC_APDU_SAP_IF_TYPE_TABLE */
    uint8   interface_type;
    } UICC_SB_APDU_SAP_CONFIG_STR;

#define SIZE_UICC_SB_APDU_SAP_CONFIG_STR   \
        sizeof(UICC_SB_APDU_SAP_CONFIG_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: UICC_SB_POWER_STATUS - Valid from version 006.000             */
/* ----------------------------------------------------------------------- */
/* Subblock for card power status */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    /* Values from the constant table UICC_POWER_STATUS_TABLE */
    uint8   power_status;
    } UICC_SB_POWER_STATUS_STR;

#define SIZE_UICC_SB_POWER_STATUS_STR   sizeof(UICC_SB_POWER_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_REQ - Versions 002.000 - 004.000                          */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_REQ_STR;

#define SIZE_UICC_REQ_STR   sizeof(UICC_REQ_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_REQ - Valid from version 004.000                          */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_SHUT_DOWN_CONFIG
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_REQ_STR;

#define SIZE_UICC_REQ_STR   (4*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_RESP - Valid from version 002.000                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   server_status;
    uint8   fill1[2];
    } UICC_RESP_STR;

#define SIZE_UICC_RESP_STR   sizeof(UICC_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_REQ - Valid from version 002.000                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    } UICC_CARD_REQ_STR;

#define SIZE_UICC_CARD_REQ_STR   sizeof(UICC_CARD_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_RESP - Versions 002.000 - 003.000                    */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    } UICC_CARD_RESP_STR;

#define SIZE_UICC_CARD_RESP_STR   sizeof(UICC_CARD_RESP_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_RESP - Valid from version 003.000                    */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_CARD_INFO
       UICC_SB_CARD_STATUS
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CARD_RESP_STR;

#define SIZE_UICC_CARD_RESP_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPLICATION_REQ                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_AID
       UICC_SB_APPLICATION
       UICC_SB_APPL_INFO
       UICC_SB_CLIENT
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPLICATION_REQ_STR;

#define SIZE_UICC_APPLICATION_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPLICATION_RESP                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APPLICATION
       UICC_SB_APPL_DATA_OBJECT
       UICC_SB_APPL_STATUS
       UICC_SB_CHV
       UICC_SB_CLIENT
       UICC_SB_FCI
       UICC_SB_FCP
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPLICATION_RESP_STR;

#define SIZE_UICC_APPLICATION_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_PIN_REQ                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_ACCESS_MODE
       UICC_SB_APPLICATION
       UICC_SB_APPL_PATH
       UICC_SB_PIN
       UICC_SB_PIN_REF
       UICC_SB_PIN_SUBST
       UICC_SB_PUK
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_PIN_REQ_STR;

#define SIZE_UICC_PIN_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_PIN_RESP - Obsolete from version 002.000                  */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    /* Values from the constant table UICC_PIN_PROMPT_VERIFY_TABLE */
    uint8   pin_status;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_PIN_INFO
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_PIN_RESP_STR;

#define SIZE_UICC_PIN_RESP_STR   (8*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_PIN_RESP - Valid from version 002.000                     */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_PIN_INFO
       UICC_SB_STATUS_WORD
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_PIN_RESP_STR;

#define SIZE_UICC_PIN_RESP_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPL_CMD_REQ                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    /* Unique identifier for file access session taken from subblock
       UICC_SB_SESSION
    */
    uint8   session_id;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
       UICC_SB_APPL_PATH
       UICC_SB_CLIENT
       UICC_SB_CYCLIC
       UICC_SB_FILE_DATA
       UICC_SB_LINEAR_FIXED
       UICC_SB_RESP_INFO
       UICC_SB_TRANSPARENT
       UICC_SB_TRANSPARENT_READ
       UICC_SB_TRANSPARENT_UPDATE
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPL_CMD_REQ_STR;

#define SIZE_UICC_APPL_CMD_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPL_CMD_RESP                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
       UICC_SB_FCI
       UICC_SB_FCP
       UICC_SB_FILE_DATA
       UICC_SB_PIN_REF
       UICC_SB_SESSION
       UICC_SB_STATUS_WORD
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPL_CMD_RESP_STR;

#define SIZE_UICC_APPL_CMD_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_CONNECTOR_REQ                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU_SAP_INFO
       UICC_SB_OBJECT_ID
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CONNECTOR_REQ_STR;

#define SIZE_UICC_CONNECTOR_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_CONNECTOR_RESP - Obsolete from version 002.000            */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    } UICC_CONNECTOR_RESP_STR;

#define SIZE_UICC_CONNECTOR_RESP_STR   sizeof(UICC_CONNECTOR_RESP_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CONNECTOR_RESP - Valid from version 002.000               */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    } UICC_CONNECTOR_RESP_STR;

#define SIZE_UICC_CONNECTOR_RESP_STR   sizeof(UICC_CONNECTOR_RESP_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CAT_REQ                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_AID
       UICC_SB_APDU
       UICC_SB_APPL_PATH
       UICC_SB_ENVELOPE
       UICC_SB_FILE_DATA
       UICC_SB_POLLING_SET
       UICC_SB_REFRESH
       UICC_SB_TERMINAL_PROFILE
       UICC_SB_TERMINAL_RESPONSE
       UICC_SB_TRANSPARENT
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CAT_REQ_STR;

#define SIZE_UICC_CAT_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_CAT_RESP                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
       UICC_SB_REFRESH
       UICC_SB_REFRESH_RESULT
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CAT_RESP_STR;

#define SIZE_UICC_CAT_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_REQ                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
       UICC_SB_APDU_ACTIONS
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APDU_REQ_STR;

#define SIZE_UICC_APDU_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_RESP                                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APDU_RESP_STR;

#define SIZE_UICC_APDU_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_REFRESH_REQ - Obsolete from version 003.000               */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_REFRESH_RESULT
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_REFRESH_REQ_STR;

#define SIZE_UICC_REFRESH_REQ_STR   (8*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_REFRESH_REQ - Valid from version 003.000                  */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_REFRESH_STATUS_TABLE */
    uint8   status;
    /* Unique identifier for the Client, get in application activation */
    uint8   client_id;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_REFRESH_RESULT
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_REFRESH_REQ_STR;

#define SIZE_UICC_REFRESH_REQ_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_REFRESH_RESP - Obsolete from version 002.000              */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    } UICC_REFRESH_RESP_STR;

#define SIZE_UICC_REFRESH_RESP_STR   sizeof(UICC_REFRESH_RESP_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_REFRESH_RESP - Valid from version 002.000                 */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    } UICC_REFRESH_RESP_STR;

#define SIZE_UICC_REFRESH_RESP_STR   sizeof(UICC_REFRESH_RESP_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_SIMLOCK_REQ - Versions 003.000 - 004.000                  */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_SIMLOCK_REQ_STR;

#define SIZE_UICC_SIMLOCK_REQ_STR   sizeof(UICC_SIMLOCK_REQ_STR)

#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_SIMLOCK_RESP - Versions 003.000 - 004.000                 */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    /* Values from the constant table UICC_SIMLOCK_STATUS_TABLE */
    uint8   simlock_status;
    } UICC_SIMLOCK_RESP_STR;

#define SIZE_UICC_SIMLOCK_RESP_STR   sizeof(UICC_SIMLOCK_RESP_STR)

#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_SAP_REQ - Valid from version 003.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_APDU_SAP_STATUS_TABLE */
    uint8   status;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
       UICC_SB_APDU_SAP_CONFIG
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APDU_SAP_REQ_STR;

#define SIZE_UICC_APDU_SAP_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_SAP_RESP - Valid from version 003.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    } UICC_APDU_SAP_RESP_STR;

#define SIZE_UICC_APDU_SAP_RESP_STR   sizeof(UICC_APDU_SAP_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_PWR_CTRL_REQ - Valid from version 005.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_PWR_CTRL_REQ_STR;

#define SIZE_UICC_PWR_CTRL_REQ_STR   sizeof(UICC_PWR_CTRL_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_PWR_CTRL_RESP - Versions 005.000 - 006.000                */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(5,0) && !UICC_ISI_MIN_VERSION(6,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    } UICC_PWR_CTRL_RESP_STR;

#define SIZE_UICC_PWR_CTRL_RESP_STR   sizeof(UICC_PWR_CTRL_RESP_STR)

#endif /* UICC_ISI_MIN_VERSION(5,0) && !UICC_ISI_MIN_VERSION(6,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_PWR_CTRL_RESP - Valid from version 006.000                */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(6,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* A subset of values from the constant table UICC_STATUS_CONSTANTS */
    uint8   status;
    /* A subset of values from the constant table UICC_DETAILS_CONSTANTS */
    uint8   details;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_POWER_STATUS
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_PWR_CTRL_RESP_STR;

#define SIZE_UICC_PWR_CTRL_RESP_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(6,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPLICATION_IND - Obsolete from version 002.000           */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    } UICC_APPLICATION_IND_STR;

#define SIZE_UICC_APPLICATION_IND_STR   sizeof(UICC_APPLICATION_IND_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPLICATION_IND - Valid from version 002.000              */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APPLICATION
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPLICATION_IND_STR;

#define SIZE_UICC_APPLICATION_IND_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_REFRESH_IND                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Transaction ID from UICC_CAT_REQ.UICC_CAT_REFRESH which started this
       refresh
    */
    uint8   utid;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_REFRESH_TYPE_CONSTANTS */
    uint8   type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APPL_PATH
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_REFRESH_IND_STR;

#define SIZE_UICC_REFRESH_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_IND - Obsolete from version 002.000                       */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    } UICC_IND_STR;

#define SIZE_UICC_IND_STR   sizeof(UICC_IND_STR)

#endif /* !UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_IND - Valid from version 002.000                          */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_IND_STR;

#define SIZE_UICC_IND_STR   sizeof(UICC_IND_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_IND - Versions 002.000 - 004.000                     */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    } UICC_CARD_IND_STR;

#define SIZE_UICC_CARD_IND_STR   sizeof(UICC_CARD_IND_STR)

#endif /* UICC_ISI_MIN_VERSION(2,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_IND - Valid from version 004.000                     */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_CARD_INFO
       UICC_SB_CARD_REJECT_CAUSE
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CARD_IND_STR;

#define SIZE_UICC_CARD_IND_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_PIN_IND                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* The PIN ID taken from the Application FCP taken from the subblock
       UICC_SB_FCP / UICC_SB_FCI or the PIN ID from the subblock UICC_SB_CHV
    */
    uint8   pin_id;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[3];
    } UICC_PIN_IND_STR;

#define SIZE_UICC_PIN_IND_STR   sizeof(UICC_PIN_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_APPL_CMD_IND - Versions 003.000 - 004.000                 */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the Applicatio taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APPL_PATH
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APPL_CMD_IND_STR;

#define SIZE_UICC_APPL_CMD_IND_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(3,0) && !UICC_ISI_MIN_VERSION(4,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CAT_IND - Obsolete from version 003.000                   */
/* ----------------------------------------------------------------------- */

#if !UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    /* Unique identifier for the Application taken from subblock
       UICC_SB_APPL_DATA_OBJECT
    */
    uint8   appl_id;
    uint8   fill1[2];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CAT_IND_STR;

#define SIZE_UICC_CAT_IND_STR   (8*sizeof(uint8))

#endif /* !UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_CAT_IND - Valid from version 003.000                      */
/* ----------------------------------------------------------------------- */

#if UICC_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Values from the constant table UICC_CARD_TYPE_TABLE */
    uint8   card_type;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_CAT_IND_STR;

#define SIZE_UICC_CAT_IND_STR   (8*sizeof(uint8))

#endif /* UICC_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_RESET_IND                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    uint8   fill1;
    } UICC_APDU_RESET_IND_STR;

#define SIZE_UICC_APDU_RESET_IND_STR   sizeof(UICC_APDU_RESET_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_APDU_SAP_IND - Valid from version 003.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    /* Unique identifier for the APDU SAP received in subblock
       UICC_SB_APDU_SAP_INFO
    */
    uint8   apdu_sap_id;
    uint8   fill1[3];
    uint8   n_sb;
    /* Subblock list:
       UICC_SB_APDU
    */
    uint8   sub_blocks[UICC_ANY_SIZE];
    } UICC_APDU_SAP_IND_STR;

#define SIZE_UICC_APDU_SAP_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: UICC_PWR_CTRL_IND - Valid from version 005.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_PWR_CTRL_IND_STR;

#define SIZE_UICC_PWR_CTRL_IND_STR   sizeof(UICC_PWR_CTRL_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: UICC_CARD_READER_IND - Valid from version 006.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table UICC_SERVICE_TYPE_CONSTANTS
    */
    uint8   service_type;
    } UICC_CARD_READER_IND_STR;

#define SIZE_UICC_CARD_READER_IND_STR   sizeof(UICC_CARD_READER_IND_STR)




#endif /* _UICC_WM_ISI_H */
