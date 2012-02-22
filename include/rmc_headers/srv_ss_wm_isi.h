/*
RENESAS MOBILE                                                    CONFIDENTIAL
                  srv_ss_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            srv_ss_wm_isi.h

version:         014.004

type:            incl


ISI header file for Supplementary Services Server

Current   ISI Version : 014.004
Supported ISI Versions: 008.003, 008.004, 008.005, 009.000, 009.001, 009.002, 
                        010.000, 010.001, 010.002, 010.003, 010.004, 011.000, 
                        011.001, 011.002, 012.000, 013.000, 014.000, 014.001, 
                        014.002, 014.003, 014.004

Copyright (c) Renesas Mobile Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _SRV_SS_WM_ISI_H
#define _SRV_SS_WM_ISI_H

#include "isi_conf.h"

#ifndef SS_ISI_VERSION
#define SS_ISI_VERSION
#define SS_ISI_VERSION_Z  14
#define SS_ISI_VERSION_Y   4
#endif

#define SS_ISI_MIN_VERSION(z,y) \
 ((SS_ISI_VERSION_Z == (z) && SS_ISI_VERSION_Y >= (y)) || \
  (SS_ISI_VERSION_Z > (z)))

#if ((SS_ISI_VERSION_Z ==   1 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   2 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   3 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   3 && SS_ISI_VERSION_Y ==   1) || \
     (SS_ISI_VERSION_Z ==   3 && SS_ISI_VERSION_Y ==   2) || \
     (SS_ISI_VERSION_Z ==   3 && SS_ISI_VERSION_Y ==   3) || \
     (SS_ISI_VERSION_Z ==   3 && SS_ISI_VERSION_Y ==   4) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   1) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   2) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   3) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   4) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   5) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   6) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   7) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   8) || \
     (SS_ISI_VERSION_Z ==   4 && SS_ISI_VERSION_Y ==   9) || \
     (SS_ISI_VERSION_Z ==   5 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   6 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   7 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   8 && SS_ISI_VERSION_Y ==   0) || \
     (SS_ISI_VERSION_Z ==   8 && SS_ISI_VERSION_Y ==   1) || \
     (SS_ISI_VERSION_Z ==   8 && SS_ISI_VERSION_Y ==   2))
#error The specified interface version is no longer supported
#endif


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define MAX_USSD_LENGTH                          0xA0
#define ISI_MSG_OK                               0xFF
#define PASSWORD_LENGTH                          0x04
#define UNICODE_PASSWORD_LENGTH                  0x08
#define SS_UNDEFINED_TIME                        0x00
#define SS_UNKNOWN_NUMBER                        0x3F
/* constant for variable-length definitions */
#define SS_ANY_SIZE                              1

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_SS_CODES - Valid from version 001.000            */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP 22.030 /8/ */
typedef uint16 SS_GSM_SS_CODES_CONST;

#define SS_GSM_ALL_SS                            0x0000
#define SS_GSM_ALL_FORWARDINGS                   0x0002
#define SS_GSM_ALL_COND_FORWARDINGS              0x0004
#define SS_GSM_FORW_UNCONDITIONAL                0x0015
#define SS_GSM_FORW_BUSY                         0x0043
#define SS_GSM_FORW_NO_REPLY                     0x003D
#define SS_GSM_FORW_NO_REACH                     0x003E
#define SS_GSM_ALL_BARRINGS                      0x014A
#define SS_GSM_BARR_ALL_OUT                      0x0021
#define SS_GSM_BARR_OUT_INTER                    0x014B
#define SS_GSM_BARR_OUT_INTER_EXC_HOME           0x014C
#define SS_GSM_BARR_ALL_IN                       0x0023
#define SS_GSM_BARR_ALL_IN_ROAM                  0x015F
#define SS_GSM_OUTGOING_BARR_SERV                0x014D
#define SS_GSM_INCOMING_BARR_SERV                0x0161
#define SS_GSM_CALL_WAITING                      0x002B
#define SS_GSM_CLIP                              0x001E
#define SS_GSM_CLIR                              0x001F
#define SS_GSM_COLP                              0x004C
#define SS_GSM_COLR                              0x004D
#define SS_GSM_CNAP                              0x012C
#define SS_GSM_ECT                               0x0060

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_BASIC_SERVICE_CODES - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP 22.030 /8/ */
typedef uint8 SS_BASIC_SERVICE_CODES_CONST;

#define SS_ALL_TELE_AND_BEARER                   0x00
#define SS_GSM_ALL_TELE                          0x0A
#define SS_GSM_TELEPHONY                         0x0B
#define SS_GSM_ALL_DATA_TELE                     0x0C
#define SS_GSM_FACSIMILE                         0x0D
#define SS_GSM_SMS                               0x10
#define SS_GSM_VOICE_GROUP                       0x11
#define SS_GSM_ALL_TELE_EXC_SMS                  0x13
#define SS_GSM_ALL_PLMN_SPEC_TELE_SERV           0x32
#define SS_GSM_PLMN_SPEC_TELE_SERV_1             0x33
#define SS_GSM_PLMN_SPEC_TELE_SERV_2             0x34
#define SS_GSM_PLMN_SPEC_TELE_SERV_3             0x35
#define SS_GSM_PLMN_SPEC_TELE_SERV_4             0x36
#define SS_GSM_PLMN_SPEC_TELE_SERV_5             0x37
#define SS_GSM_PLMN_SPEC_TELE_SERV_6             0x38
#define SS_GSM_PLMN_SPEC_TELE_SERV_7             0x39
#define SS_GSM_PLMN_SPEC_TELE_SERV_8             0x3A
#define SS_GSM_PLMN_SPEC_TELE_SERV_9             0x3B
#define SS_GSM_PLMN_SPEC_TELE_SERV_A             0x3C
#define SS_GSM_PLMN_SPEC_TELE_SERV_B             0x3D
#define SS_GSM_PLMN_SPEC_TELE_SERV_C             0x3E
#define SS_GSM_PLMN_SPEC_TELE_SERV_D             0x3F
#define SS_GSM_PLMN_SPEC_TELE_SERV_E             0x40
#define SS_GSM_PLMN_SPEC_TELE_SERV_F             0x41
#define SS_GSM_AUX_TELEPHONY                     0x59
#define SS_GSM_ALL_BEARER                        0x14
#define SS_GSM_ALL_ASYNC                         0x15
#define SS_GSM_ALL_SYNC                          0x16
#define SS_GSM_ALL_DATA_CIRCUIT_SYNC             0x18
#define SS_GSM_ALL_DATA_CIRCUIT_ASYNC            0x19
#define SS_GSM_ALL_DATA_PACKET_SYNC              0x1A
#define SS_GSM_ALL_PAD_ACCESS                    0x1B
#define SS_GSM_ALL_PLMN_SPEC_BEAR_SERV           0x46
#define SS_GSM_PLMN_SPEC_BEAR_SERV_1             0x47
#define SS_GSM_PLMN_SPEC_BEAR_SERV_2             0x48
#define SS_GSM_PLMN_SPEC_BEAR_SERV_3             0x49
#define SS_GSM_PLMN_SPEC_BEAR_SERV_4             0x4A
#define SS_GSM_PLMN_SPEC_BEAR_SERV_5             0x4B
#define SS_GSM_PLMN_SPEC_BEAR_SERV_6             0x4C
#define SS_GSM_PLMN_SPEC_BEAR_SERV_7             0x4D
#define SS_GSM_PLMN_SPEC_BEAR_SERV_8             0x4E
#define SS_GSM_PLMN_SPEC_BEAR_SERV_9             0x4F
#define SS_GSM_PLMN_SPEC_BEAR_SERV_A             0x50
#define SS_GSM_PLMN_SPEC_BEAR_SERV_B             0x51
#define SS_GSM_PLMN_SPEC_BEAR_SERV_C             0x52
#define SS_GSM_PLMN_SPEC_BEAR_SERV_D             0x53
#define SS_GSM_PLMN_SPEC_BEAR_SERV_E             0x54
#define SS_GSM_PLMN_SPEC_BEAR_SERV_F             0x55
/* Used only when network response contains unknown basic service code. Not
   valid in SS_SERVICE_REQ.
*/
#define SS_UNKNOWN_SERVICE                       0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_ERROR_CODES - Valid from version 001.000         */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_GSM_ERROR_CODES_CONST;

/* Indicates that network uses unspecified error code. */
#define SS_GSM_UNKNOWN_ERROR                     0x00
/* See 3GPP TS 24.080 */
#define SS_GSM_UNKNOWN_SUBSCRIBER                0x01
/* See 3GPP TS 24.080 */
#define SS_GSM_ILLEGAL_SUBSCRIBER                0x09
/* See 3GPP TS 24.080 */
#define SS_GSM_BEARER_SERV_NOT_PROVISION         0x0A
/* See 3GPP TS 24.080 */
#define SS_GSM_TELE_SERV_NOT_PROVISION           0x0B
/* See 3GPP TS 24.080 */
#define SS_GSM_ILLEGAL_EQUIPMENT                 0x0C
/* See 3GPP TS 24.080 */
#define SS_GSM_CALL_BARRED                       0x0D
/* See 3GPP TS 24.080 */
#define SS_GSM_ILLEGEL_SS_OPERATION              0x10
/* See 3GPP TS 24.080 */
#define SS_GSM_SS_ERROR_STATUS                   0x11
/* See 3GPP TS 24.080 */
#define SS_GSM_SS_NOT_AVAILABLE                  0x12
/* See 3GPP TS 24.080 */
#define SS_GSM_SS_SUBSCRIPTION_VIOLATION         0x13
/* See 3GPP TS 24.080 */
#define SS_GSM_SS_INCOMPATIBILITY                0x14
/* See 3GPP TS 24.080 */
#define SS_GSM_FACILITY_NOT_SUPPORTED            0x15
/* See 3GPP TS 24.080 */
#define SS_GSM_ABSENT_SUBSCRIBER                 0x1B
/* See 3GPP TS 24.080 and 3GPP TS 29.002 */
#define SS_GSM_SHORT_TERM_DENIAL                 0x1D
/* See 3GPP TS 24.080 and 3GPP TS 29.002 */
#define SS_GSM_LONG_TERM_DENIAL                  0x1E
/* See 3GPP TS 24.080 */
#define SS_GSM_SYSTEM_FAILURE                    0x22
/* See 3GPP TS 24.080 */
#define SS_GSM_DATA_MISSING                      0x23
/* See 3GPP TS 24.080 */
#define SS_GSM_UNEXPECTED_DATA_VALUE             0x24
/* See 3GPP TS 24.080 */
#define SS_GSM_PASSWORD_REGIS_FAILURE            0x25
/* See 3GPP TS 24.080 */
#define SS_GSM_NEGATIVE_PASSWORD_CHECK           0x26
/* See 3GPP TS 24.080 */
#define SS_GSM_MAXNUM_OF_PW_ATT_VIOLATION        0x2B
/* See 3GPP TS 24.080 */
#define SS_GSM_UNKNOWN_ALPHABET                  0x47
/* See 3GPP TS 24.080 */
#define SS_GSM_USSD_BUSY                         0x48
/* Obsolete error code */
#define SS_GSM_NBR_SB_EXCEEDED                   0x78
/* Obsolete error code */
#define SS_GSM_MAXNUM_OF_MPTY_PART_EXCEED        0x7E
/* See 3GPP TS 24.080 */
#define SS_GSM_RESOURCES_NOT_AVAILABLE           0x7F

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_PROBLEM_TYPE - Valid from version 001.000            */
/* ----------------------------------------------------------------------- */
/* Problem types are defined in 3GPP TS 24.080 /5/ */
typedef uint8 SS_PROBLEM_TYPE_CONST;

#define SS_GSM_GENERAL_PROBLEM                   0x80
#define SS_GSM_INVOKE_PROBLEM                    0x81
#define SS_GSM_RETURN_RESULT_PROBLEM             0x82
#define SS_GSM_RETURN_ERROR_PROBLEM              0x83

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_GENERAL_PROBLEM - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 24.080 /5/ */
typedef uint8 SS_GSM_GENERAL_PROBLEM_CONST;

#define SS_GSM_UNRECOGNIZED_COMP                 0x00
#define SS_GSM_MISTYPED_COMP                     0x01
#define SS_GSM_BADLY_STRUCTURED_COMP             0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_INVOKE_PROBLEM - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 24.080 /5/ */
typedef uint8 SS_GSM_INVOKE_PROBLEM_CONST;

#define SS_GSM_DUPLICATE_INVOKE_ID               0x00
#define SS_GSM_UNRECOGNIZED_OPERATION            0x01
#define SS_GSM_MISTYPED_INVOKE_PARAMETER         0x02
#define SS_GSM_RECOURCE_LIMITATION               0x03
#define SS_GSM_INITIATING_RELEASE                0x04
#define SS_GSM_UNRECOGNIZED_LINKED_ID            0x05
#define SS_GSM_LINKED_RESPONSE_UNEXPECTED        0x06
#define SS_GSM_UNEXPECTED_LINKED_OPERATION       0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_RETURN_RESULT_PROBLEM - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 24.080 /5/ */
typedef uint8 SS_GSM_RETURN_RESULT_PROBLEM_CONST;

#define SS_GSM_UNRECOGNIZED_INVOKE_ID            0x00
#define SS_GSM_RETURN_RESULT_UNEXPECTED          0x01
#define SS_GSM_MISTYPED_RESP_PARAMETER           0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_RETURN_ERROR_PROBLEM - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 24.080 /5/ */
typedef uint8 SS_GSM_RETURN_ERROR_PROBLEM_CONST;

/* #define SS_GSM_UNRECOGNIZED_INVOKE_ID         0x00 (already defined) */
#define SS_GSM_RETURN_ERROR_UNEXPECTED           0x01
#define SS_GSM_UNRECOGNIZED_ERROR                0x02
#define SS_GSM_UNEXPECTED_ERROR                  0x03
#define SS_GSM_MISTYPED_ERR_PARAMETER            0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_OPERATION - Valid from version 001.000               */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 22.004  */
typedef uint8 SS_OPERATION_CONST;

#define SS_ACTIVATION                            0x01
#define SS_DEACTIVATION                          0x02
#define SS_REGISTRATION                          0x03
#define SS_ERASURE                               0x04
#define SS_INTERROGATION                         0x05
#define SS_GSM_PASSWORD_REGISTRATION             0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_CLI_RESTRICTION_OPTION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* See details from 3GPP TS 24.081  */
typedef uint8 SS_GSM_CLI_RESTRICTION_OPTION_CONST;

#define SS_GSM_CLI_PERMANENT                     0x00
#define SS_GSM_DEFAULT_RESTRICTED                0x01
#define SS_GSM_CLI_DEFAULT_ALLOWED               0x02
#define SS_GSM_OVERRIDE_ENABLED                  0x03
#define SS_GSM_OVERRIDE_DISABLED                 0x04
#define SS_PARAMETER_NOT_AVAILABLE               0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_GUIDANCE_INFO - Valid from version 001.000       */
/* ----------------------------------------------------------------------- */
/* Password error information is described in 3GPP TS 24.010 chapter 4. /6/
*/
typedef uint8 SS_GSM_GUIDANCE_INFO_CONST;

#define SS_GSM_BAD_PASSWORD                      0x01
#define SS_GSM_BAD_PASSWORD_FORMAT               0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_MESSAGE_ERRORS - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_GSM_MESSAGE_ERRORS_CONST;

/* Indicates that network response decoding fails or there is a conflict
   message streams between multiple MO and MT SS operations.
*/
#define SS_GSM_MSG_INCORRECT                     0x01
/* Obsolete error code */
#define SS_GSM_MSG_UNKNOWN_COMPONENT             0x02
/* Obsolete error code */
#define SS_GSM_MSG_INVALID_INVOKE_ID             0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_GSM_USSD_TYPES - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_GSM_USSD_TYPES_CONST;

#define SS_GSM_USSD_MT_REPLY                     0x01
#define SS_GSM_USSD_COMMAND                      0x02
#define SS_GSM_USSD_REQUEST                      0x03
#define SS_GSM_USSD_NOTIFY                       0x04
#define SS_GSM_USSD_END                          0x05
#define SS_GSM_USSD_END_PARSED                   0x06

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SS_STATUS - Valid from version 001.000                   */
/* ----------------------------------------------------------------------- */
/* SS status information is described in 3GPP 23.011  */
typedef uint8 SS_STATUS_CONST;

#define SS_GSM_ACTIVE                            0x01  /* -------1 */
#define SS_GSM_REGISTERED                        0x02  /* ------1- */
#define SS_GSM_PROVISIONED                       0x04  /* -----1-- */
#define SS_GSM_QUIESCENT                         0x08  /* ----1--- */

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_STATUS_INDICATIONS - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_STATUS_INDICATIONS_CONST;

#define SS_STATUS_REQUEST_SERVICE_START          0x00
#define SS_STATUS_REQUEST_SERVICE_STOP           0x01
#define SS_GSM_STATUS_REQUEST_USSD_START         0x02
#define SS_GSM_STATUS_REQUEST_USSD_STOP          0x03
#define SS_GSM_STATUS_REQUEST_USSD_FAILED        0x04
#define SS_STATUS_SERVICE_CANCELLED              0x05
#define SS_STATUS_REQUEST_SERVICE_BUSY           0x06
#define SS_STATUS_REQUEST_SERVICE_FAILED         0x07
#define SS_GSM_STATUS_REQUEST_USSD_BUSY          0x08
#define SS_STATUS_SERVICE_RELEASED               0x09

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_MISC_SS_ERRORS - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_MISC_SS_ERRORS_CONST;

/* Indicates that procedure is rejected because SS server is busy due to
   ongoing SS transaction 
*/
#define SS_SERVICE_BUSY                          0x00
/* Obsolete error code.  */
#define SS_GSM_MM_RELEASE                        0x01
/* Indicates that network has initiated Forward check SS indication
   procedure, see 3GPP TS 24.010 
*/
#define SS_GSM_DATA_ERROR                        0x02
/* Indicates that procedure is cancelled.  */
#define SS_GSM_REQUEST_CANCELLED                 0x04
/* Obslete error code.  */
#define SS_GSM_INDICATE_DEVICE_PASSWORD          0x05
/* Obsolete error code.  */
#define SS_GSM_ACTIVATION_DATA_LOST              0x09
/* Indicates that procedure is rejected because lower layer failure occurs
   during active connection
*/
#define SS_GSM_MM_ERROR                          0x0B
/* Indicates that procedure is rejected because SS operation MMI string is
   not in FDN list. 
*/
#define SS_GSM_SERVICE_NOT_ON_FDN_LIST           0x0C
/* Indicates that procedure is rejected because CS is inactive.  */
#define SS_CS_INACTIVE                           0x0F
/* #define SS_GSM_SS_NOT_AVAILABLE               0x12 (already defined) */
/* Indicates that procedure is rejected by resource controller.  */
#define SS_RESOURCE_CONTROL_DENIED               0x13
/* Indicates that procedure is rejected because resource control request
   syntax is not correct. 
*/
#define SS_RESOURCE_CONTROL_FAILURE              0x14
/* Indicates that procedure is rejected because resource control
   configuration is missing. 
*/
#define SS_RESOURCE_CONTROL_CONF_FAIL            0x15
/* #define SS_GSM_USSD_BUSY                      0x48 (already defined) */
/* Indicates that SS service request is released.  */
#define SS_SERVICE_REQUEST_RELEASED              0x16

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_REASON_VALUES - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_REASON_VALUES_CONST;

/* Indicates that procedure is rejected because request syntax is not valid. 
*/
#define SS_UNSPECIFIED_REASON                    0x00
/* Indicates that procedure is rejected because request contains invalid MMI
   code. 
*/
#define SS_UNKNOWN_MMI_SS_CODE                   0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SS_GMS_FORWARDING_OPTION - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
/* Note 1: The forwarding reason is expressed by the bit 2
   (SS_GSM_FORW_NOTIF_REASON_1) and the bit 3(SS_GSM_FORW_NOTIF_REASON_2)
   with the following values:
   00 Mobile station is not reachable
   01 Mobile station is busy
   10 No reply
   11 Unconditional
   
   See description of Forwarding options in 3GPP 29.002 /6/
*/
typedef uint8 SS_GMS_FORWARDING_OPTION_CONST;

#define SS_GSM_FORW_NOTIF_REASON_1               0x04  /* -----1-- */
#define SS_GSM_FORW_NOTIF_REASON_2               0x08  /* ----1--- */
#define SS_GSM_FORW_NOTIF_TO_CALLER              0x20  /* --1----- */
#define SS_GSM_FORW_NOTIF_TO_FORWARDING          0x80  /* 1------- */

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_NUMBER_PLAN - Valid from version 001.000             */
/* ----------------------------------------------------------------------- */
/* Number type consists of numbering plan and type of address. The four least
   significant bits (1-4)  contain numbering plan and the next three bits
   (5-7) contain type of number (see below). The most significant bit (8) is
   a spare bit and shall be ignored.
*/
#define SS_NBR_PLAN_UNKNOWN                      0x00
#define SS_NBR_PLAN_ISDN_TELEPHONY               0x01
#define SS_NBR_PLAN_DATA                         0x03
#define SS_NBR_PLAN_TELEX                        0x04
#define SS_NBR_PLAN_LAND_MOBILE                  0x06
#define SS_NBR_PLAN_NATIONAL                     0x08
#define SS_NBR_PLAN_PRIVATE                      0x09

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_NUMBER_TYPE - Valid from version 001.000             */
/* ----------------------------------------------------------------------- */
/* Number type consists of numbering plan and type of address. The four least
   significant bits (1-4)  contain numbering plan (see above) and the next
   three bits (5-7) contain type of number. The most significant bit (8) is a
   spare bit and shall be ignored.
*/
#define SS_NBR_TYPE_UNKNOWN                      0x00
#define SS_NBR_TYPE_INTERNATIONAL                0x01
#define SS_NBR_TYPE_NATIONAL                     0x02
#define SS_NBR_TYPE_NETWORK_SPECIFIC             0x03
#define SS_NBR_TYPE_SUBSCRIBER                   0x04
#define SS_NBR_TYPE_ALPHANUMERIC                 0x05
#define SS_NBR_TYPE_ABBREVIATED                  0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_MESSAGE_SENDER_INFORMATION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_MESSAGE_SENDER_INFORMATION_CONST;

/* ASN.1 coded return result data is not added to response */
#define SS_SEND_DECODED_DATA                     0x00
/* ASN.1 coded return result data is added to response */
#define SS_SEND_ADDITIONAL_INFO                  0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_MM_CAUSE_VALUES - Valid from version 001.000         */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_MM_CAUSE_VALUES_CONST;

/* Indicates that MM cause value is not received from network.  */
#define SS_GSM_MM_CAUSE_NO_CAUSE                 0x00
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_HLR_IMSI_UNKNOWN         0x02
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_ILLEGAL_MS               0x03
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_VLR_IMSI_UNKNOWN         0x04
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_IMEI_NOT_ACCEPTED        0x05
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_ILLEGAL_ME               0x06
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_PLMN_NOT_ALLOWED         0x0B
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_LA_NOT_ALLOWED           0x0C
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_ROAM_NOT_ALLOWED_LA      0x0D
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NO_SUITABLE_CELLS_LA     0x0F
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NETWORK_FAILURE          0x11
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_MAC_FAILURE              0x14
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_SYNC_FAILURE             0x15
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_CONGESTION               0x16
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_AUTH_UNACCEPTABLE        0x17
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NOT_SUPP_S_OPTION        0x20
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NOT_SUBS_S_OPTION        0x21
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_OUT_OF_ORDER_S_OPTION    0x22
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_CALL_NOT_IDENTIFIED      0x26
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_SEMANT_INCORRECT         0x5F
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_INV_MAND_INFORMATION     0x60
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NON_EXISTENT_MSG_TYPE    0x61
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NOT_COMP_MSG_TYPE        0x62
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_NOT_EXISTENT_IE          0x63
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_CONDITIONAL_IE_ERROR     0x64
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_MSG_NOT_COMPATIBLE       0x65
/* See details from 3GPP TS 24.008  */
#define SS_GSM_MM_CAUSE_PROTOCOL_ERROR           0x6F

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_FDN_CHECK_SUPPRESS_VALUES - Valid from version 010.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_FDN_CHECK_SUPPRESS_VALUES_CONST;

/* Fixed dialling number check is performed if enabled */
#define SS_NO_FDN_CHECK_SUPPRESS                 0x01
/* Fixed dialling number check is not performed  */
#define SS_FDN_CHECK_SUPPRESS                    0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_RESOURCE_CONTROL_SUPPRESS_VALUES - Valid from version 010.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_RESOURCE_CONTROL_SUPPRESS_VALUES_CONST;

/* Resource control is performed if enabled */
#define SS_NO_RESOURCE_CONTROL_SUPPRESS          0x01
/* Resource control is not performed */
#define SS_RESOURCE_CONTROL_SUPPRESS             0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_ERROR_ADDITIONAL_INDICATION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_ERROR_ADDITIONAL_INDICATION_CONST;

#define SS_DEFAULT_VALUE                         0x00  /* Default value */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SS_RESOURCE_IDS - Valid from version 010.000             */
/* ----------------------------------------------------------------------- */
typedef uint16 SS_RESOURCE_IDS_CONST;

#define SS_RES_ID_MO_SS_OPERATION                0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SS_RESOURCE_IDS_MASK - Valid from version 010.000        */
/* ----------------------------------------------------------------------- */
typedef uint16 SS_RESOURCE_IDS_MASK_CONST;

#define SS_RES_ID_MO_SS_OPERATION_MASK           0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SS_RESOURCE_IDS_CONF_REQ - Valid from version 010.000    */
/* ----------------------------------------------------------------------- */
typedef uint16 SS_RESOURCE_IDS_CONF_REQ_CONST;

#define SS_RES_ID_CONF_MO_SS_OPERATION           0x0001  /* ---------------1 */
#define SS_RES_ID_CONF_NOT_REQUIRED              0x0000  /* ---------------0 */

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_RESOURCE_STATUS                                      */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_RESOURCE_STATUS_CONST;

#define SS_RESOURCE_ALLOWED                      0x01
#define SS_RESOURCE_DENIED                       0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_RESOURCE_CONF_OPERATION - Valid from version 010.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_RESOURCE_CONF_OPERATION_CONST;

#define SS_RESOURCE_CONF_GET                     0x01
#define SS_RESOURCE_CONF_SET                     0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_RESOURCE_CONF_STATUS - Valid from version 010.000    */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_RESOURCE_CONF_STATUS_CONST;

/* Sent when Modem SS Server starts up. */
#define SS_RESOURCE_CONF_READY                   0x01
/* Sent when Modem SS Server resource control configuration is changed . */
#define SS_RESOURCE_CONF_RECONFIGURED            0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SS_RELEASE_REQ_RESULT - Valid from version 013.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 SS_RELEASE_REQ_RESULT_CONST;

#define SS_RELEASE_OPERATION_OK                  0x01
#define SS_RELEASE_OPERATION_FAIL                0x02

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define SS_SERVICE_REQ                           0x00
#define SS_SERVICE_COMPLETED_RESP                0x01
#define SS_SERVICE_FAILED_RESP                   0x02
#define SS_SERVICE_NOT_SUPPORTED_RESP            0x03
#define SS_GSM_USSD_SEND_REQ                     0x04
#define SS_GSM_USSD_SEND_RESP                    0x05
#define SS_GSM_USSD_RECEIVE_IND                  0x06
#define SS_STATUS_IND                            0x09
#define SS_SERVICE_COMPLETED_IND                 0x10
#define SS_CANCEL_REQ                            0x11
#define SS_CANCEL_RESP                           0x12
#define SS_RELEASE_REQ                           0x15
#define SS_RELEASE_RESP                          0x16
#define SS_RESOURCE_CONTROL_IND                  0x21
#define SS_RESOURCE_CONTROL_REQ                  0x22
#define SS_RESOURCE_CONTROL_RESP                 0x23
#define SS_RESOURCE_CONF_IND                     0x24
#define SS_RESOURCE_CONF_REQ                     0x25
#define SS_RESOURCE_CONF_RESP                    0x26

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define SS_FORWARDING                            0x00
#define SS_GSM_PASSWORD                          0x03
#define SS_STATUS_RESULT                         0x01
#define SS_GSM_FORWARDING_FEATURE                0x05
#define SS_GSM_FORWARDING_INFO                   0x04
#define SS_GSM_BARRING_FEATURE                   0x07
#define SS_GSM_BARRING_INFO                      0x06
#define SS_GSM_BSC_INFO                          0x09
#define SS_GSM_DATA                              0x08
#define SS_GSM_CLIR_INFO                         0x0C
#define SS_GSM_GENERIC_SERVICE_INFO              0x0A
#define SS_GSM_PASSWORD_INFO                     0x0B
#define SS_GSM_INDICATE_PASSWORD_ERROR           0x0D
#define SS_GSM_INDICATE_ERROR                    0x0E
#define SS_GSM_INDICATE_PROBLEM                  0x0F
#define SS_GSM_INDICATE_MSG_ERROR                0x10
#define SS_OTHER_ERROR                           0x02
#define SS_GSM_ADDITIONAL_INFO                   0x2F
#define SS_GSM_ADDITIONAL_ERROR_INFO             0x2E
#define SS_GSM_MM_RELEASED                       0x30
#define SS_GSM_USSD_STRING                       0x32
#define SS_SB_RESOURCE                           0x41
#define SS_SB_RESOURCE_SEQ_ID                    0x42
#define SS_SB_SS_CONTROL                         0x44
#define SS_SB_USSD_CONTROL                       0x45
#define SS_SB_RESOURCE_STATUS                    0x43
#define SS_SB_RESOURCE_CONTROL_INFO              0x46
#define SS_SB_CHECK_INFO                         0x47
#define SS_SB_RESOURCE_CONF_REQUIRED             0x48
#define SS_SB_RESOURCE_CONF                      0x49

/* ----------------------------------------------------------------------- */
/* Subblock: SS_FORWARDING - Valid from version 001.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* 6 + 2*N + M + Fill bytes */
    /* xxxx----  Number type
       ----xxxx  Number plan
    */
    uint8   type_of_number;
    /* Valid values are 5 | 10 | 15 | 20 | 25 | 30 | SS_UNDEFINED_TIME */
    uint8   no_reply_time;
    /* Number of UNICODE characters carrying information in 'number' field */
    uint8   number_length;
    uint8   sub_address_length; /* Number of bytes in Sub address. */
    /* 'Forwarded to'-number in UNICODE-format
       Possible values for number string are digits '0', '1', '2', '3', '4',
       '5', '6', '7', '8', '9', '*', '#', 'a', 'b' and 'c'
    */
    uint8   number[SS_ANY_SIZE];
    /* Sub address in GSM format, 3GPP TS 24.080. Meaning Type of sub address
       followed by Subaddress information.
    */
    uint8   sub_address[SS_ANY_SIZE];
    } SS_FORWARDING_STR;

#define SIZE_SS_FORWARDING_STR   (6*sizeof(uint8))

#define SIZE_SS_FORWARDING_FIXED   SIZE_SS_FORWARDING_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_PASSWORD - Valid from version 001.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Old password in UNICODE format
       Possible values for password string are digits '0', '1', '2', '3',
       '4', '5', '6', '7', '8', '9'
    */
    uint8   old_password[UNICODE_PASSWORD_LENGTH];
    /* New password in UNICODE format
       Possible values for password string are digits '0', '1', '2', '3',
       '4', '5', '6', '7', '8', '9'
    */
    uint8   new_password1[UNICODE_PASSWORD_LENGTH];
    /* New password in UNICODE format
       Possible values for password string are digits '0', '1', '2', '3',
       '4', '5', '6', '7', '8', '9'
    */
    uint8   new_password2[UNICODE_PASSWORD_LENGTH];
    uint8   fill_byte[2];
    } SS_GSM_PASSWORD_STR;

#define SIZE_SS_GSM_PASSWORD_STR   sizeof(SS_GSM_PASSWORD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_STATUS_RESULT - Valid from version 001.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   ss_status;    /* Values from the bitmask table SS_STATUS */
    uint8   fill_byte;
    } SS_STATUS_RESULT_STR;

#define SIZE_SS_STATUS_RESULT   sizeof(SS_STATUS_RESULT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_FORWARDING_FEATURE - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* 10 + 2*N + M + Fill bytes */
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code;
    uint8   ss_status;    /* Values from the bitmask table SS_STATUS */
    /* xxxx----  Number type
       ----xxxx  Number plan
    */
    uint8   type_of_number;
    /* Valid values are 5 | 10 | 15 | 20 | 25 | 30 | SS_UNDEFINED_TIME */
    uint8   no_reply_time;
    /* Values from the bitmask table SS_GMS_FORWARDING_OPTION */
    uint8   forwarding_option;
    uint8   number_length;
    uint8   sub_address_length;
    uint8   fill_byte;
    /* 'Forwarded to'-number in UNICODE-format */
    uint8   number[SS_ANY_SIZE];
    /* Sub address in GSM format, 3GPP TS 24.080. Meaning Type of sub address
       followed by Subaddress information.
    */
    uint8   sub_address[SS_ANY_SIZE];
    } SS_GSM_FORWARDING_FEATURE_STR;

#define SIZE_SS_GSM_FORWARDING_FEATURE_STR   (10*sizeof(uint8))

#define SIZE_SS_GSM_FORWARDING_FEATURE_FIXED   SIZE_SS_GSM_FORWARDING_FEATURE_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_FORWARDING_INFO - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* + sub blocks */
    uint8   fill_byte;
    uint8   sub_block_count;
    union
        {
        SS_GSM_FORWARDING_FEATURE_STR ss_gsm_forwarding_feature;
        } u;
    } SS_GSM_FORWARDING_INFO_STR;

#define SIZE_SS_GSM_FORWARDING_INFO_STR   (4*sizeof(uint8))

#define SIZE_SS_GSM_FORWARDING_INFO_FIXED   SIZE_SS_GSM_FORWARDING_INFO_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_BARRING_FEATURE - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code;
    uint8   ss_status;    /* Values from the bitmask table SS_STATUS */
    } SS_GSM_BARRING_FEATURE_STR;

#define SIZE_SS_GSM_BARRING_FEATURE   sizeof(SS_GSM_BARRING_FEATURE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_BARRING_INFO - Valid from version 001.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* + sub blocks */
    uint8   fill_byte;
    uint8   sub_block_count;
    union
        {
        SS_GSM_BARRING_FEATURE_STR ss_gsm_barring_feature;
        } u;
    } SS_GSM_BARRING_INFO_STR;

#define SIZE_SS_GSM_BARRING_INFO_STR   (4*sizeof(uint8))

#define SIZE_SS_GSM_BARRING_INFO_FIXED SIZE_SS_GSM_BARRING_INFO_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_BSC_INFO - Valid from version 001.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* 3 + N + Fill bytes */
    uint8   number_of_bsc;
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code[SS_ANY_SIZE];
    } SS_GSM_BSC_INFO_STR;

#define SIZE_SS_GSM_BSC_INFO_STR   (3*sizeof(uint8))

#define SIZE_SS_GSM_BSC_INFO_FIXED SIZE_SS_GSM_BSC_INFO_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_DATA - Valid from version 001.000                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* + sub blocks */
    uint8   ss_status;    /* Values from the bitmask table SS_STATUS */
    /* Values from the constant table SS_GSM_CLI_RESTRICTION_OPTION */
    uint8   subscription_option;
    uint8   fill_byte[3];
    uint8   sub_block_count;
    union
        {
        SS_GSM_BSC_INFO_STR ss_gsm_bsc_info;
        } u;
    } SS_GSM_DATA_STR;

#define SIZE_SS_GSM_DATA_STR   (8*sizeof(uint8))

#define SIZE_SS_GSM_DATA_FIXED SIZE_SS_GSM_DATA_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_CLIR_INFO - Valid from version 001.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* A subset of values from the constant table
       SS_GSM_CLI_RESTRICTION_OPTION
    */
    uint8   cli_restriction_option;
    uint8   fill_byte;
    } SS_GSM_CLIR_INFO_STR;

#define SIZE_SS_GSM_CLIR_INFO   sizeof(SS_GSM_CLIR_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_GENERIC_SERVICE_INFO - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length; /* + sub blocks */
    uint8   ss_status;    /* Values from the bitmask table SS_STATUS */
    uint8   sub_block_count;
    union
        {
        SS_GSM_CLIR_INFO_STR ss_gsm_clir_info;
        } u;
    } SS_GSM_GENERIC_SERVICE_INFO_STR;

#define SIZE_SS_GSM_GENERIC_SERVICE_INFO_STR   (4*sizeof(uint8))

#define SS_GSM_GENERIC_SERVICE_INFO_FIXED  SIZE_SS_GSM_GENERIC_SERVICE_INFO_STR

/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_PASSWORD_INFO - Valid from version 001.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   fill_byte[2];
    /* Password in ASCII format */
    uint8   password[PASSWORD_LENGTH];
    } SS_GSM_PASSWORD_INFO_STR;

#define SIZE_SS_GSM_PASSWORD_INFO   sizeof(SS_GSM_PASSWORD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_INDICATE_PASSWORD_ERROR - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_GSM_GUIDANCE_INFO */
    uint8   guidance_info;
    uint8   fill_byte;
    } SS_GSM_INDICATE_PASSWORD_ERROR_STR;

#define SIZE_SS_GSM_INDICATE_PASSWORD_ERROR   \
        sizeof(SS_GSM_INDICATE_PASSWORD_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_INDICATE_ERROR - Valid from version 001.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_GSM_ERROR_CODES */
    uint8   error_code;
    /* Default value is 0x00. Additional indication is not present.
       Values from the constant table SS_ERROR_ADDITIONAL_INDICATION
    */
    uint8   additional_indication;
    } SS_GSM_INDICATE_ERROR_STR;

#define SIZE_SS_GSM_INDICATE_ERROR   sizeof(SS_GSM_INDICATE_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_INDICATE_PROBLEM - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_PROBLEM_TYPE */
    uint8   problem_type;
    /* Values from the constant table SS_GSM_GENERAL_PROBLEM */
    uint8   problem_code;
    } SS_GSM_INDICATE_PROBLEM_STR;

#define SIZE_SS_GSM_INDICATE_PROBLEM   sizeof(SS_GSM_INDICATE_PROBLEM_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_INDICATE_MSG_ERROR - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_GSM_MESSAGE_ERRORS */
    uint8   message_error_code;
    uint8   fill_byte;
    } SS_GSM_INDICATE_MSG_ERROR_STR;

#define SIZE_SS_GSM_INDICATE_MSG_ERROR   \
        sizeof(SS_GSM_INDICATE_MSG_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_OTHER_ERROR - Valid from version 001.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_MISC_SS_ERRORS */
    uint8   error_code;
    uint8   fill_byte;
    } SS_OTHER_ERROR_STR;

#define SIZE_SS_OTHER_ERROR   sizeof(SS_OTHER_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_ADDITIONAL_INFO - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   return_result_len;
    /* First octet contains ASN.1 coded RETURN RESULT component operation
       code. Remaining octets contain ASN.1 coded RETURN RESULT component
       parameters. 
    */
    uint8   return_result[SS_ANY_SIZE];
    } SS_GSM_ADDITIONAL_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_ADDITIONAL_ERROR_INFO - Valid from version 014.002     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   return_error_len;
    /* First octet contains ASN.1 coded RETURN ERROR component error code.
       Remaining octets contain ASN.1 coded RETURN ERROR component
       parameters. 
    */
    uint8   return_error[SS_ANY_SIZE];
    } SS_GSM_ADDITIONAL_ERROR_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_MM_RELEASED - Valid from version 001.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   cause;    /* Values from the constant table SS_MM_CAUSE_VALUES */
    uint8   fill_byte;
    } SS_GSM_MM_RELEASED_STR;

#define SIZE_SS_GSM_MM_RELEASED   sizeof(SS_GSM_MM_RELEASED_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_GSM_USSD_STRING - Valid from version 001.000               */
/* ----------------------------------------------------------------------- */
/* In SS_GSM_USSD_STRING Sub Block Coding info includes the alphabet and
   language indicator informing the coding of the USSD string.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* See 3GPP TS 23.038 /7/ for further information of coding info. In the
       document /7/ Chapter 5 'Cell Broadcast Data Coding Scheme' is valid
       for coding info as used in this document.
    */
    uint8   coding_info;
    uint8   length_of_ussd_string; /* Number of bytes in USSD string */
    /* USSD string in bytes. String is not zero-terminated */
    uint8   ussd_string[SS_ANY_SIZE];
    } SS_GSM_USSD_STRING_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE - Valid from version 010.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint16  res;          /* Values from the bitmask table SS_RESOURCE_IDS */
    } SS_SB_RESOURCE_STR;

#define SIZE_SS_SB_RESOURCE_STR   sizeof(SS_SB_RESOURCE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE_SEQ_ID - Valid from version 010.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint8   sequence_id;
    uint8   fill_byte;
    } SS_SB_RESOURCE_SEQ_ID_STR;

#define SIZE_SS_SB_RESOURCE_SEQ_ID_STR   sizeof(SS_SB_RESOURCE_SEQ_ID_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_SS_CONTROL - Valid from version 010.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint8   ss_string_length; /* Length of SS MMI string in bytes. */
    char    ss_string[SS_ANY_SIZE];
    } SS_SB_SS_CONTROL_STR;

#define SIZE_SS_SB_SS_CONTROL_STR   (3*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_USSD_CONTROL - Valid from version 010.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    /* Coding of USSD string. See 3GPP TS 23.038 CBS Data Coding Sceme */
    uint8   Coding_info;
    /* Length of the following USSD string in bytes. */
    uint8   ussd_string_length;
    /* USSD string in bytes. String is not zero-terminated */
    uint8   ussd_string[SS_ANY_SIZE];
    } SS_SB_USSD_CONTROL_STR;

#define SIZE_SS_SB_USSD_CONTROL_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE_STATUS - Valid from version 010.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    /* Values from the constant table SS_RESOURCE_STATUS */
    uint8   res_status;
    uint8   padding;
    } SS_SB_RESOURCE_STATUS_STR;

#define SIZE_SS_SB_RESOURCE_STATUS_STR   sizeof(SS_SB_RESOURCE_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE_CONTROL_INFO - Valid from version 010.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint8   data_length;  /* Length resource control data. */
    /* Resource control data bytes. Data is not zero-terminated */
    uint8   data[SS_ANY_SIZE];
    } SS_SB_RESOURCE_CONTROL_INFO_STR;

#define SIZE_SS_SB_RESOURCE_CONTROL_INFO_STR   (3*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_CHECK_INFO - Valid from version 010.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SS_FDN_CHECK_SUPPRESS_VALUES */
    uint8   fdn_suppress_status;
    /* Values from the constant table SS_RESOURCE_CONTROL_SUPPRESS_VALUES */
    uint8   resource_control_status;
    } SS_SB_CHECK_INFO_STR;

#define SIZE_SS_SB_CHECK_INFO_STR   sizeof(SS_SB_CHECK_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE_CONF_REQUIRED - Valid from version 010.000     */
/* ----------------------------------------------------------------------- */
/* Resource configuration required field indicates for what resources the
   resource configuration is mandatory before resources are allowed. These
   settings are read from product profile. 
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    /* Values from the bitmask table SS_RESOURCE_IDS_CONF_REQ */
    uint16  res_pp;
    } SS_SB_RESOURCE_CONF_REQUIRED_STR;

#define SIZE_SS_SB_RESOURCE_CONF_REQUIRED_STR   \
        sizeof(SS_SB_RESOURCE_CONF_REQUIRED_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: SS_SB_RESOURCE_CONF - Valid from version 010.000              */
/* ----------------------------------------------------------------------- */
/* Resource mask and operation resources mask fields  are used to set what
   resources and operation resources are  configured in requests that are
   sent to SS server.  SS server does not change  the status of the resources
   which mask is set to zero.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint16  res;          /* Values from the bitmask table SS_RESOURCE_IDS */
    /* Values from the bitmask table SS_RESOURCE_IDS_MASK */
    uint16  res_mask;
    uint8   fill_byte1;
    uint8   fill_byte2;
    } SS_SB_RESOURCE_CONF_STR;

#define SIZE_SS_SB_RESOURCE_CONF_STR   sizeof(SS_SB_RESOURCE_CONF_STR)


/* ----------------------------------------------------------------------- */
/* Message: SS_SERVICE_REQ - Valid from version 004.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   operation;    /* Values from the constant table SS_OPERATION */
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code;
    uint8   ss_code[2];
    /* Values from the constant table SS_MESSAGE_SENDER_INFORMATION */
    uint8   response_data_to_send;
    uint8   sub_block_count;
    union
        {
        SS_FORWARDING_STR ss_forwarding;
        SS_GSM_PASSWORD_STR ss_gsm_password;
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_CHECK_INFO_STR ss_check_info;
#endif
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_RESOURCE_CONTROL_INFO_STR ss_resource_control_info;
#endif
        } u;
    } SS_SERVICE_REQ_STR;

#define SIZE_SS_SERVICE_REQ    0x08
#define SS_SERVICE_REQ_STR_LEN SIZE_SS_SERVICE_REQ

/* ----------------------------------------------------------------------- */
/* Message: SS_SERVICE_COMPLETED_RESP - Valid from version 006.000         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   operation;    /* Values from the constant table SS_OPERATION */
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code;
    uint8   ss_code[2];
    uint8   fillbyte2;
    uint8   sub_block_count;
    union
        {
        SS_GSM_FORWARDING_INFO_STR ss_gsm_forwarding_info;
        SS_GSM_BARRING_INFO_STR ss_gsm_barring_info;
        SS_GSM_PASSWORD_INFO_STR ss_gsm_password_info;
        SS_GSM_DATA_STR ss_gsm_data;
        SS_STATUS_RESULT_STR ss_status_result;
        SS_GSM_BSC_INFO_STR ss_gsm_bsc_info;
        SS_GSM_GENERIC_SERVICE_INFO_STR ss_gsm_generic_serv_info;
        SS_GSM_ADDITIONAL_INFO_STR ss_gsm_additional_info;
        } u;
    } SS_SERVICE_COMPLETED_RESP_STR;

#define SIZE_SS_SERVICE_COMPLETED_RESP    0x08
#define SS_SERVICE_COMPLETED_RESP_STR_LEN SIZE_SS_SERVICE_COMPLETED_RESP

/* ----------------------------------------------------------------------- */
/* Message: SS_SERVICE_COMPLETED_IND - Valid from version 006.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   operation;    /* Values from the constant table SS_OPERATION */
    /* Values from the constant table SS_BASIC_SERVICE_CODES */
    uint8   basic_service_code;
    uint8   ss_code[2];
    uint8   fillbyte2;
    uint8   sub_block_count;
    union
        {
        SS_GSM_FORWARDING_INFO_STR ss_gsm_forwarding_info;
        SS_GSM_BARRING_INFO_STR ss_gsm_barring_info;
        SS_GSM_PASSWORD_INFO_STR ss_gsm_password_info;
        SS_GSM_DATA_STR ss_gsm_data;
        SS_STATUS_RESULT_STR ss_status_result;
        SS_GSM_BSC_INFO_STR ss_gsm_bsc_info;
        SS_GSM_GENERIC_SERVICE_INFO_STR ss_gsm_generic_serv_info;
        SS_GSM_ADDITIONAL_INFO_STR ss_gsm_additional_info;
        } u;
    } SS_SERVICE_COMPLETED_IND_STR;


/* ----------------------------------------------------------------------- */
/* Message: SS_SERVICE_FAILED_RESP - Valid from version 001.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fillbyte;
    uint8   sub_block_count;
    union
        {
        SS_GSM_INDICATE_PASSWORD_ERROR_STR ss_gsm_indicate_password_error;
        SS_GSM_INDICATE_ERROR_STR ss_gsm_indicate_error;
        SS_GSM_INDICATE_PROBLEM_STR ss_gsm_indicate_problem;
        SS_GSM_INDICATE_MSG_ERROR_STR ss_gsm_indicate_msg_error;
        SS_OTHER_ERROR_STR ss_other_error;
        SS_GSM_MM_RELEASED_STR ss_gsm_mm_released;
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_RESOURCE_CONTROL_INFO_STR ss_resource_control_info;
#endif
#if SS_ISI_MIN_VERSION(14,2)
        SS_GSM_ADDITIONAL_ERROR_INFO_STR ss_gsm_additional_error_info;
#endif
        } u;
    } SS_SERVICE_FAILED_RESP_STR;

#define SIZE_SS_SERVICE_FAILED_RESP   (4*sizeof(uint8))

#define SS_SERVICE_FAILED_RESP_STR_LEN SIZE_SS_SERVICE_FAILED_RESP

/* ----------------------------------------------------------------------- */
/* Message: SS_SERVICE_NOT_SUPPORTED_RESP - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   reason;     /* Values from the constant table SS_REASON_VALUES */
    uint8   fill_byte;
    } SS_SERVICE_NOT_SUPPORTED_RESP_STR;

#define SIZE_SS_SERVICE_NOT_SUPPORTED_RESP   \
        sizeof(SS_SERVICE_NOT_SUPPORTED_RESP_STR)

#define SS_SERVICE_NOT_SUPPORTED_RESP_STR_LEN SIZE_SS_SERVICE_NOT_SUPPORTED_RESP

/* ----------------------------------------------------------------------- */
/* Message: SS_GSM_USSD_SEND_REQ - Valid from version 005.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SS_GSM_USSD_TYPES */
    uint8   ussd_type;
    uint8   sub_block_count;
    union
        {
        SS_GSM_USSD_STRING_STR ss_gsm_ussd_string;
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_CHECK_INFO_STR ss_check_info;
#endif
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_RESOURCE_CONTROL_INFO_STR ss_resource_control_info;
#endif
        } u;
    } SS_GSM_USSD_SEND_REQ_STR;

#define SIZE_SS_GSM_USSD_SEND_REQ    0x04
#define SS_GSM_USSD_SEND_REQ_LEN SIZE_SS_GSM_USSD_SEND_REQ

/* ----------------------------------------------------------------------- */
/* Message: SS_GSM_USSD_SEND_RESP - Valid from version 001.000             */
/* ----------------------------------------------------------------------- */
/* In SS_GSM_USSD_SEND_RESP message Coding info includes the alphabet and
   language indicator informing the coding of the USSD string.
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* See 3GPP TS 23.038 /7/ for further information of coding info. In the
       document /7/ chapter 5 'Cell Broadcast Data Coding Scheme' is valid
       for coding info as used in this document.
    */
    uint8   coding_info;
    /* A subset of values from the constant table SS_GSM_USSD_TYPES */
    uint8   ussd_type;
    uint8   length_of_ussd_string; /* Number of bytes in USSD string */
    /* USSD string in bytes. String is not zero-terminated */
    uint8   ussd_string[SS_ANY_SIZE];
    } SS_GSM_USSD_SEND_RESP_STR;

#define SIZE_SS_GSM_USSD_SEND_RESP_FIXED (5*sizeof(uint8))

/* ----------------------------------------------------------------------- */
/* Message: SS_GSM_USSD_RECEIVE_IND - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* See 3GPP TS 23.038 /7/ for further information of coding info. In the
       document /7/ chapter 5 'Cell Broadcast Data Coding Scheme' is valid
       for coding info as used in this document.
    */
    uint8   coding_info;
    /* A subset of values from the constant table SS_GSM_USSD_TYPES */
    uint8   ussd_type;
    uint8   length_of_ussd_string; /* Number of bytes in USSD string */
    /* USSD string in bytes. String is not zero-terminated */
    uint8   ussd_string[SS_ANY_SIZE];
    } SS_GSM_USSD_RECEIVE_IND_STR;

#define SIZE_SS_GSM_USSD_RECEIVE_IND_FIXED   (5*sizeof(uint8))

/* ----------------------------------------------------------------------- */
/* Message: SS_STATUS_IND - Valid from version 001.000                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SS_STATUS_INDICATIONS */
    uint8   ss_status_indication;
    uint8   sub_block_count;
    union
        {
        SS_GSM_INDICATE_PASSWORD_ERROR_STR ss_gsm_indicate_password_error;
        SS_GSM_INDICATE_ERROR_STR ss_gsm_indicate_error;
        SS_GSM_INDICATE_PROBLEM_STR ss_gsm_indicate_problem;
        SS_GSM_INDICATE_MSG_ERROR_STR ss_gsm_indicate_msg_error;
        SS_OTHER_ERROR_STR ss_other_error;
        SS_GSM_MM_RELEASED_STR ss_gsm_mm_released;
#if SS_ISI_MIN_VERSION(10,0)
        SS_SB_RESOURCE_CONTROL_INFO_STR ss_resource_control_info;
#endif
#if SS_ISI_MIN_VERSION(14,2)
        SS_GSM_ADDITIONAL_ERROR_INFO_STR ss_gsm_additional_error_info;
#endif
        } u;
    } SS_STATUS_IND_STR;

#define SIZE_SS_STATUS_IND   (4*sizeof(uint8))

#define SS_STATUS_IND_STR_LEN SIZE_SS_STATUS_IND

/* ----------------------------------------------------------------------- */
/* Message: SS_CANCEL_REQ - Valid from version 001.000                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte[2];
    } SS_CANCEL_REQ_STR;

#define SIZE_SS_CANCEL_REQ_STR   (4*sizeof(uint8))

#define SS_CANCEL_STR_LEN    SIZE_SS_CANCEL_REQ_STR

/* ----------------------------------------------------------------------- */
/* Message: SS_CANCEL_RESP - Valid from version 001.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte[2];
    } SS_CANCEL_RESP_STR;

#define SIZE_SS_CANCEL_RESP_STR   sizeof(SS_CANCEL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONTROL_IND - Valid from version 010.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte;
    uint8   sub_block_count;
    /* Subblock list:
       SS_SB_RESOURCE
       SS_SB_RESOURCE_SEQ_ID
       SS_SB_SS_CONTROL
       SS_SB_USSD_CONTROL
    */
    } SS_RESOURCE_CONTROL_IND_STR;

#define SIZE_SS_RESOURCE_CONTROL_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONTROL_REQ - Valid from version 010.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte;
    uint8   sub_block_count;
    /* Subblock list:
       SS_SB_RESOURCE
       SS_SB_RESOURCE_CONTROL_INFO
       SS_SB_RESOURCE_SEQ_ID
       SS_SB_RESOURCE_STATUS
       SS_SB_SS_CONTROL
       SS_SB_USSD_CONTROL
    */
    } SS_RESOURCE_CONTROL_REQ_STR;

#define SIZE_SS_RESOURCE_CONTROL_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONTROL_RESP - Valid from version 010.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte;
    uint8   sub_block_count;
    /* Subblock list:
       SS_OTHER_ERROR
       SS_SB_RESOURCE_SEQ_ID
    */
    } SS_RESOURCE_CONTROL_RESP_STR;

#define SIZE_SS_RESOURCE_CONTROL_RESP_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONF_REQ - Valid from version 010.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SS_RESOURCE_CONF_OPERATION */
    uint8   conf_operation;
    uint8   sub_block_count;
    /* Subblock list:
       SS_SB_RESOURCE_CONF
    */
    } SS_RESOURCE_CONF_REQ_STR;

#define SIZE_SS_RESOURCE_CONF_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONF_RESP - Valid from version 010.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SS_RESOURCE_CONF_OPERATION */
    uint8   conf_operation;
    uint8   sub_block_count;
    /* Subblock list:
       SS_OTHER_ERROR
       SS_SB_RESOURCE
    */
    } SS_RESOURCE_CONF_RESP_STR;

#define SIZE_SS_RESOURCE_CONF_RESP_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RESOURCE_CONF_IND - Valid from version 010.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SS_RESOURCE_CONF_STATUS */
    uint8   conf_status;
    uint8   sub_blocks;
    /* Subblock list:
       SS_SB_RESOURCE
       SS_SB_RESOURCE_CONF_REQUIRED
    */
    } SS_RESOURCE_CONF_IND_STR;

#define SIZE_SS_RESOURCE_CONF_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SS_RELEASE_REQ - Valid from version 013.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Transaction ID of the request that will be released. */
    uint8   req_tr_id;
    uint8   fill_byte;
    } SS_RELEASE_REQ_STR;

#define SIZE_SS_RELEASE_REQ_STR   sizeof(SS_RELEASE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: SS_RELEASE_RESP - Valid from version 013.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SS_RELEASE_REQ_RESULT */
    uint8   release_result;
    uint8   fill_byte;
    } SS_RELEASE_RESP_STR;

#define SIZE_SS_RELEASE_RESP_STR   sizeof(SS_RELEASE_RESP_STR)




#endif /* _SRV_SS_WM_ISI_H */
