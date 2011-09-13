/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 002.009
Specifications : MSW-<#>-03.7 Test Message Interface Specification, version 2.x

Object (this information is substituted by Synergy/CM):
    %name:           modem_test_msg_ext.h %
    %instance:       sa1mexe_1 %
    %version:        002.009.2 %
    %date_modified:  Thu Feb 24 13:35:19 2011 %
    
Copyright (c) Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

-------------------------------------------------------------------------------
*/

#ifndef _MODEM_TEST_MSG_EXT_H
#define _MODEM_TEST_MSG_EXT_H

/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* constant for variable-length definitions */
#define MODEM_TEST_ANY_SIZE                      1
#define COMM_MAX_FTD_STRING_LENGTH               0x7C
#define COMM_MAX_FTD_DATA_LENGTH                 0xF8
#define MODEM_TEST_FTD_MAX_ITEMS                 0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_GROUP                                        */
/* ----------------------------------------------------------------------- */
/* If the modem contains only one CPU, all the tests are executed on a single
   CPU regardless of the test group ID.
*/
typedef uint16_t MODEM_TEST_GROUP_CONST;

/* Licensee's tests to be executed on the processor that runs the L1 software
*/
#define MODEM_TEST_GRP_LICENSEE_L1               0x0000
/* Licensee's tests to be executed on the processor that runs the L23
   software
*/
#define MODEM_TEST_GRP_LICENSEE_L23              0x8000
/* Modem self-tests to be executed on the processor that runs the L1 software
*/
#define MODEM_TEST_GRP_SELFTEST_L1               0x1000
/* Modem self-tests to be executed on the processor that runs the L23
   software
*/
#define MODEM_TEST_GRP_SELFTEST_L23              0x9000

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_ST_HANDLER_ID                                */
/* ----------------------------------------------------------------------- */
/* Modem self-test handler IDs for MODEM_TEST_GRP_SELFTEST_L1 and
   MODEM_TEST_GRP_SELFTEST_L23 groups.
*/
typedef uint16_t MODEM_TEST_ST_HANDLER_ID_CONST;

/* The self-test always returns MODEM_TEST_PASSED */
#define MODEM_TEST_ST_DUMMY                      0x0000
/* Self-test for checking accuracy of the sleep clock frequency */
#define MODEM_TEST_ST_SLEEP_CLK_FREQ             0x0001
/* Self-test for generating GPS timemark */
#define MODEM_TEST_ST_GPS_TIMEMARK_ON            0x0002
/* Self-test for clearing GPS timemark */
#define MODEM_TEST_ST_GPS_TIMEMARK_OFF           0x0003
/* Self-test for setting indication of modem TX transmission to GPS */
#define MODEM_TEST_ST_GPS_TX_ON                  0x0004
/* Self-test for clearing indication of modem TX transmission to GPS */
#define MODEM_TEST_ST_GPS_TX_OFF                 0x0005

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_STATUS                                       */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_STATUS_CONST;

/* Test case is passed */
#define MODEM_TEST_PASSED                        0x00
/* Test case is failed */
#define MODEM_TEST_FAILED                        0x01
/* Test-handler function is not registered */
#define MODEM_TEST_UNDEFINED                     0x02
/* Test case is not supported by the test-handler function */
#define MODEM_TEST_CASE_NOT_SUPPORTED            0x03
/* Test data is not valid */
#define MODEM_TEST_DATA_INVALID                  0x04
/* Test case is awaiting completion */
#define MODEM_TEST_WAITING                       0x05
/* Test server is busy */
#define MODEM_TEST_BUSY                          0x06
/* Test case's timeout is exceeded */
#define MODEM_TEST_TIMEOUT                       0x07
/* Test case is executed but pass or fail criteria is not applicable for this
   test case
*/
#define MODEM_TEST_DONE                          0x08
/* Test case is executed, but it requires modem restart */
#define MODEM_TEST_RESTART_REQUIRED              0x09

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FORCED_SLEEP_MODE                            */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_FORCED_SLEEP_MODE_CONST;

/* Power-down sleep mode is allowed */
#define MODEM_TEST_SLEEP_MODE_ALL_ALLOWED        0x00
/* Power-down sleep mode with RF clock request is allowed */
#define MODEM_TEST_SLEEP_MODE_PWR_DOWN_WITH_RF_CLK_REQ 0x10
/* Deep sleep mode without power-down is allowed */
#define MODEM_TEST_SLEEP_MODE_DEEP_SLEEP         0x20
/* Deep sleep mode with RF clock request is allowed */
#define MODEM_TEST_SLEEP_MODE_DEEP_SLEEP_WITH_RF_CLK_REQ 0x30
/* Light sleep mode without HF clock request is allowed */
#define MODEM_TEST_SLEEP_MODE_LIGHT_WITHOUT_PLL  0x40
/* Light sleep mode with HF clock request is allowed */
#define MODEM_TEST_SLEEP_MODE_LIGHT_WITH_PLL     0x50
/* Sleep mode is not allowed (no WFI) */
#define MODEM_TEST_SLEEP_MODE_NO_SLEEP           0x60

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_CPU                                          */
/* ----------------------------------------------------------------------- */
/* Selection of the affected modem CPU.  */
typedef uint8_t MODEM_TEST_CPU_CONST;

/* Selection affects L23 CPU of a two-processor modem and CPU of a
   single-processor modem
*/
#define MODEM_TEST_CPU_L23                       0x00
/* Selection affects L1 CPU of a two-processors modem */
#define MODEM_TEST_CPU_L1                        0x01
/* Selection affects all modem CPU's */
#define MODEM_TEST_CPU_ALL                       0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_DVFS_CTRL                                    */
/* ----------------------------------------------------------------------- */
/* DVFS test mode selection. This selection defines if the CPU or EMIF OPP is
   going to be controlled or if the DVFS normal operation is restored.
*/
typedef uint8_t MODEM_TEST_DVFS_CTRL_CONST;

/* Set DVFS to be modem sw controlled */
#define MODEM_TEST_DVFS_NORMAL_CTRL              0x00
#define MODEM_TEST_DVFS_CPU_OPP                  0x01  /* Set CPU OPP */
/* Set External Memory IF OPP */
#define MODEM_TEST_DVFS_EMIF_OPP                 0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_ACTION_SELECT                                */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_ACTION_SELECT_CONST;

#define MODEM_TEST_DISABLE                       0x00  /* - */
#define MODEM_TEST_ENABLE                        0x01  /* - */
#define MODEM_TEST_DISABLE_ALL                   0x02  /* - */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_DEBUG_SELECT                                 */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_DEBUG_SELECT_CONST;

/* Core Dump feature */
#define MODEM_TEST_CORE_DUMP                     0x00
/* XFile generation */
#define MODEM_TEST_XFILE                         0x01
/* Modem watchdogs */
#define MODEM_TEST_WATCHDOG                      0x02
#define MODEM_TEST_ETM_TRACE                     0x03  /* ETM trace */
#define MODEM_TEST_WATCHPOINT                    0x04  /* Watchpoint */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_ACCESS_TYPE                                  */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_ACCESS_TYPE_CONST;

/* Instruction fetched */
#define MODEM_TEST_INSTRUCTION_FETCH             0x00
/* Instruction executed */
#define MODEM_TEST_INSTRUCTION_EXECUTED          0x01
#define MODEM_TEST_DATA_LOAD                     0x02  /* Data load */
#define MODEM_TEST_DATA_STORE                    0x03  /* Data store */
/* Data load or store */
#define MODEM_TEST_DATA_LOAD_OR_STORE            0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_ACCESS_SIZE                                  */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_ACCESS_SIZE_CONST;

/* Byte data or Java instruction */
#define MODEM_TEST_BYTE                          0x00
/* Halfword data or Thumb instruction */
#define MODEM_TEST_HALFWORD                      0x01
/* Word data or ARM instruction */
#define MODEM_TEST_WORD                          0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_CONTEXT_ID_SEL                               */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_CONTEXT_ID_SEL_CONST;

/* Context ID disabled */
#define MODEM_TEST_CONTEXT_ID_DISABLE            0x00
/* 8 bit context ID */
#define MODEM_TEST_CONTEXT_ID_8BIT               0x01
/* 16 bit context ID */
#define MODEM_TEST_CONTEXT_ID_16BIT              0x02
/* 32 bit context ID */
#define MODEM_TEST_CONTEXT_ID_32BIT              0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FILTER_SELECTION                             */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_FILTER_SELECTION_CONST;

#define MODEM_TEST_TRACE_FILTER                  0x00  /* Trace filter */
/* Data trace filter */
#define MODEM_TEST_DATA_TRACE_FILTER             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FILTER_TYPE                                  */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_FILTER_TYPE_CONST;

/* Include address region */
#define MODEM_TEST_INCLUDE                       0x00
/* Exclude address region */
#define MODEM_TEST_EXCLUDE                       0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_WATCHPOINT_OUTPUT                            */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_WATCHPOINT_OUTPUT_CONST;

/* Modem reset when  */
#define MODEM_TEST_WATCHPOINT_RESET              0x00
#define MODEM_TEST_WATCHPOINT_TRACE              0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FT_ENTITY                                    */
/* ----------------------------------------------------------------------- */
/* Field test entity selection. */
typedef uint8_t MODEM_TEST_FT_ENTITY_CONST;

/* GSM physical layer */
#define MODEM_TEST_FT_2G_L1                      0x00
/* WCDMA physical layer  */
#define MODEM_TEST_FT_3G_L1                      0x01
/* Core Network layer and GSM layers 2 and 3 */
#define MODEM_TEST_FT_CN_2GL23                   0x80
/* WCDMA layers 2 and 3 */
#define MODEM_TEST_FT_3G_L23                     0x81
/* GPRS packet data */
#define MODEM_TEST_FT_GPRS                       0x83

/* ----------------------------------------------------------------------- */
/* Constant Table: COMM_STRING_TYPE                                        */
/* ----------------------------------------------------------------------- */
/* String type selection. */
#define COMM_STRING_ASCII                        0x00  /* ASCII string */
#define COMM_STRING_UNICODE                      0x01  /* UNICODE string */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FTD_FAIL_REASON                              */
/* ----------------------------------------------------------------------- */
/* Reason of FTD item fail. */
typedef uint8_t MODEM_TEST_FTD_FAIL_REASON_CONST;

/* FTD item is not supported by selected field test entity */
#define MODEM_TEST_FTD_ITEM_NOT_SUPPORTED        0x01
/* FTD item is not available in current state of selected field test entity
*/
#define MODEM_TEST_FTD_ITEM_NOT_AVAILABLE        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FTD_SYSTEM_SWITCH_INFO                       */
/* ----------------------------------------------------------------------- */
/* Type of radio access technology switch. */
typedef uint8_t MODEM_TEST_FTD_SYSTEM_SWITCH_INFO_CONST;

#define MODEM_TEST_FTD_SWITCH_TO_2G              0x01  /* Switch to 2G */
#define MODEM_TEST_FTD_SWITCH_TO_3G              0x02  /* Switch to 3G */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_TEST_FT_STATUS                                    */
/* ----------------------------------------------------------------------- */
/* Status of field test operation. */
typedef uint8_t MODEM_TEST_FT_STATUS_CONST;

/* Operation is executed */
#define MODEM_TEST_FT_OK                         0x00
/* Operation is failed */
#define MODEM_TEST_FT_FAILED                     0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_TEST_ATTR                                          */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_ATTR_CONST;

#define MODEM_TEST_ATTR_NONE                     0x00  /* 00000000 */
/* Do not send response message */
#define MODEM_TEST_ATTR_NO_RESP                  0x01  /* -------1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_TEST_DEBUG_PROCESSOR                               */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_DEBUG_PROCESSOR_CONST;

/* L1 processor */
#define MODEM_TEST_L1                            0x01  /* -------1 */
/* L23 processor */
#define MODEM_TEST_L23                           0x02  /* ------1- */
/* L123 processor */
#define MODEM_TEST_L123                          0x03  /* ------11 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_TEST_ETM_DATA_TRACE                                */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_ETM_DATA_TRACE_CONST;

/* Disabled  */
#define MODEM_TEST_DATA_DISABLE                  0x00  /* 00000000 */
/* Data address */
#define MODEM_TEST_DATA_ADDRESS                  0x01  /* -------1 */
/* Data value */
#define MODEM_TEST_DATA_VALUE                    0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_TEST_WATCHPOINT_SEL                                */
/* ----------------------------------------------------------------------- */
typedef uint8_t MODEM_TEST_WATCHPOINT_SEL_CONST;

/* Instruction execution */
#define MODEM_TEST_INSTRUCTION                   0x01  /* -------1 */
/* Data load */
#define MODEM_TEST_WP_DATA_LOAD                  0x02  /* ------1- */
/* Data store */
#define MODEM_TEST_WP_DATA_STORE                 0x04  /* -----1-- */
/* Context ID */
#define MODEM_TEST_WP_CONTEXT_ID                 0x08  /* ----1--- */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define MODEM_TEST_RUN_REQ                       0x80
#define MODEM_TEST_RUN_RESP                      0x81
#define MODEM_TEST_FORCED_SLEEP_MODE_SET_REQ     0x82
#define MODEM_TEST_FORCED_SLEEP_MODE_SET_RESP    0x83
#define MODEM_TEST_SLEEP_TEST_MODE_SET_REQ       0x84
#define MODEM_TEST_SLEEP_TEST_MODE_SET_RESP      0x85
#define MODEM_TEST_DVFS_TEST_MODE_SET_REQ        0x86
#define MODEM_TEST_DVFS_TEST_MODE_SET_RESP       0x87
#define MODEM_TEST_DEBUG_CONTROL_REQ             0x88
#define MODEM_TEST_DEBUG_CONTROL_RESP            0x89
#define MODEM_TEST_FTD_REQ                       0x8A
#define MODEM_TEST_FTD_RESP                      0x8B
#define MODEM_TEST_FTD_NTF                       0x8C
#define MODEM_TEST_FT_CONTROL_REQ                0x8D
#define MODEM_TEST_FT_CONTROL_RESP               0x8E

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define MODEM_TEST_ETM_FILTER_SB                 0x04
#define MODEM_TEST_FTD_SB_FAIL                   0x0000
#define MODEM_TEST_FTD_SB_SYSTEM_SWITCH          0x0002

/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_TEST_CORE_DUMP_SEQ                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table MODEM_TEST_DEBUG_PROCESSOR */
    uint8_t   processor;
    } MODEM_TEST_CORE_DUMP_SEQ_STR;

#define SIZE_MODEM_TEST_CORE_DUMP_SEQ_STR   \
        sizeof(MODEM_TEST_CORE_DUMP_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_TEST_ETM_FILTER_SB                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sb_id;
    uint8_t   sb_length;
    /* Values from the constant table MODEM_TEST_FILTER_SELECTION */
    uint8_t   filter_selection;
    /* Values from the constant table MODEM_TEST_FILTER_TYPE */
    uint8_t   filter_type;
    uint32_t  start_address;
    uint32_t  end_address;
    /* Values from the constant table MODEM_TEST_ACCESS_TYPE */
    uint8_t   access_type;
    /* Values from the constant table MODEM_TEST_ACCESS_SIZE */
    uint8_t   access_size;
    uint8_t   fillbyte;
    /* Values from the constant table MODEM_TEST_ACTION_SELECT */
    uint8_t   context_id_sel;
    uint32_t  context_id;
    uint32_t  context_id_mask;
    } MODEM_TEST_ETM_FILTER_SB_STR;

#define SIZE_MODEM_TEST_ETM_FILTER_SB_STR   \
        sizeof(MODEM_TEST_ETM_FILTER_SB_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_TEST_ETM_TRACE_SEQ                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table MODEM_TEST_DEBUG_PROCESSOR */
    uint8_t   processor;
    /* Values from the constant table MODEM_TEST_ACTION_SELECT */
    uint8_t   cycle_accurate;
    /* Values from the bitmask table MODEM_TEST_ETM_DATA_TRACE */
    uint8_t   data_trace;
    /* Values from the constant table MODEM_TEST_CONTEXT_ID_SEL */
    uint8_t   context_id_trace;
    uint8_t   fillbyte[3];
    uint8_t   sub_block_count;
    /* Subblock list:
       MODEM_TEST_ETM_FILTER_SB
    */
    uint8_t   sub_blocks[MODEM_TEST_ANY_SIZE];
    } MODEM_TEST_ETM_TRACE_SEQ_STR;

#define SIZE_MODEM_TEST_ETM_TRACE_SEQ_STR   (8*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_TEST_WATCHPOINT_SEQ                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table MODEM_TEST_DEBUG_PROCESSOR */
    uint8_t   processor;
    /* Values from the bitmask table MODEM_TEST_WATCHPOINT_SEL */
    uint8_t   flags;
    /* Values from the constant table MODEM_TEST_WATCHPOINT_OUTPUT */
    uint8_t   output;
    uint8_t   fillbyte;
    uint32_t  address;
    uint32_t  address_mask;
    uint32_t  data_value;
    uint32_t  data_mask;
    uint32_t  context_id;
    } MODEM_TEST_WATCHPOINT_SEQ_STR;

#define SIZE_MODEM_TEST_WATCHPOINT_SEQ_STR   \
        sizeof(MODEM_TEST_WATCHPOINT_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock template: COMM_FTD_DATA_BYTE                                   */
/* ----------------------------------------------------------------------- */
/* Template for FTD item description. */

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    uint8_t   data;         /* One-byte data element. */
    } COMM_FTD_DATA_BYTE_STR;

#define SIZE_COMM_FTD_DATA_BYTE_STR   sizeof(COMM_FTD_DATA_BYTE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock template: COMM_FTD_DATA_WORD                                   */
/* ----------------------------------------------------------------------- */
/* Template for FTD item description. */

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    uint8_t   filler1;   /* For future use. The value should always be zero. */
    uint16_t  data;         /* Two-byte data element. */
    uint8_t   filler2;   /* For future use. The value should always be zero. */
    uint8_t   filler3;   /* For future use. The value should always be zero. */
    } COMM_FTD_DATA_WORD_STR;

#define SIZE_COMM_FTD_DATA_WORD_STR   sizeof(COMM_FTD_DATA_WORD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock template: COMM_FTD_DATA_DWORD                                  */
/* ----------------------------------------------------------------------- */
/* Template for FTD item description. */

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    uint8_t   filler1;   /* For future use. The value should always be zero. */
    uint32_t  data;         /* Four-byte data element. */
    } COMM_FTD_DATA_DWORD_STR;

#define SIZE_COMM_FTD_DATA_DWORD_STR   sizeof(COMM_FTD_DATA_DWORD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock template: COMM_FTD_DATA_STRING                                 */
/* ----------------------------------------------------------------------- */
/* Template for FTD item description. */

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    /* String type and string length bit fields.
       x-------  String type
       -xxxxxxx  String length
    */
    uint8_t   string_lenght;
    char    string[COMM_MAX_FTD_STRING_LENGTH];
    } COMM_FTD_DATA_STRING_STR;

#define SIZE_COMM_FTD_DATA_STRING_STR   (sizeof(uint16_t) + 2*sizeof(uint8_t) + \
        COMM_MAX_FTD_STRING_LENGTH*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock template: COMM_FTD_DATA_TABLE                                  */
/* ----------------------------------------------------------------------- */
/* Template for FTD item description. */

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    uint8_t   data_length;
    uint8_t   data[COMM_MAX_FTD_DATA_LENGTH]; /* Multi-byte data element. */
    } COMM_FTD_DATA_TABLE_STR;

#define SIZE_COMM_FTD_DATA_TABLE_STR   (sizeof(uint16_t) + \
        (2 + COMM_MAX_FTD_DATA_LENGTH)*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_TEST_FTD_SB_FAIL                                        */
/* ----------------------------------------------------------------------- */
/* This sub block is included into a message if requested FTD item can not be
   provided by selected field test entity.
*/

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    uint8_t   filler1;   /* For future use. The value should always be zero. */
    uint16_t  failed_ftd_id; /* ID of failed FTD item. */
    /* Values from the constant table MODEM_TEST_FTD_FAIL_REASON */
    uint8_t   fail_reason;
    uint8_t   filler2;   /* For future use. The value should always be zero. */
    } MODEM_TEST_FTD_SB_FAIL_STR;

#define SIZE_MODEM_TEST_FTD_SB_FAIL_STR   sizeof(MODEM_TEST_FTD_SB_FAIL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_TEST_FTD_SB_SYSTEM_SWITCH                               */
/* ----------------------------------------------------------------------- */
/* This sub block is included into a message when the modem moves between
   radio access technologies.
*/

typedef struct
    {
    uint16_t  sb_id;
    uint8_t   sb_len;
    /* Values from the constant table MODEM_TEST_FTD_SYSTEM_SWITCH_INFO */
    uint8_t   system_switch;
    } MODEM_TEST_FTD_SB_SYSTEM_SWITCH_STR;

#define SIZE_MODEM_TEST_FTD_SB_SYSTEM_SWITCH_STR   \
        sizeof(MODEM_TEST_FTD_SB_SYSTEM_SWITCH_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_RUN_REQ                                             */
/* ----------------------------------------------------------------------- */
/* This message requests execution of the test-handler function.  */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint16_t  group_id;   /* Values from the constant table MODEM_TEST_GROUP */
    /* ID of the requested test-handler function. The licensee is responsible
       for assigning the test-handlers IDs. 
    */
    uint16_t  test_id;
    /* ID of the requested test case. The licensee is responsible for
       assigning the tests case IDs. 
    */
    uint16_t  case_ID;
    uint8_t   attrib;       /* Values from the bitmask table MODEM_TEST_ATTR */
    uint8_t   fillbyte;
    /* If zero, then input data length N is calculated from the PhoNet
       message length. 
    */
    uint16_t  inp_data_length;
    /* Data to be passed to the test-handler function. */
    uint8_t   inp_data[MODEM_TEST_ANY_SIZE];
    } t_ModemTest_RunReq;

#define MODEM_TEST_RUN_REQ_LEN   (4*sizeof(uint8_t) + 4*sizeof(uint16_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_RUN_RESP                                            */
/* ----------------------------------------------------------------------- */
/* This message communicates the test-handler execution result.  */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint16_t  group_id;   /* Values from the constant table MODEM_TEST_GROUP */
    /* ID of the requested test-handler function. The value is copied from
       the request message. 
    */
    uint16_t  test_id;
    /* ID of the requested test case. The value is copied from the request
       message. 
    */
    uint16_t  case_ID;
    uint8_t   fillbyte;
    /* A subset of values from the constant table MODEM_TEST_STATUS */
    uint8_t   status;
    uint16_t  out_data_length;
    /* Data returned by the test-handler function.  */
    uint8_t   out_data[MODEM_TEST_ANY_SIZE];
    } t_ModemTest_RunResp;

#define MODEM_TEST_RUN_RESP_LEN   (4*sizeof(uint8_t) + 4*sizeof(uint16_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FORCED_SLEEP_MODE_SET_REQ                           */
/* ----------------------------------------------------------------------- */
/* This message defines the lowest allowed sleep mode for the selected CPUs.
   It can only be used for testing purposes. Sleep is controlled normally
   from the modem sw but it is not allowed to enter deeper sleep at any case
   than defined in this message. Selected sleep limit is also stored to
   permanent memory and it will be used until the new sw is flashed or
   message is sent again with different forced mode selection. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FORCED_SLEEP_MODE */
    uint8_t   mode;
    uint8_t   cpu;          /* Values from the constant table MODEM_TEST_CPU */
    } t_ModemTest_ForcedSleepModeSetReq;

#define MODEM_TEST_FORCED_SLEEP_MODE_SET_REQ_LEN   \
        sizeof(t_ModemTest_ForcedSleepModeSetReq)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FORCED_SLEEP_MODE_SET_RESP                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MODEM_TEST_STATUS */
    uint8_t   status;
    uint8_t   fillbyte;
    } t_ModemTest_ForcedSleepModeSetResp;

#define MODEM_TEST_FORCED_SLEEP_MODE_SET_RESP_LEN   \
        sizeof(t_ModemTest_ForcedSleepModeSetResp)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_SLEEP_TEST_MODE_SET_REQ                             */
/* ----------------------------------------------------------------------- */
/* This message sets the modem CPU's to the given sleep mode. It can only be
   used for testing purposes. This message can be used for example in current
   consumption measurements. It will disable all other modem interrupts
   except modem messaging interrupts. In this way modem can only be woken up
   from the sleep with message from the host and after the wakeup modem sleep
   state is restored. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FORCED_SLEEP_MODE */
    uint8_t   mode;
    uint8_t   cpu;          /* Values from the constant table MODEM_TEST_CPU */
    } t_ModemTest_SleepTestReq;

#define MODEM_TEST_SLEEP_TEST_MODE_SET_REQ_LEN   \
        sizeof(t_ModemTest_SleepTestReq)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_SLEEP_TEST_MODE_SET_RESP                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MODEM_TEST_STATUS */
    uint8_t   status;
    uint8_t   fillbyte;
    } t_ModemTest_SleepTestResp;

#define MODEM_TEST_SLEEP_TEST_MODE_SET_RESP_LEN   \
        sizeof(t_ModemTest_SleepTestResp)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_DVFS_TEST_MODE_SET_REQ                              */
/* ----------------------------------------------------------------------- */
/* This message sets the modem CPU's to given DVFS OPP. It can only be used
   for testing purposes. If CPU or EMIF OPP is selected the message will
   force DVFS to use given DVFS OPP. Notice that this message will disable
   the normal DVFS operations and it will cause problems for normal sw
   opearations! 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   ctrl;   /* Values from the constant table MODEM_TEST_DVFS_CTRL */
    /* CPU or EMIF DVFS OPP. If the DVFS Control is set to
       MODEM_TEST_DVFS_NORMAL_CTRL the given OPP value is ignored.
    */
    uint8_t   opp;
    } t_ModemTest_ForcedDVFSOPPReq;

#define MODEM_TEST_DVFS_TEST_MODE_SET_REQ_LEN   \
        sizeof(t_ModemTest_ForcedDVFSOPPReq)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_DVFS_TEST_MODE_SET_RESP                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MODEM_TEST_STATUS */
    uint8_t   status;
    uint8_t   selected_opp; /* Closest supported and selected DVFS OPP */
    } t_ModemTest_ForcedDVFSOPPResp;

#define MODEM_TEST_DVFS_TEST_MODE_SET_RESP_LEN   \
        sizeof(t_ModemTest_ForcedDVFSOPPResp)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_DEBUG_CONTROL_REQ                                   */
/* ----------------------------------------------------------------------- */
/* This message is used to disable or enable some debug features. If the
   feature is disabled, it will stay disabled even after modem reset or modem
   power-off.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_DEBUG_SELECT */
    uint8_t   selection;
    /* Values from the constant table MODEM_TEST_ACTION_SELECT */
    uint8_t   action;
    } t_ModemTest_DebugCtrlReq;

#define MODEM_TEST_DEBUG_CONTROL_REQ_LEN   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_DEBUG_CONTROL_RESP                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MODEM_TEST_STATUS */
    uint8_t   status;
    uint8_t   fillbyte;
    } t_ModemTest_DebugCtrlResp;

#define MODEM_TEST_DEBUG_CONTROL_RESP_LEN   sizeof(t_ModemTest_DebugCtrlResp)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FTD_REQ                                             */
/* ----------------------------------------------------------------------- */
/* The message requests and activates field test data. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FT_ENTITY */
    uint8_t   ftd_entity;
    /* If zero then all FTD items of selected field test entity are
       deactivated.
    */
    uint8_t   nbr_of_subblocks;
    /* Listed FTD items are activated. All not listed FTD items are
       deactivated. Possible FTD ID values are specified for every field test
       item in a separate document. 
    */
    uint16_t  ftd_id[MODEM_TEST_ANY_SIZE];
    } t_ModemTest_FtdReq;

#define MODEM_TEST_FTD_REQ_LEN   (4*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FTD_RESP                                            */
/* ----------------------------------------------------------------------- */
/* The message communicates requested field test data. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FT_ENTITY */
    uint8_t   ftd_entity;
    uint8_t   status; /* Values from the constant table MODEM_TEST_FT_STATUS */
    /* For future use. The value should always be zero. */
    uint8_t   filler1[3];
    uint8_t   nbr_of_subblocks;
    /* FTD sub blocks. Possible sub blocks formats are defined by
       COMM_FTD_DATA_* templates. Correspondence of FTD ID to the template is
       specified for every field test item in a separate document. Optionally
       following sub blocks can be included into the message: 
       Subblock list:
       MODEM_TEST_FTD_SB_FAIL
       MODEM_TEST_FTD_SB_SYSTEM_SWITCH
    */
    } t_ModemTest_FtdResp;

#define MODEM_TEST_FTD_RESP_LEN   (8*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FTD_NTF                                             */
/* ----------------------------------------------------------------------- */
/* The message periodically updates activated field test data. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FT_ENTITY */
    uint8_t   ftd_entity;
    uint8_t   filler1;   /* For future use. The value should always be zero. */
    /* For future use. The value should always be zero. */
    uint8_t   filler2[3];
    uint8_t   nbr_of_subblocks;
    /* FTD sub blocks. Possible sub blocks formats are defined by
       COMM_FTD_DATA_* templates. Correspondence of FTD ID to the template is
       specified for every field test item in a separate document. Optionally
       following sub blocks can be included into the message: 
       Subblock list:
       MODEM_TEST_FTD_SB_FAIL
       MODEM_TEST_FTD_SB_SYSTEM_SWITCH
    */
    } t_ModemTest_FtdNtf;

#define MODEM_TEST_FTD_NTF_LEN   (8*sizeof(uint8_t))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FT_CONTROL_REQ                                      */
/* ----------------------------------------------------------------------- */
/* The message sets value of field test control. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FT_ENTITY */
    uint8_t   ftd_entity;
    uint8_t   filler1;   /* For future use. The value should always be zero. */
    uint16_t  ftd_command_item; /* Field test control selection */
    /* For future use. The value should always be zero. */
    uint8_t   filler2[2];
    uint32_t  ftd_command_data; /* Four-byte value. */
    } t_ModemTest_FtControlReq;

#define MODEM_TEST_FT_CONTROL_REQ_LEN   sizeof(t_ModemTest_FtControlReq)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_TEST_FT_CONTROL_RESP                                     */
/* ----------------------------------------------------------------------- */
/* The message communicates status of field test control request. */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* Values from the constant table MODEM_TEST_FT_ENTITY */
    uint8_t   ftd_entity;
    uint8_t   status; /* Values from the constant table MODEM_TEST_FT_STATUS */
    } t_ModemTest_FtdControlResp;

#define MODEM_TEST_FT_CONTROL_RESP_LEN   sizeof(t_ModemTest_FtControlResp)




#endif /* _MODEM_TEST_MSG_EXT_H */
