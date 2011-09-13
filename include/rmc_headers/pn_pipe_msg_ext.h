/*
NOKIA                                                             CONFIDENTIAL
                  Pipe ISI Message Definitions
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            pn_pipe_msg_ext.h

version:         002.008

type:            incl


ISI header file for Pipe Service

Current   ISI Version : 002.008
Supported ISI Versions: 002.007, 002.008

Copyright (c) 2009 Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _PN_PIPE_MSG_EXT_H
#define _PN_PIPE_MSG_EXT_H

#include "isi_conf.h"

#ifndef PIPE_ISI_VERSION
#define PIPE_ISI_VERSION
#define PIPE_ISI_VERSION_Z   2
#define PIPE_ISI_VERSION_Y   8
#endif

#define PIPE_ISI_MIN_VERSION(z,y) \
 ((PIPE_ISI_VERSION_Z == (z) && PIPE_ISI_VERSION_Y >= (y)) || \
  (PIPE_ISI_VERSION_Z > (z)))

typedef byte PN_MEDIA;
typedef byte PN_DEV;
typedef byte PN_FUNCTION;
typedef byte FILLER_BYTE;
typedef byte PN_PIPE_MESSAGE;
typedef byte PIPE_ERROR_CODE;
typedef byte PIPE_STATE_AFTER;

/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define PN_MAX_PEP_CTRL_DATA                     0x0B
#define PN_MAX_PIPE_DATA                         0x15
#define PN_MAX_PEP_IND_DATA                      0xC9
/* constant for variable-length definitions */
#define PIPE_ANY_SIZE                            1

/* ----------------------------------------------------------------------- */
/* Constant Table: PIPE_FC_TYPES                                           */
/* ----------------------------------------------------------------------- */
/* Flow control types that can be used to control the data flow in a Pipe. */
/* No Flow Control. */
#define PN_NO_FLOW_CONTROL                       0x00
/* Legacy Flow Control. */
#define PN_LEGACY_FLOW_CONTROL                   0x01
/* One Credit Flow Control. */
#define PN_ONE_CREDIT_FLOW_CONTROL               0x02
/* Multi Credit Flow Control. */
#define PN_MULTI_CREDIT_FLOW_CONTROL             0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: PIPE_DATA_MSG_TYPES                                     */
/* ----------------------------------------------------------------------- */
/* Data alignment types that can be used in data messages in a Pipe. */
/* Normal data messages in use. */
#define PN_NORMAL_DATA_MSG                       0x00
/* Aligned data messages in use. */
#define PN_ALIGNED_DATA_MSG                      0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: PN_PEP_TYPE                                             */
/* ----------------------------------------------------------------------- */
#define PN_PEP_TYPE_COMMON                       0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: PN_PEP_TYPE_COMMON_SUB                                  */
/* ----------------------------------------------------------------------- */
#define PEP_IND_EMPTY                            0x00
#define PEP_IND_BUSY                             0x01
#define PEP_IND_READY                            0x02
#define PEP_IND_REMOVE                           0x03
#define PEP_IND_CREDIT                           0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: PIPE_SERVICE_CC                                         */
/* ----------------------------------------------------------------------- */
/* Pipe Service error codes */
/* Request accepted. */
#define PN_PIPE_NO_ERROR                         0x00
/* One or more parameters received were invalid. */
#define PN_PIPE_ERR_INVALID_PARAM                0x01
/* Pipe handle invalid. */
#define PN_PIPE_ERR_INVALID_HANDLE               0x02
/* Invalid Control ID. send to PEP. */
#define PN_PIPE_ERR_INVALID_CTRL_ID              0x03
/* Request is not allowed in current pipe state. */
#define PN_PIPE_ERR_NOT_ALLOWED                  0x04
/* PEP already in use. PEP cannot handle more pipes. */
#define PN_PIPE_ERR_PEP_IN_USE                   0x05
/* Request to PEP failed due to mailbox limitations. */
#define PN_PIPE_ERR_OVERLOAD                     0x06
/* External device disconnected. */
#define PN_PIPE_ERR_DEV_DISCONNECTED             0x07
/* Timeout, response missing from PEP(s). */
#define PN_PIPE_ERR_TIMEOUT                      0x08
/* Not possible to create more pipes. */
#define PN_PIPE_ERR_ALL_PIPES_IN_USE             0x09
/* Look for error in PEP error codes. */
#define PN_PIPE_ERR_GENERAL                      0x0A
/* PEP does not support requested alignment. */
#define PN_PIPE_ERR_ALIGN_NOT_SUPPORTED          0x0B
#define PN_PIPE_ERR_NOT_SUPPORTED                0x0C  /* Not supported. */

/* ----------------------------------------------------------------------- */
/* Constant Table: PN_PEP_IND_ENUM                                         */
/* ----------------------------------------------------------------------- */
#define PN_PEP_IND_FLOW_CONTROL                  0x00
#define PN_PEP_IND_MCFC_GRANT_CREDITS            0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: PIPE_STATE_AFTER                                        */
/* ----------------------------------------------------------------------- */
/* State of Pipe is disabled */
#define PN_PIPE_DISABLE                          0x00
/* State of Pipe is enabled */
#define PN_PIPE_ENABLE                           0x01

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define PNS_PIPE_DATA                            0x20
#define PNS_PIPE_ALIGNED_DATA                    0x21
#define PNS_PEP_CONNECT_REQ                      0x40
#define PNS_PEP_CONNECT_RESP                     0x41
#define PNS_PEP_DISCONNECT_REQ                   0x42
#define PNS_PEP_DISCONNECT_RESP                  0x43
#define PNS_PEP_RESET_REQ                        0x44
#define PNS_PEP_RESET_RESP                       0x45
#define PNS_PEP_ENABLE_REQ                       0x46
#define PNS_PEP_ENABLE_RESP                      0x47
#define PNS_PEP_CTRL_REQ                         0x48
#define PNS_PEP_CTRL_RESP                        0x49
#define PNS_PEP_DISABLE_REQ                      0x4C
#define PNS_PEP_DISABLE_RESP                     0x4D
#define PNS_PEP_STATUS_IND                       0x60
#define PNS_PIPE_CREATED_IND                     0x61
#define PNS_PIPE_RESET_IND                       0x63
#define PNS_PIPE_ENABLED_IND                     0x64
#define PNS_PIPE_REDIRECTED_IND                  0x65
#define PNS_PIPE_DISABLED_IND                    0x66

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE      0x01
#define PN_PIPE_SB_NEGOTIATED_FC                 0x03
#define PN_PIPE_SB_REQUIRED_FC_TX                0x04
#define PN_PIPE_SB_PREFERRED_FC_RX               0x05
#define PN_PIPE_SB_ALIGNED_DATA                  0x06

/* ----------------------------------------------------------------------- */
/* Sequence: PIPE_MSG_HDR                                                  */
/* ----------------------------------------------------------------------- */
/* This structure defines the PhoNet message header */

typedef struct
    {
    PN_MEDIA media;       /* Media where the PEP can be reached */
    PN_DEV  receiver_dev; /* Receivers Device Address */
    PN_DEV  sender_dev;   /* Senders Device Address */
    PN_FUNCTION function; /* Function, the same as Resource */
    uint16  length;       /* Length, in order of MSB, LSB */
    uint8   receiver_obj; /* Receivers Object Address */
    uint8   sender_obj;   /* Senders Object Address */
    } PIPE_MSG_HDR_STR;

#define PIPE_MSG_HDR_STR_LEN   sizeof(PIPE_MSG_HDR_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GENERAL_PIPE_MSG                                              */
/* ----------------------------------------------------------------------- */
/* This structure defines general Pipe message structure */

typedef struct
    {
    PIPE_MSG_HDR_STR header;
    uint8   UTID;
    PN_PIPE_MESSAGE sub_function;
    } GENERAL_PIPE_MSG;

#define GENERAL_PIPE_MSG_LEN   (10)


/* ----------------------------------------------------------------------- */
/* Subblock: PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE                           */
/* ----------------------------------------------------------------------- */
/* Sub block format of pep sub type in PNS_PEP_CONNECT_REQ */

typedef struct
    {
    uint8   sb_id;
    uint8   sb_len;
    uint8   pep_sub_type;
    FILLER_BYTE filler_1;
    } PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE_STR;

#define SIZE_PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE_STR   \
        sizeof(PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: PN_PIPE_SB_NEGOTIATED_FC                                      */
/* ----------------------------------------------------------------------- */
/* Subblock format of negotiated type of flow control to be used in TX and RX
   direction.
*/

typedef struct
    {
    uint8   sb_id;
    uint8   sb_len;
    /* Flow control that the remote PEP uses when the PEP sends data.
       Values from the constant table PIPE_FC_TYPES
    */
    uint8   negotiated_tx_fc;
    /* Flow control the PEP has to use when it receives data from the remote
       PEP.
       Values from the constant table PIPE_FC_TYPES
    */
    uint8   negotiated_rx_fc;
    } PN_PIPE_SB_NEGOTIATED_FC_STR;

#define SIZE_PN_PIPE_SB_NEGOTIATED_FC_STR   \
        sizeof(PN_PIPE_SB_NEGOTIATED_FC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: PN_PIPE_SB_REQUIRED_FC_TX                                     */
/* ----------------------------------------------------------------------- */
/* List of flow control types required by the PEP that remote PEP has to use
   when it receives data.
*/

typedef struct
    {
    uint8   sb_id;
    uint8   sb_len;
    uint8   required_fc_tx_length;
    FILLER_BYTE fill1;
    /* The first entry in the list gives the flow control type that the PEP
       has given 1 priority, second entry 2 priority etc. This list gives the
       flow control types that the PEP requires that the remote PEP has to
       support.
    */
    uint8   required_fc_tx[PIPE_ANY_SIZE];
    } PN_PIPE_SB_REQUIRED_FC_TX_STR;

#define SIZE_PN_PIPE_SB_REQUIRED_FC_TX_STR   (3*sizeof(uint8) + \
        sizeof(FILLER_BYTE))


/* ----------------------------------------------------------------------- */
/* Subblock: PN_PIPE_SB_PREFERRED_FC_RX                                    */
/* ----------------------------------------------------------------------- */
/* List of flow control types that a PEP supports when data is received from
   the remote PEP.
*/

typedef struct
    {
    uint8   sb_id;
    uint8   sb_len;
    uint8   preferred_fc_rx_length;
    FILLER_BYTE fill1;
    /* The list gives the flow control types that the PEP supports when it
       receives data from the remote PEP.
    */
    uint8   preferred_fc_rx[PIPE_ANY_SIZE];
    } PN_PIPE_SB_PREFERRED_FC_RX_STR;

#define SIZE_PN_PIPE_SB_PREFERRED_FC_RX_STR   (3*sizeof(uint8) + \
        sizeof(FILLER_BYTE))


/* ----------------------------------------------------------------------- */
/* Subblock: PN_PIPE_SB_ALIGNED_DATA                                       */
/* ----------------------------------------------------------------------- */
/* Subblock format of data alignment in PNS_PIPE_CREATE_REQ and
   PNS_PEP_CONNECT_REQ
*/

typedef struct
    {
    uint8   sb_id;
    uint8   sb_len;
    /* Data alignment which is wanted to use in data communication.
       Values from the constant table PIPE_DATA_MSG_TYPES
    */
    uint8   data_alignment;
    FILLER_BYTE filler_1;
    } PN_PIPE_SB_ALIGNED_DATA_STR;

#define SIZE_PN_PIPE_SB_ALIGNED_DATA_STR   \
        sizeof(PN_PIPE_SB_ALIGNED_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_CREATED_IND                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    uint8   n_sb;
    /* Subblock list:
       PN_PIPE_SB_NEGOTIATED_FC
    */
    uint8   sb[PIPE_ANY_SIZE];
    } PNS_PIPE_CREATED_IND_STR;

#define PNS_PIPE_CREATED_IND_STR_LEN   (12)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_CONNECT_REQ                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_STATE_AFTER */
    PIPE_STATE_AFTER state_after_connect;
    uint8   other_pep_type; /* Values from the constant table PN_PEP_TYPE */
    uint8   filler_1;
    uint8   filler_2;
    uint8   n_sb;
    /* Subblock list:
       PN_PIPE_SB_ALIGNED_DATA
       PN_PIPE_SB_CONNECT_REQ_PEP_SUB_TYPE
    */
    uint8   sb[PIPE_ANY_SIZE];
    } PNS_PEP_CONNECT_REQ_STR;

#define PNS_PEP_CONNECT_REQ_STR_LEN   (16)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_CONNECT_RESP                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    uint8   filler_1;
    uint8   filler_2;
    uint8   filler_3;
    uint8   n_sb;
    /* Subblock list:
       PN_PIPE_SB_PREFERRED_FC_RX
       PN_PIPE_SB_REQUIRED_FC_TX
    */
    uint8   sb[PIPE_ANY_SIZE];
    } PNS_PEP_CONNECT_RESP_STR;

#define PNS_PEP_CONNECT_RESP_STR_LEN   (16)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_CTRL_REQ                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    uint8   pep_type;     /* Values from the constant table PN_PEP_TYPE */
    /* The format of the PEP Control ID depends of the PEP type. Defined in
       the PEP specification for the PEP type.
    */
    uint8   pep_ctrl_id;
    uint8   pep_ctrl_data[PN_MAX_PEP_CTRL_DATA];
    /* Format, content and size of pep_ctrl_data depends of the PEP Control
       ID. that is defined for each PEP type in the corresponding PEP
       specification. I.e. that the size PN_MAX_PEP_CTRL_DATA make no sense
       and should be disregarded when allocating a message.
    */
    } PNS_PEP_CTRL_REQ_STR;

#define PNS_PEP_CTRL_REQ_STR_LEN   (14)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_CTRL_RESP                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* The PEP Control ID depends of the PEP type. Defined in the PEP
       specification of the PEP
    */
    uint8   pep_ctrl_id;
    uint8   pep_type;     /* Values from the constant table PN_PEP_TYPE */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    FILLER_BYTE reserved_1;
    FILLER_BYTE reserved_2;
    } PNS_PEP_CTRL_RESP_STR;

#define PNS_PEP_CTRL_RESP_STR_LEN   sizeof(PNS_PEP_CTRL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_ENABLED_IND                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PIPE_ENABLED_IND_STR;

#define PNS_PIPE_ENABLED_IND_STR_LEN   sizeof(PNS_PIPE_ENABLED_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_ENABLE_REQ                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PEP_ENABLE_REQ_STR;

#define PNS_PEP_ENABLE_REQ_STR_LEN   sizeof(PNS_PEP_ENABLE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_ENABLE_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    } PNS_PEP_ENABLE_RESP_STR;

#define PNS_PEP_ENABLE_RESP_STR_LEN   sizeof(PNS_PEP_ENABLE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_DATA                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    uint8   data[PN_MAX_PIPE_DATA];
    /* The size of the data messages is determined by the amount of data that
       is available when the data message is created. I.e. that the length
       PN_MAX_PIPE_DATA make no sense and should be disregarded when
       allocating a message.
    */
    } PNS_PIPE_DATA_STR;

#define PNS_PIPE_DATA_STR_LEN   (12)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_ALIGNED_DATA                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    uint8   data[PN_MAX_PIPE_DATA];
    /* The size of the data messages is determined by the amount of data that
       is available when the data message is created. I.e. that the length
       PN_MAX_PIPE_DATA make no sense and should be disregarded when
       allocating a message.
    */
    } PNS_PIPE_ALIGNED_DATA_STR;

#define PNS_PIPE_ALIGNED_DATA_STR_LEN   (13)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_STATUS_IND                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    uint8   pep_type;     /* Values from the constant table PN_PEP_TYPE */
    /* Values from the constant table PN_PEP_IND_ENUM */
    uint8   indication_id;
    FILLER_BYTE reserved_1;
    FILLER_BYTE reserved_2;
    uint8   indication_data[PN_MAX_PEP_IND_DATA];
    /* If Indication ID == PN_PEP_IND_FLOW_CONTROL, then this message
       indicates whether the PEP is ready to accept data or not (the flow
       control). It can take the values: 
       - PEP_IND_EMPTY (The pipe is empty which means that PEPs buffers are
         empty and all data has been sent) 
       - PEP_IND_BUSY (The pipe is full which implies that the PEP cannot
         accept any more data. The other PEP should not send data before
         PEP_IND_READY has been received.) 
       - PEP_IND_READY (The PEP can accept more data to pipe.)
       If Indication ID == PN_PEP_IND_MCFC_GRANT_CREDITS, then this message
       indicates the number of granted credits in multi credit flow control
       (MCFC)
    */
    } PNS_PEP_STATUS_IND_STR;

#define PNS_PEP_STATUS_IND_STR_LEN   (16)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_RESET_IND                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PIPE_RESET_IND_STR;

#define PNS_PIPE_RESET_IND_STR_LEN   sizeof(PNS_PIPE_RESET_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_RESET_REQ                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_STATE_AFTER */
    PIPE_STATE_AFTER pipe_state_after_reset;
    } PNS_PEP_RESET_REQ_STR;

#define PNS_PEP_RESET_REQ_STR_LEN   sizeof(PNS_PEP_RESET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_RESET_RESP                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    } PNS_PEP_RESET_RESP_STR;

#define PNS_PEP_RESET_RESP_STR_LEN   sizeof(PNS_PEP_RESET_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_DISCONNECT_REQ                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PEP_DISCONNECT_REQ_STR;

#define PNS_PEP_DISCONNECT_REQ_STR_LEN   sizeof(PNS_PEP_DISCONNECT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_DISCONNECT_RESP                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    } PNS_PEP_DISCONNECT_RESP_STR;

#define PNS_PEP_DISCONNECT_RESP_STR_LEN   sizeof(PNS_PEP_DISCONNECT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_REDIRECTED_IND                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    uint8   n_sb;
    /* Subblock list:
       PN_PIPE_SB_NEGOTIATED_FC
    */
    uint8   sb[PIPE_ANY_SIZE];
    } PNS_PIPE_REDIRECTED_IND_STR;

#define PNS_PIPE_REDIRECTED_IND_STR_LEN   (12)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_DISABLE_REQ                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PEP_DISABLE_REQ_STR;

#define PNS_PEP_DISABLE_REQ_STR_LEN   sizeof(PNS_PEP_DISABLE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PEP_DISABLE_RESP                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    /* Values from the constant table PIPE_SERVICE_CC */
    PIPE_ERROR_CODE error_code;
    } PNS_PEP_DISABLE_RESP_STR;

#define PNS_PEP_DISABLE_RESP_STR_LEN   sizeof(PNS_PEP_DISABLE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: PNS_PIPE_DISABLED_IND - Valid from version 002.008             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    PIPE_MSG_HDR_STR   header;
    uint8   UTID;         /* Unique Transaction ID. */
    PN_PIPE_MESSAGE sub_function;
    uint8   pipe_handle;  /* Identification of the Pipe */
    FILLER_BYTE filler;
    } PNS_PIPE_DISABLED_IND_STR;

#define PNS_PIPE_DISABLED_IND_STR_LEN   sizeof(PNS_PIPE_DISABLED_IND_STR)




#endif /* _PN_PIPE_MSG_EXT_H */
