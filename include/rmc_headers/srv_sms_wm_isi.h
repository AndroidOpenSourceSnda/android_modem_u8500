/*
NOKIA                                                             CONFIDENTIAL
                  srv_sms_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            srv_sms_wm_isi.h

version:         009.001

type:            incl


ISI header file for SMS Server

Current   ISI Version : 009.001
Supported ISI Versions: 003.000, 004.000, 004.001, 005.000, 005.001, 006.000, 
                        006.001, 007.000, 008.000, 008.001, 008.002, 008.003, 
                        008.004, 009.000, 009.001

Copyright (c) 2009 Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _SRV_SMS_WM_ISI_H
#define _SRV_SMS_WM_ISI_H

#include "isi_conf.h"

#ifndef SMS_ISI_VERSION
#define SMS_ISI_VERSION
#define SMS_ISI_VERSION_Z   9
#define SMS_ISI_VERSION_Y   1
#endif

#define SMS_ISI_MIN_VERSION(z,y) \
 ((SMS_ISI_VERSION_Z == (z) && SMS_ISI_VERSION_Y >= (y)) || \
  (SMS_ISI_VERSION_Z > (z)))

#if ((SMS_ISI_VERSION_Z ==   0 && SMS_ISI_VERSION_Y ==   1) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   0) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   1) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   2) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   3) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   4) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   5) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   6) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   7) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   8) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==   9) || \
     (SMS_ISI_VERSION_Z ==   1 && SMS_ISI_VERSION_Y ==  10) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   1) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   2) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   3) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   4) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   5) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   6) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   7) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   8) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==   9) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  10) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  11) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  12) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  13) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  14) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  15) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  16) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  17) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  18) || \
     (SMS_ISI_VERSION_Z ==   2 && SMS_ISI_VERSION_Y ==  19))
#error The specified interface version is no longer supported
#endif


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */


#if !SMS_ISI_MIN_VERSION(5,0)
#define SRV_SMS_MESSAGE_SPEC_VERSION 16
#define SMS_SUB_BLOCK_COMMON_FIELD \
    byte sub_block_id; \
    byte sub_block_length
 
#define SMS_COMMON_FIELD \
    byte trans_id; \
    byte message_id
/* See references 12 */
#define SMS_GSM_DELIVER_UD_MAX_LEN               0x8C
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_STATUSREP_UD_MAX_LEN             0x8F
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_SUBMIT_UD_MAX_LEN                0x8C
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_COMMAND_CD_MAX_LEN               0x9C
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_MT_UNDEFINED_MAX_LEN             0xE7
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_MO_UNDEFINED_MAX_LEN             0xE6
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_DELIVER_ACK_UD_MAX_LEN           0x9F
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_DELIVER_ERR_UD_MAX_LEN           0x9E
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_SUBMIT_ACK_UD_MAX_LEN            0x98
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_SUBMIT_ERR_UD_MAX_LEN            0x97
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_ADDRESS_MAX_LEN                  0x0C
#endif /* !SMS_ISI_MIN_VERSION(5,0) */

/* See references 12 */
#define SMS_GSM_PARAM_INDICATOR_MAX_LEN          0x0A

#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_TPDU_MAX_LEN                     0xE8
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
/* See references 12 */
#define SMS_GSM_LONG_SUBMIT_UD_MAX_LEN           0x857A
#endif /* !SMS_ISI_MIN_VERSION(5,0) */

/* See references 12 */
#define SMS_CONCATENATED_UD_MAX_LEN              0x857A
/* See references 12 */
#define SMS_ADDRESS_MAX_LEN                      0x0C
/* See references 12 */
#define SMS_DELIVER_UD_MAX_LEN                   0x8C
/* See references 12 */
#define SMS_STATUS_RPRT_UD_MAX_LEN               0x8F
/* See references 12 */
#define SMS_SUBMIT_UD_MAX_LEN                    0x8C
/* See references 12 */
#define SMS_COMMAND_DATA_MAX_LEN                 0x9C
/* See references 12 */
#define SMS_MT_UNDEFINED_MAX_LEN                 0xE7
/* See references 12 */
#define SMS_MO_UNDEFINED_MAX_LEN                 0xE6
/* See references 12 */
#define SMS_DELIVER_ACK_UD_MAX_LEN               0x9F
/* See references 12 */
#define SMS_DELIVER_ERR_UD_MAX_LEN               0x9E
/* See references 12 */
#define SMS_SUBMIT_ACK_UD_MAX_LEN                0x98
/* See references 12 */
#define SMS_SUBMIT_ERR_UD_MAX_LEN                0x97
/* See references 12 */
#define SMS_TPDU_MAX_LEN                         0xE8
/* constant for variable-length definitions */
#define SMS_ANY_SIZE                             0x01
/* Maximum length of service centre time stamp parameter. */
#define SMS_SC_TIME_STAMP_SIZE                   0x07
/* Maximum length of discharge time parameter. */
#define SMS_DISCHARGE_TIME_SIZE                  0x07
/* Maximum length of CB message parameter. */
#define SMS_CB_MESSAGE_CONTENT_SIZE              0x52

#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_SETTINGS_REPLYPATH                   0xFE
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_SETTINGS_CONFIRMATION_REQ            0xFD
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_SETTINGS_GPRS_ALLOWED                0xFB
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_SETTINGS_ALL                         0xF8
#endif /* !SMS_ISI_MIN_VERSION(5,0) */

/* Reply path setting */
#define SMS_SETTING_REPLY_PATH                   0x01
/* Reply path setting mask */
#define SMS_SETTING_REPLY_PATH_MASK              0xFE
/* Confirmation request setting */
#define SMS_SETTING_CONF_REQUEST                 0x02
/* Confirmation request setting mask */
#define SMS_SETTING_CONF_REQUEST_MASK            0xFD
/* Definition for all CB languages. */
#define SMS_ALL_LANGUAGES                        0x00

#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_ROUTE_ANY                            0x00
#endif /* !SMS_ISI_MIN_VERSION(5,0) */

/* TP-Failure-Cause values. See references 12 */
#define SMS_TP_FCS_TEL_INTERWRK_NOT_SUPPORTED    0x80
#define SMS_TP_FCS_SM_TYPE0_NOT_SUPPORTED        0x81
#define SMS_TP_FCS_CANNOT_REPLACE_SM             0x82
#define SMS_TP_FCS_UNSPECIFIED_PID_ERR           0x8F
#define SMS_TP_FCS_DCS_NOT_SUPPORTED             0x90
#define SMS_TP_FCS_MESSAGE_CLASS_NOT_SUPPORTED   0x91
#define SMS_TP_FCS_UNSPECIFIED_DCS_ERR           0x9F
#define SMS_TP_FCS_CMD_CANNOT_BE_ACTIONED        0xA0
#define SMS_TP_FCS_CMD_UNSUPPORTED               0xA1
#define SMS_TP_FCS_UNSPECIFIED_CMD_ERR           0xAF
#define SMS_TP_FCS_TPDU_NOT_SUPPORTED            0xB0
#define SMS_TP_FCS_SC_BUSY                       0xC0
#define SMS_TP_FCS_NO_SC_SUBSCRIPTION            0xC1
#define SMS_TP_FCS_SC_SYSTEM_FAILURE             0xC2
#define SMS_TP_FCS_INVALID_SME_ADDR              0xC3
#define SMS_TP_FCS_DEST_SME_BARRED               0xC4
#define SMS_TP_FCS_SM_REJECTED_DUPLICATE_SM      0xC5
#define SMS_TP_FCS_TP_VPF_NOT_SUPPORTED          0xC6
#define SMS_TP_FCS_TP_VP_NOT_SUPPORTED           0xC7
#define SMS_TP_FCS_SIM_STORAGE_FULL              0xD0
#define SMS_TP_FCS_NO_STORAGE_IN_SIM             0xD1
#define SMS_TP_FCS_ERROR_IN_MS                   0xD2
#define SMS_TP_FCS_MEM_CAP_EXCEEDED              0xD3
#define SMS_TP_FCS_SIM_ATK_BUSY                  0xD4
#define SMS_TP_FCS_SIM_DATA_DOWNLOAD_ERROR       0xD5
#define SMS_TP_FCS_UNSPECIFIED                   0xFF
/* TP-Message-Type-Indicator values. See references 12
   TP-Message-Type-Indicator mask B0000_0011
*/
#define SMS_TP_MTI_MASK                          0x03
#define SMS_TP_MTI_DELIVER                       0x00  /* B0000_0000 */
#define SMS_TP_MTI_DELIVER_REPORT                0x00  /* B0000_0000 */
#define SMS_TP_MTI_STATUS_REPORT                 0x02  /* B0000_0010 */
#define SMS_TP_MTI_COMMAND                       0x02  /* B0000_0010 */
#define SMS_TP_MTI_SUBMIT                        0x01  /* B0000_0001 */
#define SMS_TP_MTI_SUBMIT_REPORT                 0x01  /* B0000_0001 */
#define SMS_TP_MTI_UNDEFINED                     0x03  /* B0000_0011 */
/* TP-More-Messages-to-Send values. See references 12
   TP-More-Messages-to-Send mask value B0000_0100
*/
#define SMS_TP_MMS_MASK                          0x04
#define SMS_TP_MMS_MORE_MESSAGES                 0x00  /* B0000_0000 */
#define SMS_TP_MMS_NO_MORE_MESSAGES              0x04  /* B0000_0100 */
/* TP-Validity-Period-Format. See references 12
   TP-Validity-Period-Format mask B0001_1000
*/
#define SMS_TP_VPF_MASK                          0x18
#define SMS_TP_VPF_NOT_PRESENT                   0x00  /* B0000_0000 */
#define SMS_TP_VPF_RELATIVE_FORMAT               0x10  /* B0001_0000 */
#define SMS_TP_VPF_ENHANCED_FORMAT               0x08  /* B0000_1000 */
#define SMS_TP_VPF_ABSOLUTE_FORMAT               0x18  /* B0001_1000 */
/* TP-Validity-Period relative format related base values */
#define SMS_TP_VP_RF_WEEK_BASE_VALUE             0xC0
#define SMS_TP_VP_RF_DAY_BASE_VALUE              0xA6
#define SMS_TP_VP_RF_HOUR_BASE_VALUE             0x8F
/* TP-Status-Report-Indication. See references 12
   TP-Status-Report-Indication mask B0010_0000
*/
#define SMS_TP_SRI_MASK                          0x20
#define SMS_TP_SRI_NOT_RETURNED                  0x00  /* B0000_0000 */
#define SMS_TP_SRI_RETURNED                      0x20  /* B0010_0000 */
/* TP-Status-Report-Request. See references 12
   TP-Status-Report-Request mask B0010_0000
*/
#define SMS_TP_SRR_MASK                          0x20
#define SMS_TP_SRR_NOT_REQUESTED                 0x00  /* B0000_0000 */
#define SMS_TP_SRR_REQUESTED                     0x20  /* B0010_0000 */
/* TP-Reply-Path. See references 12
   TP-Reply-Path mask B1000_0000
*/
#define SMS_TP_RP_MASK                           0x80
#define SMS_TP_RP_NOT_SET                        0x00  /* B0000_0000 */
#define SMS_TP_RP_SET                            0x80  /* B1000_0000 */
/* TP-Reject-Duplicates. See references 12
   TP-Reject-Duplicates mask B0000_0100
*/
#define SMS_TP_RD_MASK                           0x04
#define SMS_TP_RD_ACCEPT                         0x00  /* B0000_0000 */
#define SMS_TP_RD_REJECT                         0x04  /* B0000_0100 */
/* TP-Status-Report-Qualifier. See references 12
   TP-Status-Report-Qualifier mask B0010_0000
*/
#define SMS_TP_SRQ_MASK                          0x20
#define SMS_TP_SRQ_SUBMIT                        0x00  /* B0000_0000 */
#define SMS_TP_SRQ_COMMAND                       0x20  /* B0010_0000 */
/* TP-User-Data-Header-Indicator. See references 12
   TP-User-Data-Header-Indicator mask B0100_0000
*/
#define SMS_TP_UDHI_MASK                         0x40
#define SMS_TP_UDHI_MESSAGE                      0x00  /* B0000_0000 */
#define SMS_TP_UDHI_HEADER_MESSAGE               0x40  /* B0100_0000 */
/* TP-Parameter-Indicator. See references 12
   Extension mask B1000_0000
*/
#define SMS_TP_PI_EXTENSION_BIT_MASK             0x80
#define SMS_TP_PI_EXTENSION_AVAIL                0x80  /* B1000_0000 */
#define SMS_TP_PI_EXTENSION_NOT_AVAIL            0x00  /* B0000_0000 */
#define SMS_TP_PI_UDL_AVAIL                      0x04  /* B0000_0100 */
#define SMS_TP_PI_UDL_NOT_AVAIL                  0x00  /* B0000_0000 */
#define SMS_TP_PI_DCS_AVAIL                      0x02  /* B0000_0010 */
#define SMS_TP_PI_DCS_NOT_AVAIL                  0x00  /* B0000_0000 */
#define SMS_TP_PI_PID_AVAIL                      0x01  /* B0000_0001 */
#define SMS_TP_PI_PID_NOT_AVAIL                  0x00  /* B0000_0000 */
/* Data coding schemes for SMS
   TP-Data-Coding-Scheme. See references 11
   Can be used for SMS DCS fields
   GDC = General Data Coding indication, prefix 00xx xxxx
   B0000_0000
*/
#define SMS_TP_DCS_SMS_GDC_UNCOMPRESSED          0x00
#define SMS_TP_DCS_SMS_GDC_COMPRESSED            0x20  /* B0010_0000 */
#define SMS_TP_DCS_SMS_GDC_NO_CLASS_MEANING      0x00  /* B000_0000 */
#define SMS_TP_DCS_SMS_GDC_CLASS_MEANING         0x10  /* B0001_0000 */
/* CS = character set
   B0000_0000
*/
#define SMS_TP_DCS_SMS_GDC_CS_GSM_7BIT           0x00
#define SMS_TP_DCS_SMS_GDC_CS_8BIT               0x04  /* B0000_0100 */
#define SMS_TP_DCS_SMS_GDC_CS_UCS2               0x08  /* B0000_1000 */
#define SMS_TP_DCS_SMS_GDC_CS_RESERVED           0x0C  /* B0000_1100 */
#define SMS_TP_DCS_SMS_GDC_CLASS0                0x00  /* B0000_0000 */
#define SMS_TP_DCS_SMS_GDC_CLASS1_ME             0x01  /* B0000_0001 */
#define SMS_TP_DCS_SMS_GDC_CLASS2_SIM            0x02  /* B0000_0010 */
#define SMS_TP_DCS_SMS_GDC_CLASS3_TE             0x03  /* B0000_0011 */
#define SMS_TP_DCS_SMS_MWI_IS_INACTIVE           0x00  /* B0000_0000 */
#define SMS_TP_DCS_SMS_MWI_IS_ACTIVE             0x08  /* B0000_1000 */
#define SMS_TP_DCS_SMS_MWI_VOICEMAIL             0x00  /* B0000_0000 */
#define SMS_TP_DCS_SMS_MWI_FAX                   0x01  /* B0000_0001 */
#define SMS_TP_DCS_SMS_MWI_EMAIL                 0x02  /* B0000_0010 */
#define SMS_TP_DCS_SMS_MWI_OTHER                 0x03  /* B0000_0011 */
#define SMS_TP_DCS_SMS_DATA_CODING_MESSAGE_CLASS 0xF0  /* B1111_0000 */
#define SMS_TP_DCS_SMS_DCMC_MC_GSM_7BIT          0x00  /* B0000_0000 */
#define SMS_TP_DCS_SMS_DCMC_MC_GSM_8BIT          0x02  /* B0000_0010 */
#define SMS_TP_DCS_SMS_DCMC_MC_UCS2              0x04  /* B0000_0100 */
#define SMS_TP_DCS_SMS_DCMC_CLASS0               0x00  /* B0000_0000 */
#define SMS_TP_DCS_SMS_DCMC_CLASS1_ME            0x01  /* B0000_0001 */
#define SMS_TP_DCS_SMS_DCMC_CLASS2_SIM           0x02  /* B0000_0010 */
#define SMS_TP_DCS_SMS_DCMC_CLASS3_TE            0x03  /* B0000_0011 */
#define SMS_TP_DCS_SMS_ADG_MASK_FOR_GDC          0x40  /* B0100_0000 */
/* DCS Message waiting mask value B1111_0000 */
#define SMS_TP_DCS_MSG_WAITING_MASK              0xF0
#define SMS_TP_DCS_MSG_WAITING_DISCARD           0xC0  /* B1100_0000 */
#define SMS_TP_DCS_MSG_WAITING_STORE             0xD0  /* B1101_0000 */
#define SMS_TP_DCS_MSG_WAITING_UCS2              0xE0  /* B1110_0000 */
/* Data coding schemes for Cell Broadcast Service
   B0000_0000
*/
#define SMS_TP_DCS_CBS_LANGUAGE_GSM_7BIT         0x00
#define SMS_TP_DCS_CBS_GSM_7BIT_GERMAN           0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_GSM_7BIT_ENGLISH          0x01  /* B0000_0001 */
#define SMS_TP_DCS_CBS_GSM_7BIT_ITALIAN          0x02  /* B0000_0010 */
#define SMS_TP_DCS_CBS_GSM_7BIT_FRENCH           0x03  /* B0000_0011 */
#define SMS_TP_DCS_CBS_GSM_7BIT_SPANISH          0x04  /* B0000_0100 */
#define SMS_TP_DCS_CBS_GSM_7BIT_DUTCH            0x05  /* B0000_0101 */
#define SMS_TP_DCS_CBS_GSM_7BIT_SWEDISH          0x06  /* B0000_0110 */
#define SMS_TP_DCS_CBS_GSM_7BIT_DANISH           0x07  /* B0000_0111 */
#define SMS_TP_DCS_CBS_GSM_7BIT_PORTUGESE        0x08  /* B0000_1000 */
#define SMS_TP_DCS_CBS_GSM_7BIT_FINNISH          0x09  /* B0000_1001 */
#define SMS_TP_DCS_CBS_GSM_7BIT_NORWEGIAN        0x0A  /* B0000_1010 */
#define SMS_TP_DCS_CBS_GSM_7BIT_GREEK            0x0B  /* B0000_1011 */
#define SMS_TP_DCS_CBS_GSM_7BIT_TURKISH          0x0C  /* B0000_1100 */
#define SMS_TP_DCS_CBS_GSM_7BIT_HUNGARIAN        0x0D  /* B0000_1101 */
#define SMS_TP_DCS_CBS_GSM_7BIT_POLISH           0x0E  /* B0000_1110 */
#define SMS_TP_DCS_CBS_GSM_7BIT_UNSPECIFIED      0x0F  /* B0000_1111 */
#define SMS_TP_DCS_CBS_LANGUAGE_INDICATED_GSM_7BIT 0x10  /* B0001_0000 */
#define SMS_TP_DCS_CBS_LANGUAGE_INDICATED_UCS2   0x11  /* B0001_0001 */
#define SMS_TP_DCS_CBS_LANGUAGE_GSM_7BIT_EXTENDED 0x10  /* B0010_0000 */
#define SMS_TP_DCS_CBS_GSM_7BIT_CZECH            0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_GSM_7BIT_HEBREW           0x01  /* B0000_0001 */
#define SMS_TP_DCS_CBS_GSM_7BIT_ARABIC           0x02  /* B0000_0010 */
#define SMS_TP_DCS_CBS_GSM_7BIT_RUSSIAN          0x03  /* B0000_0011 */
#define SMS_TP_DCS_CBS_GSM_7BIT_ICELANDIC        0x04  /* B0000_0100 */
#define SMS_TP_DCS_CBS_GENERAL_DATA_CODING       0x40  /* B0100_0000 */
#define SMS_TP_DCS_CBS_GDC_UNCOMPRESSED          0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_GDC_COMPRESSED            0x20  /* B0010_0000 */
#define SMS_TP_DCS_CBS_GDC_NO_CLASS_MEANING      0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_GDC_CLASS_MEANING         0x10  /* B0001_0000 */
/* 
   CS = character setB0000_0000
*/
#define SMS_TP_DCS_CBS_GDC_CS_GSM_7BIT           0x00
#define SMS_TP_DCS_CBS_GDC_CS_8BIT               0x04  /* B0000_0100 */
#define SMS_TP_DCS_CBS_GDC_CS_UCS2               0x08  /* B0000_1000 */
#define SMS_TP_DCS_CBS_GDC_CS_RESERVED           0x0C  /* B0000_1100 */
#define SMS_TP_DCS_CBS_GDC_CLASS0                0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_GDC_CLASS1_ME             0x01  /* B0000_0001 */
#define SMS_TP_DCS_CBS_GDC_CLASS2_SIM            0x02  /* B0000_0010 */
#define SMS_TP_DCS_CBS_GDC_CLASS3_TE             0x03  /* B0000_0011 */
#define SMS_TP_DCS_CBS_WAP_MESSAGES              0xF0  /* B1111_0000 */
#define SMS_TP_DCS_CBS_DATA_CODING_MSG_HANDLING  0xF0  /* B1111_0000 */
#define SMS_TP_DCS_CBS_DCMH_MC_GSM_7BIT          0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_DCMH_MC_GSM_8BIT          0x02  /* B0000_0010 */
#define SMS_TP_DCS_CBS_DCMH_MC_UCS2              0x04  /* B0000_0100 */
#define SMS_TP_DCS_CBS_DCMH_CLASS0               0x00  /* B0000_0000 */
#define SMS_TP_DCS_CBS_DCMH_CLASS1_ME            0x01  /* B0000_0001 */
#define SMS_TP_DCS_CBS_DCMH_CLASS2_SIM           0x02  /* B0000_0010 */
#define SMS_TP_DCS_CBS_DCMH_CLASS3_TE            0x03  /* B0000_0011 */
/* 
   Address masks
   Type-of-Number mask B0111_0000
*/
#define SMS_TP_ADDR_TON_MASK                     0x70
/* For originating/destination address
   B0000_0000
*/
#define SMS_TP_ADDR_TON_UNKNOWN                  0x00
#define SMS_TP_ADDR_TON_INTERNATIONAL            0x10  /* B0001_0000 */
#define SMS_TP_ADDR_TON_NATIONAL                 0x20  /* B0010_0000 */
#define SMS_TP_ADDR_TON_NETW_SPECIFIC            0x30  /* B0011_0000 */
#define SMS_TP_ADDR_TON_SUBSCRIBER               0x40  /* B0100_0000 */
#define SMS_TP_ADDR_TON_ALPHANUMERIC             0x50  /* B0101_0000 */
#define SMS_TP_ADDR_TON_ABBREVIATED              0x60  /* B0110_0000 */
#define SMS_TP_ADDR_TON_RESERVED                 0x70  /* B0111_0000 */
/* For SC address
   Type-of-Number mask B0111_0000
*/
#define SMS_RP_ADDR_TON_MASK                     0x70
#define SMS_RP_ADDR_TON_UNKNOWN                  0x00  /* B0000_0000 */
#define SMS_RP_ADDR_TON_INTERNATIONAL            0x10  /* B0001_0000 */
#define SMS_RP_ADDR_TON_NATIONAL                 0x20  /* B0010_0000 */
#define SMS_RP_ADDR_TON_NETW_SPECIFIC            0x30  /* B0011_0000 */
#define SMS_RP_ADDR_TON_DEDIC_ACCESS             0x40  /* B0100_0000 */
#define SMS_RP_ADDR_TON_RESERVED                 0x70  /* B0111_0000 */
/* 
   Numbering-plan-identification mask B0000_1111
*/
#define SMS_RP_ADDR_NPI_MASK                     0x0F
#define SMS_RP_ADDR_NPI_UNKNOWN                  0x00  /* B0000_0000 */
#define SMS_RP_ADDR_NPI_ISDN                     0x01  /* B0000_0001 */
#define SMS_RP_ADDR_NPI_DATA                     0x03  /* B0000_0011 */
#define SMS_RP_ADDR_NPI_TELEX                    0x04  /* B0000_0100 */
#define SMS_RP_ADDR_NPI_NATIONAL                 0x08  /* B0000_1000 */
#define SMS_RP_ADDR_NPI_PRIVATE                  0x09  /* B0000_1001 */
#define SMS_RP_ADDR_NPI_RES_CTS                  0x0B  /* B0000_1011 */
#define SMS_RP_ADDR_NPI_RESERVED                 0x0F  /* B0000_1111 */
/* 
   Numbering-plan-identification.
   Numbering-plan-identification mask B0000_1111
*/
#define SMS_TP_ADDR_NPI_MASK                     0x0F
#define SMS_TP_ADDR_NPI_UNKNOWN                  0x00  /* B0000_0000 */
#define SMS_TP_ADDR_NPI_ISDN                     0x01  /* B0000_0001 */
#define SMS_TP_ADDR_NPI_DATA                     0x03  /* B0000_0011 */
#define SMS_TP_ADDR_NPI_TELEX                    0x04  /* B0000_0100 */
#define SMS_TP_ADDR_NPI_SC_SPECIFIC1             0x05  /* B0000_1000 */
#define SMS_TP_ADDR_NPI_SC_SPECIFIC2             0x06  /* B0000_0101 */
#define SMS_TP_ADDR_NPI_NATIONAL                 0x08  /* B0000_0110 */
#define SMS_TP_ADDR_NPI_PRIVATE                  0x09  /* B0000_1001 */
#define SMS_TP_ADDR_NPI_ERMES                    0x0A  /* B0000_1010 */
#define SMS_TP_ADDR_NPI_RESERVED                 0x0F  /* B0000_1111 */
/* 
   Maximum value of CB subscription ID
*/
#define SMS_SRV_CB_MAX_SUBSCRIPTION_NR           0xFF
/* Maximum value of CB clients */
#define SMS_SRV_CB_MAX_CLIENT_AMOUNT             0x0B
/* Maximum value of CBMIDs ordered */
#define SMS_SRV_CB_MAX_CBMID_COUNT               0xC8
/* Maximum value of DCSs ordered */
#define SMS_SRV_CB_MAX_LANGUAGE_COUNT            0x11
/* Size of DCS element in bytes */
#define SMS_SRV_CB_DCS_ELEMENT_SIZE              0x01
/* Size of CBMID element in bytes */
#define SMS_SRV_CB_CBMID_ELEMENT_SIZE            0x02
/* Size of subscription element in bytes */
#define SMS_CB_SUBSCRIPTION_ID_SIZE              0x01
#define SMS_TP_VPF_RELATIVE                      0x01
#define SMS_TP_VPF_ABSOLUTE_OR_ENHANCED          0x07
#define SMS_PARAM_INDICATOR_MAX_LEN              0x0A
#define SMS_DEFAULT_PARAMETER_LOCATION           0x00
#define SMS_NEW_SUBSCRIPTION                     0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CAPABILITY_ID - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_CAPABILITY_ID_CONST;

#define SMS_GSM_CAPABILITIES                     0x00
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ROUTE - Obsolete from version 005.000               */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ROUTE_CONST;

#define SMS_ROUTE_GPRS_PREF                      0x00
#define SMS_ROUTE_CS                             0x01
#define SMS_ROUTE_GPRS                           0x02
#define SMS_ROUTE_CS_PREF                        0x03
#define SMS_ROUTE_DEFAULT                        0x04
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ROUTE - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ROUTE_CONST;

#define SMS_ROUTE_DEFAULT                        0x00
#define SMS_ROUTE_CS                             0x01
#define SMS_ROUTE_PS                             0x02
#endif /* SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SENDER - Obsolete from version 005.000              */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_SENDER_CONST;

#define SMS_SENDER_ANY                           0x00
#define SMS_SENDER_SIM_ATK                       0x01
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CAUSE_TYPE - Obsolete from version 005.000          */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_CAUSE_TYPE_CONST;

#define SMS_CAUSE_TYPE_COMMON                    0x00
#define SMS_CAUSE_TYPE_GSM                       0x01
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CAUSE_TYPE - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_CAUSE_TYPE_CONST;

#define SMS_CAUSE_TYPE_COMMON                    0x00
#define SMS_CAUSE_TYPE_EXT                       0x01
#endif /* SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_CAPABILITY_DATA - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint16 SMS_CAPABILITY_DATA_CONST;

#define SMS_MT_RECEIVING                         0x0001  /* ---------------1 */
#define SMS_MO_SENDING                           0x0002  /* --------------1- */
#define SMS_APPL_PORT_ROUTING                    0x0004  /* -------------1-- */
/* GSM only */
#define SMS_CB_MESSAGE_RECEIVING                 0x0008  /* ------------1--- */
/* GSM only */
#define SMS_APPL_PORT_COPY_NOTIFYING             0x0010  /* -----------1---- */
/* GSM only */
#define SMS_GPRS_MESSAGE_PASSING                 0x0020  /* ----------1----- */
/* GSM only */
#define SMS_MWI_ROUTING_MODES                    0x0040  /* ---------1------ */
/* GSM only */
#define SMS_CLASS_ROUTING_MODES                  0x0080  /* --------1------- */
/* GSM only */
#define SMS_DATACODE_ROUTING_MODES               0x0100  /* -------1-------- */
/* GSM only */
#define SMS_MO_UNDEFINED_SENDING                 0x0200  /* ------1--------- */
/* GSM only */
#define SMS_TPDU_ROUTING                         0x0400  /* -----1---------- */
/* GSM only */
#define SMS_MULTIMODE_SUPPORT                    0x0800  /* ----1----------- */
/* GSM only */
#define SMS_MO_SEGMENTATION_SUPPORT              0x1000  /* ---1------------ */
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CAUSE                                               */
/* ----------------------------------------------------------------------- */
/* If Cause type is not used or if it is SMS_CAUSE_TYPE_COMMON then following
   cause values shall be used:
   A = Cause type is not used
   B = Cause type is SMS_CAUSE_TYPE_COMMON
*/
typedef uint8 SMS_CAUSE_CONST;

#define SMS_OK                                   0x00  /* A and B */
#define SMS_ERR_ROUTING_RELEASED                 0x01  /* A and B */
#define SMS_ERR_INVALID_PARAMETER                0x02  /* A and B */
#define SMS_ERR_DEVICE_FAILURE                   0x03  /* A and B */
#define SMS_ERR_PP_RESERVED                      0x04  /* A and B */
#define SMS_ERR_ROUTE_NOT_AVAILABLE              0x05  /* A and B */
#define SMS_ERR_ROUTE_NOT_ALLOWED                0x06  /* A and B */
#define SMS_ERR_SERVICE_RESERVED                 0x07  /* A */
#define SMS_ERR_INVALID_LOCATION                 0x08  /* A */

#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_ERR_NO_SIM                           0x09  /* A and B */
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


#if !SMS_ISI_MIN_VERSION(5,0)
#define SMS_ERR_SIM_NOT_READY                    0x0A  /* A and B */
#endif /* !SMS_ISI_MIN_VERSION(5,0) */

#define SMS_ERR_NO_NETW_RESPONSE                 0x0B  /* B */
#define SMS_ERR_DEST_ADDR_FDN_RESTRICTED         0x0C  /* B */
#define SMS_ERR_SMSC_ADDR_FDN_RESTRICTED         0x0D  /* B */
#define SMS_ERR_RESEND_ALREADY_DONE              0x0E  /* A */
#define SMS_ERR_SMSC_ADDR_NOT_AVAILABLE          0x0F  /* B */
#define SMS_ERR_ROUTING_FAILED                   0x10  /* A */
#define SMS_ERR_CS_INACTIVE                      0x11  /* A and B */

#if SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(6,0)
#define SMS_ERR_SAT_MO_CONTROL_MODIFIED          0x12  /* B */
#endif /* SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(6,0) */


#if SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(6,0)
#define SMS_ERR_SAT_MO_CONTROL_REJECT            0x13  /* B */
#endif /* SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(6,0) */


#if SMS_ISI_MIN_VERSION(3,0) && !SMS_ISI_MIN_VERSION(6,0)
#define SMS_ERR_TRACFONE_FAILED                  0x14  /* B */
#endif /* SMS_ISI_MIN_VERSION(3,0) && !SMS_ISI_MIN_VERSION(6,0) */

#define SMS_ERR_SENDING_ONGOING                  0x15  /* A and B */
#define SMS_ERR_SERVER_NOT_READY                 0x16  /* A and B */
#define SMS_ERR_NO_TRANSACTION                   0x17  /* A and B */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(6,0)
#define SMS_ERR_REJECTED                         0x18  /* B */
#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(6,0) */

#define SMS_ERR_INVALID_SUBSCRIPTION_NR          0x19  /* A */
#define SMS_ERR_RECEPTION_FAILED                 0x1A  /* B */
#define SMS_ERR_RC_REJECTED                      0x1B  /* B */
#define SMS_ERR_ALL_SUBSCRIPTIONS_ALLOCATED      0x1C  /* A */
#define SMS_ERR_SUBJECT_COUNT_OVERFLOW           0x1D  /* A */
#define SMS_ERR_DCS_COUNT_OVERFLOW               0x1E  /* A */

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_GSM_CAUSE - Obsolete from version 005.000           */
/* ----------------------------------------------------------------------- */
/* If Cause type is SMS_CAUSE_TYPE_GSM then following cause values shall be
   used:
   NOTE: Direction field defines whether given cause can be used with mobile
   originating or mobile terminating messages
*/

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_GSM_CAUSE_CONST;

#define SMS_GSM_ERR_UNASSIGNED_NUMBER            0x01  /* Direction: MO */
#define SMS_GSM_ERR_OPER_DETERMINED_BARR         0x08  /* Direction: MO */
#define SMS_GSM_ERR_CALL_BARRED                  0x0A  /* Direction: MO */
#define SMS_GSM_ERR_RESERVED                     0x0B  /* Direction: MO */
#define SMS_GSM_ERR_MSG_TRANSFER_REJ             0x15  /* Direction: MO */
#define SMS_GSM_ERR_MEMORY_CAPACITY_EXC          0x16  /* Direction: MT */
#define SMS_GSM_ERR_DEST_OUT_OF_ORDER            0x1B  /* Direction: MO */
#define SMS_GSM_ERR_UNDEFINED_SUBSCRIBER         0x1C  /* Direction: MO */
#define SMS_GSM_ERR_FACILITY_REJECTED            0x1D  /* Direction: MO */
#define SMS_GSM_ERR_UNKNOWN_SUBSCRIBER           0x1E  /* Direction: MO */
#define SMS_GSM_ERR_NETW_OUT_OF_ORDER            0x26  /* Direction: MO */
#define SMS_GSM_ERR_TEMPORARY_FAILURE            0x29  /* Direction: MO */
#define SMS_GSM_ERR_CONGESTION                   0x2A  /* Direction: MO */
#define SMS_GSM_ERR_RESOURCE_UNAVAILABLE         0x2F  /* Direction: MO */
#define SMS_GSM_ERR_REQ_FACILITY_NOT_SUB         0x32  /* Direction: MO */
#define SMS_GSM_ERR_REQ_FACILITY_NOT_IMP         0x45  /* Direction: MO */
/* Direction: MO, MT */
#define SMS_GSM_ERR_INVALID_REFERENCE            0x51
/* Direction: MO, MT */
#define SMS_GSM_ERR_INCORRECT_MESSAGE            0x5F
/* Direction: MO, MT */
#define SMS_GSM_ERR_INVALID_MAND_INFO            0x60
/* Direction: MO, MT */
#define SMS_GSM_ERR_INVALID_MSG_TYPE             0x61
/* Direction: MO, MT */
#define SMS_GSM_ERR_MSG_NOT_COMP_WITH_ST         0x62
/* Direction: MO, MT */
#define SMS_GSM_ERR_INVALID_INFO_ELEMENT         0x63
/* Direction: MO, MT */
#define SMS_GSM_ERR_PROTOCOL_ERROR               0x6F
#define SMS_GSM_ERR_INTERWORKING                 0x7F  /* Direction: MO */
#define SMS_GSM_ERR_NO_CAUSE                     0x80  /* Direction: MO */
#define SMS_GSM_ERR_IMSI_UNKNOWN_HLR             0x82  /* Direction: MO */
#define SMS_GSM_ERR_ILLEGAL_MS                   0x83  /* Direction: MO */
#define SMS_GSM_ERR_IMSI_UNKNOWN_VLR             0x84  /* Direction: MO */
#define SMS_GSM_ERR_IMEI_NOT_ACCEPTED            0x85  /* Direction: MO */
#define SMS_GSM_ERR_ILLEGAL_ME                   0x86  /* Direction: MO */
#define SMS_GSM_ERR_PLMN_NOT_ALLOWED             0x8B  /* Direction: MO */
#define SMS_GSM_ERR_LA_NOT_ALLOWED               0x8C  /* Direction: MO */
#define SMS_GSM_ERR_ROAM_NOT_ALLOWED_LA          0x8D  /* Direction: MO */
#define SMS_GSM_ERR_NO_SUITABLE_CELLS_LA         0x8F  /* Direction: MO */
#define SMS_GSM_ERR_NETWORK_FAILURE              0x91  /* Direction: MO */
#define SMS_GSM_ERR_MAC_FAILURE                  0x94  /* Direction: MO */
#define SMS_GSM_ERR_SYNC_FAILURE                 0x95  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_CONGESTION         0x96  /* Direction: MO */
#define SMS_GSM_ERR_AUTH_UNACCEPTABLE            0x97  /* Direction: MO */
#define SMS_GSM_ERR_SERV_OPT_NOT_SUPPORTED       0xA0  /* Direction: MO */
#define SMS_GSM_ERR_SERV_OPT_NOT_SUBSCRIBED      0xA1  /* Direction: MO */
#define SMS_GSM_ERR_SERV_OPT_TEMP_OUT_OF_ORDER   0xA2  /* Direction: MO */
#define SMS_GSM_ERR_CALL_CANNOT_BE_IDENTIFIED    0xA6  /* Direction: MO */
#define SMS_GSM_ERR_SEMANTICALLY_INCORR_MSG      0xDF  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_INVALID_MAND_INFO  0xE0  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_INVALID_MSG_TYPE   0xE1  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_MSG_TYPE_NOT_COMP_WITH_ST 0xE2  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_INVALID_INFO_ELEMENT 0xE3  /* Direction: MO */
#define SMS_GSM_ERR_CONDITIONAL_IE_ERROR         0xE4  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_MSG_NOT_COMP_WITH_ST 0xE5  /* Direction: MO */
#define SMS_GSM_ERR_CS_BARRED                    0xE8  /* Direction: MO */
#define SMS_GSM_ERR_LOW_LAYER_PROTOCOL_ERROR     0xEF  /* Direction: MO */
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_EXT_CAUSE - Valid from version 005.000              */
/* ----------------------------------------------------------------------- */
/* NOTE: Direction defines whether given cause can be used in accordance with
   mobile originating (MO) messages or mobile terminating (MT) messages. If
   Cause type is SMS_CAUSE_TYPE_EXT then following cause values shall be
   used:
*/
typedef uint8 SMS_EXT_CAUSE_CONST;

#define SMS_EXT_ERR_UNASSIGNED_NUMBER            0x01  /* Direction: MO */
#define SMS_EXT_ERR_OPER_DETERMINED_BARR         0x08  /* Direction: MO */
#define SMS_EXT_ERR_CALL_BARRED                  0x0A  /* Direction: MO */
#define SMS_EXT_ERR_RESERVED                     0x0B  /* Direction: MO */
#define SMS_EXT_ERR_MSG_TRANSFER_REJ             0x15  /* Direction: MO */
#define SMS_EXT_ERR_MEMORY_CAPACITY_EXC          0x16  /* Direction: MT */
#define SMS_EXT_ERR_DEST_OUT_OF_ORDER            0x1B  /* Direction: MO */
#define SMS_EXT_ERR_UNDEFINED_SUBSCRIBER         0x1C  /* Direction: MO */
#define SMS_EXT_ERR_FACILITY_REJECTED            0x1D  /* Direction: MO */
#define SMS_EXT_ERR_UNKNOWN_SUBSCRIBER           0x1E  /* Direction: MO */
#define SMS_EXT_ERR_NETW_OUT_OF_ORDER            0x26  /* Direction: MO */
#define SMS_EXT_ERR_TEMPORARY_FAILURE            0x29  /* Direction: MO */
#define SMS_EXT_ERR_CONGESTION                   0x2A  /* Direction: MO */
#define SMS_EXT_ERR_RESOURCE_UNAVAILABLE         0x2F  /* Direction: MO */
#define SMS_EXT_ERR_REQ_FACILITY_NOT_SUB         0x32  /* Direction: MO */
#define SMS_EXT_ERR_REQ_FACILITY_NOT_IMP         0x45  /* Direction: MO */
/* Direction: MO & MT */
#define SMS_EXT_ERR_INVALID_REFERENCE            0x51
/* Direction: MO & MT */
#define SMS_EXT_ERR_INCORRECT_MESSAGE            0x5F
/* Direction: MO & MT */
#define SMS_EXT_ERR_INVALID_MAND_INFO            0x60
/* Direction: MO & MT */
#define SMS_EXT_ERR_INVALID_MSG_TYPE             0x61
/* Direction: MO & MT */
#define SMS_EXT_ERR_MSG_NOT_COMP_WITH_ST         0x62
/* Direction: MO & MT */
#define SMS_EXT_ERR_INVALID_INFO_ELEMENT         0x63
/* Direction: MO & MT */
#define SMS_EXT_ERR_PROTOCOL_ERROR               0x6F
#define SMS_EXT_ERR_INTERWORKING                 0x7F  /* Direction: MO */
#define SMS_EXT_ERR_NO_CAUSE                     0x80  /* Direction: MO */
#define SMS_EXT_ERR_IMSI_UNKNOWN_HLR             0x82  /* Direction: MO */
#define SMS_EXT_ERR_ILLEGAL_MS                   0x83  /* Direction: MO */
#define SMS_EXT_ERR_IMSI_UNKNOWN_VLR             0x84  /* Direction: MO */
#define SMS_EXT_ERR_IMEI_NOT_ACCEPTED            0x85  /* Direction: MO */
#define SMS_EXT_ERR_ILLEGAL_ME                   0x86  /* Direction: MO */
#define SMS_EXT_ERR_PLMN_NOT_ALLOWED             0x8B  /* Direction: MO */
#define SMS_EXT_ERR_LA_NOT_ALLOWED               0x8C  /* Direction: MO */
#define SMS_EXT_ERR_ROAM_NOT_ALLOWED_LA          0x8D  /* Direction: MO */
#define SMS_EXT_ERR_NO_SUITABLE_CELLS_LA         0x8F  /* Direction: MO */
#define SMS_EXT_ERR_NETWORK_FAILURE              0x91  /* Direction: MO */
#define SMS_EXT_ERR_MAC_FAILURE                  0x94  /* Direction: MO */
#define SMS_EXT_ERR_SYNC_FAILURE                 0x95  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_CONGESTION         0x96  /* Direction: MO */
#define SMS_EXT_ERR_AUTH_UNACCEPTABLE            0x97  /* Direction: MO */
#define SMS_EXT_ERR_SERV_OPT_NOT_SUPPORTED       0xA0  /* Direction: MO */
#define SMS_EXT_ERR_SERV_OPT_NOT_SUBSCRIBED      0xA1  /* Direction: MO */
#define SMS_EXT_ERR_SERV_OPT_TEMP_OUT_OF_ORDER   0xA2  /* Direction: MO */
#define SMS_EXT_ERR_CALL_CANNOT_BE_IDENTIFIED    0xA6  /* Direction: MO */
#define SMS_EXT_ERR_SEMANTICALLY_INCORR_MSG      0xDF  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_INVALID_MAND_INFO  0xE0  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_INVALID_MSG_TYPE   0xE1  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_MSG_TYPE_NOT_COMP_WITH_ST 0xE2  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_INVALID_INFO_ELEMENT 0xE3  /* Direction: MO */
#define SMS_EXT_ERR_CONDITIONAL_IE_ERROR         0xE4  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_MSG_NOT_COMP_WITH_ST 0xE5  /* Direction: MO */
#define SMS_EXT_ERR_CS_BARRED                    0xE8  /* Direction: MO */
#define SMS_EXT_ERR_LOW_LAYER_PROTOCOL_ERROR     0xEF  /* Direction: MO */

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_MESSAGE_TYPE - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */
/* 0x40 - 0x7F Reserved for future use.
   0x80 - 0x9F Reserved for types defined in SMS Memory Server ISI
   specification
   0xA0 - 0xFE Reserved for future use.
*/

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_MESSAGE_TYPE_CONST;

#define SMS_GSM_DELIVER_TYPE                     0x00
#define SMS_GSM_STATUS_REPORT_TYPE               0x01
#define SMS_GSM_SUBMIT_TYPE                      0x02
#define SMS_GSM_COMMAND_TYPE                     0x03
#define SMS_GSM_MT_UNDEFINED_TYPE                0x04
#define SMS_GSM_MO_UNDEFINED_TYPE                0x05
#define SMS_GSM_MT_ALL_TYPE                      0x06
#define SMS_UNDEFINED_TYPE                       0xFF
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ROUTING_TYPE - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ROUTING_TYPE_CONST;

#define SMS_GSM_DCS_ROUTING                      0x00
#define SMS_GSM_APPL_PORT_ROUTING                0x01
#define SMS_GSM_USER_DATA7_ROUTING               0x02
#define SMS_GSM_USER_DATA8_ROUTING               0x03
#define SMS_GSM_ORIG_ADDRESS_ROUTING             0x04
#define SMS_GSM_APPL_PORT_COPY_ROUTING           0x05
#define SMS_GSM_TPDU_ROUTING                     0x06
#define SMS_GSM_SIM_PP_DATA_DOWNLOAD             0x07
#define SMS_UNDEFINED_ROUTING                    0xFF
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ROUTING_COMMAND                                     */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_ROUTING_COMMAND_CONST;

#define SMS_ROUTING_RELEASE                      0x00
#define SMS_ROUTING_SET                          0x01

#if !SMS_ISI_MIN_VERSION(7,0)
#define SMS_ROUTING_SUSPEND                      0x02
#endif /* !SMS_ISI_MIN_VERSION(7,0) */


#if !SMS_ISI_MIN_VERSION(7,0)
#define SMS_ROUTING_RESUME                       0x03
#endif /* !SMS_ISI_MIN_VERSION(7,0) */


#if !SMS_ISI_MIN_VERSION(8,0)
#define SMS_ROUTING_UPDATE                       0x04
#endif /* !SMS_ISI_MIN_VERSION(8,0) */

#define SMS_ROUTING_QUERY                        0x05
#define SMS_ROUTING_QUERY_ALL                    0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_GSM_SETTING_TYPE - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_GSM_SETTING_TYPE_CONST;

#define SMS_GSM_SETTING_TYPE_SMS                 0x00
#define SMS_GSM_SETTING_TYPE_MCN                 0x01
#define SMS_GSM_SETTING_TYPE_RESEND              0x02
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SETTING_TYPE - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_SETTING_TYPE_CONST;

#define SMS_SETTING_TYPE_SMS                     0x00
#define SMS_SETTING_TYPE_RESEND                  0x01
#define SMS_SETTING_TYPE_ROUTE                   0x02
#define SMS_SETTING_TYPE_EFSMSP                  0x03
#define SMS_SETTING_TYPE_FDN                     0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ADDRESS_TYPE - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ADDRESS_TYPE_CONST;

#define SMS_UNICODE_ADDRESS                      0x00
#define SMS_GSM_0340_ADDRESS                     0x01
#define SMS_GSM_0411_ADDRESS                     0x02
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ADDRESS_TYPE - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ADDRESS_TYPE_CONST;


#if SMS_ISI_MIN_VERSION(6,0) && !SMS_ISI_MIN_VERSION(9,0)
#define SMS_UNICODE_ADDRESS                      0x00
#endif /* SMS_ISI_MIN_VERSION(6,0) && !SMS_ISI_MIN_VERSION(9,0) */

#define SMS_DESTINATION_ADDRESS                  0x01
#define SMS_SMSC_ADDRESS                         0x02
#endif /* SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_APPL_PORT_ADDRESS_TYPE - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_APPL_PORT_ADDRESS_TYPE_CONST;

#define SMS_8_BIT_APPL_PORT_ADDRESS              0x04
#define SMS_16_BIT_APPL_PORT_ADDRESS             0x05
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ALPHA_TAG_TYPE - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_ALPHA_TAG_TYPE_CONST;

#define SMS_UNICODE_ALPHA_TAG                    0x00
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_STORAGE_STATUS - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_STORAGE_STATUS_CONST;

#define SMS_STORAGE_AVAILABLE                    0x00
#define SMS_STORAGE_FULL                         0x01
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SEND_STATUS                                         */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_SEND_STATUS_CONST;

#define SMS_MSG_REROUTED                         0x00
#define SMS_MSG_REPEATED                         0x01
#define SMS_MSG_WAITING_NETWORK                  0x02
#define SMS_MSG_IDLE                             0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_PACKING                                             */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_PACKING_CONST;

#define SMS_PACKING_NOT_REQUIRED                 0x00
#define SMS_PACKING_REQUIRED                     0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_MO_SM_RESULT - Valid from version 006.000           */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_MO_SM_RESULT_CONST;

#define SMS_MO_RESULT_OK                         0x00
#define SMS_MO_RESULT_FAIL                       0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_GSM_ROUTING_MODE - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */
/* Some of these values are used in SMS_COMMON_DATA sub-block in
   SMS_PP_ROUTING_REQ message when Routing Type is SMS_GSM_DCS_ROUTING and
   some of these values can be used in SMS_GSM_CB_ROUTING_REQ and in
   SMS_GSM_TEMP_CB_ROUTING_REQ messages.
   See details from 5
*/

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_GSM_ROUTING_MODE_CONST;

#define SMS_GSM_ROUTING_MODE_CLASS_DISP          0x00
#define SMS_GSM_ROUTING_MODE_CLASS_TE            0x01
#define SMS_GSM_ROUTING_MODE_CLASS_ME            0x02
#define SMS_GSM_ROUTING_MODE_CLASS_SIM           0x03
#define SMS_GSM_ROUTING_MODE_CLASS_UD1           0x04
#define SMS_GSM_ROUTING_MODE_CLASS_UD2           0x05
#define SMS_GSM_ROUTING_MODE_DATACODE_WAP        0x06
#define SMS_GSM_ROUTING_MODE_DATACODE_8BIT       0x07
#define SMS_GSM_ROUTING_MODE_DATACODE_TXT        0x08
#define SMS_GSM_ROUTING_MODE_MWI_DISCARD         0x09
#define SMS_GSM_ROUTING_MODE_MWI_STORE           0x0A
#define SMS_GSM_ROUTING_MODE_ALL                 0x0B
#define SMS_GSM_ROUTING_MODE_CB_DDL              0x0C
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_GSM_CB_SUBJECT_LIST_TYPE - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */
/* This constant table is deprecated. */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_GSM_CB_SUBJECT_LIST_TYPE_CONST;

#define SMS_CB_ALLOWED_IDS_LIST                  0x00
#define SMS_CB_NOT_ALLOWED_IDS_LIST              0x01
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_GSM_CB_LANGUAGES                                    */
/* ----------------------------------------------------------------------- */
/*  See reference 11 */
typedef uint8 SMS_GSM_CB_LANGUAGES_CONST;

#define SMS_CB_GERMAN                            0x00
#define SMS_CB_ENGLISH                           0x01
#define SMS_CB_ITALIAN                           0x02
#define SMS_CB_FRENCH                            0x03
#define SMS_CB_SPANISH                           0x04
#define SMS_CB_DUTCH                             0x05
#define SMS_CB_SWEDISH                           0x06
#define SMS_CB_DANISH                            0x07
#define SMS_CB_PORTUGUESE                        0x08
#define SMS_CB_FINNISH                           0x09
#define SMS_CB_NORWEGIAN                         0x0A
#define SMS_CB_GREEK                             0x0B
#define SMS_CB_TURKISH                           0x0C
#define SMS_CB_HUNGARIAN                         0x0D
#define SMS_CB_POLISH                            0x0E
#define SMS_CB_UNSPECIFIED                       0x0F
#define SMS_CB_CZECH                             0x20
#define SMS_CB_HEBREW                            0x21
#define SMS_CB_ARABIC                            0x22
#define SMS_CB_RUSSIAN                           0x23
#define SMS_CB_ICELANDIC                         0x24

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SM_CONTROL_ACTION - Obsolete from version 005.000   */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_SM_CONTROL_ACTION_CONST;

#define SMS_SM_CONTROL_ACTIVATE                  0x00
#define SMS_SM_CONTROL_DEACTIVATE                0x01
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CONTENT_TYPE - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)
typedef uint8 SMS_CONTENT_TYPE_CONST;

#define SMS_TYPE_TEXT_MESSAGE                    0x01
#define SMS_TYPE_NOKIA_SMART_MESSAGE             0x02
#define SMS_TYPE_JAVA_MIDDLET_MESSAGE            0x03
#define SMS_TYPE_BREW_MESSAGE                    0x04
#define SMS_TYPE_SIM_ATK_MESSAGE                 0x05
#define SMS_TYPE_GPS_MESSAGE                     0x06
#define SMS_TYPE_PUSH_TO_TALK_MESSAGE            0x07
#define SMS_TYPE_TRACFONE_PREPAID_MESSAGE        0x08
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_VALIDITY_PERIOD_FORMAT - Versions 005.000 - 008.003 */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(8,3)
typedef uint8 SMS_VALIDITY_PERIOD_FORMAT_CONST;

#define SMS_VPF_RELATIVE                         0x01
#define SMS_VPF_ABSOLUTE_OR_ENHANCED             0x07
#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(8,3) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SERVER_STATUS - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_SERVER_STATUS_CONST;

#define SMS_SERVER_READY                         0x00
#define SMS_SERVER_NOT_READY                     0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SERVER_STATE - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_SERVER_STATE_CONST;

#define SMS_SERVER_IDLE                          0x00
#define SMS_SERVER_PARTIAL_MODE                  0x01
#define SMS_SERVER_CS_INACTIVE                   0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_ROUTE_PRIORITY - Valid from version 005.000         */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_ROUTE_PRIORITY_CONST;

/* Route is not available. */
#define SMS_ROUTE_NOT_AVAILABLE                  0x00
/* Route with highest priority. */
#define SMS_ROUTE_PRIORITY_1                     0x01
/* Route with second highest priority. */
#define SMS_ROUTE_PRIORITY_2                     0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_SUBSCRIPTION_TYPE - Valid from version 005.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_SUBSCRIPTION_TYPE_CONST;

#define SMS_TYPE_DEFAULT                         0x00
#define SMS_TYPE_SIM                             0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_CHECK_INFO - Valid from version 005.000              */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_CHECK_INFO_CONST;

#define SMS_CHECK_DISABLE_NONE                   0x00  /* 00000000 */
#define SMS_CHECK_DISABLE_FDN                    0x01  /* -------1 */

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RECEPTION_COMMAND - Valid from version 005.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RECEPTION_COMMAND_CONST;

#define SMS_RECEPTION_QUERY_STATUS               0x00
#define SMS_RECEPTION_ACTIVATE                   0x01
#define SMS_RECEPTION_DEACTIVATE                 0x02
#define SMS_RECEPTION_STORAGE_STATUS_UPDATE      0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RECEPTION_STATUS - Valid from version 005.000       */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RECEPTION_STATUS_CONST;

#define SMS_RECEPTION_ACTIVE                     0x01
#define SMS_RECEPTION_INACTIVE                   0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RESEND_SETTING - Valid from version 005.000         */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RESEND_SETTING_CONST;

#define SMS_RESEND_DISABLED                      0x00
#define SMS_RESEND_ONCE                          0x01
#define SMS_RESEND_TWICE                         0x02
#define SMS_RESEND_THRICE                        0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_FDN_SETTING - Valid from version 006.000            */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_FDN_SETTING_CONST;

#define SMS_FDN_CHECK_DISABLED                   0x00
#define SMS_FDN_CHECK_ENABLED                    0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RES_CONF_STATUS - Valid from version 005.000        */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RES_CONF_STATUS_CONST;

/* Sent when Modem SMS Server starts up. */
#define SMS_RES_CONF_STARTUP                     0x01
#define SMS_RES_CONF_RECONFIGURED                0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RES_CONF_OPERATION - Valid from version 005.000     */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RES_CONF_OPERATION_CONST;

#define SMS_RES_CONF_GET                         0x01
#define SMS_RES_CONF_SET                         0x02

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_RESOURCE_IDS - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */
typedef uint16 SMS_RESOURCE_IDS_CONST;

#define SMS_RES_ID_MO_SM_INIT                    0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_RESOURCE_IDS_MASK - Valid from version 005.000       */
/* ----------------------------------------------------------------------- */
typedef uint16 SMS_RESOURCE_IDS_MASK_CONST;

#define SMS_RES_ID_MASK_MO_SM_INIT               0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_RESOURCE_IDS_CONF_REQ - Valid from version 005.000   */
/* ----------------------------------------------------------------------- */
typedef uint16 SMS_RESOURCE_IDS_CONF_REQ_CONST;

#define SMS_RES_ID_CONF_MO_SM_INIT               0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_RESOURCE_STATUS - Valid from version 005.000        */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_RESOURCE_STATUS_CONST;

#define SMS_RESOURCE_ALLOWED                     0x01
#define SMS_RESOURCE_DENIED                      0x02

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SMS_PARAMETER_INDICATOR - Valid from version 005.000     */
/* ----------------------------------------------------------------------- */
typedef uint8 SMS_PARAMETER_INDICATOR_CONST;

#define SMS_PI_DESTINATION_ADDRESS               0x01  /* -------1 */
#define SMS_PI_SERVICE_CENTRE_ADDRESS            0x02  /* ------1- */
#define SMS_PI_PROTOCOL_ID                       0x04  /* -----1-- */
#define SMS_PI_DATA_CODING_SCHEME                0x08  /* ----1--- */
#define SMS_PI_VALIDITY_PERIOD                   0x10  /* ---1---- */

/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CB_SUBSCRIPTION_STATUS - Versions 005.000 - 007.000 */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0)
typedef uint8 SMS_CB_SUBSCRIPTION_STATUS_CONST;

#define SMS_CB_SBS_NONE_SUBSCRIBED               0x00
#define SMS_CB_SBS_ALL_SUBSCRIBED                0x01
#define SMS_CB_SBS_PARTIALLY_SUBSCRIBED          0x02
#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: SMS_CB_SUBSCR_STATUS - Valid from version 008.000       */
/* ----------------------------------------------------------------------- */
#if SMS_ISI_MIN_VERSION(8,0)
typedef uint8 SMS_CB_SUBSCR_STATUS_CONST;

#define SMS_CB_SBS_ALL_SUBSCRIBED                0x00
#define SMS_CB_SBS_PARTIALLY_SUBSCRIBED          0x01
#define SMS_CB_SBS_NONE_SUBSCRIBED               0x02
#endif /* SMS_ISI_MIN_VERSION(8,0) */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define SMS_MESSAGE_CAPABILITY_REQ               0x00
#define SMS_MESSAGE_CAPABILITY_RESP              0x01
#define SMS_MESSAGE_SEND_REQ                     0x02
#define SMS_MESSAGE_SEND_RESP                    0x03
#define SMS_RECEIVED_MT_PP_IND                   0x04
#define SMS_RECEIVED_MWI_PP_IND                  0x05
#define SMS_PP_ROUTING_REQ                       0x06
#define SMS_PP_ROUTING_RESP                      0x07
#define SMS_PP_ROUTING_NTF                       0x08
#define SMS_GSM_RECEIVED_PP_REPORT_REQ           0x09
#define SMS_GSM_RECEIVED_PP_REPORT_RESP          0x0A
#define SMS_GSM_CB_ROUTING_REQ                   0x0B
#define SMS_GSM_CB_ROUTING_RESP                  0x0C
#define SMS_GSM_CB_ROUTING_NTF                   0x0D
#define SMS_GSM_TEMP_CB_ROUTING_REQ              0x0E
#define SMS_GSM_TEMP_CB_ROUTING_RESP             0x0F
#define SMS_GSM_TEMP_CB_ROUTING_NTF              0x10
#define SMS_GSM_CBCH_PRESENT_IND                 0x11
#define SMS_PARAMETERS_UPDATE_REQ                0x12
#define SMS_PARAMETERS_UPDATE_RESP               0x13
#define SMS_PARAMETERS_READ_REQ                  0x14
#define SMS_PARAMETERS_READ_RESP                 0x15
#define SMS_PARAMETERS_CAPACITY_REQ              0x16
#define SMS_PARAMETERS_CAPACITY_RESP             0x17
#define SMS_GSM_SETTINGS_UPDATE_REQ              0x18
#define SMS_GSM_SETTINGS_UPDATE_RESP             0x19
#define SMS_GSM_SETTINGS_READ_REQ                0x1A
#define SMS_GSM_SETTINGS_READ_RESP               0x1B
#define SMS_GSM_MCN_SETTING_CHANGED_IND          0x1C
#define SMS_MEMORY_CAPACITY_EXC_IND              0x1D
#define SMS_STORAGE_STATUS_UPDATE_REQ            0x1E
#define SMS_STORAGE_STATUS_UPDATE_RESP           0x1F
#define SMS_MESSAGE_SEND_STATUS_IND              0x22
#define SMS_GSM_RESEND_CANCEL_REQ                0x23
#define SMS_GSM_RESEND_CANCEL_RESP               0x24
#define SMS_SM_CONTROL_ACTIVATE_REQ              0x25
#define SMS_SM_CONTROL_ACTIVATE_RESP             0x26
#define SMS_GSM_INDICATE_STORAGE_REQ             0x2A
#define SMS_GSM_INDICATE_STORAGE_RESP            0x2B
#define SMS_STATUS_IND                           0x2D
#define SMS_STATUS_REQ                           0x2E
#define SMS_STATUS_RESP                          0x2F
#define SMS_SETTINGS_UPDATE_REQ                  0x30
#define SMS_SETTINGS_UPDATE_RESP                 0x31
#define SMS_SETTINGS_READ_REQ                    0x32
#define SMS_SETTINGS_READ_RESP                   0x33
#define SMS_CB_ROUTING_REQ                       0x34
#define SMS_CB_ROUTING_RESP                      0x35
#define SMS_CB_ROUTING_IND                       0x36
#define SMS_CB_SIM_ROUTING_IND                   0x37
#define SMS_RECEIVED_MSG_REPORT_REQ              0x3B
#define SMS_RECEIVED_MSG_REPORT_RESP             0x3C
#define SMS_RECEIVE_MESSAGE_REQ                  0x41
#define SMS_RECEIVE_MESSAGE_RESP                 0x42
#define SMS_RECEIVED_MSG_IND                     0x43
#define SMS_RECEIVED_SIM_MSG_IND                 0x44
#define SMS_RESOURCE_CONF_REQ                    0x45
#define SMS_RESOURCE_CONF_RESP                   0x46
#define SMS_RESOURCE_CONF_IND                    0x47
#define SMS_RESOURCE_CLEAR_IND                   0x48
#define SMS_RESOURCE_REQ                         0x49
#define SMS_RESOURCE_RESP                        0x4A
#define SMS_RESOURCE_IND                         0x4B

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define SMS_ALPHA_TAG                            0x81
#define SMS_ADDRESS                              0x82
#define SMS_APPL_PORT_ADDRESS                    0x86
#define SMS_ATK_ALPHA_ID                         0x85
#define SMS_COMMON_DATA                          0x80
#define SMS_GSM_COMMON_DATA                      0x80
#define SMS_TIME_INFO                            0x84
#define SMS_GSM_VALIDITY_PERIOD                  0x08
#define SMS_GSM_PARAM_INDICATOR                  0x09
#define SMS_GSM_OPTIONAL_FIELDS                  0x0A
#define SMS_GSM_USER_DATA                        0x12
#define SMS_GSM_DELIVER                          0x00
#define SMS_GSM_STATUS_REPORT                    0x01
#define SMS_GSM_SUBMIT                           0x02
#define SMS_GSM_LONG_SUBMIT                      0x13
#define SMS_GSM_COMMAND                          0x03
#define SMS_GSM_MT_UNDEFINED                     0x04
#define SMS_GSM_MO_UNDEFINED                     0x05
#define SMS_GSM_DELIVER_REPORT                   0x06
#define SMS_GSM_SUBMIT_REPORT                    0x07
#define SMS_GSM_PARAMETERS                       0x0B
#define SMS_GSM_REPORT                           0x0C
#define SMS_GSM_ROUTING                          0x0D
#define SMS_GSM_CB_MESSAGE                       0x0E
#define SMS_GSM_MCN_SETTING                      0x0F
#define SMS_GSM_SETTINGS                         0x10
#define SMS_GSM_RESEND_SETTING                   0x14
#define SMS_GSM_TPDU                             0x11
#define SMS_SB_ADDRESS                           0x0082
#define SMS_SB_USER_DATA                         0x0020
#define SMS_SB_VALIDITY_PERIOD                   0x0008
#define SMS_SB_PARAM_INDICATOR                   0x001D
#define SMS_SB_SUBMIT                            0x0016
#define SMS_SB_COMMAND                           0x0015
#define SMS_SB_DELIVER_REPORT                    0x0019
#define SMS_SB_SUBMIT_REPORT                     0x001A
#define SMS_SB_CB_MESSAGE                        0x000E
#define SMS_SB_RESEND_SETTING                    0x0014
#define SMS_SB_FDN_SETTING                       0x0034
#define SMS_SB_TPDU_PACKING                      0x0033
#define SMS_SB_MO_SM_RESULT                      0x0035
#define SMS_SB_TPDU                              0x001C
#define SMS_SB_CB_DCS_LIST                       0x0025
#define SMS_SB_CB_SUBJECTS                       0x0026
#define SMS_SB_CB_SUBJECT_RANGE                  0x0027
#define SMS_SB_SETTINGS                          0x0021
#define SMS_SB_SERVER_STATE_INFO                 0x0022
#define SMS_SB_ROUTE_INFO                        0x0023
#define SMS_SB_CHECK_INFO                        0x0087
#define SMS_SB_RECEPTION_STATUS                  0x002C
#define SMS_SB_CBS_SUBSCRIPTION                  0x002D
#define SMS_SB_RESOURCE_CONF                     0x002B
#define SMS_SB_RESOURCE                          0x002A
#define SMS_SB_CAUSE                             0x0029
#define SMS_SB_RESOURCE_CONF_REQUIRED            0x0028
#define SMS_SB_RESOURCE_SEQ_ID                   0x002E
#define SMS_SB_RESOURCE_STATUS                   0x002F
#define SMS_SB_REQ_INFO                          0x0030
#define SMS_SB_SMS_PARAMETERS                    0x0031

/* ----------------------------------------------------------------------- */
/* Subblock: SMS_ALPHA_TAG - Obsolete from version 005.000                 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   alpha_tag_length; /* Length of Alpha Tag in bytes */
    /* Values from the constant table SMS_ALPHA_TAG_TYPE */
    uint8   alpha_tag_type;
    /* Alpha tag data according to alpha tag type */
    uint8   alpha_tag_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubAlphaTag;

#define SMS_SUB_ALPHA_TAG_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_ADDRESS - Obsolete from version 005.000                   */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SMS_ADDRESS_TYPE */
    uint8   address_type;
    /* Address data length in bytes
       Maximum address data length defined as 
       SMS_ADDRESS_MAX_LEN
    */
    uint8   address_data_length;
    /* Address data according to address type */
    uint8   address_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubAddress;

#define SMS_SUB_ADDRESS_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_APPL_PORT_ADDRESS - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SMS_APPL_PORT_ADDRESS_TYPE */
    uint8   address_type;
    uint8   address_count; /* Number of addresses to be routed */
    /* Destination port addresses, 16 bit addresses in big endian format */
    uint8   address_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubAppPortAddress;

#define SMS_SUB_APPL_PORT_ADDRESS_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_ATK_ALPHA_ID - Versions 002.009 - 005.000                 */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   fill1;
    uint16  sub_block_length;
    uint8   fill2[2];
    uint16  data_length;  /* Data length in bytes. */
    uint8   data_bytes[SMS_ANY_SIZE]; /* L / 2 - 1 unicode characters */
    /* Spare. */
    } tSMS_SubSMSATKAlphaID;

#define SMS_SUB_SMS_ATK_ALPHA_ID_LEN   (4*sizeof(uint8) + 2*sizeof(uint16))

#endif /* SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_COMMON_DATA - Obsolete from version 005.000               */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    /* Sub-block ID value is the same with SMS_GSM_COMMON_DATA for backward
       compatibility.
    */
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Length of data in bytes.
       Maximum GSM user data lengths defined as
       
       SMS_GSM_COMMAND_CD_MAX_LEN
       SMS_GSM_DELIVER_UD_MAX_LEN
       SMS_GSM_DELIVER_ACK_UD_MAX_LEN
       SMS_GSM_DELIVER_ERR_UD_MAX_LEN
       SMS_GSM_MO_UNDEFINED_MAX_LEN
       SMS_GSM_MT_UNDEFINED_MAX_LEN
       SMS_GSM_STATUSREP_UD_MAX_LEN
       SMS_GSM_SUBMIT_UD_MAX_LEN
       SMS_GSM_SUBMIT_ACK_UD_MAX_LEN
       SMS_GSM_SUBMIT_ERR_UD_MAX_LEN
       SMS_GSM_TPDU_MAX_LEN
    */
    uint8   data_length;
    uint8   pad;          /* Spare */
    /* Meaning of these bytes varies with the message */
    uint8   data_bytes[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubCommonData;

#define SMS_SUB_COMMON_DATA_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_COMMON_DATA - Obsolete from version 005.000           */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    /* Sub-block ID value is the same with SMS_COMMON_DATA for backward
       compatibility.
    */
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Length of data in bytes.
       Maximum GSM data lengths defined as
       SMS_GSM_COMMAND_CD_MAX_LEN
       SMS_GSM_DELIVER_UD_MAX_LEN
       SMS_GSM_DELIVER_ACK_UD_MAX_LEN
       SMS_GSM_DELIVER_ERR_UD_MAX_LEN
       SMS_GSM_MO_UNDEFINED_MAX_LEN
       SMS_GSM_MT_UNDEFINED_MAX_LEN
       SMS_GSM_STATUSREP_UD_MAX_LEN
       SMS_GSM_SUBMIT_UD_MAX_LEN
       SMS_GSM_SUBMIT_ACK_UD_MAX_LEN
       SMS_GSM_SUBMIT_ERR_UD_MAX_LEN
       SMS_GSM_TPDU_MAX_LEN
    */
    uint8   data_length;
    uint8   character_amount; /* Amount of characters in data bytes */
    uint8   data_bytes[SMS_ANY_SIZE]; /* SMS user data */
    /* Spare. */
    } tSMS_SubGSMCommonData;

#define SMS_SUB_GSM_COMMON_DATA_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_TIME_INFO - Obsolete from version 005.000                 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  year;         /* 1999-2098 */
    uint8   month;        /* 1-12 */
    uint8   day_of_month; /* 1-31 */
    uint8   hour;         /* 0-23 */
    uint8   minute;       /* 0-59 */
    uint8   second;       /* 0-59 */
    /* -63-63. Difference is expressed in quarters ofan hour, between the
       local time and GMT. The MSB (bit 7) represents the algebraic sign of
       this difference (0: positive, 1: negative).
    */
    uint8   time_zone;
    uint8   pad1;         /* Spare */
    uint8   pad2;
    } tSMS_SubSMSTimeInfo;

#define SMS_SUB_TIME_INFO_LEN   sizeof(tSMS_SubSMSTimeInfo)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_VALIDITY_PERIOD - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Possible values are 1 or 7 depending on the validity period format in
       message parameters.
    */
    uint8   validity_period_length;
    /* Information element enabling the originator user equipment to indicate
       the time period during which the originator considers the short
       message to be valid. See 12 chapter 9.2.3.12 TP-Validity-Period
       (TP-VP).
    */
    uint8   validity_period_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubGSMValidityPeriod;

#define SMS_SUB_GSM_VALIDITY_PERIOD_LEN ( 4 * sizeof( uint8 ) )
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_PARAM_INDICATOR - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* that is the maximum parameter indicator length. */
    uint8   parameter_indicator_length;
    /* Parameter Indicator octets. See 12 chapter 9.2.3.27
       TP-Parameter-Indicator (TP-PI).
    */
    uint8   parameter_indicators[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubGSMParamIndicator;

#define SMS_SUB_GSM_PARAM_INDICATOR_LEN ( 4 * sizeof( uint8 ) )
#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_OPTIONAL_FIELDS - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    /* Optional:
       - User data sub-block [SMS_COMMON_DATA]
       or [SMS_GSM_COMMON_DATA]Maximum GSM data lengths defined as
       
       SMS_GSM_DELIVER_ACK_UD_MAX_LEN
       SMS_GSM_DELIVER_ERR_UD_MAX_LEN
       SMS_GSM_SUBMIT_ACK_UD_MAX_LEN
       SMS_GSM_SUBMIT_ERR_UD_MAX_LEN
       SMS_GSM_STATUSREP_UD_MAX_LEN
       Subblock list:
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMOptionalFields;

#define SMS_SUB_GSM_OPTIONAL_FIELDS_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_USER_DATA - Obsolete from version 005.000             */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   pad;          /* Spare */
    uint16  sub_block_length;
    uint16  user_data_length; /* Number of bytes in user data */
    /* Number of chars in user data if applicable */
    uint16  character_amount;
    uint8   user_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SubGSMUserData;

#define SMS_SUB_GSM_USER_DATA_LEN   (2*sizeof(uint8) + 3*sizeof(uint16))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_DELIVER - Obsolete from version 005.000               */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Deliver TPDU. Contains several elements: TP-MTI,
       TP-MMS, TP-RP, TP-UDHI and TP-SRI. See 12 chapter 9.2.2.1 SMS-DELIVER
       type.
    */
    uint8   message_parameters;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    /* Time when the service centre received this short message. See 12
       chapter 9.2.3.11 TP-Service-Centre-Time-Stamp (TP-SCTS).
    */
    uint8   sc_time_stamp[SMS_SC_TIME_STAMP_SIZE];
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   sub_block_count;
    /* Mandatory:
       - Originator address sub-block 
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - GSM Deliver User data sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum user data length defined as
       SMS_GSM_DELIVER_UD_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMDeliver;

#define SMS_SUB_GSM_DELIVER_LEN   ((9 + SMS_SC_TIME_STAMP_SIZE)*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_STATUS_REPORT - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Status-Report TPDU. Contains several elements:
       TP-MTI, TP-UDHI, TP-MMS and TP-SRQ. See 12 chapter 9.2.2.3
       SMS-STATUS-REPORT type.
    */
    uint8   message_parameters;
    /* Number identifying a sent short message. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   reference_for_message;
    /* Indicates the status of a previously sent SM. See 12chapter 9.2.3.15
       TP-Status (TP-ST).
    */
    uint8   status;
    /* Time when the service centre received the sent short message. See 12
       chapter 9.2.3.11 TP-Service-Centre-Time-Stamp (TP-SCTS).
    */
    uint8   sc_time_stamp[SMS_SC_TIME_STAMP_SIZE];
    /* Time when a sent short message was delivered or attempted to deliver
       to the recipient SME. See 12 chapter 9.2.3.13 TP-Discharge-Time
       (TP-DT).
    */
    uint8   discharge_time[SMS_DISCHARGE_TIME_SIZE];
    uint8   sub_block_count;
    /* Mandatory:
       - Recipient address sub-block
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - Parameters indicator sub-block
       [SMS_GSM_PARAM_INDICATOR]
       
       - GSM Optional fields sub-block
       [SMS_GSM_OPTIONAL_FIELDS]
       Maximum user data length defined as
       SMS_GSM_STATUSREP_UD_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_GSM_OPTIONAL_FIELDS
       SMS_GSM_PARAM_INDICATOR
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMStatusReport;

#define SMS_SUB_GSM_STATUS_REPORT_LEN   (\
        (6 + SMS_SC_TIME_STAMP_SIZE + SMS_DISCHARGE_TIME_SIZE)*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_SUBMIT - Obsolete from version 005.000                */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Submit TPDU. Contains several elements: TP-MTI,
       TP-RD, TP-VPF, TP-RP, TP-UDHI and TP-SRR. See 12 chapter 9.2.2.2
       SMS-SUBMIT type.
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    uint8   pad;          /* Spare */
    uint8   sub_block_count;
    /* Mandatory:
       - Destination address sub-block
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Service Center address sub-block
       Service Center address is optional when sender is SIM ATK.
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - GSM Submit User data sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum user data length defined as
       SMS_GSM_SUBMIT_UD_MAX_LEN
       - Validity period sub-block
       [SMS_GSM_VALIDITY_PERIOD]
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
       SMS_GSM_VALIDITY_PERIOD
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMSubmit;

#define SMS_SUB_GSM_SUBMIT_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_LONG_SUBMIT - Obsolete from version 005.000           */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   pad1;         /* Spare */
    uint16  sub_block_length;
    /* First octet of SMS-Submit TPDU. Contains several elements: TP-MTI,
       TP-RD, TP-VPF, TP-RP, TP-UDHI and TP-SRR. See 12 chapter 9.2.2.2
       SMS-SUBMIT type.
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   pad4;         /* Spare */
    uint8   sub_block_count;
    /* Mandatory:
       - Destination address sub-block
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Service Center address sub-block
       Service Center address is optional when sender is SIM ATK.
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - GSM Submit User data sub-block(s)
       [SMS_GSM_USER_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum user data length defined as
       SMS_GSM_LONG_SUBMIT_UD_MAX_LEN
       - Validity period sub-block
       [SMS_GSM_VALIDITY_PERIOD]
       Subblock list:
       SMS_ADDRESS
       SMS_GSM_COMMON_DATA
       SMS_GSM_USER_DATA
       SMS_GSM_VALIDITY_PERIOD
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMLongSubmit;

#define SMS_SUB_GSM_LONG_SUBMIT_LEN   (10*sizeof(uint8) + sizeof(uint16))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_COMMAND - Obsolete from version 005.000               */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Command TPDU. Contains several elements: TP-MTI,
       TP-UDHI and TP-SRR. See 12 chapter 9.2.2.4 SMS-COMMAND type.
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.2.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* Specifies the type of operation that the SC is to perform. See 12
       chapter 9.2.3. TP-Command-Type (TP-CT).
    */
    uint8   command_type;
    /* Unique reference to a short message in the service centre, which MS
       has previously sent. This number is the message reference value of a
       previously sent short message. See 12 chapter 9.2.3.18
       TP-Message-Number (TP-MN).
    */
    uint8   message_number;
    uint8   sub_block_count;
    /* Mandatory:
       - Destination address sub-block
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - Command data sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum command data length defined as
       SMS_GSM_COMMAND_CD_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMCommand;

#define SMS_SUB_GSM_COMMAND_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_MT_UNDEFINED - Obsolete from version 005.000          */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of reserved type of TPDU. Contains
       TP-Message-Type-Indicator parameter. See 12 chapter 9.2.3.1
       TP-Message-Type-Indicator (TP-MTI).
    */
    uint8   message_parameters;
    uint8   sub_block_count;
    /* Mandatory:
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined in chapter 3.1. Constants: 
       SMS_GSM_ADDRESS_MAX_LEN
       Optional:
       - Undefined User data sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum MT undefined length defined as
       SMS_GSM_MT_UNDEFINED_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMMtUndefined;

#define SMS_SUB_GSM_MT_UNDEFINED_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_MO_UNDEFINED - Obsolete from version 005.000          */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of reserved type of TPDU. Contains
       TP-Message-Type-Indicator parameter. See 12 chapter 9.2.3.1
       TP-Message-Type-Indicator (TP-MTI).
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   sub_block_count;
    /* Mandatory:
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Undefined User data sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum MO undefined length defined as
       SMS_GSM_MO_UNDEFINED_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMMoUndefined;

#define SMS_SUB_GSM_MO_UNDEFINED_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_DELIVER_REPORT - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Deliver-Report TPDU. Contains TP-UDHI and TP-MTI
       elements. See 12 chapter 9.2.2.1a (i) and (ii) SMS-DELIVER-REPORT for
       RP-ACK and RP-ERROR.
    */
    uint8   message_parameters;
    /* Parameter identifying the reason for SMS-Deliver failure. See 12
       chapter 9.2.3.22 TP-Failure-Cause (TP-FCS).
       Parameter ignored in response OK case.
    */
    uint8   gsm_tp_failure_cause;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   sub_block_count;
    /* Optional:
       - Parameter indicator sub-block
       [SMS_GSM_PARAM_INDICATOR]
       Maximum parameter indicator length defined as
       SMS_GSM_PARAM_INDICATOR_MAX_LEN
       - GSM optional fields sub-block
       [SMS_GSM_OPTIONAL_FIELDS]
       Maximum user data lengths defined as
       SMS_GSM_DELIVER_ACK_UD_MAX_LEN
       SMS_GSM_DELIVER_ERR_UD_MAX_LEN
       NOTE: Maximum length is different in successful and failed cases.
       Subblock list:
       SMS_GSM_OPTIONAL_FIELDS
       SMS_GSM_PARAM_INDICATOR
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMDeliverReport;

#define SMS_SUB_GSM_DELIVER_REPORT_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_SUBMIT_REPORT - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* First octet of SMS-Submit-Report TPDU. ContainsTP-UDHI and TP-MTI
       elements. See 12 chapter 9.2.2.2a (i) and (ii) SMS-SUBMIT-REPORT for
       RP-ACK and RP-ERROR
    */
    uint8   message_parameters;
    /* Time when service centre received the SMS-Submit. See 12 chapter
       9.2.3.11 TP-Service-Centre-Time-Stamp (TP-SCTS).
    */
    uint8   sc_time_stamp[SMS_SC_TIME_STAMP_SIZE];
    /* Parameter identifying the reason for SMS-Submit failure. See 12
       chapter 9.2.3.22 TP-Failure-Cause (TP-FCS).
       Parameter ignored in response OK case.
    */
    uint8   gsm_tp_failure_cause;
    uint8   sub_block_count;
    /* Optional:
       - Parameter indicator sub-block
       [SMS_GSM_PARAM_INDICATOR]
       Maximum parameter indicator length defined as
       SMS_GSM_PARAM_INDICATOR_MAX_LEN
       - GSM optional fields sub-block
       [SMS_GSM_OPTIONAL_FIELDS]
       Maximum user data lengths defined as
       SMS_GSM_SUBMIT_ACK_UD_MAX_LEN
       SMS_GSM_SUBMIT_ERR_UD_MAX_LEN
       NOTE: Maximum length is different in successful and failed cases.
       Subblock list:
       SMS_GSM_OPTIONAL_FIELDS
       SMS_GSM_PARAM_INDICATOR
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMSubmitReport;

#define SMS_SUB_GSM_SUBMIT_REPORT_LEN   (\
        (5 + SMS_SC_TIME_STAMP_SIZE)*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_PARAMETERS - Obsolete from version 005.000            */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   location_number; /* SMS parameters location on SIM */
    /* Each of the SMS parameters marked absent or present by individual bits
       within this byte.
       Allocation of bits:
       Bit number
       1 - Destination Address
       2 - Service Centre Address
       3 - Protocol ID
       4 - Data Coding Scheme
       5 - Validity Period
       6 - reserved, set to 1
       7 - reserved, set to 1
       8 - reserved, set to 1
       
       Bit value
       0 - Parameter present
       1 - Parameter absent
    */
    uint8   parameters_indicators;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID)
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme
    */
    uint8   data_coding_scheme;
    /* Information element enabling the originator user equipment to indicate
       the time period during which the originator considers the short
       message to be valid. Only relative format validity period is
       available. See 12 chapter 9.2.3.12 TP-Validity-Period (TP-VP)
    */
    uint8   validity_period;
    uint8   sub_block_count;
    /* Optional:
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Destination address sub-block
       [SMS_ADDRESS] (SMS_GSM_0340_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       - Alpha tag sub-block, name of the parameter set
       [SMS_ALPHA_TAG]
       Subblock list:
       SMS_ADDRESS
       SMS_ALPHA_TAG
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMParameters;

#define SMS_SUB_GSM_PARAMETERS_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_REPORT - Obsolete from version 005.000                */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   cause_type;   /* Values from the constant table SMS_CAUSE_TYPE */
    uint8   sms_cause;    /* Values from the constant table SMS_CAUSE */
    /* Number identifying a sent short message.
       See 12 chapter 9.2.3.6 TP-Message-Reference (TP-MR).
    */
    uint8   reference_for_message;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_ADDRESS
       SMS_ATK_ALPHA_ID
       SMS_GSM_SUBMIT_REPORT
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMReport;

#define SMS_SUB_GSM_REPORT_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_ROUTING - Obsolete from version 005.000               */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SMS_ROUTING_TYPE */
    uint8   routing_type;
    /* SMS message type SMS_GSM_SUBMIT_TYPE is allowed only with routing
       types SMS_GSM_APPL_PORT_ROUTING and SMS_GSM_APPL_PORT_COPY_ROUTING
       A subset of values from the constant table SMS_MESSAGE_TYPE
    */
    uint8   sms_message_type;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_APPL_PORT_ADDRESS
       SMS_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMRouting;

#define SMS_SUB_GSM_ROUTING_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_CB_MESSAGE - Versions 001.000 - 005.000               */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(1,0) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Octet 1 of serial number. 
       See 13 chapter 9.3.2.1 Serial Number
    */
    uint8   serial_number_msb;
    /* Octet 2 of serial number. 
       See 13 chapter 9.3.2.1 Serial Number
    */
    uint8   serial_number_lsb;
    /* Octet 1 of message identifier. 
       See 13 chapter 9.3.2.2 Message Identifier
    */
    uint8   cb_message_id_msb;
    /* Octet 2 of message identifier. 
       See 13 chapter 9.3.2.2 Message Identifier
    */
    uint8   cb_message_id_lsb;
    /* Indicates intended handling, alphabet/coding, and the language when
       applicable. 
       See 13 chapter 9.2.3.3 Data Coding Scheme and 11 chapter 5 Cell
       Broadcast Data Coding Scheme.
    */
    uint8   data_coding_scheme;
    /* Page parameter. Defines current page number and number of pages in
       total. 
       See 13 chapter 9.2.3.4 Page Parameter
    */
    uint8   page;
    /* Data part of a CBS message page. 
       See 13 chapter 9.2.3.5 Content of Message
    */
    uint8   content_of_message[SMS_CB_MESSAGE_CONTENT_SIZE];
    /* Useful data length in message content. Valid values are from 0 to 82.
       Value 255 indicates that this parameter should be ignored.In older ISI
       versions this used to be filler and Autogen mandates them to have
       default value 0 when taken into use.
    */
    uint8   info_length;
    uint8   pad1;         /* Spare */
    } tSMS_SubGSMCBMessage;

#define SMS_SUB_GSM_CB_MESSAGE_LEN   sizeof(tSMS_SubGSMCBMessage)

#endif /* SMS_ISI_MIN_VERSION(1,0) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_MCN_SETTING - Obsolete from version 005.000           */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Flag indicating whether MCN reception should be ON (TRUE) or OFF
       (FALSE).
    */
    uint8   mcn_reception_on;
    uint8   pad;          /* Spare */
    } tSMS_SubGSMMCNSetting;

#define SMS_SUB_GSM_MCN_SETTING_LEN   sizeof(tSMS_SubGSMMCNSetting)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_SETTINGS - Obsolete from version 005.000              */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* SMS GSM Settings location index on permanent memory. Location index
       shall be the same with the respective SMS parameters location on SIM.
    */
    uint8   location_number;
    /* Each of the SMS settings marked valid or invalid by individual bits
       within this byte.
       Allocation of bits:
       Bit number
       1 - Reply Path Request
       2 - Confirmation Request
       3 - GPRS Allowed
       4 - reserved, set to 1
       5 - reserved, set to 1
       6 - reserved, set to 1
       7 - reserved, set to 1
       8 - reserved, set to 1
       
       Bit value
       0 - Setting valid
       1 - Setting invalid
    */
    uint8   sms_settings_ind;
    /* Reply path requests service center (SC) to allow one reply short
       message from recipient via this SC. 
       See 12 chapter 9.2.3.17 TP-Reply-Path (TP-RP)
    */
    uint8   reply_path_request;
    /* Confirmation request requests SC to send information whether the sent
       short message was delivered to recipient or not. 
       See 12 chapter 9.2.3.5 TP-Status-Report-Request (TP-SRR)
    */
    uint8   confirmation_request;
    /* Flag indicating whether GPRS may be used to short message sending */
    uint8   gprs_allowed;
    uint8   pad;          /* Spare */
    } tSMS_SubGSMSettings;

#define SMS_SUB_GSM_SETTINGS_LEN   sizeof(tSMS_SubGSMSettings)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_RESEND_SETTING - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Flag indicating whether Resend setting is ON(TRUE) or OFF (FALSE). */
    uint8   resend_status;
    uint8   pad;          /* Spare */
    } tSMS_SubGSMResendSetting;

#define SMS_SUB_GSM_RESEND_SETTING_LEN   sizeof(tSMS_SubGSMResendSetting)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_GSM_TPDU - Obsolete from version 005.000                  */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table SMS_PACKING */
    uint8   packing_required;
    uint8   sub_block_count;
    /* Optional:
       - Service Center address sub-block
       [SMS_ADDRESS] (SMS_GSM_0411_ADDRESS)
       Maximum GSM address data length defined as
       SMS_GSM_ADDRESS_MAX_LEN
       Mandatory:
       - SMS sub-block
       [SMS_COMMON_DATA] or [SMS_GSM_COMMON_DATA]
       Maximum TPDU length defined as
       SMS_GSM_TPDU_MAX_LEN
       Subblock list:
       SMS_ADDRESS
       SMS_COMMON_DATA
       SMS_GSM_COMMON_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SubGSMTpdu;

#define SMS_SUB_GSM_TPDU_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_ADDRESS - Valid from version 005.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_ADDRESS_TYPE */
    uint8   address_type;
    /* Address data length in bytes. Maximum address data length defined as
       SMS_ADDRESS_MAX_LEN
    */
    uint8   address_data_length;
    /* Address data according to address type */
    uint8   address_data[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SbAddress;

#define SMS_SB_ADDRESS_LEN   (2*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_USER_DATA - Valid from version 005.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Data length in bytes. Maximum data lengths defined as:
       SMS_COMMAND_DATA_MAX_LEN, SMS_DELIVER_UD_MAX_LEN,
       SMS_DELIVER_ACK_UD_MAX_LEN, SMS_DELIVER_ERR_UD_MAX_LEN,
       SMS_MO_UNDEFINED_MAX_LEN, SMS_MT_UNDEFINED_MAX_LEN,
       SMS_STATUS_RPRT_UD_MAX_LEN, SMS_SUBMIT_UD_MAX_LEN,
       SMS_SUBMIT_ACK_UD_MAX_LEN or SMS_SUBMIT_ERR_UD_MAX_LEN
    */
    uint16  data_length;
    uint16  character_amount; /* Number of characters in user data */
    uint8   data_bytes[SMS_ANY_SIZE]; /* User data (TP-UD) */
    /* Spare. */
    } tSMS_SbUserData;

#define SMS_SB_USER_DATA_LEN   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_VALIDITY_PERIOD - Versions 005.000 - 008.003           */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(8,3)

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Possible values are 1 or 7 depending on the validity period format in
       message parameters.
       Values from the constant table SMS_VALIDITY_PERIOD_FORMAT
    */
    uint8   validity_period_length;
    /* Information element enabling the originator user equipment to indicate
       the time period during which the originator considers the short
       message to be valid. See 12 chapter 9.2.3.12 TP-Validity-Period
       (TP-VP).
    */
    uint8   validity_period_data[SMS_ANY_SIZE];
    /* Possible spares. */
    } tSMS_SbValidityPeriod;

#define SMS_SB_VALIDITY_PERIOD_LEN   (2*sizeof(uint16) + sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(8,3) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_VALIDITY_PERIOD - Valid from version 008.003           */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(8,3)

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Possible values are 1 or 7 depending on the validity period format in
       message parameters. Symbolic values SMS_TP_VPF_RELATIVE or
       SMS_TP_VPF_ABSOLUTE_OR_ENHANCED can be used.
    */
    uint8   validity_period_length;
    /* Information element enabling the originator user equipment to indicate
       the time period during which the originator considers the short
       message to be valid. See 12 chapter 9.2.3.12 TP-Validity-Period
       (TP-VP).
    */
    uint8   validity_period_data[SMS_ANY_SIZE];
    /* Possible spares. */
    } tSMS_SbValidityPeriod;

#define SMS_SB_VALIDITY_PERIOD_LEN   (2*sizeof(uint16) + sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(8,3) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_PARAM_INDICATOR - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    uint8   parameter_indicator_length;
    /* Parameter Indicator octets. See 12 chapter 9.2.3.27
       TP-Parameter-Indicator (TP-PI).
    */
    uint8   parameter_indicators[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SbParamIndicator;

#define SMS_SB_PARAM_INDICATOR_LEN   (2*sizeof(uint16) + 3*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_SUBMIT - Valid from version 005.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* First octet of SMS-Submit TPDU. Contains several elements: TP-MTI,
       TP-RD, TP-VPF, TP-RP, TP-UDHI and TP-SRR. See 12 chapter 9.2.2.2
       SMS-SUBMIT type.
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.3.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* A number indicating a data coding scheme of the TP-User-Data field,
       and may indicate a message class. See 11 chapter 4 SMS Data Coding
       Scheme.
    */
    uint8   data_coding_scheme;
    } tSMS_SbSubmit;

#define SMS_SB_SUBMIT_LEN   sizeof(tSMS_SbSubmit)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_COMMAND - Valid from version 005.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* First octet of SMS-Command TPDU. Contains several elements: TP-MTI,
       TP-UDHI and TP-SRR. See 12 chapter 9.2.2.4 SMS-COMMAND type.
    */
    uint8   message_parameters;
    /* Number identifying short message to be sent. See 12 chapter 9.2.3.6
       TP-Message-Reference (TP-MR).
    */
    uint8   message_reference;
    /* The information element by which the originator of a short message may
       refer to a higher layer protocol. See 12 chapter 9.2.2.9
       TP-Protocol-Identifier (TP-PID).
    */
    uint8   protocol_id;
    /* Specifies the type of operation that the SC is to perform on a SM. See
       12 chapter 9.2.3. TP-Command-Type (TP-CT).
    */
    uint8   command_type;
    /* Unique reference to a short message in the service centre, which MS
       has previously submitted. This number is the message reference value
       of a previously submitted short message. See 12 chapter 9.2.3.18
       TP-Message-Number (TP-MN).
    */
    uint8   message_number;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbCommand;

#define SMS_SB_COMMAND_LEN   sizeof(tSMS_SbCommand)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_DELIVER_REPORT - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* First octet of SMS-Deliver-Report TPDU. Contains TP-UDHI and TP-MTI
       elements. See 12 chapter 9.2.2.1a (i) and (ii) SMS-DELIVER-REPORT for
       RP-ERROR and RP-ACK, respectively.
    */
    uint8   message_parameters;
    /* Parameter identifying the reason for SMS-Deliver failure. See 12
       chapter 9.2.3.22 TP-Failure-Cause (TP-FCS).
       Parameter is valid only in RP-ERROR response and shall be ignored in
       RP-ACK response.
    */
    uint8   gsm_tp_failure_cause;
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbDeliverReport;

#define SMS_SB_DELIVER_REPORT_LEN   sizeof(tSMS_SbDeliverReport)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_SUBMIT_REPORT - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* First octet of SMS-Submit-Report TPDU. Contains TP-UDHI and TP-MTI
       elements. See 12 chapter 9.2.2.2a (i) and (ii) SMS-SUBMIT-REPORT for
       RP-ERROR and RP-ACK, respectively
    */
    uint8   message_parameters;
    /* Time when service centre received the SMS-Submit. See 12 chapter
       9.2.3.11 TP-Service-Centre-Time-Stamp (TP-SCTS).
    */
    uint8   sc_time_stamp[SMS_SC_TIME_STAMP_SIZE];
    /* Parameter indicating the reason for SMS-Submit failure. See 12 chapter
       9.2.3.22 TP-Failure-Cause (TP-FCS).
       Parameter is valid only in RP-ERROR response and shall be ignored in
       RP-ACK response.
    */
    uint8   tp_failure_cause;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbSubmitReport;

#define SMS_SB_SUBMIT_REPORT_LEN   sizeof(tSMS_SbSubmitReport)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CB_MESSAGE - Valid from version 005.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Serial number - MSB-LSB.
       See 13 chapter 9.3.1.2.1 Serial Number
    */
    uint16  serial_number;
    /* Message identifier - MSB-LSB.
       See 13 chapter 9.4.1.2.2 Message Identifier
    */
    uint16  cb_message_id;
    /* Indicates intended handling of the CBS message, alphabet or coding,
       and the language when applicable. 
       See 13 chapter 9.4.1.2.3 Data Coding Scheme and 11 chapter 5 Cell
       Broadcast Data Coding Scheme.
    */
    uint8   data_coding_scheme;
    /* Defines current page number and number of pages in total in GSM or
       total number of pages in UMTS. See 13 chapter 9.4.1.2.4 Page Parameter
       or chapter 9.4.2.2.5 CB data
    */
    uint8   page;
    /* Useful data length in message content. Valid values are from 0 to 82.
       Value 255 indicates that this parameter should be ignored.
    */
    uint8   info_length;
    /* Content of message or CB data. 
       See 13 chapter 9.4.1.2.5 content of message or  9.4.2.2.5 CB Data
    */
    uint8   content_of_message[SMS_CB_MESSAGE_CONTENT_SIZE];
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbCBMessage;

#define SMS_SB_CB_MESSAGE_LEN   sizeof(tSMS_SbCBMessage)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESEND_SETTING - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Value indicating whether resend setting is disabled or enabled, and if
       enabled how many retries can be done.
       Values from the constant table SMS_RESEND_SETTING
    */
    uint8   resend_setting;
    uint8   fill1[3];     /* Spare */
    } tSMS_SbResendSetting;

#define SMS_SB_RESEND_SETTING_LEN   sizeof(tSMS_SbResendSetting)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_FDN_SETTING - Valid from version 006.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Value indicating whether FDN checks is disabled or enabled in SMS
       server.
       Values from the constant table SMS_FDN_SETTING
    */
    uint8   fdn_setting;
    uint8   fill1[3];     /* Spare */
    } tSMS_SbFdnSetting;

#define SMS_SB_FDN_SETTING_LEN   sizeof(tSMS_SbFdnSetting)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_TPDU_PACKING - Valid from version 006.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_PACKING */
    uint8   packing_required;
    uint8   fill1[3];     /* Spare */
    } tSMS_SbTpduPacking;

#define SMS_SB_TPDU_PACKING_LEN   sizeof(tSMS_SbTpduPacking)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_MO_SM_RESULT - Valid from version 006.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_MO_SM_RESULT */
    uint8   sms_mo_sm_result;
    uint8   fill1[3];     /* Spare */
    } tSMS_SbMoSMResult;

#define SMS_SB_MO_SM_RESULT_LEN   sizeof(tSMS_SbMoSMResult)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_TPDU - Versions 005.000 - 006.000                      */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(6,0)

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_PACKING */
    uint8   packing_required;
    uint8   fill1[3];     /* Spare */
    } tSMS_SbTpdu;

#define SMS_SB_TPDU_LEN   sizeof(tSMS_SbTpdu)

#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(6,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_TPDU - Valid from version 006.000                      */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(6,0)

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Length of data in bytes.
       Maximum user data length defined as SMS_TPDU_MAX_LEN
    */
    uint8   data_length;
    uint8   pad;          /* Spare */
    /* Meaning of these bytes varies with the message */
    uint8   data_bytes[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SbTpdu;

#define SMS_SB_TPDU_LEN   (2*sizeof(uint16) + 2*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(6,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CB_DCS_LIST - Valid from version 005.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   fill1;        /* Spare */
    uint8   dcs_count;    /* Number of DCS to follow */
    /* DCS information if N > 0
       Valid DCS value from 23.038 chapter 5 CBS Data Coding Scheme.
       Following predefined constants can be used also. SMS_GSM_CB_LANGUAGES
    */
    uint8   dcs_value[SMS_ANY_SIZE];
    /* Spare */
    } tSMS_SbCBDCSList;

#define SMS_SB_CB_DCS_LIST_LEN   (2*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CB_SUBJECTS - Valid from version 005.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   fill1;        /* Spare. */
    uint8   subject_count; /* Number of subjects to follow. */
    /* CB message identifier value (MSB, LSB). See 3GPP TS 23.041 */
    uint16  subject_list_ids[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SbCBSubjects;

#define SMS_SB_CB_SUBJECTS_LEN   (2*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CB_SUBJECT_RANGE - Versions 005.000 - 007.000          */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0)

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* CB message identifier begin value (MSB, LSB) See 3GPP TS 23.041 */
    uint16  cb_range_begin_id;
    /* CB message identifier end value (MSB, LSB) See 3GPP TS 23.041 */
    uint16  cb_range_end_id;
    } tSMS_SbCBSubjectRange;

#define SMS_SB_CB_SUBJECT_RANGE_LEN   sizeof(tSMS_SbCBSubjectRange)

#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_SETTINGS - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Each of the settings are marked absent or present by individual bits
       within this byte.
       
       Allocation of bits:
       Bit # - Description
       1 - Reply path request
       2 - Confirmation request
       3-8 - Reserved
       
       Bit value
       0 - Setting is valid
       1 - Setting is invalid
       
       If setting is indicated to be invalid its value shall be ignored.
    */
    uint8   settings_indicator;
    /* Reply path requests service center (SC) to allow one reply short
       message from recipient via this SC. See 12 chapter 9.2.3.17
       TP-Reply-Path (TP-RP)
    */
    uint8   reply_path_request;
    /* Confirmation request ask for service center to send status report
       concerning sent mobile originated short message or command. See 12
       chapter 9.2.3.5 TP-Status-Report-Request (TP-SRR)
    */
    uint8   confirmation_request;
    uint8   fill1;        /* Spare */
    } tSMS_SbSettings;

#define SMS_SB_SETTINGS_LEN   sizeof(tSMS_SbSettings)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_SERVER_STATE_INFO - Valid from version 005.000         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_SERVER_STATE */
    uint8   server_state;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbServerStateInfo;

#define SMS_SB_SERVER_STATE_INFO_LEN   sizeof(tSMS_SbServerStateInfo)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_ROUTE_INFO - Valid from version 005.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_ROUTE_PRIORITY */
    uint8   cs_route_info;
    /* Values from the constant table SMS_ROUTE_PRIORITY */
    uint8   ps_route_info;
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbRouteInfo;

#define SMS_SB_ROUTE_INFO_LEN   sizeof(tSMS_SbRouteInfo)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CHECK_INFO - Valid from version 005.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the bitmask table SMS_CHECK_INFO */
    uint8   int_check_info;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbCheckInfo;

#define SMS_SB_CHECK_INFO_LEN   sizeof(tSMS_SbCheckInfo)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RECEPTION_STATUS - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   status; /* Values from the constant table SMS_RECEPTION_STATUS */
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbReceptionStatus;

#define SMS_SB_RECEPTION_STATUS_LEN   sizeof(tSMS_SbReceptionStatus)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CBS_SUBSCRIPTION - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   cbs_subscription_client_count;
    uint8   cbs_subscriber_id[SMS_ANY_SIZE];
    /* Spare. */
    } tSMS_SbCBSSubscription;

#define SMS_SB_CBS_SUBSCRIPTION_LEN   (2*sizeof(uint16) + sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESOURCE_CONF - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */
/* Resource mask is used to indicate what resources are to be configured by
   resources field. SMS Server does not change  status of those resources
   which corresponding mask is set to zero (0).
*/

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint16  resources;   /* Values from the bitmask table SMS_RESOURCE_IDS */
    /* Values from the bitmask table SMS_RESOURCE_IDS_MASK */
    uint16  resource_mask;
    } tSMS_SbResourceConf;

#define SMS_SB_RESOURCE_CONF_LEN   sizeof(tSMS_SbResourceConf)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESOURCE - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint16  resources;   /* Values from the bitmask table SMS_RESOURCE_IDS */
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbResource;

#define SMS_SB_RESOURCE_LEN   sizeof(tSMS_SbResource)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_CAUSE - Valid from version 005.000                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   cause_type;   /* Values from the constant table SMS_CAUSE_TYPE */
    uint8   sms_cause;    /* Values from the constant table SMS_CAUSE */
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbCause;

#define SMS_SB_CAUSE_LEN   sizeof(tSMS_SbCause)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESOURCE_CONF_REQUIRED - Valid from version 005.000    */
/* ----------------------------------------------------------------------- */
/* Resource configuration required field indicates for what resources the
   resource configuration is mandatory before resources are allowed. These
   settings are read from product profile. 
*/

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the bitmask table SMS_RESOURCE_IDS_CONF_REQ */
    uint16  res_pp;
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbResourceConfRequired;

#define SMS_SB_RESOURCE_CONF_REQUIRED_LEN   \
        sizeof(tSMS_SbResourceConfRequired)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESOURCE_SEQ_ID - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   sequence_id;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbResourceSeqID;

#define SMS_SB_RESOURCE_SEQ_ID_LEN   sizeof(tSMS_SbResourceSeqID)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_RESOURCE_STATUS - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Values from the constant table SMS_RESOURCE_STATUS */
    uint8   res_status;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbResourceStatus;

#define SMS_SB_RESOURCE_STATUS_LEN   sizeof(tSMS_SbResourceStatus)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_REQ_INFO - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    /* Transaction identifier from the request. */
    uint8   req_transaction_id;
    uint8   fill1[3];     /* Spare. */
    } tSMS_SbReqInfo;

#define SMS_SB_REQ_INFO_LEN   sizeof(tSMS_SbReqInfo)


/* ----------------------------------------------------------------------- */
/* Subblock: SMS_SB_SMS_PARAMETERS - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sub_block_id;
    uint16  sub_block_length;
    uint8   location_number;
    /* Values from the bitmask table SMS_PARAMETER_INDICATOR */
    uint8   sms_parameters;
    uint8   fill1[2];     /* Spare. */
    } tSMS_SbSMSParameters;

#define SMS_SB_SMS_PARAMETERS_LEN   sizeof(tSMS_SbSMSParameters)


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_CAPABILITY_REQ - Obsolete from version 005.000     */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    } tSMS_MessageCapabilityReq;

#define SMS_MESSAGE_CAPABILITY_REQ_LEN   sizeof(tSMS_MessageCapabilityReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_CAPABILITY_RESP - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_CAPABILITY_ID */
    uint8   capability_id;
    uint8   pad1;         /* Spare */
    /* Values from the bitmask table SMS_CAPABILITY_DATA */
    uint16  capability_data;
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    } tSMS_MessageCapabilityResp;

#define SMS_MESSAGE_CAPABILITY_RESP_LEN   sizeof(tSMS_MessageCapabilityResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_SEND_REQ - Obsolete from version 005.000           */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   more_messages_to_send;
    /* SMS_ROUTE_ANY | SMS_ROUTE_CS_PREF | SMS_ROUTE_CS | SMS_ROUTE_GPRS |
       SMS_ROUTE_GPRS_PREF | SMS_ROUTE_DEFAULT
       Values from the constant table SMS_ROUTE
    */
    uint8   sms_route;
    uint8   repeated_message;
    uint8   sender;       /* Values from the constant table SMS_SENDER */
    /* New field taken into use.
       Values from the constant table SMS_CONTENT_TYPE
    */
    uint8   sms_content_type;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_COMMAND
       SMS_GSM_LONG_SUBMIT
       SMS_GSM_MO_UNDEFINED
       SMS_GSM_SUBMIT
       SMS_GSM_TPDU
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_MessageSendReq;

#define SMS_MESSAGE_SEND_REQ_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_SEND_RESP - Obsolete from version 005.000          */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;          /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_REPORT
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_MessageSendResp;

#define SMS_MESSAGE_SEND_RESP_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_RECEIVED_PP_REPORT_REQ - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause_type;   /* Values from the constant table SMS_CAUSE_TYPE */
    uint8   sms_cause;    /* Values from the constant table SMS_CAUSE */
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_DELIVER_REPORT
       SMS_GSM_SUBMIT_REPORT
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_GSMReceivedPPReportReq;

#define SMS_GSM_RECEIVED_PP_REPORT_REQ_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_RECEIVED_PP_REPORT_RESP - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   pad;          /* Spare */
    } tSMS_GSMReceivedPPReportResp;

#define SMS_GSM_RECEIVED_PP_REPORT_RESP_LEN   \
        sizeof(tSMS_GSMReceivedPPReportResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_CB_ROUTING_REQ - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_ROUTING_COMMAND */
    uint8   routing_command;
    /* Values from the constant table SMS_GSM_ROUTING_MODE */
    uint8   sms_gsm_routing_mode;
    /* Values from the constant table SMS_GSM_CB_SUBJECT_LIST_TYPE */
    uint8   sms_gsm_cb_subject_list_type;
    /* Number of subjects (subject_msb/subject_lsb pairs) to follow; if zero
       and subject_list_type == SMS_CB_NOT_ALLOWED_SUBJ_LIST, all CBS IDs are
       accepted
    */
    uint8   subject_count;
    uint8   language_count; /* Number of languages to follow */
    uint8   cb_range;
    /* CBM message identifier's most significant bytes. See GSM 23.041 */
    uint8   subject_list_msbs[SMS_ANY_SIZE];
    /* CBM message identifier's least significant bytes. See GSM 23.041 */
    uint8   subject_list_lsbs[SMS_ANY_SIZE];
    /* Language information if M > 0
       Values from the constant table SMS_GSM_CB_LANGUAGES
    */
    uint8   languages[SMS_ANY_SIZE];
    } tSMS_GSMCBRoutingReq;

#define SMS_GSM_CB_ROUTING_REQ_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_CB_ROUTING_RESP - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   pad;          /* Spare */
    } tSMS_GSMCBRoutingResp;

#define SMS_GSM_CB_ROUTING_RESP_LEN   sizeof(tSMS_GSMCBRoutingResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_CB_ROUTING_NTF - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;          /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_CB_MESSAGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_GSMCBRoutingNtf;

#define SMS_GSM_CB_ROUTING_NTF_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_TEMP_CB_ROUTING_REQ - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_ROUTING_COMMAND */
    uint8   routing_command;
    /* Values from the constant table SMS_GSM_ROUTING_MODE */
    uint8   sms_gsm_routing_mode;
    /* A subset of values from the constant table
       SMS_GSM_CB_SUBJECT_LIST_TYPE
    */
    uint8   sms_gsm_cb_subject_list_type;
    /* Number of subjects (subject_msb/subject_lsb pairs) to follow; if zero
       then all CBM messages are accepted
    */
    uint8   subject_count;
    /* SMS_ALL_LANGUAGES: language parameter ignored
       1: One language specified by language parameter
    */
    uint8   language_count;
    uint8   cb_range;
    /* CBM message identifier's most significant bytes. See GSM 23.041 */
    uint8   subject_list_msbs[SMS_ANY_SIZE];
    /* CBM message identifier's least significant bytes. See GSM 23.041 */
    uint8   subject_list_lsbs[SMS_ANY_SIZE];
    /* Language information if Routing Mode is DATACODE_TXT and M is 1
       Values from the constant table SMS_GSM_CB_LANGUAGES
    */
    uint8   languages[SMS_ANY_SIZE];
    } tSMS_GSMTempCBRoutingReq;

#define SMS_GSM_CB_TEMP_ROUTING_REQ_LEN   (8*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_TEMP_CB_ROUTING_RESP - Obsolete from version 005.000   */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   pad;          /* Spare */
    } tSMS_GSMTempCBRoutingResp;

#define SMS_GSM_CB_TEMP_ROUTING_RESP_LEN   sizeof(tSMS_GSMTempCBRoutingResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_TEMP_CB_ROUTING_NTF - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;          /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_CB_MESSAGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_GSMTempCBRoutingNtf;

#define SMS_GSM_TEMP_CB_ROUTING_NTF_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_CBCH_PRESENT_IND - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad1;         /* Spare */
    uint8   pad2;         /* Spare */
    } tSMS_GSMCBChPresentInd;

#define SMS_GSM_CBCH_PRESENT_IND_LEN   sizeof(tSMS_GSMCBChPresentInd)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_UPDATE_REQ - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;          /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_PARAMETERS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ParametersUpdateReq;

#define SMS_PARAMETERS_UPDATE_REQ_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_UPDATE_RESP - Obsolete from version 005.000     */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   pad;          /* Spare */
    } tSMS_ParametersUpdateResp;

#define SMS_PARAMETERS_UPDATE_RESP_LEN   sizeof(tSMS_ParametersUpdateResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_READ_REQ - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   location_number; /* SMS parameters location index */
    /* (Use FALSE, kept this for backward compatibility) */
    uint8   read_only;
    } tSMS_ParametersReadReq;

#define SMS_PARAMETERS_READ_REQ_LEN   sizeof(tSMS_ParametersReadReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_READ_RESP - Obsolete from version 005.000       */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_PARAMETERS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ParametersReadResp;

#define SMS_PARAMETERS_READ_RESP_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_SETTINGS_UPDATE_REQ - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_GSM_SETTING_TYPE */
    uint8   sms_gsm_setting_type;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_MCN_SETTING
       SMS_GSM_RESEND_SETTING
       SMS_GSM_SETTINGS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_GSMSettingsUpdateReq;

#define SMS_GSM_SETTINGS_UPDATE_REQ_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_SETTINGS_UPDATE_RESP - Obsolete from version 005.000   */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_GSM_SETTING_TYPE */
    uint8   sms_gsm_setting_type;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    } tSMS_GSMSettingsUpdateResp;

#define SMS_GSM_SETTINGS_UPDATE_RESP_LEN   sizeof(tSMS_GSMSettingsUpdateResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_SETTINGS_READ_REQ - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_GSM_SETTING_TYPE */
    uint8   sms_gsm_setting_type;
    /* SMS GSM Settings location index on permanent memory. Location index
       shall be the same with the respective SMS parameters location on SIM.
       Valid only with SMS_GSM_SETTING_TYPE_SMS
    */
    uint8   location_number;
    } tSMS_GSMSettingsReadReq;

#define SMS_GSM_SETTINGS_READ_REQ_LEN   sizeof(tSMS_GSMSettingsReadReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_SETTINGS_READ_RESP - Obsolete from version 005.000     */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_MCN_SETTING
       SMS_GSM_RESEND_SETTING
       SMS_GSM_SETTINGS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_GSMSettingsReadResp;

#define SMS_GSM_SETTINGS_READ_RESP_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_MCN_SETTING_CHANGED_IND - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Flag indicating whether MCN reception should be ON (TRUE) or OFF
       (FALSE)
    */
    uint8   mcn_reception_on;
    uint8   pad;          /* Reserverd */
    } tSMS_GSMMCNSettingChangedInd;

#define SMS_GSM_MCN_SETTING_CHANGED_IND_LEN   \
        sizeof(tSMS_GSMMCNSettingChangedInd)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_SEND_STATUS_IND                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   status;      /* Values from the constant table SMS_SEND_STATUS */
    /* Reference of the sent short message (segment) */
    uint8   message_reference;
    uint8   route; /* A subset of values from the constant table SMS_ROUTE */
    uint8   current_segment;
    uint8   segments_total;
    uint8   fill1;        /* Spare */
    } tSMS_MessageSendStatusInd;

#define SMS_MESSAGE_SEND_STATUS_IND_LEN   sizeof(tSMS_MessageSendStatusInd)


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_RESEND_CANCEL_REQ - Obsolete from version 005.000      */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];     /* Spare */
    } tSMS_GsmResendCancelReq;

#define SMS_GSM_RESEND_CANCEL_REQ_LEN   sizeof(tSMS_GsmResendCancelReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_RESEND_CANCEL_RESP - Obsolete from version 005.000     */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause; /* A subset of values from the constant table SMS_CAUSE */
    uint8   fill1;        /* Spare */
    } tSMS_GsmResendCancelResp;

#define SMS_GSM_RESEND_CANCEL_RESP_LEN   sizeof(tSMS_GsmResendCancelResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_INDICATE_STORAGE_REQ - Versions 002.019 - 005.000      */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(2,19) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   memory_type;  /* Types are defined in reference 8 */
    uint8   pad1;         /* Spare */
    /* Memory location of the received message. See reference 8 */
    uint16  location_index;
    uint8   pad2;         /* Spare */
    uint8   pad3;         /* Spare */
    } tSMS_GSMIndicateStorageReq;

#define SMS_GSM_INDICATE_STORAGE_REQ_LEN   sizeof(tSMS_GSMIndicateStorageReq)

#endif /* SMS_ISI_MIN_VERSION(2,19) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_GSM_INDICATE_STORAGE_RESP - Versions 002.019 - 005.000     */
/* ----------------------------------------------------------------------- */
/* This message is deprecated. */

#if SMS_ISI_MIN_VERSION(2,19) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause; /* A subset of values from the constant table SMS_CAUSE */
    uint8   pad;          /* Spare */
    } tSMS_GSMIndicateStorageResp;

#define SMS_GSM_INDICATE_STORAGE_RESP_LEN   \
        sizeof(tSMS_GSMIndicateStorageResp)

#endif /* SMS_ISI_MIN_VERSION(2,19) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PP_ROUTING_REQ - Obsolete from version 005.000             */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_ROUTING_COMMAND */
    uint8   routing_command;
    uint8   sub_block_count; /* Note: 0 not allowed with SMS_ROUTING_SET */
    /* Subblock list:
       SMS_GSM_ROUTING
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_PPRoutingReq;

#define SMS_PP_ROUTING_REQ_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PP_ROUTING_RESP - Obsolete from version 005.000            */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   fill1;
    } tSMS_PPRoutingResp;

#define SMS_PP_ROUTING_RESP_LEN   sizeof(tSMS_PPRoutingResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PP_ROUTING_NTF - Obsolete from version 005.000             */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_DELIVER
       SMS_GSM_MT_UNDEFINED
       SMS_GSM_STATUS_REPORT
       SMS_GSM_TPDU
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_PPRoutingNtf;

#define SMS_PP_ROUTING_NTF_LEN   (4*sizeof(uint8))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_CAPACITY_REQ - Obsolete from version 005.000    */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   pad1;         /* Reserverd */
    uint8   pad2;         /* Reserverd */
    } tSMS_ParametersCapacityReq;

#define SMS_PARAMETERS_CAPACITY_REQ_LEN   sizeof(tSMS_ParametersCapacityReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_PARAMETERS_CAPACITY_RESP - Obsolete from version 005.000   */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    /* Amount of SMS parameters set locations.
       Ignore value if the SMS Cause is other than SMS_OK
    */
    uint8   number_of_parameters;
    } tSMS_ParametersCapacityResp;

#define SMS_PARAMETERS_CAPACITY_RESP_LEN   \
        sizeof(tSMS_ParametersCapacityResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_SM_CONTROL_ACTIVATE_REQ - Versions 002.011 - 005.000       */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(2,11) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SM_CONTROL_ACTION */
    uint8   action;
    uint8   fill1;        /* Spare */
    } tSMS_SmControlActivateReq;

#define SMS_SM_CONTROL_ACTIVATE_REQ_LEN   sizeof(tSMS_SmControlActivateReq)

#endif /* SMS_ISI_MIN_VERSION(2,11) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_SM_CONTROL_ACTIVATE_RESP - Versions 002.009 - 005.000      */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause; /* A subset of values from the constant table SMS_CAUSE */
    uint8   fill1;        /* Spare */
    } tSMS_SmControlActivateResp;

#define SMS_SM_CONTROL_ACTIVATE_RESP_LEN   sizeof(tSMS_SmControlActivateResp)

#endif /* SMS_ISI_MIN_VERSION(2,9) && !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_MT_PP_IND - Obsolete from version 005.000         */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   memory_type;  /* Types are defined in reference 8 */
    uint8   pad1;         /* Spare */
    /* Memory location of the received message. See reference 8 */
    uint16  location_index;
    uint8   pad2;         /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_DELIVER
       SMS_GSM_MT_UNDEFINED
       SMS_GSM_STATUS_REPORT
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceivedMTPPInd;

#define SMS_RECEIVED_MT_PP_IND_LEN   (6*sizeof(uint8) + sizeof(uint16))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_MWI_PP_IND - Obsolete from version 005.000        */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* The structure of this message is exactly same as the
       SMS_RECEIVED_MT_PP_IND message has.
       
       NOTE: This message is for GSM only
       Types are defined in reference 8
    */
    uint8   memory_type;
    uint8   pad1;         /* Spare */
    /* Memory location of the received message. See reference 8 */
    uint16  location_index;
    uint8   pad2;         /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_GSM_DELIVER
       SMS_GSM_MT_UNDEFINED
       SMS_GSM_STATUS_REPORT
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceivedMWIPPInd;

#define SMS_RECEIVED_MWI_PP_IND_LEN   (6*sizeof(uint8) + sizeof(uint16))

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MEMORY_CAPACITY_EXC_IND                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];     /* Spare */
    } tSMS_MemoryCapacityExcInd;

#define SMS_MEMORY_CAPACITY_EXC_IND_LEN   sizeof(tSMS_MemoryCapacityExcInd)


/* ----------------------------------------------------------------------- */
/* Message: SMS_STORAGE_STATUS_UPDATE_REQ - Obsolete from version 005.000  */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_STORAGE_STATUS */
    uint8   storage_status;
    /* SMS_MEMORY_TYPE_DEFAULT
       Memory types defined in 8
    */
    uint8   memory_type;
    } tSMS_StorageStatusUpdateReq;

#define SMS_STORAGE_STATUS_UPDATE_REQ_LEN   \
        sizeof(tSMS_StorageStatusUpdateReq)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_STORAGE_STATUS_UPDATE_RESP - Obsolete from version 005.000 */
/* ----------------------------------------------------------------------- */

#if !SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   fill1;        /* Spare */
    } tSMS_StorageStatusUpdateResp;

#define SMS_STORAGE_STATUS_UPDATE_RESP_LEN   \
        sizeof(tSMS_StorageStatusUpdateResp)

#endif /* !SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_SEND_REQ - Valid from version 005.000              */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   more_messages_to_send;
    uint8   sms_route;    /* Values from the constant table SMS_ROUTE */
    uint8   repeated_message;
    uint8   fill1[2];     /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_ADDRESS
       SMS_SB_CHECK_INFO
       SMS_SB_COMMAND
       SMS_SB_RESEND_SETTING
       SMS_SB_SMS_PARAMETERS
       SMS_SB_SUBMIT
       SMS_SB_TPDU
       SMS_SB_TPDU_PACKING
       SMS_SB_USER_DATA
       SMS_SB_VALIDITY_PERIOD
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_MessageSendReq;

#define SMS_MESSAGE_SEND_REQ_LEN   (8*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_MESSAGE_SEND_RESP - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause_type;   /* Values from the constant table SMS_CAUSE_TYPE */
    uint8   sms_cause;    /* Values from the constant table SMS_CAUSE */
    /* Reference number identifying a sent short message. See 12 chapter
       9.2.3.6 TP-Message-Reference (TP-MR).
    */
    uint8   reference_for_message;
    uint8   fill1[2];     /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_PARAM_INDICATOR
       SMS_SB_SUBMIT_REPORT
       SMS_SB_USER_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_MessageSendResp;

#define SMS_MESSAGE_SEND_RESP_LEN   (8*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(5,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_MSG_REPORT_REQ - Valid from version 005.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cause_type;   /* Values from the constant table SMS_CAUSE_TYPE */
    uint8   sms_cause;    /* Values from the constant table SMS_CAUSE */
    uint8   fill1[3];     /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_DELIVER_REPORT
       SMS_SB_PARAM_INDICATOR
       SMS_SB_USER_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceivedMsgReportReq;

#define SMS_RECEIVED_MSG_REPORT_REQ_LEN   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_MSG_REPORT_RESP - Valid from version 005.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   fill1;        /* Spare */
    } tSMS_ReceivedMsgReportResp;

#define SMS_RECEIVED_MSG_REPORT_RESP_LEN   sizeof(tSMS_ReceivedMsgReportResp)


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVE_MESSAGE_REQ - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_RECEPTION_COMMAND */
    uint8   action;
    uint8   fill1;        /* Spare */
    } tSMS_ReceiveMessageReq;

#define SMS_RECEIVE_MESSAGE_REQ_LEN   sizeof(tSMS_ReceiveMessageReq)


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVE_MESSAGE_RESP - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   status; /* Values from the constant table SMS_RECEPTION_STATUS */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CAUSE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceiveMessageResp;

#define SMS_RECEIVE_MESSAGE_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_MSG_IND - Valid from version 005.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_ADDRESS
       SMS_SB_TPDU
       SMS_SB_USER_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceivedMsgInd;

#define SMS_RECEIVED_MSG_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RECEIVED_SIM_MSG_IND - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_ADDRESS
       SMS_SB_TPDU
       SMS_SB_USER_DATA
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ReceivedSIMMsgInd;

#define SMS_RECEIVED_SIM_MSG_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_ROUTING_REQ - Valid from version 005.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_ROUTING_COMMAND */
    uint8   routing_command;
    uint8   subscription_number;
    /* Values from the constant table SMS_SUBSCRIPTION_TYPE */
    uint8   subscription_type;
    uint8   fill1[2];
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CB_DCS_LIST
       SMS_SB_CB_SUBJECTS
       SMS_SB_CB_SUBJECT_RANGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBRoutingReq;

#define SMS_CB_ROUTING_REQ_LEN   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_ROUTING_RESP - Versions 005.000 - 007.000               */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   subscription_number;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    /* This contains valid information only if request was a query. Otherwise
       this shall be ignored.
       Values from the constant table SMS_CB_SUBSCRIPTION_STATUS
    */
    uint8   cb_subscription_status;
    uint8   fill1[2];     /* Spare. */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CB_DCS_LIST
       SMS_SB_CB_SUBJECTS
       SMS_SB_CB_SUBJECT_RANGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBRoutingResp;

#define SMS_CB_ROUTING_RESP_LEN   (8*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(5,0) && !SMS_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_ROUTING_RESP - Versions 007.000 - 008.000               */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(7,0) && !SMS_ISI_MIN_VERSION(8,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   subscription_number;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   fill1[3];     /* Spare. */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CB_DCS_LIST
       SMS_SB_CB_SUBJECTS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBRoutingResp;

#define SMS_CB_ROUTING_RESP_LEN   (8*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(7,0) && !SMS_ISI_MIN_VERSION(8,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_ROUTING_RESP - Valid from version 008.000               */
/* ----------------------------------------------------------------------- */

#if SMS_ISI_MIN_VERSION(8,0)

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   subscription_number;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    /* This contains valid information only if request was a query. Otherwise
       this shall be ignored.
       Values from the constant table SMS_CB_SUBSCR_STATUS
    */
    uint8   cb_subscription_status;
    uint8   fill1[2];     /* Spare. */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CB_DCS_LIST
       SMS_SB_CB_SUBJECTS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBRoutingResp;

#define SMS_CB_ROUTING_RESP_LEN   (8*sizeof(uint8))

#endif /* SMS_ISI_MIN_VERSION(8,0) */


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_ROUTING_IND - Valid from version 005.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare. */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CBS_SUBSCRIPTION
       SMS_SB_CB_MESSAGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBRoutingInd;

#define SMS_CB_ROUTING_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_CB_SIM_ROUTING_IND - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare. */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CBS_SUBSCRIPTION
       SMS_SB_CB_MESSAGE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_CBSIMRoutingInd;

#define SMS_CB_SIM_ROUTING_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_SETTINGS_UPDATE_REQ - Valid from version 005.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SETTING_TYPE */
    uint8   setting_type;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_FDN_SETTING
       SMS_SB_RESEND_SETTING
       SMS_SB_ROUTE_INFO
       SMS_SB_SETTINGS
       SMS_SB_SMS_PARAMETERS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SettingsUpdateReq;

#define SMS_SETTINGS_UPDATE_REQ_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_SETTINGS_UPDATE_RESP - Valid from version 005.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SETTING_TYPE */
    uint8   sms_gsm_setting_type;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    } tSMS_SettingsUpdateResp;

#define SMS_SETTINGS_UPDATE_RESP_LEN   sizeof(tSMS_SettingsUpdateResp)


/* ----------------------------------------------------------------------- */
/* Message: SMS_SETTINGS_READ_REQ - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SETTING_TYPE */
    uint8   sms_setting_type;
    uint8   fill1;        /* Spare */
    } tSMS_SettingsReadReq;

#define SMS_SETTINGS_READ_REQ_LEN   sizeof(tSMS_SettingsReadReq)


/* ----------------------------------------------------------------------- */
/* Message: SMS_SETTINGS_READ_RESP - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table SMS_CAUSE */
    uint8   sms_cause;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_FDN_SETTING
       SMS_SB_RESEND_SETTING
       SMS_SB_ROUTE_INFO
       SMS_SB_SETTINGS
       SMS_SB_SMS_PARAMETERS
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_SettingsReadResp;

#define SMS_SETTINGS_READ_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_STATUS_REQ - Valid from version 005.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];     /* Spare */
    } tSMS_StatusReq;

#define SMS_STATUS_REQ_LEN   sizeof(tSMS_StatusReq)


/* ----------------------------------------------------------------------- */
/* Message: SMS_STATUS_RESP - Valid from version 005.000                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SERVER_STATUS */
    uint8   server_status;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_RECEPTION_STATUS
       SMS_SB_ROUTE_INFO
       SMS_SB_SERVER_STATE_INFO
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_StatusResp;

#define SMS_STATUS_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_STATUS_IND - Valid from version 005.000                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_SERVER_STATUS */
    uint8   server_status;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_RECEPTION_STATUS
       SMS_SB_ROUTE_INFO
       SMS_SB_SERVER_STATE_INFO
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_StatusInd;

#define SMS_STATUS_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_CONF_REQ - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_RES_CONF_OPERATION */
    uint8   conf_operation;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_RESOURCE_CONF
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceConfReq;

#define SMS_RESOURCE_CONF_REQ_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_CONF_RESP - Valid from version 005.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_RES_CONF_OPERATION */
    uint8   conf_operation;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CAUSE
       SMS_SB_RESOURCE
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceConfResp;

#define SMS_RESOURCE_CONF_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_CONF_IND - Valid from version 005.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table SMS_RES_CONF_STATUS */
    uint8   conf_status;
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_RESOURCE
       SMS_SB_RESOURCE_CONF_REQUIRED
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceConfInd;

#define SMS_RESOURCE_CONF_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_CLEAR_IND - Valid from version 006.000            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_MO_SM_RESULT
       SMS_SB_RESOURCE
       SMS_SB_RESOURCE_SEQ_ID
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceClearInd;

#define SMS_RESOURCE_CLEAR_IND_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_REQ - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_ADDRESS
       SMS_SB_CAUSE
       SMS_SB_CHECK_INFO
       SMS_SB_RESOURCE
       SMS_SB_RESOURCE_SEQ_ID
       SMS_SB_RESOURCE_STATUS
       SMS_SB_TPDU
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceReq;

#define SMS_RESOURCE_REQ_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_RESP - Valid from version 005.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_CAUSE
       SMS_SB_RESOURCE_SEQ_ID
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceResp;

#define SMS_RESOURCE_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: SMS_RESOURCE_IND - Valid from version 005.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;        /* Spare */
    uint8   sub_block_count;
    /* Subblock list:
       SMS_SB_ADDRESS
       SMS_SB_CHECK_INFO
       SMS_SB_REQ_INFO
       SMS_SB_RESOURCE
       SMS_SB_RESOURCE_SEQ_ID
       SMS_SB_TPDU
    */
    uint8   sub_blocks[SMS_ANY_SIZE];
    } tSMS_ResourceInd;

#define SMS_RESOURCE_IND_LEN   (4*sizeof(uint8))




#endif /* _SRV_SMS_WM_ISI_H */
