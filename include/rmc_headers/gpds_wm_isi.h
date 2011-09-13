/*
Renesas Mobile                                                    CONFIDENTIAL
                  gpds_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            gpds_wm_isi.h

version:         019.010

type:            incl


ISI header file for General Packet Data Server

Current   ISI Version : 019.010
Supported ISI Versions: 010.002, 010.003, 010.004, 010.005, 010.006, 011.000, 
                        011.001, 012.000, 012.001, 012.002, 012.003, 012.004, 
                        012.005, 012.006, 012.007, 012.008, 012.009, 012.010, 
                        012.011, 013.000, 013.001, 013.002, 013.003, 013.004, 
                        013.005, 013.006, 013.007, 014.000, 014.001, 015.000, 
                        015.001, 016.000, 016.001, 016.002, 016.003, 016.004, 
                        016.005, 016.006, 016.007, 016.008, 016.009, 017.000, 
                        017.001, 017.002, 017.003, 017.004, 017.005, 017.006, 
                        017.007, 017.008, 017.009, 017.010, 017.011, 017.012, 
                        017.013, 017.014, 017.015, 017.016, 017.017, 017.018, 
                        017.019, 017.020, 017.021, 017.022, 017.023, 017.024, 
                        017.025, 017.026, 018.000, 018.001, 018.002, 018.003, 
                        018.004, 018.005, 018.006, 018.007, 019.000, 019.001, 
                        019.002, 019.003, 019.004, 019.005, 019.006, 019.007, 
                        019.008, 019.009, 019.010

Copyright (c) Renesas Mobile Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _GPDS_WM_ISI_H
#define _GPDS_WM_ISI_H

#include "isi_conf.h"

#ifndef GPDS_ISI_VERSION
#define GPDS_ISI_VERSION
#define GPDS_ISI_VERSION_Z  19
#define GPDS_ISI_VERSION_Y  10
#endif

#define GPDS_ISI_MIN_VERSION(z,y) \
 ((GPDS_ISI_VERSION_Z == (z) && GPDS_ISI_VERSION_Y >= (y)) || \
  (GPDS_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */


#if !GPDS_ISI_MIN_VERSION(16,9)
/* Pipe messages containing more data bytes than GPDS_PIPE_DATA_MAX_LENGTH
   will be discarded by GPDS.
*/
#define GPDS_PIPE_DATA_MAX_LENGTH                0x05E2
#endif /* !GPDS_ISI_MIN_VERSION(16,9) */

#define GPDS_IP_DATAGRAM_MAX_LENGTH              0x05DC
#define GPDS_PPP_INFO_MAX_LENGTH                 0x05DC
/* Common subscribed and default values for QoS99 */
#define GPDS_QOS99_SUBSCRIBED                    0x00
#define GPDS_QOS99_DEFAULT                       0xFFFF
/* The value of the following constants is chosen so that the total size of
   the related subblocks is divisible by 4.Max value is 50.
*/
#define GPDS_MAX_USERNAME_SIZE                   0x35
/* Max value is 50. */
#define GPDS_MAX_PASSWORD_SIZE                   0x35
/* Max value is 50. */
#define GPDS_MAX_CHALLENGE_SIZE                  0x35
/* Max value is 50. */
#define GPDS_MAX_RESPONSE_SIZE                   0x34
/* Max value is 11. */
#define GPDS_MAX_CID_LIST_SIZE                   0x0E
/* constant for variable-length definitions */
#define GPDS_ANY_SIZE                            1
#define GPDS_CID_VOID                            0xFF
#define GPDS_CID_ALL                             0xFE
#define GPDS_DISABLE                             0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_PPP_MODE                                           */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_PPP_MODE_CONST;

#define GPDS_LL_FRAMED_PPP                       0x00
#define GPDS_LL_NONFRAMED_PPP                    0x01
#define GPDS_LL_PLAIN                            0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_STATUS                                             */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_STATUS_CONST;

#define GPDS_ERROR                               0x00
#define GPDS_OK                                  0x01
#define GPDS_FAIL                                0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_BOOLEAN_TYPE                                       */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_BOOLEAN_TYPE_CONST;

#define GPDS_FALSE                               0x00
#define GPDS_TRUE                                0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_ATTACH_MODE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_ATTACH_MODE_CONST;

#define GPDS_ATTACH_MODE_MANUAL                  0x00
#define GPDS_ATTACH_MODE_AUTOMATIC               0x01
#define GPDS_ATTACH_MODE_DEFAULT                 0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_ATTACH_STATUS                                      */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_ATTACH_STATUS_CONST;

#define GPDS_DETACHED                            0x00
#define GPDS_ATTACHED                            0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_MT_ACT_MODE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_MT_ACT_MODE_CONST;

#define GPDS_MT_ACT_MODE_REJECT                  0x00
#define GPDS_MT_ACT_MODE_ACCEPT                  0x01
#define GPDS_MT_ACT_MODE_DEFAULT                 0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_CLASSC_MODE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_CLASSC_MODE_CONST;

#define GPDS_CLASSC_MODE_GPRS                    0x00
#define GPDS_CLASSC_MODE_GSM                     0x01
#define GPDS_CLASSC_MODE_DEFAULT                 0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_PRECEDENCE                                         */
/* ----------------------------------------------------------------------- */
/* QoS precedence classes */
typedef uint8 GPDS_PRECEDENCE_CONST;

#define GPDS_QOS_PREC_0                          0x00
#define GPDS_QOS_PREC_1                          0x01
#define GPDS_QOS_PREC_2                          0x02
#define GPDS_QOS_PREC_3                          0x03
#define GPDS_QOS_PREC_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_DELAY                                              */
/* ----------------------------------------------------------------------- */
/* QoS delay classes */
typedef uint8 GPDS_DELAY_CONST;

#define GPDS_QOS_DELC_0                          0x00
#define GPDS_QOS_DELC_1                          0x01
#define GPDS_QOS_DELC_2                          0x02
#define GPDS_QOS_DELC_3                          0x03
#define GPDS_QOS_DELC_4                          0x04
#define GPDS_QOS_DELC_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_RELIABILITY                                        */
/* ----------------------------------------------------------------------- */
/* QoS reliability classes */
typedef uint8 GPDS_RELIABILITY_CONST;

#define GPDS_QOS_RELC_0                          0x00
#define GPDS_QOS_RELC_1                          0x01
#define GPDS_QOS_RELC_2                          0x02
#define GPDS_QOS_RELC_3                          0x03
#define GPDS_QOS_RELC_4                          0x04
#define GPDS_QOS_RELC_5                          0x05
#define GPDS_QOS_RELC_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_PEAK_THROUGHPUT                                    */
/* ----------------------------------------------------------------------- */
/* QoS peak throughput classes */
typedef uint8 GPDS_PEAK_THROUGHPUT_CONST;

#define GPDS_QOS_PETC_0                          0x00
#define GPDS_QOS_PETC_1                          0x01
#define GPDS_QOS_PETC_2                          0x02
#define GPDS_QOS_PETC_3                          0x03
#define GPDS_QOS_PETC_4                          0x04
#define GPDS_QOS_PETC_5                          0x05
#define GPDS_QOS_PETC_6                          0x06
#define GPDS_QOS_PETC_7                          0x07
#define GPDS_QOS_PETC_8                          0x08
#define GPDS_QOS_PETC_9                          0x09
#define GPDS_QOS_PETC_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_MEAN_THROUGHPUT                                    */
/* ----------------------------------------------------------------------- */
/* QoS mean throughput classes */
typedef uint8 GPDS_MEAN_THROUGHPUT_CONST;

#define GPDS_QOS_METC_0                          0x00
#define GPDS_QOS_METC_1                          0x01
#define GPDS_QOS_METC_2                          0x02
#define GPDS_QOS_METC_3                          0x03
#define GPDS_QOS_METC_4                          0x04
#define GPDS_QOS_METC_5                          0x05
#define GPDS_QOS_METC_6                          0x06
#define GPDS_QOS_METC_7                          0x07
#define GPDS_QOS_METC_8                          0x08
#define GPDS_QOS_METC_9                          0x09
#define GPDS_QOS_METC_10                         0x0A
#define GPDS_QOS_METC_11                         0x0B
#define GPDS_QOS_METC_12                         0x0C
#define GPDS_QOS_METC_13                         0x0D
#define GPDS_QOS_METC_14                         0x0E
#define GPDS_QOS_METC_15                         0x0F
#define GPDS_QOS_METC_16                         0x10
#define GPDS_QOS_METC_17                         0x11
#define GPDS_QOS_METC_18                         0x12
#define GPDS_QOS_METC_31                         0x1F
#define GPDS_QOS_METC_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_CAUSE                                              */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_CAUSE_CONST;

#define GPDS_CAUSE_UNKNOWN                       0x00
#define GPDS_CAUSE_IMSI                          0x02
#define GPDS_CAUSE_MS_ILLEGAL                    0x03
#define GPDS_CAUSE_ME_ILLEGAL                    0x06
#define GPDS_CAUSE_GPRS_NOT_ALLOWED              0x07
#define GPDS_NOT_ALLOWED                         0x08
#define GPDS_CAUSE_MS_IDENTITY                   0x09
#define GPDS_CAUSE_DETACH                        0x0A
#define GPDS_PLMN_NOT_ALLOWED                    0x0B
#define GPDS_LA_NOT_ALLOWED                      0x0C
#define GPDS_ROAMING_NOT_ALLOWED                 0x0D
#define GPDS_CAUSE_GPRS_NOT_ALLOWED_IN_PLMN      0x0E
#define GPDS_CAUSE_NO_SUITABLE_CELLS_IN_LA       0x0F
#define GPDS_CAUSE_MSC_NOT_REACH                 0x10
#define GPDS_CAUSE_PLMN_FAIL                     0x11
#define GPDS_CAUSE_NETWORK_CONGESTION            0x16
#define GPDS_CAUSE_LLC_SNDCP_FAILURE             0x19
#define GPDS_CAUSE_RESOURCE_INSUFF               0x1A
#define GPDS_CAUSE_APN                           0x1B
#define GPDS_CAUSE_PDP_UNKNOWN                   0x1C
#define GPDS_CAUSE_AUTHENTICATION                0x1D
#define GPDS_CAUSE_ACT_REJECT_GGSN               0x1E
#define GPDS_CAUSE_ACT_REJECT                    0x1F
#define GPDS_CAUSE_SERV_OPT_NOT_SUPPORTED        0x20
#define GPDS_CAUSE_SERV_OPT_NOT_SUBSCRIBED       0x21
#define GPDS_CAUSE_SERV_OPT_OUT_OF_ORDER         0x22
#define GPDS_CAUSE_NSAPI_ALREADY_USED            0x23
#define GPDS_CAUSE_DEACT_REGULAR                 0x24
#define GPDS_CAUSE_QOS                           0x25
#define GPDS_CAUSE_NETWORK_FAIL                  0x26
#define GPDS_CAUSE_REACTIVATION_REQ              0x27
#define GPDS_CAUSE_FEAT_NOT_SUPPORTED            0x28
#define GPDS_CAUSE_TFT_SEMANTIC_ERROR            0x29
#define GPDS_CAUSE_TFT_SYNTAX_ERROR              0x2A
#define GPDS_CAUSE_CONTEXT_UNKNOWN               0x2B
#define GPDS_CAUSE_FILTER_SEMANTIC_ERROR         0x2C
#define GPDS_CAUSE_FILTER_SYNTAX_ERROR           0x2D
#define GPDS_CAUSE_CONT_WITHOUT_TFT              0x2E
#define GPDS_CAUSE_MULTICAST_MEMBERSHIP_TIMEOUT  0x2F
#define GPDS_CAUSE_INVALID_MANDATORY_INFO        0x60
#define GPDS_CAUSE_MSG_TYPE_NON_EXISTENTOR_NOT_IMPLTD 0x61
#define GPDS_CAUSE_MSG_TYPE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE 0x62
#define GPDS_CAUSE_IE_NON_EXISTENT_OR_NOT_IMPLEMENTED 0x63
#define GPDS_CAUSE_CONDITIONAL_IE_ERROR          0x64
#define GPDS_CAUSE_MSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE 0x65
#define GPDS_CAUSE_UNSPECIFIED                   0x6F
#define GPDS_CAUSE_APN_INCOMPATIBLE_WITH_CURR_CTXT 0x70
#define GPDS_CAUSE_FDN                           0xA0
#define GPDS_CAUSE_USER_ABORT                    0xA1
#define GPDS_CAUSE_CS_INACTIVE                   0xA2
#define GPDS_CAUSE_CSD_OVERRIDE                  0xA3
#define GPDS_CAUSE_APN_CONTROL                   0xA4
#define GPDS_CAUSE_CALL_CONTROL                  0xA5
/* Reserved for internal use */
#define GPDS_CAUSE_TEMPERATURE_LIMIT             0xA6
#define GPDS_CAUSE_RETRY_COUNTER_EXPIRED         0xC8
#define GPDS_CAUSE_NO_CONNECTION                 0xC9
#define GPDS_CAUSE_DETACHED                      0xF5
#define GPDS_CAUSE_NO_SERVICE_POWER_SAVE         0xF7
#define GPDS_CAUSE_SIM_REMOVED                   0xF9
#define GPDS_CAUSE_POWER_OFF                     0xFA
#define GPDS_CAUSE_LAI_FORBIDDEN_NATIONAL_ROAM_LIST 0xFB
#define GPDS_CAUSE_LAI_FORBIDDEN_REG_PROVISION_LIST 0xFC
#define GPDS_CAUSE_ACCESS_BARRED                 0xFD
#define GPDS_CAUSE_FATAL_FAILURE                 0xFE
#define GPDS_CAUSE_AUT_FAILURE                   0xFF
/* This cause is defined to provide backward compatibily after typo correction. */
#define GPDS_CUASEMSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE GPDS_CAUSE_MSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_CLIENT_TYPE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_CLIENT_TYPE_CONST;

#define GPDS_CONTEXT_CLIENT_SOCKET               0x01
#define GPDS_CONTEXT_CLIENT_DIAL_UP              0x02
#define GPDS_CONTEXT_CLIENT_UNKNOWN              0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_CONTEXT_TYPE                                       */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_CONTEXT_TYPE_CONST;

#define GPDS_CONT_TYPE_NORMAL                    0x00
#define GPDS_CONT_TYPE_NWI                       0x01
#define GPDS_CONT_TYPE_SEC                       0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_ATTACH_TYPE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_ATTACH_TYPE_CONST;

#define GPDS_ATTACH_TYPE_GPRS                    0x01
#define GPDS_ATTACH_TYPE_COMBINED                0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_DETACH_TYPE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_DETACH_TYPE_CONST;

#define GPDS_DETACH_TYPE_GPRS_MO_POFF            0x00
#define GPDS_DETACH_TYPE_GPRS_MO                 0x01
#define GPDS_DETACH_TYPE_MO_COMBINED_POFF        0x02
#define GPDS_DETACH_TYPE_MO_COMBINED             0x03
#define GPDS_DETACH_TYPE_MT_REATTACH_REQ         0x04
#define GPDS_DETACH_TYPE_MT                      0x05
#define GPDS_DETACH_TYPE_MO_REATTACH             0x06
#define GPDS_DETACH_TYPE_MO_COMB_REATTACH        0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_TRANSFER_STATUS                                    */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_TRANSFER_STATUS_CONST;

#define GPDS_TRANSFER_NOT_AVAIL                  0x00
#define GPDS_TRANSFER_AVAIL                      0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_TRANSFER_CAUSE                                     */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_TRANSFER_CAUSE_CONST;

#define GPDS_TRANSFER_CAUSE_ATTACHED             0x02
#define GPDS_TRANSFER_CAUSE_DETACHED             0x03
#define GPDS_TRANSFER_CAUSE_RESUMED              0x04
#define GPDS_TRANSFER_CAUSE_SUSPENDED_NO_COVERAGE 0x05

#if !GPDS_ISI_MIN_VERSION(15,0)
/* This cause is valid only till version 014.001 */
#define GPDS_TRANSFER_CAUSE_SUSPENDED_RAU_LU     0x06
#endif /* !GPDS_ISI_MIN_VERSION(15,0) */

#define GPDS_TRANSFER_CAUSE_SUSPENDED_CALL_SMS   0x07
#define GPDS_TRANSFER_CAUSE_SUSPENDED_CALL       0x08
/* This cause is valid only from version 015.000 */
#define GPDS_TRANSFER_CAUSE_SUSPENDED_RAU        0x09
/* This cause is valid only from version 015.000 */
#define GPDS_TRANSFER_CAUSE_SUSPENDED_LU         0x0A
/* This cause is valid only from version 017.023 */
#define GPDS_TRANSFER_CAUSE_DSAC_RESTRICTION     0x0B

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_DIRECTION                                          */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_DIRECTION_CONST;

#define GPDS_RADIO_UPLINK                        0x00
#define GPDS_RADIO_DOWNLINK                      0x01
#define GPDS_RADIO_BIDIRECTION                   0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_RADIO_STATUS                                       */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_RADIO_STATUS_CONST;

#define GPDS_RADIO_ON                            0x01
#define GPDS_RADIO_OFF                           0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_FORCED_READY_STATE                                 */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_FORCED_READY_STATE_CONST;

#define GPDS_FORCED_READY_STATE_OFF              0x00
#define GPDS_FORCED_READY_STATE_ON               0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_FOLLOW_ON_REQUEST_MODE                             */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_FOLLOW_ON_REQUEST_MODE_CONST;

#define GPDS_FOLLOW_OFF                          0x00
#define GPDS_FOLLOW_ON                           0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_PDP_TYPE                                           */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_PDP_TYPE_CONST;

#define GPDS_PDP_TYPE_PPP                        0x01
#define GPDS_PDP_TYPE_IPV4                       0x21
#define GPDS_PDP_TYPE_IPV6                       0x57
#define GPDS_PDP_TYPE_IPV4V6                     0x78
#define GPDS_PDP_TYPE_DEFAULT                    0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_AOL_CONTEXT - Valid from version 015.001           */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_AOL_CONTEXT_CONST;

/* Always online PDP context functionality not active */
#define GPDS_AOL_CTX_NOT_ACTIVE                  0x00
/* Always online PDP context functionality active in home PLMN */
#define GPDS_AOL_CTX_HPLMN_ACTIVE                0x01
/* Always online PDP context functionality active in visited PLMN */
#define GPDS_AOL_CTX_VPLMN_ACTIVE                0x02
/* Always online PDP context functionality always active */
#define GPDS_AOL_CTX_ACTIVE                      0x03
/* Keep existing always online PDP context mode */
#define GPDS_AOL_CTX_DEFAULT                     0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_RESOURCE_CONTROL_RESULT - Valid from version 017.025 */
/* ----------------------------------------------------------------------- */
/* GPRS call control result */
typedef uint8 GPDS_RESOURCE_CONTROL_RESULT_CONST;

#define GPDS_ALLOWED                             0x01
#define GPDS_MODIFIED                            0x02
#define GPDS_REJECTED                            0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_RESOURCE_CONF_OPERATION - Valid from version 017.025 */
/* ----------------------------------------------------------------------- */
/* GPRS resource configuration operation */
typedef uint8 GPDS_RESOURCE_CONF_OPERATION_CONST;

#define GPDS_RESOURCE_CONF_GET                   0x01
#define GPDS_RESOURCE_CONF_SET                   0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_RESOURCE_CONF_STATUS - Valid from version 017.025  */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_RESOURCE_CONF_STATUS_CONST;

/* Sent when GPDS starts up. */
#define GPDS_RESOURCE_CONF_READY                 0x01
#define GPDS_RESOURCE_CONF_RECONFIGURED          0x02

/* ----------------------------------------------------------------------- */
/* Bitmask Table: GPDS_RESOURCE_IDS - Valid from version 017.025           */
/* ----------------------------------------------------------------------- */
typedef uint16 GPDS_RESOURCE_IDS_CONST;

#define GPDS_RES_ID_CC_FOR_GPRS                  0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: GPDS_RESOURCE_IDS_MASK - Valid from version 017.025      */
/* ----------------------------------------------------------------------- */
typedef uint16 GPDS_RESOURCE_IDS_MASK_CONST;

#define GPDS_RES_ID_MASK_CC_FOR_GPRS             0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: GPDS_RESOURCE_IDS_CONF_REQ - Valid from version 017.025  */
/* ----------------------------------------------------------------------- */
typedef uint16 GPDS_RESOURCE_IDS_CONF_REQ_CONST;

#define GPDS_RES_ID_CONF_CC_FOR_GPRS             0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_DATA_COUNTER_SETTINGS - Valid from version 019.002 */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_DATA_COUNTER_SETTINGS_CONST;

/* Keep existing data counter settings */
#define GPDS_DATA_COUNTER_SETTING_DEFAULT        0x00
/* Change update interval time setting */
#define GPDS_DATA_COUNTER_SETTING_TIME           0x01
/* Change update interval data counter setting */
#define GPDS_DATA_COUNTER_SETTING_TRANSFER       0x02
/* Change update interval time and data counter setting */
#define GPDS_DATA_COUNTER_SETTING_BOTH           0x03

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define GPDS_LL_CONFIGURE_REQ                    0x00
#define GPDS_LL_CONFIGURE_RESP                   0x01
#define GPDS_CONTEXT_ID_CREATE_REQ               0x02
#define GPDS_CONTEXT_ID_CREATE_RESP              0x03
#define GPDS_CONTEXT_ID_CREATE_IND               0x04
#define GPDS_CONTEXT_ID_DELETE_IND               0x05
#define GPDS_CONTEXT_CONFIGURE_REQ               0x06
#define GPDS_CONTEXT_CONFIGURE_RESP              0x07
#define GPDS_CONTEXT_ACTIVATE_REQ                0x08
#define GPDS_CONTEXT_ACTIVATE_RESP               0x09
#define GPDS_CONTEXT_ACTIVATE_IND                0x0A
#define GPDS_CONTEXT_DEACTIVATE_REQ              0x0B
#define GPDS_CONTEXT_DEACTIVATE_RESP             0x0C
#define GPDS_CONTEXT_DEACTIVATE_IND              0x0D
#define GPDS_CONTEXT_NWI_ACT_REQUEST_IND         0x0E
#define GPDS_CONTEXT_NWI_ACT_REJECT_REQ          0x0F
#define GPDS_CONTEXT_NWI_ACT_REJECT_RESP         0x10
#define GPDS_CONFIGURE_REQ                       0x11
#define GPDS_CONFIGURE_RESP                      0x12
#define GPDS_ATTACH_REQ                          0x13
#define GPDS_ATTACH_RESP                         0x14
#define GPDS_ATTACH_IND                          0x15
#define GPDS_DETACH_REQ                          0x16
#define GPDS_DETACH_RESP                         0x17
#define GPDS_DETACH_IND                          0x18
#define GPDS_STATUS_REQ                          0x19
#define GPDS_STATUS_RESP                         0x1A
#define GPDS_TRANSFER_STATUS_IND                 0x1E
#define GPDS_CONTEXT_ACTIVATE_FAIL_IND           0x1F
#define GPDS_LL_BIND_REQ                         0x20
#define GPDS_LL_BIND_RESP                        0x21
#define GPDS_CONTEXT_STATUS_REQ                  0x22
#define GPDS_CONTEXT_STATUS_RESP                 0x23
#define GPDS_CONTEXT_STATUS_IND                  0x24
#define GPDS_CONTEXT_ACTIVATING_IND              0x25
#define GPDS_CONTEXT_MODIFY_REQ                  0x2A
#define GPDS_CONTEXT_MODIFY_RESP                 0x2B
#define GPDS_CONTEXT_MODIFY_IND                  0x2C
#define GPDS_ATTACH_FAIL_IND                     0x2D
#define GPDS_CONTEXT_DEACTIVATING_IND            0x2F
#define GPDS_CONFIGURATION_INFO_REQ              0x30
#define GPDS_CONFIGURATION_INFO_RESP             0x31
#define GPDS_CONFIGURATION_INFO_IND              0x32
#define GPDS_CONTEXT_AUTH_REQ                    0x33
#define GPDS_CONTEXT_AUTH_RESP                   0x34
#define GPDS_RADIO_ACTIVITY_IND                  0x37
#define GPDS_FORCED_READY_STATE_REQ              0x38
#define GPDS_FORCED_READY_STATE_RESP             0x39
#define GPDS_CONTEXTS_CLEAR_REQ                  0x3A
#define GPDS_CONTEXTS_CLEAR_RESP                 0x3B
#define GPDS_RESOURCE_CONTROL_IND                0x50
#define GPDS_RESOURCE_CONTROL_REQ                0x51
#define GPDS_RESOURCE_CONTROL_RESP               0x52
#define GPDS_RESOURCE_CONF_IND                   0x53
#define GPDS_RESOURCE_CONF_REQ                   0x54
#define GPDS_RESOURCE_CONF_RESP                  0x55
#define GPDS_DATA_COUNTER_REQ                    0x58
#define GPDS_DATA_COUNTER_RESP                   0x59
#define GPDS_DATA_COUNTER_IND                    0x5A

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define GPDS_COMP_INFO                           0x00
#define GPDS_QOS_REQ_INFO                        0x01
#define GPDS_QOS_MIN_INFO                        0x02
#define GPDS_QOS_NEG_INFO                        0x03
#define GPDS_PDP_ADDRESS_INFO                    0x04
#define GPDS_APN_INFO                            0x05
#define GPDS_FILT_SRC_IPV4_ADDR_INFO             0x10
#define GPDS_FILT_SRC_IPV6_ADDR_INFO             0x20
#define GPDS_FILT_PROTOCOL_INFO                  0x30
#define GPDS_FILT_DST_PORT_INFO                  0x40
#define GPDS_FILT_DST_PORT_RANGE_INFO            0x41
#define GPDS_FILT_SRC_PORT_INFO                  0x50
#define GPDS_FILT_SRC_PORT_RANGE_INFO            0x51
#define GPDS_FILT_SPI_INFO                       0x60
#define GPDS_FILT_TOS_INFO                       0x70
#define GPDS_FILT_FLOW_LABEL_INFO                0x80
#define GPDS_TFT_FILTER_INFO                     0x0A
#define GPDS_TFT_INFO                            0x09
#define GPDS_QOS99_REQ_INFO                      0x06
#define GPDS_QOS99_MIN_INFO                      0x07
#define GPDS_QOS99_NEG_INFO                      0x08
#define GPDS_PDNS_ADDRESS_INFO                   0x0D
#define GPDS_SDNS_ADDRESS_INFO                   0x0E
#define GPDS_USERNAME_INFO                       0x0B
#define GPDS_PASSWORD_INFO                       0x0C
#define GPDS_DNS_ADDRESS_REQ_INFO                0x90
#define GPDS_CHALLENGE_INFO                      0x0F
#define GPDS_CONDITIONAL_DETACH_INFO             0xA0
#define GPDS_RESPONSE_INFO                       0x11
#define GPDS_ACTIVATE_PDP_CONTEXT_REQUEST        0xA4
#define GPDS_RESOURCE_CONF                       0xA5
#define GPDS_RESOURCE                            0xA3
#define GPDS_RESOURCE_CONF_REQUIRED              0xA6
#define GPDS_DATA_COUNTER_INFO                   0xA8

/* ----------------------------------------------------------------------- */
/* Shared file inclusion                                                   */
/* ----------------------------------------------------------------------- */

#include "gpds_shared_wm_isi.h"

/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_COMP_INFO                                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_DATA_COMPRESSION */
    uint8   data_compression;
    /* Values from the constant table GPDS_HEADER_COMPRESSION */
    uint8   header_compression;
    } GPDS_COMP_INFO_STR;

#define SIZE_GPDS_COMP_INFO_STR   sizeof(GPDS_COMP_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS_REQ_INFO                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   precedence;  /* Values from the constant table GPDS_PRECEDENCE */
    uint8   delay;        /* Values from the constant table GPDS_DELAY */
    /* Values from the constant table GPDS_RELIABILITY */
    uint8   reliability;
    /* Values from the constant table GPDS_PEAK_THROUGHPUT */
    uint8   peak_throughput;
    /* Values from the constant table GPDS_MEAN_THROUGHPUT */
    uint8   mean_throughput;
    uint8   pad;
    } GPDS_QOS_REQ_INFO_STR;

#define SIZE_GPDS_QOS_REQ_INFO_STR   sizeof(GPDS_QOS_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS_MIN_INFO                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   precedence;  /* Values from the constant table GPDS_PRECEDENCE */
    uint8   delay;        /* Values from the constant table GPDS_DELAY */
    /* Values from the constant table GPDS_RELIABILITY */
    uint8   reliability;
    /* Values from the constant table GPDS_PEAK_THROUGHPUT */
    uint8   peak_throughput;
    /* Values from the constant table GPDS_MEAN_THROUGHPUT */
    uint8   mean_throughput;
    uint8   pad;
    } GPDS_QOS_MIN_INFO_STR;

#define SIZE_GPDS_QOS_MIN_INFO_STR   sizeof(GPDS_QOS_MIN_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS_NEG_INFO                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   precedence;  /* Values from the constant table GPDS_PRECEDENCE */
    uint8   delay;        /* Values from the constant table GPDS_DELAY */
    /* Values from the constant table GPDS_RELIABILITY */
    uint8   reliability;
    /* Values from the constant table GPDS_PEAK_THROUGHPUT */
    uint8   peak_throughput;
    /* Values from the constant table GPDS_MEAN_THROUGHPUT */
    uint8   mean_throughput;
    uint8   pad;
    } GPDS_QOS_NEG_INFO_STR;

#define SIZE_GPDS_QOS_NEG_INFO_STR   sizeof(GPDS_QOS_NEG_INFO_STR)

typedef GPDS_QOS_NEG_INFO_STR GPDS_QOS_INFO_STR;

/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_PDP_ADDRESS_INFO                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad;
    uint8   addr_length;
    uint8   address[16];
    } GPDS_PDP_ADDRESS_INFO_STR;

#define SIZE_GPDS_PDP_ADDRESS_INFO_STR   (20*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_APN_INFO                                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   addr_length;
    char    apn_name[GPDS_MAX_APN_STRING_SIZE];
    uint8   pad1;
    } GPDS_APN_INFO_STR;

#define SIZE_GPDS_APN_INFO_STR   (3*sizeof(uint8) + \
        GPDS_MAX_APN_STRING_SIZE*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_SRC_IPV4_ADDR_INFO                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   ipv4_addr_mask;
    uint8   pad;
    uint8   ipv4_address[4];
    } GPDS_FILT_SRC_IPV4_ADDR_INFO_STR;

#define SIZE_GPDS_FILT_SRC_IPV4_ADDR_INFO_STR   \
        sizeof(GPDS_FILT_SRC_IPV4_ADDR_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_SRC_IPV6_ADDR_INFO                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   ipv6_addr_mask;
    uint8   pad;
    uint8   ipv6_address[16];
    } GPDS_FILT_SRC_IPV6_ADDR_INFO_STR;

#define SIZE_GPDS_FILT_SRC_IPV6_ADDR_INFO_STR   \
        sizeof(GPDS_FILT_SRC_IPV6_ADDR_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_PROTOCOL_INFO                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   protocol_id;
    uint8   pad;
    } GPDS_FILT_PROTOCOL_INFO_STR;

#define SIZE_GPDS_FILT_PROTOCOL_INFO_STR   \
        sizeof(GPDS_FILT_PROTOCOL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_DST_PORT_INFO                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  destination_port;
    } GPDS_FILT_DST_PORT_INFO_STR;

#define SIZE_GPDS_FILT_DST_PORT_INFO_STR   \
        sizeof(GPDS_FILT_DST_PORT_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_DST_PORT_RANGE_INFO                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  low_limit_dst_port_range;
    uint16  high_limit_dst_port_range;
    uint8   pad1;
    uint8   pad2;
    } GPDS_FILT_DST_PORT_RANGE_INFO_STR;

#define SIZE_GPDS_FILT_DST_PORT_RANGE_INFO_STR   \
        sizeof(GPDS_FILT_DST_PORT_RANGE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_SRC_PORT_INFO                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  source_port;
    } GPDS_FILT_SRC_PORT_INFO_STR;

#define SIZE_GPDS_FILT_SRC_PORT_INFO_STR   \
        sizeof(GPDS_FILT_SRC_PORT_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_SRC_PORT_RANGE_INFO                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  low_limit_src_port_range;
    uint16  high_limit_src_port_range;
    uint8   pad1;
    uint8   pad2;
    } GPDS_FILT_SRC_PORT_RANGE_INFO_STR;

#define SIZE_GPDS_FILT_SRC_PORT_RANGE_INFO_STR   \
        sizeof(GPDS_FILT_SRC_PORT_RANGE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_SPI_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    uint32  security_param_ind;
    } GPDS_FILT_SPI_INFO_STR;

#define SIZE_GPDS_FILT_SPI_INFO_STR   sizeof(GPDS_FILT_SPI_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_TOS_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   tos;
    uint8   tos_mask;
    } GPDS_FILT_TOS_INFO_STR;

#define SIZE_GPDS_FILT_TOS_INFO_STR   sizeof(GPDS_FILT_TOS_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_FILT_FLOW_LABEL_INFO                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    uint32  flow_label;
    } GPDS_FILT_FLOW_LABEL_INFO_STR;

#define SIZE_GPDS_FILT_FLOW_LABEL_INFO_STR   \
        sizeof(GPDS_FILT_FLOW_LABEL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_TFT_FILTER_INFO                                          */
/* ----------------------------------------------------------------------- */
/* - There can not be more than one occurrence of each packet filter content
     subblock. Among the 'IPv4 source address type' and 'IPv6 source address
     type' packet filter components, only one shall be present in one packet
     filter. Among the 'single destination port type' and 'destination port
     range type' packet filter components, only one shall be present in one
     packet filter. Among the 'single source port type' and 'source port
     range type' packet filter components, only one shall be present in one
     packet filter. Therefore the maximum length of this subblock is 68
     bytes.
   - There can also be zero occurrence of packet filter content subblocks
     when the TFT operation is GPDS_TFT_DELETE_PACKET_FILTERS.
   - The Packet Filter Identifier and Filter Evaluation Precedence must be
     unique among different GPDS_TFT_PACKET_FILTER_INFOs inside
     GPDS_TFT_INFO. 
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   packet_filter_id;
    uint8   filter_eval_prec;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_subblocks;
    uint8   sub_block_data[GPDS_MAX_TFT_INFO_SB_DATA];
    /* Subblock list:
       GPDS_FILT_DST_PORT_INFO
       GPDS_FILT_DST_PORT_RANGE_INFO
       GPDS_FILT_FLOW_LABEL_INFO
       GPDS_FILT_PROTOCOL_INFO
       GPDS_FILT_SPI_INFO
       GPDS_FILT_SRC_IPV4_ADDR_INFO
       GPDS_FILT_SRC_IPV6_ADDR_INFO
       GPDS_FILT_SRC_PORT_INFO
       GPDS_FILT_SRC_PORT_RANGE_INFO
       GPDS_FILT_TOS_INFO
    */
    } GPDS_TFT_FILTER_INFO_STR;

#define SIZE_GPDS_TFT_FILTER_INFO_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_TFT_INFO                                                 */
/* ----------------------------------------------------------------------- */
/* 
   - The maximum length of this subblock (256 bytes) limits the number of the
     packet filter subblocks. E.g there can be only 3 packet filters if
     maximum size packet filters are used.
   - There can also be zero occurrence of packet filter subblocks when the
     TFT operation is GPDS_TFT_DELETE_EXISTING or GPDS_TFT_NO_OPERATION.For
     all other operations, the number of packet filters shall be greater than
     0 and less than or equal to 8.
   - The subblocks GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO and
     GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO is optional. These subblocks are
     only required when using Rel5 IMS features. 
   - The subblock GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO must be followed
     by one or more GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO subblocks as
     illustrated in example below. The subblock
     GPDS_SHARED_TFT_PACKET_FILTER_INFO in the message can be ordered in any
     way and can also be placed between
     GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO and
     GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO. 
   GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO (this is authentication for flow
   1)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
   (1)GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO (this is authentication for
   flows 2 and 3)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
   (2)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO (3)
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_TFT_OPERATION */
    uint8   tft_operation;
    uint8   number_of_subblocks;
    uint8   sub_block_data[GPDS_MAX_TFT_INFO_SB_DATA];
    /* Subblock list:
       GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO
       GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
       GPDS_TFT_FILTER_INFO
    */
    } GPDS_TFT_INFO_STR;

#define SIZE_GPDS_TFT_INFO_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS99_REQ_INFO                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_QOS99_REQ_INFO_STR;

#define SIZE_GPDS_QOS99_REQ_INFO_STR   sizeof(GPDS_QOS99_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS99_MIN_INFO                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_QOS99_MIN_INFO_STR;

#define SIZE_GPDS_QOS99_MIN_INFO_STR   sizeof(GPDS_QOS99_MIN_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_QOS99_NEG_INFO                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_QOS99_NEG_INFO_STR;

#define SIZE_GPDS_QOS99_NEG_INFO_STR   sizeof(GPDS_QOS99_NEG_INFO_STR)

typedef GPDS_QOS99_REQ_INFO_STR GPDS_QOS99_INFO_STR;

/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_PDNS_ADDRESS_INFO                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   addr_length;
    uint8   address[16];
    } GPDS_PDNS_ADDRESS_INFO_STR;

#define SIZE_GPDS_PDNS_ADDRESS_INFO_STR   (20*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SDNS_ADDRESS_INFO                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   addr_length;
    uint8   address[16];
    } GPDS_SDNS_ADDRESS_INFO_STR;

#define SIZE_GPDS_SDNS_ADDRESS_INFO_STR   (20*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_USERNAME_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   username_length;
    char    username[GPDS_MAX_USERNAME_SIZE];
    } GPDS_USERNAME_INFO_STR;

#define SIZE_GPDS_USERNAME_INFO_STR   (3*sizeof(uint8) + \
        GPDS_MAX_USERNAME_SIZE*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_PASSWORD_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   password_length;
    char    password[GPDS_MAX_PASSWORD_SIZE];
    } GPDS_PASSWORD_INFO_STR;

#define SIZE_GPDS_PASSWORD_INFO_STR   (3*sizeof(uint8) + \
        GPDS_MAX_PASSWORD_SIZE*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_DNS_ADDRESS_REQ_INFO - Valid from version 013.002        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    } GPDS_DNS_ADDRESS_REQ_INFO_STR;

#define SIZE_GPDS_DNS_ADDRESS_REQ_INFO_STR   \
        sizeof(GPDS_DNS_ADDRESS_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_CHALLENGE_INFO                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   challenge_length;
    char    challenge[GPDS_MAX_CHALLENGE_SIZE];
    } GPDS_CHALLENGE_INFO_STR;

#define SIZE_GPDS_CHALLENGE_INFO_STR   (3*sizeof(uint8) + \
        GPDS_MAX_CHALLENGE_SIZE*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_CONDITIONAL_DETACH_INFO - Valid from version 016.001     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    } GPDS_CONDITIONAL_DETACH_INFO_STR;

#define SIZE_GPDS_CONDITIONAL_DETACH_INFO_STR   \
        sizeof(GPDS_CONDITIONAL_DETACH_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_RESPONSE_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   identifier;
    uint8   response_length;
    char    response[GPDS_MAX_RESPONSE_SIZE];
    } GPDS_RESPONSE_INFO_STR;

#define SIZE_GPDS_RESPONSE_INFO_STR   (4*sizeof(uint8) + \
        GPDS_MAX_RESPONSE_SIZE*sizeof(char))

#define GPDS_MAX_SUB_BLOCK_DATA ((uint16)(sizeof(GPDS_APN_INFO_STR) + \
                                          sizeof(GPDS_PDP_ADDRESS_INFO_STR) + \
                                          sizeof(GPDS_COMP_INFO_STR) + \
                                          sizeof(GPDS_QOS99_REQ_INFO_STR) + \
                                          sizeof(GPDS_QOS99_MIN_INFO_STR) + \
                                          sizeof(GPDS_PDNS_ADDRESS_INFO_STR) + \
                                          sizeof(GPDS_SDNS_ADDRESS_INFO_STR) + \
                                          sizeof(GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO_STR) + \
                                          sizeof(GPDS_SHARED_PCSCF_ADDRESS_INFO_STR) + \
                                          sizeof(GPDS_SHARED_REL5_QOS_INFO_STR) + \
                                          sizeof(GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO_STR) + \
                                          sizeof(GPDS_SHARED_TFT_INFO_STR) ) )

/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_ACTIVATE_PDP_CONTEXT_REQUEST - Valid from version 017.025 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sb_id;
    uint8   fill1;
    uint16  sb_len;
    /* Length of the following activate PDP context request. */
    uint16  DataLength;
    uint8   Data[GPDS_ANY_SIZE];
    } GPDS_ACTIVATE_PDP_CONTEXT_REQUEST_MSG_STR;

#define GPDS_ACTIVATE_PDP_CONTEXT_REQUEST_FIXED_LEN   (2*sizeof(uint8) + \
        2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_RESOURCE_CONF - Valid from version 017.025               */
/* ----------------------------------------------------------------------- */
/* Resource mask and operation resources mask fields  are used to set what
   resources and operation resources are  configured in requests that are
   sent to GPDS.  GPDS does not change  the status of the resources which
   mask is set to zero.
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the bitmask table GPDS_RESOURCE_IDS */
    uint16  gpds_resource_id;
    /* Values from the bitmask table GPDS_RESOURCE_IDS_MASK */
    uint16  res_configuration;
    uint8   pad1;
    uint8   pad2;
    } GPDS_RESOURCE_CONF_STR;

#define SIZE_GPDS_RESOURCE_CONF_STR   sizeof(GPDS_RESOURCE_CONF_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_RESOURCE - Valid from version 017.025                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  res;        /* Values from the bitmask table GPDS_RESOURCE_IDS */
    } GPDS_RESOURCE_STR;

#define SIZE_GPDS_RESOURCE_STR   sizeof(GPDS_RESOURCE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_RESOURCE_CONF_REQUIRED - Valid from version 017.025      */
/* ----------------------------------------------------------------------- */
/* Resource configuration required field indicates for what resources the
   resource configuration is mandatory before resources are allowed. These
   settings are read from product profile. 
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    /* Values from the bitmask table GPDS_RESOURCE_IDS_CONF_REQ */
    uint16  res_pp;
    } GPDS_RESOURCE_CONF_REQUIRED_STR;

#define SIZE_GPDS_RESOURCE_CONF_REQUIRED_STR   \
        sizeof(GPDS_RESOURCE_CONF_REQUIRED_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_DATA_COUNTER_INFO - Valid from version 019.002           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   cid;
    uint8   pad1;
    uint8   rx_count[8];
    uint8   tx_count[8];
    } GPDS_DATA_COUNTER_INFO_STR;

#define SIZE_GPDS_DATA_COUNTER_INFO_STR   sizeof(GPDS_DATA_COUNTER_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_LL_CONFIGURE_REQ                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   pipe_handle;
    uint8   ppp_mode;     /* Values from the constant table GPDS_PPP_MODE */
    } GPDS_LL_CONFIGURE_REQ_STR;

#define SIZE_GPDS_LL_CONFIGURE_REQ_STR   sizeof(GPDS_LL_CONFIGURE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_LL_CONFIGURE_RESP                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_LL_CONFIGURE_RESP_STR;

#define SIZE_GPDS_LL_CONFIGURE_RESP_STR   sizeof(GPDS_LL_CONFIGURE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ID_CREATE_REQ                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_CONTEXT_ID_CREATE_REQ_STR;

#define SIZE_GPDS_CONTEXT_ID_CREATE_REQ_STR   \
        sizeof(GPDS_CONTEXT_ID_CREATE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ID_CREATE_RESP                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_CONTEXT_ID_CREATE_RESP_STR;

#define SIZE_GPDS_CONTEXT_ID_CREATE_RESP_STR   \
        sizeof(GPDS_CONTEXT_ID_CREATE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ID_CREATE_IND                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    } GPDS_CONTEXT_ID_CREATE_IND_STR;

#define SIZE_GPDS_CONTEXT_ID_CREATE_IND_STR   \
        sizeof(GPDS_CONTEXT_ID_CREATE_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ID_DELETE_IND                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    } GPDS_CONTEXT_ID_DELETE_IND_STR;

#define SIZE_GPDS_CONTEXT_ID_DELETE_IND_STR   \
        sizeof(GPDS_CONTEXT_ID_DELETE_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_LL_BIND_REQ                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   pipe_handle;
    } GPDS_LL_BIND_REQ_STR;

#define SIZE_GPDS_LL_BIND_REQ_STR   sizeof(GPDS_LL_BIND_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_LL_BIND_RESP                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_LL_BIND_RESP_STR;

#define SIZE_GPDS_LL_BIND_RESP_STR   sizeof(GPDS_LL_BIND_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_CONFIGURE_REQ                                     */
/* ----------------------------------------------------------------------- */
/* Among the shared sub blocks(defined in gpds_shared_isi_m.h) and normal sub
   blocks(defined in gpds_isi.h) defined for the same purpose, only one can
   be present in the message. Eg. Among GPDS_TFT_INFO and
   GPDS_SHARED_TFT_INFO, only one sub block can be present
*/

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   pdp_type;     /* Values from the constant table GPDS_PDP_TYPE */
    /* Values from the constant table GPDS_CONTEXT_TYPE */
    uint8   context_type;
    uint8   primary_cid;
    uint8   pad;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_COMP_INFO
       GPDS_DNS_ADDRESS_REQ_INFO
       GPDS_QOS99_MIN_INFO
       GPDS_QOS99_REQ_INFO
       GPDS_QOS_MIN_INFO
       GPDS_QOS_REQ_INFO
       GPDS_SHARED_APN_INFO
       GPDS_SHARED_COMP_INFO
       GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO
       GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO
       GPDS_SHARED_QOS99_MIN_INFO
       GPDS_SHARED_QOS99_REQ_INFO
       GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO
       GPDS_SHARED_REL5_QOS_INFO
       GPDS_SHARED_TFT_INFO
       GPDS_TFT_INFO
    */
    } GPDS_CONTEXT_CONFIGURE_REQ_STR;

#define SIZE_GPDS_CONTEXT_CONFIGURE_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_CONFIGURE_RESP                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_CONTEXT_CONFIGURE_RESP_STR;

#define SIZE_GPDS_CONTEXT_CONFIGURE_RESP_STR   \
        sizeof(GPDS_CONTEXT_CONFIGURE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_MODIFY_REQ                                        */
/* ----------------------------------------------------------------------- */
/* Among the shared sub blocks(defined in gpds_shared_isi_m.h) and normal sub
   blocks(defined in gpds_isi.h) defined for the same purpose, only one can
   be present in the message. Eg. Among GPDS_TFT_INFO and
   GPDS_SHARED_TFT_INFO, only one sub block can be present
*/

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_QOS99_MIN_INFO
       GPDS_QOS99_REQ_INFO
       GPDS_QOS_MIN_INFO
       GPDS_QOS_REQ_INFO
       GPDS_SHARED_QOS99_MIN_INFO
       GPDS_SHARED_QOS99_REQ_INFO
       GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO
       GPDS_SHARED_REL5_QOS_INFO
       GPDS_SHARED_TFT_INFO
       GPDS_TFT_INFO
    */
    } GPDS_CONTEXT_MODIFY_REQ_STR;

#define SIZE_GPDS_CONTEXT_MODIFY_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_MODIFY_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    uint8   pad1;
    uint8   pad2;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_QOS99_NEG_INFO
       GPDS_QOS_NEG_INFO
       GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO
       GPDS_SHARED_QOS99_NEG_INFO
       GPDS_SHARED_REL5_QOS_INFO
    */
    } GPDS_CONTEXT_MODIFY_RESP_STR;

#define SIZE_GPDS_CONTEXT_MODIFY_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_MODIFY_IND                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_COMP_INFO
       GPDS_QOS99_NEG_INFO
       GPDS_QOS_NEG_INFO
       GPDS_SHARED_COMP_INFO
       GPDS_SHARED_INITIAL_DL_DCH_RATE
       GPDS_SHARED_QOS99_NEG_INFO
       GPDS_SHARED_REL5_QOS_INFO
    */
    } GPDS_CONTEXT_MODIFY_IND_STR;

#define SIZE_GPDS_CONTEXT_MODIFY_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_REQ                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_PDP_ADDRESS_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_REQ_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_RESP                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    uint8   pad1;
    uint8   pad2;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_PDP_ADDRESS_INFO
       GPDS_QOS99_NEG_INFO
       GPDS_QOS_NEG_INFO
       GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO
       GPDS_SHARED_QOS99_NEG_INFO
       GPDS_SHARED_REL5_QOS_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_RESP_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_IND - Obsolete from version 017.025      */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(17,25)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_COMP_INFO
       GPDS_PDNS_ADDRESS_INFO
       GPDS_PDP_ADDRESS_INFO
       GPDS_QOS99_NEG_INFO
       GPDS_QOS_NEG_INFO
       GPDS_SDNS_ADDRESS_INFO
       GPDS_SHARED_COMP_INFO
       GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO
       GPDS_SHARED_INITIAL_DL_DCH_RATE
       GPDS_SHARED_PCSCF_ADDRESS_INFO
       GPDS_SHARED_QOS99_NEG_INFO
       GPDS_SHARED_REL5_QOS_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_IND_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_IND_STR   (4*sizeof(uint8))

#endif /* !GPDS_ISI_MIN_VERSION(17,25) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_IND - Valid from version 017.025         */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(17,25)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_COMP_INFO
       GPDS_PDNS_ADDRESS_INFO
       GPDS_PDP_ADDRESS_INFO
       GPDS_QOS99_NEG_INFO
       GPDS_QOS_NEG_INFO
       GPDS_SDNS_ADDRESS_INFO
       GPDS_SHARED_COMP_INFO
       GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO
       GPDS_SHARED_INITIAL_DL_DCH_RATE
       GPDS_SHARED_PCSCF_ADDRESS_INFO
       GPDS_SHARED_QOS99_NEG_INFO
       GPDS_SHARED_REL5_QOS_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_IND_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_IND_STR   (4*sizeof(uint8))

#endif /* GPDS_ISI_MIN_VERSION(17,25) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATING_IND                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* Values from the constant table GPDS_CLIENT_TYPE */
    uint8   client_type;
    uint8   pdp_type;     /* Values from the constant table GPDS_PDP_TYPE */
    /* Values from the constant table GPDS_CONTEXT_TYPE */
    uint8   context_type;
    uint8   pad;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
    */
    } GPDS_CONTEXT_ACTIVATING_IND_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATING_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_FAIL_IND - Obsolete from version 017.025 */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(17,25)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_FAIL_IND_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_FAIL_IND_STR   (8*sizeof(uint8))

#endif /* !GPDS_ISI_MIN_VERSION(17,25) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_ACTIVATE_FAIL_IND - Valid from version 017.025    */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(17,25)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO
    */
    } GPDS_CONTEXT_ACTIVATE_FAIL_IND_STR;

#define SIZE_GPDS_CONTEXT_ACTIVATE_FAIL_IND_STR   (8*sizeof(uint8))

#endif /* GPDS_ISI_MIN_VERSION(17,25) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_DEACTIVATE_REQ                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    } GPDS_CONTEXT_DEACTIVATE_REQ_STR;

#define SIZE_GPDS_CONTEXT_DEACTIVATE_REQ_STR   \
        sizeof(GPDS_CONTEXT_DEACTIVATE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_DEACTIVATE_RESP                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_CONTEXT_DEACTIVATE_RESP_STR;

#define SIZE_GPDS_CONTEXT_DEACTIVATE_RESP_STR   \
        sizeof(GPDS_CONTEXT_DEACTIVATE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_DEACTIVATE_IND                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
    */
    } GPDS_CONTEXT_DEACTIVATE_IND_STR;

#define SIZE_GPDS_CONTEXT_DEACTIVATE_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_DEACTIVATING_IND                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    } GPDS_CONTEXT_DEACTIVATING_IND_STR;

#define SIZE_GPDS_CONTEXT_DEACTIVATING_IND_STR   \
        sizeof(GPDS_CONTEXT_DEACTIVATING_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_NWI_ACT_REQUEST_IND                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   pdp_type;     /* Values from the constant table GPDS_PDP_TYPE */
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_APN_INFO
       GPDS_PDP_ADDRESS_INFO
    */
    } GPDS_CONTEXT_NWI_ACT_REQUEST_IND_STR;

#define SIZE_GPDS_CONTEXT_NWI_ACT_REQUEST_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_NWI_ACT_REJECT_REQ                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    } GPDS_CONTEXT_NWI_ACT_REJECT_REQ_STR;

#define SIZE_GPDS_CONTEXT_NWI_ACT_REJECT_REQ_STR   \
        sizeof(GPDS_CONTEXT_NWI_ACT_REJECT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_NWI_ACT_REJECT_RESP                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_CONTEXT_NWI_ACT_REJECT_RESP_STR;

#define SIZE_GPDS_CONTEXT_NWI_ACT_REJECT_RESP_STR   \
        sizeof(GPDS_CONTEXT_NWI_ACT_REJECT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURE_REQ - Obsolete from version 015.001             */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* Values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_context_act_mode;
    /* Values from the constant table GPDS_CLASSC_MODE */
    uint8   class_c_mode;
    } GPDS_CONFIGURE_REQ_STR;

#define SIZE_GPDS_CONFIGURE_REQ_STR   sizeof(GPDS_CONFIGURE_REQ_STR)

#endif /* !GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURE_REQ - Valid from version 015.001                */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* Values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_context_act_mode;
    /* Values from the constant table GPDS_CLASSC_MODE */
    uint8   class_c_mode;
    /* Values from the constant table GPDS_AOL_CONTEXT */
    uint8   aol_context;
    uint8   pad1;
    uint8   pad2;
    } GPDS_CONFIGURE_REQ_STR;

#define SIZE_GPDS_CONFIGURE_REQ_STR   sizeof(GPDS_CONFIGURE_REQ_STR)

#endif /* GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURE_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_CONFIGURE_RESP_STR;

#define SIZE_GPDS_CONFIGURE_RESP_STR   sizeof(GPDS_CONFIGURE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_ATTACH_REQ                                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_FOLLOW_ON_REQUEST_MODE */
    uint8   follow;
    } GPDS_ATTACH_REQ_STR;

#define SIZE_GPDS_ATTACH_REQ_STR   sizeof(GPDS_ATTACH_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_ATTACH_RESP                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    /* Values from the constant table GPDS_ATTACH_TYPE */
    uint8   attach_type;
    } GPDS_ATTACH_RESP_STR;

#define SIZE_GPDS_ATTACH_RESP_STR   sizeof(GPDS_ATTACH_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_ATTACH_IND                                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_ATTACH_TYPE */
    uint8   attach_type;
    } GPDS_ATTACH_IND_STR;

#define SIZE_GPDS_ATTACH_IND_STR   sizeof(GPDS_ATTACH_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_ATTACH_FAIL_IND                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    } GPDS_ATTACH_FAIL_IND_STR;

#define SIZE_GPDS_ATTACH_FAIL_IND_STR   sizeof(GPDS_ATTACH_FAIL_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DETACH_REQ - Obsolete from version 016.001                */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(16,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_DETACH_REQ_STR;

#define SIZE_GPDS_DETACH_REQ_STR   sizeof(GPDS_DETACH_REQ_STR)

#endif /* !GPDS_ISI_MIN_VERSION(16,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DETACH_REQ - Valid from version 016.001                   */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(16,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   pad1;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_CONDITIONAL_DETACH_INFO
    */
    } GPDS_DETACH_REQ_STR;

#define SIZE_GPDS_DETACH_REQ_STR   (4*sizeof(uint8))

#endif /* GPDS_ISI_MIN_VERSION(16,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DETACH_RESP                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    /* A subset of values from the constant table GPDS_DETACH_TYPE */
    uint8   detach_type;
    } GPDS_DETACH_RESP_STR;

#define SIZE_GPDS_DETACH_RESP_STR   sizeof(GPDS_DETACH_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DETACH_IND                                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cause;        /* Values from the constant table GPDS_CAUSE */
    /* Values from the constant table GPDS_DETACH_TYPE */
    uint8   detach_type;
    } GPDS_DETACH_IND_STR;

#define SIZE_GPDS_DETACH_IND_STR   sizeof(GPDS_DETACH_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_STATUS_REQ                                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_STATUS_REQ_STR;

#define SIZE_GPDS_STATUS_REQ_STR   sizeof(GPDS_STATUS_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_STATUS_RESP                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_ATTACH_STATUS */
    uint8   attach_status;
    uint8   context_count;
    uint32  tx_byte_count;
    uint32  rx_byte_count;
    /* Values from the constant table GPDS_TRANSFER_STATUS */
    uint8   transfer_status;
    /* Values from the constant table GPDS_TRANSFER_CAUSE */
    uint8   transfer_cause;
    uint8   cid_list[GPDS_MAX_CID_LIST_SIZE];
    } GPDS_STATUS_RESP_STR;

#define SIZE_GPDS_STATUS_RESP_STR   (\
        (6 + GPDS_MAX_CID_LIST_SIZE)*sizeof(uint8) + 2*sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_STATUS_REQ                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    } GPDS_CONTEXT_STATUS_REQ_STR;

#define SIZE_GPDS_CONTEXT_STATUS_REQ_STR   \
        sizeof(GPDS_CONTEXT_STATUS_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_STATUS_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    uint32  tx_byte_count;
    uint32  rx_byte_count;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_PDP_ADDRESS_INFO
    */
    } GPDS_CONTEXT_STATUS_RESP_STR;

#define SIZE_GPDS_CONTEXT_STATUS_RESP_STR   (8*sizeof(uint8) + \
        2*sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_STATUS_IND                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   pad;
    uint8   cid;
    uint32  tx_byte_count;
    uint32  rx_byte_count;
    } GPDS_CONTEXT_STATUS_IND_STR;

#define SIZE_GPDS_CONTEXT_STATUS_IND_STR   \
        sizeof(GPDS_CONTEXT_STATUS_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_TRANSFER_STATUS_IND                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   status; /* Values from the constant table GPDS_TRANSFER_STATUS */
    /* Values from the constant table GPDS_TRANSFER_CAUSE */
    uint8   transfer_cause;
    } GPDS_TRANSFER_STATUS_IND_STR;

#define SIZE_GPDS_TRANSFER_STATUS_IND_STR   \
        sizeof(GPDS_TRANSFER_STATUS_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURATION_INFO_REQ                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_CONFIGURATION_INFO_REQ_STR;

#define SIZE_GPDS_CONFIGURATION_INFO_REQ_STR   \
        sizeof(GPDS_CONFIGURATION_INFO_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURATION_INFO_RESP - Obsolete from version 015.001   */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* A subset of values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_act_mode;
    /* A subset of values from the constant table GPDS_CLASSC_MODE */
    uint8   classc_mode;
    } GPDS_CONFIGURATION_INFO_RESP_STR;

#define SIZE_GPDS_CONFIGURATION_INFO_RESP_STR   \
        sizeof(GPDS_CONFIGURATION_INFO_RESP_STR)

#endif /* !GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURATION_INFO_RESP - Valid from version 015.001      */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* A subset of values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_act_mode;
    /* A subset of values from the constant table GPDS_CLASSC_MODE */
    uint8   classc_mode;
    /* Values from the constant table GPDS_AOL_CONTEXT */
    uint8   aol_context;
    uint8   pad1;
    uint8   pad2;
    } GPDS_CONFIGURATION_INFO_RESP_STR;

#define SIZE_GPDS_CONFIGURATION_INFO_RESP_STR   \
        sizeof(GPDS_CONFIGURATION_INFO_RESP_STR)

#endif /* GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURATION_INFO_IND - Obsolete from version 015.001    */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* A subset of values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_act_mode;
    /* A subset of values from the constant table GPDS_CLASSC_MODE */
    uint8   classc_mode;
    } GPDS_CONFIGURATION_INFO_IND_STR;

#define SIZE_GPDS_CONFIGURATION_INFO_IND_STR   \
        sizeof(GPDS_CONFIGURATION_INFO_IND_STR)

#endif /* !GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONFIGURATION_INFO_IND - Valid from version 015.001       */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(15,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_ATTACH_MODE */
    uint8   attach_mode;
    /* A subset of values from the constant table GPDS_MT_ACT_MODE */
    uint8   mt_act_mode;
    /* A subset of values from the constant table GPDS_CLASSC_MODE */
    uint8   classc_mode;
    /* Values from the constant table GPDS_AOL_CONTEXT */
    uint8   aol_context;
    uint8   pad1;
    uint8   pad2;
    } GPDS_CONFIGURATION_INFO_IND_STR;

#define SIZE_GPDS_CONFIGURATION_INFO_IND_STR   \
        sizeof(GPDS_CONFIGURATION_INFO_IND_STR)

#endif /* GPDS_ISI_MIN_VERSION(15,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_AUTH_REQ                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    uint8   number_of_sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_CHALLENGE_INFO
       GPDS_PASSWORD_INFO
       GPDS_RESPONSE_INFO
       GPDS_USERNAME_INFO
    */
    } GPDS_CONTEXT_AUTH_REQ_STR;

#define SIZE_GPDS_CONTEXT_AUTH_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXT_AUTH_RESP                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   cid;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_CONTEXT_AUTH_RESP_STR;

#define SIZE_GPDS_CONTEXT_AUTH_RESP_STR   sizeof(GPDS_CONTEXT_AUTH_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RADIO_ACTIVITY_IND - Obsolete from version 014.001        */
/* ----------------------------------------------------------------------- */

#if !GPDS_ISI_MIN_VERSION(14,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   direction;    /* Values from the constant table GPDS_DIRECTION */
    uint8   status;    /* Values from the constant table GPDS_RADIO_STATUS */
    } GPDS_RADIO_ACTIVITY_IND_STR;

#define SIZE_GPDS_RADIO_ACTIVITY_IND_STR   \
        sizeof(GPDS_RADIO_ACTIVITY_IND_STR)

#endif /* !GPDS_ISI_MIN_VERSION(14,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RADIO_ACTIVITY_IND - Valid from version 014.001           */
/* ----------------------------------------------------------------------- */

#if GPDS_ISI_MIN_VERSION(14,1)

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   direction;    /* Values from the constant table GPDS_DIRECTION */
    uint8   status;    /* Values from the constant table GPDS_RADIO_STATUS */
    uint8   cid;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } GPDS_RADIO_ACTIVITY_IND_STR;

#define SIZE_GPDS_RADIO_ACTIVITY_IND_STR   \
        sizeof(GPDS_RADIO_ACTIVITY_IND_STR)

#endif /* GPDS_ISI_MIN_VERSION(14,1) */


/* ----------------------------------------------------------------------- */
/* Message: GPDS_FORCED_READY_STATE_REQ                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* Values from the constant table GPDS_FORCED_READY_STATE */
    uint8   state;
    } GPDS_FORCED_READY_STATE_REQ_STR;

#define SIZE_GPDS_FORCED_READY_STATE_REQ_STR   \
        sizeof(GPDS_FORCED_READY_STATE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_FORCED_READY_STATE_RESP                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_FORCED_READY_STATE_RESP_STR;

#define SIZE_GPDS_FORCED_READY_STATE_RESP_STR   \
        sizeof(GPDS_FORCED_READY_STATE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXTS_CLEAR_REQ                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_CONTEXTS_CLEAR_REQ_STR;

#define SIZE_GPDS_CONTEXTS_CLEAR_REQ_STR   \
        sizeof(GPDS_CONTEXTS_CLEAR_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_CONTEXTS_CLEAR_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    } GPDS_CONTEXTS_CLEAR_RESP_STR;

#define SIZE_GPDS_CONTEXTS_CLEAR_RESP_STR   \
        sizeof(GPDS_CONTEXTS_CLEAR_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONTROL_IND - Valid from version 017.025         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   sequence_id;
    uint8   sub_block_count;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* GPDS_ACTIVATE_PDP_CONTEXT_REQUEST subblock shall be present if and
       only if Resource is GPDS_CC_FOR_GPRS
       Subblock list:
       GPDS_ACTIVATE_PDP_CONTEXT_REQUEST
       GPDS_RESOURCE
    */
    } GPDS_RESOURCE_CONTROL_IND_STR;

#define SIZE_GPDS_RESOURCE_CONTROL_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONTROL_REQ - Valid from version 017.025         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   utid;
    uint8   msg_id;
    uint8   sequence_id;
    /* When performing Call Control for GPRS result will be one of:
       GPDS_ALLOWED, GPDS_MODIFIED or GPDS_REJECTED
       Values from the constant table GPDS_RESOURCE_CONTROL_RESULT
    */
    uint8   cc_result;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    /* GPDS_ACTIVATE_PDP_CONTEXT_REQUEST subblock shall be present if and
       only if Resource is GPDS_CC_FOR_GPRS and Result is GPDS_MODIFIED
    */
    uint8   sub_block_count;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_ACTIVATE_PDP_CONTEXT_REQUEST
       GPDS_RESOURCE
    */
    } GPDS_RESOURCE_CONTROL_REQ_STR;

#define SIZE_GPDS_RESOURCE_CONTROL_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONTROL_RESP - Valid from version 017.025        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   sequence_id;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    } GPDS_RESOURCE_CONTROL_RESP_STR;

#define SIZE_GPDS_RESOURCE_CONTROL_RESP_STR   \
        sizeof(GPDS_RESOURCE_CONTROL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONF_REQ - Valid from version 017.025            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GPDS_RESOURCE_CONF_OPERATION */
    uint8   conf_operation;
    uint8   sub_block_count;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_RESOURCE_CONF
    */
    } GPDS_RESOURCE_CONF_REQ_STR;

#define SIZE_GPDS_RESOURCE_CONF_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONF_RESP - Valid from version 017.025           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GPDS_RESOURCE_CONF_OPERATION */
    uint8   conf_operation;
    /* A subset of values from the constant table GPDS_STATUS */
    uint8   status;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   sub_block_count;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_RESOURCE
    */
    } GPDS_RESOURCE_CONF_RESP_STR;

#define SIZE_GPDS_RESOURCE_CONF_RESP_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_RESOURCE_CONF_IND - Valid from version 017.025            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GPDS_RESOURCE_CONF_STATUS */
    uint8   conf_status;
    uint8   sub_blocks;
    uint8   sub_block_data[GPDS_MAX_SUB_BLOCK_DATA];
    /* Subblock list:
       GPDS_RESOURCE
       GPDS_RESOURCE_CONF_REQUIRED
    */
    } GPDS_RESOURCE_CONF_IND_STR;

#define SIZE_GPDS_RESOURCE_CONF_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DATA_COUNTER_REQ - Valid from version 019.002             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GPDS_DATA_COUNTER_SETTINGS */
    uint8   conf_status;
    /* Values from the constant table GPDS_BOOLEAN_TYPE */
    uint8   omit_unnecessary_indications;
    /* The shortest possible time interval for GPDS_DATA_COUNTER_IND is one
       second and longest one day. Value GPDS_DISABLE can be given to disable
       periodic indication.
    */
    uint32  update_interval_time;
    /* The smallest possible data amount interval for GPDS_DATA_COUNTER_IND
       is 1 kilobyte and largest 1 gigabyte. Value GPDS_DISABLE can be given
       to disable data amount based indication.
    */
    uint32  update_interval_data_count;
    } GPDS_DATA_COUNTER_REQ_STR;

#define SIZE_GPDS_DATA_COUNTER_REQ_STR   sizeof(GPDS_DATA_COUNTER_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DATA_COUNTER_RESP - Valid from version 019.002            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint16  pad1;
    uint8   total_rx_count[8];
    uint8   total_tx_count[8];
    uint16  pad2;
    uint8   pad3;
    uint8   sub_block_count;
    /* Subblock list:
       GPDS_DATA_COUNTER_INFO
    */
    } GPDS_DATA_COUNTER_RESP_STR;

#define SIZE_GPDS_DATA_COUNTER_RESP_STR   (20*sizeof(uint8) + \
        2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: GPDS_DATA_COUNTER_IND - Valid from version 019.002             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint16  pad1;
    uint8   total_rx_count[8];
    uint8   total_tx_count[8];
    uint16  pad2;
    uint8   pad3;
    uint8   sub_block_count;
    /* Subblock list:
       GPDS_DATA_COUNTER_INFO
    */
    } GPDS_DATA_COUNTER_IND_STR;

#define SIZE_GPDS_DATA_COUNTER_IND_STR   (20*sizeof(uint8) + 2*sizeof(uint16))




#endif /* _GPDS_WM_ISI_H */
