/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 001.002 
Specifications : MSW-<#>-03.6 Trace Feature and Protocol Description, version 001.001
                 supports also versions 001.000
                 MSW-<#>-03.6 Trace Message Interface Specification (html), version 001.002
                 supports also versions 001.000,001.001

Object (this information is substituted by Synergy/CM):
    %name:           trace_modem_msg_ext.h%
    %instance:       sa1mexe_1%
    %version:        001.002%
    %date_modified:  Tue Sep 08 10:40:28 2009%
    
Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

------------------------------------------------------------------------------
*/

#ifndef _TRACE_MODEM_MSG_EXT_H
#define _TRACE_MODEM_MSG_EXT_H


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* constant for variable-length definitions */
#define TRACE_MODEM_ANY_SIZE                     1

/* ----------------------------------------------------------------------- */
/* Constant Table: RESPONSE_SYMBOLS                                        */
/* ----------------------------------------------------------------------- */
typedef uint8_t RESPONSE_SYMBOLS_CONST;

/*  the request succesfully handled */
#define RESPONSE_OK                              0x00
/*  a failure in the request handling */
#define RESPONSE_FAIL                            0x01
/*  an invalid parameter in the request */
#define FAIL_CAUSE_INVALID_PARAMETER             0x02
/*  a permanent memory failure */
#define FAIL_CAUSE_PERM_FAIL                     0x03
/*  no trace bitmap with the given bitmap_id available */
#define FAIL_CAUSE_WRONG_TRACE_BITMAP_ID         0x05
/*  the bitmap length given in the request shorter than the bitmap, only the
   beginning part of the bitmap updated
*/
#define RESPONSE_PARTIAL_UPDATE                  0x0B

/* ----------------------------------------------------------------------- */
/* Constant Table: TRACE_ACTIVATION_SYM                                    */
/* ----------------------------------------------------------------------- */
typedef uint8_t TRACE_ACTIVATION_SYM_CONST;

/*  the trace bitmaps will be stored to volatile and permanent memory */
#define TRACE_ACT_PERM_STORAGE                   0x45
/*  the trace bitmaps will be stored to volatile memory only */
#define TRACE_ACT_VOLATILE_STORAGE               0x46

/* ----------------------------------------------------------------------- */
/* Constant Table: TRACE_BITMAP_TYPE_SYM                                   */
/* ----------------------------------------------------------------------- */
typedef uint8_t TRACE_BITMAP_TYPE_SYM_CONST;

/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_10                      0x10
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_11                      0x11
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_12                      0x12
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_13                      0x13
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_14                      0x14
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_15                      0x15
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_16                      0x16
/*  to be used on Cortex L1 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_17                      0x17
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_20                      0x20
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_21                      0x21
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_22                      0x22
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_23                      0x23
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_24                      0x24
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_25                      0x25
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_26                      0x26
/*  to be used on Cortex L2 in the case of two processor architecture */
#define EXT_TRACE_BITMAP_27                      0x27

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define TRACE_ACTIVATE_REQ                       0xA0
#define TRACE_ACTIVATE_RESP                      0xA1
#define TRACE_DEACTIVATE_REQ                     0xA3
#define TRACE_DEACTIVATE_RESP                    0xA4
#define TRACE_ACTIVATION_READ_STATUS_REQ         0xA6
#define TRACE_ACTIVATION_READ_STATUS_RESP        0xA7

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define SB_TRACE_ACTIVATION_BITMAP               0x11
#define SB_TRACE_ACTIVATION_BITMAP_STORAGE       0x10

/* ----------------------------------------------------------------------- */
/* Subblock: SB_TRACE_ACTIVATION_BITMAP                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sb_id;
    uint8_t   sb_len;
    /* Values from the constant table TRACE_BITMAP_TYPE_SYM */
    uint8_t   trace_type;
    uint8_t   bitmap_length;
    uint32_t  bitmap[TRACE_MODEM_ANY_SIZE];
    } SB_TRACE_ACTIVATION_BITMAP_STR;

#define SIZE_SB_TRACE_ACTIVATION_BITMAP_STR   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Subblock: SB_TRACE_ACTIVATION_BITMAP_STORAGE                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sb_id;
    uint8_t   sb_len;
    /* Values from the constant table TRACE_ACTIVATION_SYM */
    uint8_t   storage;
    uint8_t   fill1;
    } SB_TRACE_ACTIVATION_BITMAP_STORAGE_STR;

#define SIZE_SB_TRACE_ACTIVATION_BITMAP_STORAGE_STR   \
        sizeof(SB_TRACE_ACTIVATION_BITMAP_STORAGE_STR)


/* ----------------------------------------------------------------------- */
/* Message: TRACE_ACTIVATE_REQ                                             */
/* ----------------------------------------------------------------------- */
/* A trace activation message can be used for setting an arbitrary number of
   trace bitmaps. These are given in different SB_TRACE_ACTIVATION_BITMAP sub
   blocks. SB_TRACE_ACTIVATION_STORAGE is optional and one is enough for all
   the bitmaps. It notifies the trace module if the updated bitmaps should
   also be stored to permanent memory. The default is storage to volatile
   memory only. The behavior remains unchanged until the next request with
   the changed storage field.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   sub_block_count;
    /* Subblock list:
       SB_TRACE_ACTIVATION_BITMAP
       SB_TRACE_ACTIVATION_BITMAP_STORAGE
    */
    uint8_t   sub_blocks[TRACE_MODEM_ANY_SIZE];
    } TraceActivateReq;

#define TRACE_ACT_REQ_HDR_LEN   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: TRACE_ACTIVATE_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table RESPONSE_SYMBOLS */
    uint8_t   status;
    } TraceActivateResp;

#define TRACE_ACT_RESP_HDR_LEN   sizeof(TraceActivateResp)


/* ----------------------------------------------------------------------- */
/* Message: TRACE_DEACTIVATE_REQ                                           */
/* ----------------------------------------------------------------------- */
/*  The message should be used for disabling all traces in all bitmaps. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } TraceDeactivateReq;

#define TRACE_DEACT_REQ_LEN   sizeof(TraceDeactivateReq)


/* ----------------------------------------------------------------------- */
/* Message: TRACE_DEACTIVATE_RESP                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table RESPONSE_SYMBOLS */
    uint8_t   status;
    } TraceDeactivateResp;

#define TRACE_DEACT_RESP_LEN   sizeof(TraceDeactivateResp)


/* ----------------------------------------------------------------------- */
/* Message: TRACE_ACTIVATION_READ_STATUS_REQ                               */
/* ----------------------------------------------------------------------- */
/* The message can be used for reading trace bitmaps. The user can select the
   bitmaps to be read.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   bitmap_count;
    /* Values from the constant table TRACE_BITMAP_TYPE_SYM */
    uint8_t   bitmaps[TRACE_MODEM_ANY_SIZE];
    } TRACE_ACTIVATION_READ_STATUS_REQ_STR;

#define SIZE_TRACE_ACTIVATION_READ_STATUS_REQ_STR   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: TRACE_ACTIVATION_READ_STATUS_RESP                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table RESPONSE_SYMBOLS */
    uint8_t   status;
    uint8_t   sub_block_count;
    /* Subblock list:
       SB_TRACE_ACTIVATION_BITMAP
    */
    uint8_t   sub_blocks[TRACE_MODEM_ANY_SIZE];
    } TRACE_ACTIVATION_READ_STATUS_RESP_STR;

#define SIZE_TRACE_ACTIVATION_READ_STATUS_RESP_STR   (4*sizeof(uint8_t))




#endif /* _TRACE_MODEM_MSG_EXT_H */
