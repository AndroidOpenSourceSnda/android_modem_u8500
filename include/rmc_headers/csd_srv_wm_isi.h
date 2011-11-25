/*
NOKIA                                                                         
                  CSD Server ISI Message Definitions
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            csd_srv_wm_isi.h

version:         014.000

type:            incl


ISI header file for Circuit Switched Data Server

Current   ISI Version : 014.000
Supported ISI Versions: 009.012, 010.000, 011.000, 012.000, 013.000, 014.000

Copyright (c) Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _CSD_SRV_WM_ISI_H
#define _CSD_SRV_WM_ISI_H

#include "isi_conf.h"

#ifndef CSD_ISI_VERSION
#define CSD_ISI_VERSION
#define CSD_ISI_VERSION_Z  14
#define CSD_ISI_VERSION_Y   0
#endif

#define CSD_ISI_MIN_VERSION(z,y) \
 ((CSD_ISI_VERSION_Z == (z) && CSD_ISI_VERSION_Y >= (y)) || \
  (CSD_ISI_VERSION_Z > (z)))

#if ((CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   3) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   4) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   5) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   6) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   7) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   8) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==   9) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==  10) || \
     (CSD_ISI_VERSION_Z ==   9 && CSD_ISI_VERSION_Y ==  11))
#error The specified interface version is no longer supported
#endif


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* constant for variable-length definitions */
#define CSD_ANY_SIZE                             1

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_CALL_OPERATION_ID                                   */
/* ----------------------------------------------------------------------- */
/* Call Operation IDs */
typedef uint8 CSD_CALL_OPERATION_ID_CONST;

#define CSD_CALL_CREATE                          0x00
#define CSD_CALL_ANSWER                          0x01
#define CSD_CALL_RELEASE                         0x02
#define CSD_CALL_REJECT                          0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_CALL_CAUSE                                          */
/* ----------------------------------------------------------------------- */
/* CSD_CALL_CONTROL_RESP cause values */
typedef uint8 CSD_CALL_CAUSE_CONST;

#define CSD_CALL_CAUSE_NONE                      0x00
#define CSD_CALL_CAUSE_BEARER_RESERVATION_FAILED 0x01

#if !CSD_ISI_MIN_VERSION(12,0)
#define CSD_CALL_CAUSE_PIPE_UNKNOWN              0x02
#endif /* !CSD_ISI_MIN_VERSION(12,0) */

#define CSD_CALL_CAUSE_NOT_ALLOWED               0x03
#define CSD_CALL_CAUSE_NO_VIDEO_CALL             0x04
#define CSD_CALL_CAUSE_OTHER_CALL_ACTIVE         0x05
#define CSD_CALL_CAUSE_USER_ABORT                0x06
#define CSD_CALL_CAUSE_INVALID_SYSTEM            0x07
#define CSD_CALL_CAUSE_INVALID_CBST_PARAMS       0x08

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_BEARER_TYPE - Valid from version 010.000            */
/* ----------------------------------------------------------------------- */
/* Resource Indication Bearer Id Values */
typedef uint8 CSD_BEARER_TYPE_CONST;

#define CSD_BEARER_NOT_VALID                     0x00
#define CSD_BEARER_CSD                           0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_RESOURCE_OPERATION_ID - Valid from version 010.000  */
/* ----------------------------------------------------------------------- */
/* CSD Operation Id Types */
typedef uint8 CSD_RESOURCE_OPERATION_ID_CONST;

#define CSD_RESOURCE_RESERVE                     0x00
#define CSD_RESOURCE_RELEASE                     0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_RESOURCE_STATUS_VALUE - Valid from version 010.000  */
/* ----------------------------------------------------------------------- */
/* CSD Resource Status Types */
typedef uint8 CSD_RESOURCE_STATUS_VALUE_CONST;

#define CSD_RESOURCE_STATUS_NONE                 0x00
#define CSD_RESOURCE_STATUS_ALLOWED              0x01
#define CSD_RESOURCE_STATUS_DENIED               0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_RESOURCE_VALUE - Valid from version 010.000         */
/* ----------------------------------------------------------------------- */
/* CSD Resource Result Types */
typedef uint8 CSD_RESOURCE_VALUE_CONST;

#define CSD_RESOURCE_ERROR                       0x00
#define CSD_RESOURCE_OK                          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: CSD_VIDEO_CALL_STATUS_VALUE - Valid from version 011.000 */
/* ----------------------------------------------------------------------- */
/* CSD Video call status value Types */
typedef uint8 CSD_VIDEO_CALL_STATUS_VALUE_CONST;

/* Video call connected */
#define CSD_VIDEO_CALL_STATUS_CONNECT            0x00
/* Video call disconnected */
#define CSD_VIDEO_CALL_STATUS_DISCONNECT         0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: CSD_ADDRESS_TYPE - Valid from version 010.000            */
/* ----------------------------------------------------------------------- */
/* Address type consists of numbering plan and type of address. The four
   least significant bits (1-4) contain numbering plan and the next three
   bits (5-7) contain type of number. The most significant bit (8) is a spare
   bit and shall be ignored.
*/
typedef uint8 CSD_ADDRESS_TYPE_CONST;

#define CSD_NBR_PLAN_UNKNOWN                     0x00  /* ----0000 */
#define CSD_NBR_PLAN_ISDN_TELEPHONY              0x01  /* ----0001 */
#define CSD_NBR_PLAN_DATA                        0x03  /* ----0011 */
#define CSD_NBR_PLAN_TELEX                       0x04  /* ----0100 */
#define CSD_NBR_PLAN_PRIVATE                     0x09  /* ----1001 */
#define CSD_GSM_NBR_PLAN_NATIONAL                0x08  /* ----1000 */
#define CSD_NBR_TYPE_UNKNOWN                     0x00  /* 0000---- */
#define CSD_NBR_TYPE_INTERNATIONAL               0x10  /* 0001---- */
#define CSD_NBR_TYPE_NATIONAL                    0x20  /* 0010---- */
#define CSD_NBR_TYPE_NETWORK_SPECIFIC            0x30  /* 0011---- */
#define CSD_GSM_NBR_TYPE_DEDICATED               0x80  /* 1000---- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: CSD_PRESENTATION_SCREEN_INDICATOR - Valid from version 010.000 */
/* ----------------------------------------------------------------------- */
/* Presentation and screening indicators are coded into one byte. The four
   least significant bits (1-4) contain presentation indicator and the next
   three bits (5-7) contain screening indicator. The most significant bit (8)
   is a spare bit and shall be ignored.
*/
typedef uint8 CSD_PRESENTATION_SCREEN_INDICATOR_CONST;

#define CSD_PRESENTATION_ALLOWED                 0x00  /* ----0000 */
#define CSD_PRESENTATION_RESTRICTED              0x01  /* ----0001 */
#define CSD_PRESENTATION_UNAVAILABLE             0x02  /* ----0010 */
#define CSD_GSM_PRESENTATION_DEFAULT             0x07  /* ----0111 */
#define CSD_USER_NOT_SCREENED                    0x00  /* 0000---- */
#define CSD_USER_SCREENED_PASSED                 0x10  /* 0001---- */
#define CSD_USER_SCREENED_FAILED                 0x20  /* 0010---- */
#define CSD_SCREEN_NETW_PROVIDED                 0x30  /* 0011---- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: CSD_ADDITIONAL_ADDRESS_INFO - Valid from version 010.000 */
/* ----------------------------------------------------------------------- */
/* When bit B0 (LSB) is set to '1' address information presentation is
   allowed. When bit B0 (LSB) is set to '0' presentation is not allowed.
*/
typedef uint8 CSD_ADDITIONAL_ADDRESS_INFO_CONST;

#define CSD_P_ADDR_PRESENTATION_ALLOWED          0x01  /* -------1 */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define CSD_MULTIMEDIA_DATA_RATE_IND             0x06
#define CSD_CALL_CONTROL_REQ                     0x07
#define CSD_CALL_CONTROL_RESP                    0x08
#define CSD_RESOURCE_IND                         0x0C
#define CSD_RESOURCE_REQ                         0x0D
#define CSD_RESOURCE_RESP                        0x0E
#define CSD_VIDEO_CALL_STATUS_IND                0x0F

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define CSD_SB_CONN_SETTING                      0x0D
#define CSD_SB_RESOURCE_ID                       0x0E
#define CSD_DESTINATION_ADDRESS                  0x0F
#define CSD_DESTINATION_PRE_ADDRESS              0x10
#define CSD_DESTINATION_POST_ADDRESS             0x11
#define CSD_CBST_PARAMS                          0x15

/* ----------------------------------------------------------------------- */
/* Subblock: CSD_SB_CONN_SETTING - Valid from version 010.000              */
/* ----------------------------------------------------------------------- */
/* This sub-block contains the dialled string. */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   conn_setting_length;
    /* Dialled String in ASCII format. If Address Type in
       CSD_DESTINATION_ADDRESS sub block sent with CSD_CALL_CONTROL_REQ is
       CSD_NBR_TYPE_INTERNATIONAL then '+' character is added in the
       beginning of this field. String is not NUL-terminated.
    */
    uint8   conn_setting_data;
    } CSD_SB_CONN_SETTING_STR;

#define CSD_SB_CONN_SETTING_LENGTH_MAX  104

/* ----------------------------------------------------------------------- */
/* Subblock: CSD_SB_RESOURCE_ID - Valid from version 010.000               */
/* ----------------------------------------------------------------------- */
/* This sub-block contains the Reserve Id to be released. */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   resource_id;  /* Resource Id to be released */
    uint8   fill_byte;
    } CSD_SB_RESOURCE_ID_STR;

#define CSD_SB_RESOURCE_ID_LENGTH    4

/* ----------------------------------------------------------------------- */
/* Subblock: CSD_DESTINATION_ADDRESS - Valid from version 010.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len; /* 6+2n+mod((6+2n),4) */
    uint8   addr_type;   /* Values from the bitmask table CSD_ADDRESS_TYPE */
    /* A subset of values from the bitmask table
       CSD_PRESENTATION_SCREEN_INDICATOR
    */
    uint8   presentation;
    uint8   unused;
    uint8   addr_len;     /* Number of Unicode characters */
    char16  addr;
    } CSD_DESTINATION_ADDRESS_STR;

#define SIZE_CSD_DESTINATION_ADDRESS_STR   (6*sizeof(uint8) + sizeof(char16))


/* ----------------------------------------------------------------------- */
/* Subblock: CSD_DESTINATION_PRE_ADDRESS - Valid from version 010.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len; /* 4+2n+mod((4+2n),4) */
    /* Values from the bitmask table CSD_ADDITIONAL_ADDRESS_INFO */
    uint8   addr_info;
    uint8   addr_len;     /* Number of Unicode characters */
    char16  addr;
    } CSD_DESTINATION_PRE_ADDR_SUB_STR;

#define SIZE_CSD_DESTINATION_PRE_ADDRESS_STR   (4*sizeof(uint8) + \
        sizeof(char16))

#define CSD_SIZEOF_DEST_PRE_ADDRESS_FIXED    0x04

/* ----------------------------------------------------------------------- */
/* Subblock: CSD_DESTINATION_POST_ADDRESS - Valid from version 010.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len; /* 4+2n+mod((4+2n),4) */
    /* Values from the bitmask table CSD_ADDITIONAL_ADDRESS_INFO */
    uint8   addr_info;
    uint8   addr_len;     /* Number of Unicode characters */
    char16  addr;
    } CSD_DESTINATION_POST_ADDR_SUB_STR;

#define SIZE_CSD_DESTINATION_POST_ADDRESS_STR   (4*sizeof(uint8) + \
        sizeof(char16))

#define CSD_SIZEOF_DEST_POST_ADDRESS_FIXED    0x04

/* ----------------------------------------------------------------------- */
/* Subblock: CSD_CBST_PARAMS - Valid from version 010.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_len;
    uint8   speed;        /* Data Rate <speed> parameter of CBST command */
    uint8   name;         /* Bearer Service  */
    uint8   ce;           /* Connection Element  */
    uint8   fill_byte[3];
    } CBST_PARAMS_SUB_STR;

#define SIZE_CSD_CBST_PARAMS_STR   (8*sizeof(uint8))

#define CSD_SIZEOF_CBST_PARAMS_FIXED    0x04

/* ----------------------------------------------------------------------- */
/* Message: CSD_MULTIMEDIA_DATA_RATE_IND                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   fill_byte[2];
    uint32  rate;
    } CSD_MULTIMEDIA_DATA_RATE_IND_STR;

#define CSD_MULTIMEDIA_DATA_RATE_IND_LENGTH 8

/* ----------------------------------------------------------------------- */
/* Message: CSD_CALL_CONTROL_REQ - Versions 010.000 - 012.000              */
/* ----------------------------------------------------------------------- */

#if CSD_ISI_MIN_VERSION(10,0) && !CSD_ISI_MIN_VERSION(12,0)

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* Values from the constant table CSD_CALL_OPERATION_ID */
    uint8   oper_id;
    uint8   pipe_handle;
    uint8   dte_id;       /* DTE ID can take a value from 1-255 */
    uint8   fill_bytes[2];
    uint8   sub_blocks;
    /* If Call Operation ID is CSD_CALL_CREATE, following sub blocks can be
       used:
       Mandatory
       - CSD_DESTINATION_ADDRESS
       - CSD_CBST_PARAMS
       Optional
       - CSD_DESTINATION_PRE_ADDRESS
       - CSD_DESTINATION_POST_ADDRESS
       Subblock list:
       CSD_CBST_PARAMS
       CSD_DESTINATION_ADDRESS
       CSD_DESTINATION_POST_ADDRESS
       CSD_DESTINATION_PRE_ADDRESS
    */
    uint8   sb[CSD_ANY_SIZE];
    } CSD_CALL_CONTROL_REQ_STR;

#define CSD_CALL_CONTROL_REQ_LENGTH         8
#endif /* CSD_ISI_MIN_VERSION(10,0) && !CSD_ISI_MIN_VERSION(12,0) */


/* ----------------------------------------------------------------------- */
/* Message: CSD_CALL_CONTROL_REQ - Valid from version 012.000              */
/* ----------------------------------------------------------------------- */

#if CSD_ISI_MIN_VERSION(12,0)

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* Values from the constant table CSD_CALL_OPERATION_ID */
    uint8   oper_id;
    uint8   sub_blocks;
    /* If Call Operation ID is CSD_CALL_CREATE, following sub blocks can be
       used:
       Mandatory
       - CSD_DESTINATION_ADDRESS
       - CSD_CBST_PARAMS
       Optional
       - CSD_DESTINATION_PRE_ADDRESS
       - CSD_DESTINATION_POST_ADDRESS
       Subblock list:
       CSD_CBST_PARAMS
       CSD_DESTINATION_ADDRESS
       CSD_DESTINATION_POST_ADDRESS
       CSD_DESTINATION_PRE_ADDRESS
    */
    uint8   sb[CSD_ANY_SIZE];
    } CSD_CALL_CONTROL_REQ_STR;

#define CSD_CALL_CONTROL_REQ_LENGTH         4
#endif /* CSD_ISI_MIN_VERSION(12,0) */


/* ----------------------------------------------------------------------- */
/* Message: CSD_CALL_CONTROL_RESP                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   cause;        /* Values from the constant table CSD_CALL_CAUSE */
    /* Values from the constant table CSD_CALL_OPERATION_ID */
    uint8   oper_id;
    } CSD_CALL_CONTROL_RESP_STR;

#define CSD_CALL_CONTROL_RESP_LENGTH         4

/* ----------------------------------------------------------------------- */
/* Message: CSD_RESOURCE_IND - Valid from version 010.000                  */
/* ----------------------------------------------------------------------- */
/* This message is used by CSD Server to initiate the process of
   resourcereservation. Related messages: CSD_RESOURCE_REQ &
   CSD_RESOURCE_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* CSD Resource Reservation Operation Id Types
       Values from the constant table CSD_RESOURCE_OPERATION_ID
    */
    uint8   oper_id;
    /* Resource Indication Bearer Type Values
       Values from the constant table CSD_BEARER_TYPE
    */
    uint8   bearer_type;
    uint8   fill_byte[3];
    uint8   sub_blocks;
    union
        {
        CSD_SB_CONN_SETTING_STR conn_setting;
        CSD_SB_RESOURCE_ID_STR resource_id;
        } subblock;
    } CSD_RESOURCE_IND_STR;

#define CSD_RESOURCE_IND_LENGTH          (16 +  \
                                        CSD_SB_CONN_SETTING_LENGTH_MAX + \
                                        CSD_SB_RESOURCE_ID_LENGTH) 

/* ----------------------------------------------------------------------- */
/* Message: CSD_RESOURCE_REQ - Valid from version 010.000                  */
/* ----------------------------------------------------------------------- */
/* This message is used by other server to indicate to CSD Server about the
   resource reservation process. Related messages: CSD_RESOURCE_IND &
   CSD_RESOURCE_RESP 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* Values from the constant table CSD_RESOURCE_OPERATION_ID */
    uint8   oper_id;
    uint8   reservation_id; /* Value range from 1 - 255 */
    /* Values from the constant table CSD_RESOURCE_STATUS_VALUE */
    uint8   status;
    uint8   fill_byte[3];
    } CSD_RESOURCE_REQ_STR;

#define CSD_RESOURCE_REQ_LENGTH  			16

/* ----------------------------------------------------------------------- */
/* Message: CSD_RESOURCE_RESP - Valid from version 010.000                 */
/* ----------------------------------------------------------------------- */
/* This message is sent by CSD Server to complete the sequence of resource
   reservation procedure. Related messages: CSD_RESOURCE_IND &
   CSD_RESOURCE_REQ 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   result;   /* Values from the constant table CSD_RESOURCE_VALUE */
    uint8   fill_byte;
    } CSD_RESOURCE_RESP_STR;

#define CSD_RESOURCE_RESP_LENGTH  				12 

/* ----------------------------------------------------------------------- */
/* Message: CSD_VIDEO_CALL_STATUS_IND - Valid from version 011.000         */
/* ----------------------------------------------------------------------- */
/* This message is sent by CSD Server for indicating the status changes with
   respect to video call
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* Values from the constant table CSD_VIDEO_CALL_STATUS_VALUE */
    uint8   status;
    uint8   fill_byte;
    } CSD_VIDEO_CALL_STATUS_IND_STR;

#define CSD_VIDEO_CALL_STATUS_IND_LENGTH          12 



#endif /* _CSD_SRV_WM_ISI_H */
