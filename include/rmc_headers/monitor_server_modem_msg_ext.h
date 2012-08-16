/*
NOKIA                                                             CONFIDENTIAL
                  monitor_server_modem_msg_ext.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            monitor_server_modem_msg_ext.h

version:         001.007

type:            incl


ISI header file for Monitor Server Message Interface



Copyright (c) 2012 Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _MONITOR_SERVER_MODEM_MSG_EXT_H
#define _MONITOR_SERVER_MODEM_MSG_EXT_H


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* constant for variable-length definitions */
#define TRACE_MODEM_ANY_SIZE                     1

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_RESPONSE_SYMBOLS                                    */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_RESPONSE_SYMBOLS_CONST;

/* The request is successfully handled. */
#define MON_RESPONSE_OK                          0x00
/* The request failed. */
#define MON_RESPONSE_FAIL                        0x01
/* There is an invalid parameter in the request, request failed. */
#define MON_CAUSE_INVALID_PARAMETER              0x02
/* Writing to permanent memory failed, request failed. */
#define MON_CAUSE_PERM_FAIL                      0x03
/* A trace type in the request is unknown, request failed. */
#define MON_CAUSE_WRONG_TRACE_TYPE               0x05
/* A bitmap is shorter then the actual, only the beginning is updated. */
#define MON_CAUSE_PARTIAL_UPDATE                 0x0B
/* An enity id in the request is unknown, request failed. */
#define MON_CAUSE_UNKNOWN_ENTITY                 0x0A
/* The trace buffering is ongoing. The requested change is not permitted. */
#define MON_CAUSE_BUFFERING_ON                   0x10
/* There is no trace buffer area. */
#define MON_CAUSE_NO_TRACE_BUFFER                0x11

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_BITMAP_TYPE_SYM                               */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_BITMAP_TYPE_SYM_CONST;

#define MON_INVARIANT_TRACES                     0x08
#define MON_CIQ_TRACES                           0x18

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_TYPE_SYMBOLS                                  */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_TYPE_SYMBOLS_CONST;

#define MON_OS_TRACES                            0x00  /* OS traces */
#define MON_MASTER_TRACES                        0x02  /* Master traces */
#define MON_VENDOR_DLL_TRACES                    0x03  /* Vendor traces */
/* Binary RD traces */
#define MON_MCU_TRACES                           0x06
/* #define MON_INVARIANT_TRACES                  0x08 (already defined) */

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_ACTIVATE_ROUTE_SYMBOLS                        */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_ACTIVATE_ROUTE_SYMBOLS_CONST;

/* Disable traces. */
#define MON_TRACE_OFF                            0x00
/* Enable traces. Can be used with OS, master, invariant and vendor traces.
*/
#define MON_TRACE_ON                             0x01
/* Enables traces, only the trace id without the payload is sent. Can be used
   for MCU traces only.
*/
#define MON_TRACE_SHORT                          0x02
/* Enables traces, traces are sent with the payload. Can be used for MCU
   traces only.
*/
#define MON_TRACE_EXTENDED                       0x03
/* Routes traces to the short term buffer. */
#define MON_TRACE_BUFFER_SHORT                   0x04
/* Routes traces to the medium term buffer. */
#define MON_TRACE_BUFFER_MEDIUM                  0x05
/* Routes traces to the long term buffer. */
#define MON_TRACE_BUFFER_LONG                    0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_PROCESSOR_SYMBOLS                             */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_PROCESSOR_SYMBOLS_CONST;

/* To be used for trace activation and routing of L23 traces. */
#define MON_TRACE_PROCESSOR_L23                  0x00
/* To be used for trace activation and routing of L1 traces. */
#define MON_TRACE_PROCESSOR_L1                   0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TIMESTAMP_SYM                                       */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TIMESTAMP_SYM_CONST;

/* No timestamp required. */
#define MON_TRACE_NO_TIME_STAMP                  0x44
/* 32-bit timestamp required. */
#define MON_TRACE_EXT_TIME_STAMP_REQUESTED       0x47

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_DEACTIVATE_SET_SYM                                  */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_DEACTIVATE_SET_SYM_CONST;

/* All traces sent over STM are deactivated. */
#define MON_DEACTIVATE_STM_TRACES                0x00
/* Invariant traces sent over ISI interface are deactivated. */
#define MON_DEACTIVATE_ISI_INV_TRACES            0x01
/* All traces sent over STM, CIQ and ISI interfaces are deactivated. */
#define MON_DEACTIVATE_ALL_TRACES                0x02
/* All traces sent to CIQ client are deactivated. */
#define MON_DEACTIVATE_CIQ_TRACES                0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_ROUTING_SYMBOLS                               */
/* ----------------------------------------------------------------------- */
/* The enironment variable TRACE_DEFAULT_TRACE_ROUTING can be used for
   setting the routing. It can take the values listed in the table.
*/
typedef uint8_t MON_TRACE_ROUTING_SYMBOLS_CONST;

/* Modem tracing is disabled. */
#define TRACE_ROUTING_NO_TRACING                 0x00
/* Traces are routed to XTI. This is the default. */
#define TRACE_ROUTING_XTI                        0x01
/* Traces are routed to trace buffers. */
#define TRACE_ROUTING_BUFFER                     0x02
/* Traces are routed to both XTI and buffers. */
#define TRACE_ROUTING_XTI_BUFFER                 0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_BUFFER_SYMBOLS                                */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_BUFFER_SYMBOLS_CONST;

/* The trace buffer collecting the low throughput traces from L1. */
#define TRACE_BUFFER_LONG_L1                     0x00
/* The trace buffer collecting the low throughput traces from L23. */
#define TRACE_BUFFER_LONG_L23                    0x01
/* The trace buffer collecting the medium throughput traces from L1. */
#define TRACE_BUFFER_MEDIUM_L1                   0x02
/* The trace buffer collecting the medium throughput traces from L23. */
#define TRACE_BUFFER_MEDIUM_L23                  0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_TRIGGER_ACTION_SYMBOLS                        */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_TRIGGER_ACTION_SYMBOLS_CONST;

/* The trace buffer copying to start. */
#define TRIGGER_START                            0x00
/* The trace buffer copying finnished. */
#define TRIGGER_STOP                             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_BUFFERING_MODE_SYMBOLS                        */
/* ----------------------------------------------------------------------- */
/* The message MON_TRACE_BUFFERING_MODE_REQ or the environment variable
   TRACE_BUFFER_SDRAM_ONLY can be used for setting the buffering mode. It can
   take the values listed in the table.
*/
typedef uint8_t MON_TRACE_BUFFERING_MODE_SYMBOLS_CONST;

/* In the FLUSHING_MODE modem sends flush indications to inform APE that a
   buffer section is ready for flushing. This is the default.
*/
#define FLUSHING_MODE                            0x00
/* In the SDRAM_ONLY_MODE trace buffers are not offloaded by APE. Modem
   should optimize trace buffer area for SDRAM only tracing.
*/
#define SDRAM_ONLY_MODE                          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MON_TRACE_BUFFER_MARKER_SYMBOLS                         */
/* ----------------------------------------------------------------------- */
typedef uint8_t MON_TRACE_BUFFER_MARKER_SYMBOLS_CONST;

/* Start trace */
#define MARKER_START                             0x00
/* End trace */
#define MARKER_END                               0x01
/* Marker message received */
#define MARKER_MESSAGE                           0x02

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define MON_TRACE_ACTIVATE_REQ                   0x00
#define MON_TRACE_ACTIVATE_RESP                  0x01
#define MON_TRACE_DEACTIVATE_REQ                 0x03
#define MON_TRACE_DEACTIVATE_RESP                0x04
#define MON_TRACE_ACTIVATION_READ_STATUS_REQ     0x46
#define MON_TRACE_ACTIVATION_READ_STATUS_RESP    0x47
#define MON_TRACE_INV_IND                        0x8F
#define MON_TRACE_CONFIG_SET_REQ                 0xB0
#define MON_TRACE_CONFIG_SET_RESP                0xB1
#define MON_TRACE_CONFIG_GET_REQ                 0xB2
#define MON_TRACE_CONFIG_GET_RESP                0xB3
#define MON_TRACE_ROUTING_REQ                    0xB4
#define MON_TRACE_ROUTING_RESP                   0xB5
#define MON_TRACE_BUFFER_FLUSH_IND               0xB8
#define MON_TRACE_LOG_TRIGGER_IND                0xB9
#define MON_TRACE_TRIGGER_REQ                    0xBA
#define MON_TRACE_TRIGGER_RESP                   0xBB
#define MON_TRACE_IDS_ACTIVATE_ROUTE_REQ         0xBC
#define MON_TRACE_IDS_ACTIVATE_ROUTE_RESP        0xBD
#define MON_TRACE_BUFFER_MARKER_REQ              0xBE
#define MON_TRACE_BUFFER_MARKER_RESP             0xBF
#define MON_TRACE_BUFFERING_MODE_REQ             0xEA
#define MON_TRACE_BUFFERING_MODE_RESP            0xEB
#define MON_TRACE_BUFFERING_MODE_READ_REQ        0xEC
#define MON_TRACE_BUFFERING_MODE_READ_RESP       0xED

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define MON_SB_TRACE_ACTIVATION_BITMAP           0x11
#define MON_SB_TRACE_ACTIVATION_TIMESTAMP        0x0F
#define MON_SB_TRACE_EXT_TIME_STAMP_INFO         0x08
#define MON_SB_TRACE_INV_DATA                    0x0C

/* ----------------------------------------------------------------------- */
/* Subblock: MON_SB_TRACE_ACTIVATION_BITMAP                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sb_id;
    uint8_t   sb_len;
    /* Values from the constant table MON_TRACE_BITMAP_TYPE_SYM */
    uint8_t   trace_type;
    uint8_t   entity_id;
    uint8_t   fill1[3];
    uint8_t   bitmap_length;
    uint32_t  bitmap[TRACE_MODEM_ANY_SIZE];
    } MON_SB_TRACE_ACTIVATION_BITMAP_STR;

#define SIZE_MON_SB_TRACE_ACTIVATION_BITMAP_STR   (8*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Subblock: MON_SB_TRACE_ACTIVATION_TIMESTAMP                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sb_id;
    uint8_t   sb_len;
    uint8_t   timestamp; /* Values from the constant table MON_TIMESTAMP_SYM */
    uint8_t   fill1;
    } MON_SB_TRACE_ACTIVATION_TIMESTAMP_STR;

#define SIZE_MON_SB_TRACE_ACTIVATION_TIMESTAMP_STR   \
        sizeof(MON_SB_TRACE_ACTIVATION_TIMESTAMP_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MON_SB_TRACE_EXT_TIME_STAMP_INFO                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   id;
    uint8_t   length;
    uint8_t   reserved1;
    uint8_t   reserved2;
    uint32_t  time_stamp;
    } tMON_SB_EXT_TimeStampInfo;

#define MON_SB_TRACE_EXT_TIME_STAMP_LEN   sizeof(tMON_SB_EXT_TimeStampInfo)


/* ----------------------------------------------------------------------- */
/* Subblock: MON_SB_TRACE_INV_DATA                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   id;
    uint8_t   trc_ent;
    uint8_t   trc_grp;
    uint8_t   trc_id;
    uint16_t  trc_data_length;
    uint8_t   trc_data[TRACE_MODEM_ANY_SIZE];
    } tMON_SB_TraceInvData;

#define MON_SB_TRACE_INV_DATA_HDR_LEN   (4*sizeof(uint8_t) + sizeof(uint16_t))


/* ----------------------------------------------------------------------- */
/* Sequence: TRACE_CONFIG_NAME_SEQ                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    char    trace_config[TRACE_MODEM_ANY_SIZE];
    } TRACE_CONFIG_NAME_SEQ_STR;

#define SIZE_TRACE_CONFIG_NAME_SEQ_STR   0


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_INV_IND                                              */
/* ----------------------------------------------------------------------- */
/* This is the invariant trace indication message. */

typedef struct
    {
/* PhoNet header */
    uint8_t  media;
    uint8_t  receiver;
    uint8_t  sender;
    uint8_t  function;
    uint16_t  length;
    uint8_t  receiver_obj;
    uint8_t  sender_obj;
/* Message data */
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   reserved;
    uint8_t   sub_block_count;
    /* Subblock list:
       MON_SB_TRACE_EXT_TIME_STAMP_INFO
       MON_SB_TRACE_INV_DATA
    */
    uint8_t   sub_blocks[TRACE_MODEM_ANY_SIZE];
    } tMON_TraceInvDataInd;

#define INVARIANT_TRACE_IND_HDR_LEN   (12)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ACTIVATE_REQ                                         */
/* ----------------------------------------------------------------------- */
/* This message can be used to activate invariant traces. When received from
   the host, it also activates sending invariant traces to the host.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   sub_block_count;
    /* Subblock list:
       MON_SB_TRACE_ACTIVATION_BITMAP
       MON_SB_TRACE_ACTIVATION_TIMESTAMP
    */
    uint8_t   sub_blocks[TRACE_MODEM_ANY_SIZE];
    } tMON_TraceActivateReq;

#define MON_TRACE_ACT_REQ_HDR_LEN   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ACTIVATE_RESP                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } tMON_TraceActivateResp;

#define MON_TRACE_ACT_RESP_HDR_LEN   sizeof(tMON_TraceActivateResp)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_DEACTIVATE_REQ                                       */
/* ----------------------------------------------------------------------- */
/* This message can be used to deactivate traces. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   set;  /* Values from the constant table MON_DEACTIVATE_SET_SYM */
    } tMON_TraceDeactivateReq;

#define MON_TRACE_DEACT_REQ_LEN   sizeof(tMON_TraceDeactivateReq)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_DEACTIVATE_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } tMON_TraceDeactivateResp;

#define MON_TRACE_DEACT_RESP_LEN   sizeof(tMON_TraceDeactivateResp)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ACTIVATION_READ_STATUS_REQ                           */
/* ----------------------------------------------------------------------- */
/* This message can be used for reading invariant trace activation state. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   flags;
    uint8_t   bitmap_count;
    /* xxxxxxxx--------  Trace type
       --------xxxxxxxx  Entity ID
    */
    uint16_t  bitmaps[TRACE_MODEM_ANY_SIZE];
    } MON_TRACE_ACTIVATION_READ_STATUS_REQ_STR;

#define SIZE_MON_TRACE_ACTIVATION_READ_STATUS_REQ_STR   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ACTIVATION_READ_STATUS_RESP                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    uint8_t   sub_block_count;
    /* Subblock list:
       MON_SB_TRACE_ACTIVATION_BITMAP
    */
    uint8_t   sub_blocks[TRACE_MODEM_ANY_SIZE];
    } MON_TRACE_ACTIVATION_READ_STATUS_RESP_STR;

#define SIZE_MON_TRACE_ACTIVATION_READ_STATUS_RESP_STR   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_CONFIG_SET_REQ                                       */
/* ----------------------------------------------------------------------- */
/* This message can be used to set a trace configuration. Trace configuration
   can be TRACE_DEFAULT_CONFIG_ALL_OFF (disable all traces),
   TRACE_DEFAULT_CONFIG_ALL_ON (enable all traces), or any of the Trace
   configuration macro names as defined in protocol.xml, e.g.,
   PROTOCOL_XML_TRACE_SET_FOR_WM_DEFAULT_USE_CASE.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   trace_config[TRACE_MODEM_ANY_SIZE];
    } MON_TRACE_CONFIG_SET_REQ_STR;

#define SIZE_MON_TRACE_CONFIG_SET_REQ_STR   (3*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_CONFIG_SET_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_CONFIG_SET_RESP_STR;

#define SIZE_MON_TRACE_CONFIG_SET_RESP_STR   \
        sizeof(MON_TRACE_CONFIG_SET_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_CONFIG_GET_REQ                                       */
/* ----------------------------------------------------------------------- */
/* This message can be used to query the supported trace configurations, the
   currently active trace configuration and the version of protocol.xml used.
   If the default configuration has been overwritten according to a trace
   activation request message, the currently active configuration is
   TRACE_DEFAULT_CONFIG_OVERWRITTEN, otherwise it is
   TRACE_DEFAULT_CONFIG_ALL_OFF, TRACE_DEFAULT_CONFIG_ALL_ON or a trace
   configuration macro name as defined in protocol.xml.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } MON_TRACE_CONFIG_GET_REQ_STR;

#define SIZE_MON_TRACE_CONFIG_GET_REQ_STR   \
        sizeof(MON_TRACE_CONFIG_GET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_CONFIG_GET_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   version;
    char    active_trace_config[TRACE_MODEM_ANY_SIZE];
    } MON_TRACE_CONFIG_GET_RESP_STR;

#define SIZE_MON_TRACE_CONFIG_GET_RESP_STR   (3*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ROUTING_REQ                                          */
/* ----------------------------------------------------------------------- */
/* This message can be used to set the routing of the traces to the XTI,
   host, both, or to disable tracing. The trace routing information is stored
   to the file system and active after reset. The routing can be changed by
   sending a new MON_TRACE_ROUTING_REQ.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* Values from the constant table MON_TRACE_ROUTING_SYMBOLS */
    uint8_t   trace_routing;
    } MON_TRACE_ROUTING_REQ_STR;

#define SIZE_MON_TRACE_ROUTING_REQ_STR   sizeof(MON_TRACE_ROUTING_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_ROUTING_RESP                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_ROUTING_RESP_STR;

#define SIZE_MON_TRACE_ROUTING_RESP_STR   sizeof(MON_TRACE_ROUTING_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFER_FLUSH_IND                                     */
/* ----------------------------------------------------------------------- */
/* The host provides memory area for trace buffers and informs modem about
   the start address of the area and the area size.
   This is done with the environment variables: TRACE_BUFFER_START_ADDRESS
   and TRACE_BUFFER_SIZE.
   The values are 32-bit HEX numbers.
   Modem configures this memory area to hold the so-called long term buffers,
   medium term buffers, short term buffers and static data for each of the
   processors.
   The message MON_TRACE_BUFFER_FLUSH_IND is sent by monitor server to the
   host when a trace buffer is full and needs to be stored by the host.
   The host should append the memory content from the specified address with
   the specified size to the buffer with the specified id. Only the long and
   medium term buffers' portions are transffered in this way.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* Values from the constant table MON_TRACE_BUFFER_SYMBOLS */
    uint8_t   buffer_id;
    uint32_t  address;
    uint32_t  size;
    } MON_TRACE_BUFFER_FLUSH_IND_STR;

#define SIZE_MON_TRACE_BUFFER_FLUSH_IND_STR   \
        sizeof(MON_TRACE_BUFFER_FLUSH_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_LOG_TRIGGER_IND                                      */
/* ----------------------------------------------------------------------- */
/* Modem sends this message to indicate that the host should flush the trace
   buffers and close the log.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint16_t  trigger_id;
    } MON_TRACE_LOG_TRIGGER_IND_STR;

#define SIZE_MON_TRACE_LOG_TRIGGER_IND_STR   \
        sizeof(MON_TRACE_LOG_TRIGGER_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_TRIGGER_REQ                                          */
/* ----------------------------------------------------------------------- */
/* The message MON_TRACE_TRIGGER_REQ is used in the case when trace log
   storing is triggered by the host or by the modem.
    In the case of the host trigger, the host sends this message with the
   action TRIGGER_START. Modem freezes the short trem buffer and sends the
   response. The host copies the trace buffers from the SDRAM area and sends
   a new MON_TRACE_TRIGGER_REQ with the action TRIGGER_STOP. Modem starts to
   write to the short term buffer and sends the response.
    In the case of the modem trigger, the modem freezes the short term buffer
   and sends MON_TRACE_LOG_TRIGGER_IND. The host flushes the trace buffer
   area from SDRAM and sends MON_TRACE_TRIGGER_REQ with the action
   TRIGGER_STOP. Modem starts to write to the short term buffer and sends the
   response.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* Values from the constant table MON_TRACE_TRIGGER_ACTION_SYMBOLS */
    uint8_t   action;
    } MON_TRACE_TRIGGER_REQ_STR;

#define SIZE_MON_TRACE_TRIGGER_REQ_STR   sizeof(MON_TRACE_TRIGGER_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_TRIGGER_RESP                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_TRIGGER_RESP_STR;

#define SIZE_MON_TRACE_TRIGGER_RESP_STR   sizeof(MON_TRACE_TRIGGER_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_IDS_ACTIVATE_ROUTE_REQ                               */
/* ----------------------------------------------------------------------- */
/* The message can be used to set the activation or routing for a number of
   traces of the same type and belonging to the same trace bitmap. The
   processor where the trace points are needs to be specified. However, for
   invariant traces the processor should always be L23. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MON_TRACE_PROCESSOR_SYMBOLS */
    uint8_t   processor;
    /* Values from the constant table MON_TRACE_TYPE_SYMBOLS */
    uint8_t   trace_type;
    uint32_t  bitmap_entity;
    /* Values from the constant table MON_TRACE_ACTIVATE_ROUTE_SYMBOLS */
    uint8_t   action;
    uint8_t   trace_count;
    uint16_t  trace_id[TRACE_MODEM_ANY_SIZE];
    } MON_TRACE_IDS_ACTIVATE_ROUTE_REQ_STR;

#define SIZE_MON_TRACE_IDS_ACTIVATE_ROUTE_REQ_STR   (6*sizeof(uint8_t) + \
        sizeof(uint32_t))


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_IDS_ACTIVATE_ROUTE_RESP                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_IDS_ACTIVATE_ROUTE_RESP_STR;

#define SIZE_MON_TRACE_IDS_ACTIVATE_ROUTE_RESP_STR   \
        sizeof(MON_TRACE_IDS_ACTIVATE_ROUTE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFER_MARKER_REQ                                    */
/* ----------------------------------------------------------------------- */
/* The message can be used to set markers to trace buffers. It will insert a
   trace to medium and long term buffers for both L1 and L23 processor.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* Values from the constant table MON_TRACE_BUFFER_MARKER_SYMBOLS */
    uint8_t   action;
    uint8_t   timestamp[8];
    } MON_TRACE_BUFFER_MARKER_REQ_STR;

#define SIZE_MON_TRACE_BUFFER_MARKER_REQ_STR   \
        sizeof(MON_TRACE_BUFFER_MARKER_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFER_MARKER_RESP                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_BUFFER_MARKER_RESP_STR;

#define SIZE_MON_TRACE_BUFFER_MARKER_RESP_STR   \
        sizeof(MON_TRACE_BUFFER_MARKER_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFERING_MODE_REQ                                   */
/* ----------------------------------------------------------------------- */
/* This message can be used to set the trace buffering mode. The buffering
   can be done in SDRAM_ONLY mode when modem doesn't send flush indications,
   or in the FLUSHING mode when flush indications are sent. The internal
   structure of the trace buffers depends on the buffering mode. For this
   reason, the mode can be changed only if trace buffering is not active at
   the moment.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* Values from the constant table MON_TRACE_BUFFERING_MODE_SYMBOLS */
    uint8_t   trace_routing;
    } MON_TRACE_BUFFERING_MODE_REQ_STR;

#define SIZE_MON_TRACE_BUFFERING_MODE_REQ_STR   \
        sizeof(MON_TRACE_BUFFERING_MODE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFERING_MODE_RESP                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    /* A subset of values from the constant table MON_RESPONSE_SYMBOLS */
    uint8_t   status;
    } MON_TRACE_BUFFERING_MODE_RESP_STR;

#define SIZE_MON_TRACE_BUFFERING_MODE_RESP_STR   \
        sizeof(MON_TRACE_BUFFERING_MODE_RESP_STR)

/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFERING_MODE_READ_REQ                              */
/* ----------------------------------------------------------------------- */
/* This message can be used to read the current setting for the trace routing
   and the trace buffering mode.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } MON_TRACE_BUFFERING_MODE_READ_REQ_STR;

#define SIZE_MON_TRACE_BUFFERING_MODE_READ_REQ_STR   \
        sizeof(MON_TRACE_BUFFERING_MODE_READ_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MON_TRACE_BUFFERING_MODE_READ_RESP                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MON_TRACE_ROUTING_SYMBOLS */
    uint8_t   trace_routing;
    /* Values from the constant table MON_TRACE_BUFFERING_MODE_SYMBOLS */
    uint8_t   buffering_mode;
    } MON_TRACE_BUFFERING_MODE_READ_RESP_STR;

#define SIZE_MON_TRACE_BUFFERING_MODE_READ_RESP_STR   \
        sizeof(MON_TRACE_BUFFERING_MODE_READ_RESP_STR)


#endif /* _MONITOR_SERVER_MODEM_MSG_EXT_H */
