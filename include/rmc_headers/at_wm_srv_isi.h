/*
NOKIA                                                             CONFIDENTIAL
                  AT Modem ISI Message Definitions
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            at_wm_srv_isi.h

version:         003.003

type:            incl


ISI header file for AT Modem Server

Current   ISI Version : 003.003
Supported ISI Versions: 000.001, 000.002, 001.000, 002.000, 003.000, 003.001, 
                        003.002, 003.003

Copyright (c) 2010 Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _AT_WM_SRV_ISI_H
#define _AT_WM_SRV_ISI_H

#include "isi_conf.h"

#ifndef AT_MODEM_ISI_VERSION
#define AT_MODEM_ISI_VERSION
#define AT_MODEM_ISI_VERSION_Z   3
#define AT_MODEM_ISI_VERSION_Y   3
#endif

#define AT_MODEM_ISI_MIN_VERSION(z,y) \
 ((AT_MODEM_ISI_VERSION_Z == (z) && AT_MODEM_ISI_VERSION_Y >= (y)) || \
  (AT_MODEM_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* AT Modem DTE ID Allocation. Value: 0xFF */
#define AT_MODEM_DTE_ID_UNDEFINED                0xFF
/* constant for variable-length definitions */
#define AT_MODEM_ANY_SIZE                        1

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_RESULT_STATUS                                  */
/* ----------------------------------------------------------------------- */
/* Result Values */
typedef uint8 AT_MODEM_RESULT_STATUS_CONST;

#define AT_MODEM_RESULT_ERROR                    0x00
#define AT_MODEM_RESULT_OK                       0x01
#define AT_MODEM_RESULT_OK_DTE_ID_CHANGED        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_FLOW_CONTROL - Valid from version 002.000      */
/* ----------------------------------------------------------------------- */
/* Flow Control Values */
typedef uint8 AT_MODEM_FLOW_CONTROL_CONST;

#define AT_MODEM_FLOW_CONTROL_NONE               0x00
#define AT_MODEM_FLOW_CONTROL_SW                 0x01
#define AT_MODEM_FLOW_CONTROL_HW                 0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_TYPE_OF_SIGNAL_DETECTED - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
/* Type of Signal which can be detected by the client */
typedef uint8 AT_MODEM_TYPE_OF_SIGNAL_DETECTED_CONST;

#define AT_MODEM_SIGNAL_DTR_OFF                  0x00
#define AT_MODEM_SIGNAL_DTR_ON                   0x01
#define AT_MODEM_SIGNAL_ESCAPE_DETECTED          0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_EXTRACT_STATUS - Valid from version 002.000    */
/* ----------------------------------------------------------------------- */
/* Extract Status whether allowed or not. */
typedef uint8 AT_MODEM_EXTRACT_STATUS_CONST;

#define AT_MODEM_NO_EXTRACT                      0x00
#define AT_MODEM_WITH_EXTRACT                    0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_PARITY_STATUS - Valid from version 002.000     */
/* ----------------------------------------------------------------------- */
/* Parity is allowed or not */
typedef uint8 AT_MODEM_PARITY_STATUS_CONST;

#define AT_MODEM_PARITY_OFF                      0x00
#define AT_MODEM_PARITY_ON                       0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_PARITY_BIT - Valid from version 002.000        */
/* ----------------------------------------------------------------------- */
/* Parity bit Value */
typedef uint8 AT_MODEM_PARITY_BIT_CONST;

#define AT_MODEM_PARITY_BIT_ODD                  0x00
#define AT_MODEM_PARITY_BIT_UNKNOWN              0x01
#define AT_MODEM_PARITY_BIT_EVEN                 0x02
#define AT_MODEM_PARITY_BIT_NONE                 0x03
#define AT_MODEM_PARITY_BIT_SPACE                0x04
#define AT_MODEM_PARITY_BIT_MARK                 0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_AUTOBAUD_STATUS - Valid from version 002.000   */
/* ----------------------------------------------------------------------- */
/* Autobaud is allowed or not */
typedef uint8 AT_MODEM_AUTOBAUD_STATUS_CONST;

#define AT_MODEM_AUTOBAUD_OFF                    0x00
#define AT_MODEM_AUTOBAUD_ON                     0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_DCD_STATUS - Valid from version 002.000        */
/* ----------------------------------------------------------------------- */
/* DCD Signal is ON or OFF */
typedef uint8 AT_MODEM_DCD_STATUS_CONST;

#define AT_MODEM_DCD_OFF                         0x00
#define AT_MODEM_DCD_ON                          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_DSR_STATUS - Valid from version 002.000        */
/* ----------------------------------------------------------------------- */
/* DSR Signal is ON or OFF */
typedef uint8 AT_MODEM_DSR_STATUS_CONST;

#define AT_MODEM_DSR_OFF                         0x00
#define AT_MODEM_DSR_ON                          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_ECHO_STATUS - Valid from version 002.000       */
/* ----------------------------------------------------------------------- */
/* Echo is ON or OFF */
typedef uint8 AT_MODEM_ECHO_STATUS_CONST;

#define AT_MODEM_ECHO_OFF                        0x00
#define AT_MODEM_ECHO_ON                         0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_REDIRECT_RESULT_STATUS - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
/* AT_MODEM_REDIRECT_RESULT_STATUS tells whether the redirection is
   successful or not.
*/
typedef uint8 AT_MODEM_REDIRECT_RESULT_STATUS_CONST;

#define AT_MODEM_REDIRECT_RESULT_ERROR           0x00
#define AT_MODEM_REDIRECT_RESULT_OK              0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_DTE_RATE - Valid from version 002.000          */
/* ----------------------------------------------------------------------- */
/* DTE Rate */
typedef uint8 AT_MODEM_DTE_RATE_CONST;

#define AT_MODEM_CONST_DTE_RATE_AUTOBAUDING      0x00
#define AT_MODEM_CONST_DTE_RATE_300              0x01
#define AT_MODEM_CONST_DTE_RATE_600              0x02
#define AT_MODEM_CONST_DTE_RATE_1200             0x03
#define AT_MODEM_CONST_DTE_RATE_2400             0x04
#define AT_MODEM_CONST_DTE_RATE_4800             0x05
#define AT_MODEM_CONST_DTE_RATE_7200             0x06
#define AT_MODEM_CONST_DTE_RATE_9600             0x07
#define AT_MODEM_CONST_DTE_RATE_14400            0x08
#define AT_MODEM_CONST_DTE_RATE_19200            0x09
#define AT_MODEM_CONST_DTE_RATE_28800            0x0A
#define AT_MODEM_CONST_DTE_RATE_38400            0x0B
#define AT_MODEM_CONST_DTE_RATE_57600            0x0C
#define AT_MODEM_CONST_DTE_RATE_115200           0x0D
#define AT_MODEM_CONST_DTE_RATE_230400           0x0E
#define AT_MODEM_CONST_DTE_RATE_460800           0x0F
#define AT_MODEM_CONST_DTE_RATE_1M               0x10
#define AT_MODEM_CONST_DTE_RATE_2M               0x11
#define AT_MODEM_CONST_DTE_RATE_4M               0x12
#define AT_MODEM_CONST_DTE_RATE_UNDEFINED        0x13

/* ----------------------------------------------------------------------- */
/* Constant Table: AT_MODEM_DATA_PATH_ID_COMMANDS - Valid from version 003.002 */
/* ----------------------------------------------------------------------- */
/* Data Path ID Commands */
typedef uint8 AT_MODEM_DATA_PATH_ID_COMMANDS_CONST;

/* Set Data Path ID For Specific DTE ID */
#define AT_MODEM_DATA_PATH_ID_SET                0x00
/* Find Data Path ID of Specific DTE ID */
#define AT_MODEM_DATA_PATH_ID_QUERY              0x01

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define AT_MODEM_CONNECT_REQ                     0x00
#define AT_MODEM_CONNECT_RESP                    0x01
#define AT_MODEM_DISCONNECT_REQ                  0x02
#define AT_MODEM_DISCONNECT_RESP                 0x03
#define AT_MODEM_CMD_REQ                         0x04
#define AT_MODEM_CMD_RESP                        0x05
#define AT_MODEM_DATA_REDIRECT_IND               0x06
#define AT_MODEM_UNSOLICITED_DATA_IND            0x07
#define AT_MODEM_INTERMEDIATE_DATA_IND           0x08
#define AT_MODEM_SIGNAL_DETECTED_REQ             0x09
#define AT_MODEM_SIGNAL_DETECTED_RESP            0x0A
#define AT_MODEM_SIGNAL_IND                      0x0B
#define AT_MODEM_DATA_REDIRECT_RESULT_REQ        0x0C
#define AT_MODEM_DATA_REDIRECT_RESULT_RESP       0x0D
#define AT_MODEM_DATA_PATH_ID_REQ                0x0E
#define AT_MODEM_DATA_PATH_ID_RESP               0x0F

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define AT_MODEM_SB_DTE_PARAMS                   0x00
#define AT_MODEM_SB_FLOW_CTRL                    0x01
#define AT_MODEM_SB_ESCAPE_PARAMS                0x02
#define AT_MODEM_SB_AUTOBAUD                     0x03
#define AT_MODEM_SB_DTE_SIGNALS                  0x04
#define AT_MODEM_SB_ECHO_VALUE                   0x05
#define AT_MODEM_SB_SIGNAL_DETECTED              0x06

/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_DTE_PARAMS - Valid from version 002.000           */
/* ----------------------------------------------------------------------- */
/* DTE Params Subblock is used to send the values of the initial parity and
   other values during the initialization of the new session of DTE.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The value specifies the parity value.
       Values from the constant table AT_MODEM_PARITY_BIT
    */
    uint8   parity;
    uint8   data_bits;    /* The value of the data bits. */
    uint8   stop_bits;    /* The value of the stop bits. */
    /* DTE rate at which the data between DTE and DCE will flow. 
       Values from the constant table AT_MODEM_DTE_RATE
    */
    uint8   dte_rate;
    uint8   fill_byte[2];
    } AT_MODEM_SB_DTE_PARAMS_STR;

#define SIZE_AT_MODEM_SB_DTE_PARAMS_STR   sizeof(AT_MODEM_SB_DTE_PARAMS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_FLOW_CTRL - Valid from version 002.000            */
/* ----------------------------------------------------------------------- */
/* Flow Control Subblock is used to send the flow control values to the
   client.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* It signifies the flow control value for outward direction (DCE)
       towards DTE.
       Values from the constant table AT_MODEM_FLOW_CONTROL
    */
    uint8   flow_ctrl_outward_dce;
    /* It signifies the flow control value for inward direction (DTE) from
       DTE.
       Values from the constant table AT_MODEM_FLOW_CONTROL
    */
    uint8   flow_ctrl_inward_dte;
    /* The value specifies whether Extraction is allowed or not.
       Values from the constant table AT_MODEM_EXTRACT_STATUS
    */
    uint8   extract;
    uint8   fill_byte[3];
    } AT_MODEM_SB_FLOW_CTRL_STR;

#define SIZE_AT_MODEM_SB_FLOW_CTRL_STR   sizeof(AT_MODEM_SB_FLOW_CTRL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_ESCAPE_PARAMS - Valid from version 002.000        */
/* ----------------------------------------------------------------------- */
/* Escape Subblock is used to send the values of the escape charater and
   guard time needed at the time of escape detection.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* It specifies the character which is used for the detection of the
       escape sequence.
    */
    uint8   escape_char;
    /* The guard period upto which the timer would run for the escape
       detection. Time is given in 20 ms units
    */
    uint8   escape_guard_period;
    } AT_MODEM_SB_ESCAPE_PARAMS_STR;

#define SIZE_AT_MODEM_SB_ESCAPE_PARAMS_STR   \
        sizeof(AT_MODEM_SB_ESCAPE_PARAMS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_AUTOBAUD - Valid from version 002.000             */
/* ----------------------------------------------------------------------- */
/* Autobaud Subblock is used to send the whether autobaud is supported or
   not.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The value specifies whether the parity is ON or OFF.
       Values from the constant table AT_MODEM_PARITY_STATUS
    */
    uint8   parity;
    /* The value specifies whether the autobaud is ON or OFF.
       Values from the constant table AT_MODEM_AUTOBAUD_STATUS
    */
    uint8   autobaud;
    } AT_MODEM_SB_AUTOBAUD_STR;

#define SIZE_AT_MODEM_SB_AUTOBAUD_STR   sizeof(AT_MODEM_SB_AUTOBAUD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_DTE_SIGNALS - Valid from version 002.000          */
/* ----------------------------------------------------------------------- */
/* DTE Params Subblock is used to send the values of the DCD and DSR signals.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The value specifies whether the  DCD is ON/OFF.
       Values from the constant table AT_MODEM_DCD_STATUS
    */
    uint8   dcd_signal;
    /* The value specifies whether the DSR is ON/OFF.
       Values from the constant table AT_MODEM_DSR_STATUS
    */
    uint8   dsr_signal;
    } AT_MODEM_SB_DTE_SIGNALS_STR;

#define SIZE_AT_MODEM_SB_DTE_SIGNALS_STR   \
        sizeof(AT_MODEM_SB_DTE_SIGNALS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_ECHO_VALUE - Valid from version 002.000           */
/* ----------------------------------------------------------------------- */
/* Echo Subblock is used to send the whether echo is supported or not. */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The value specifies whether echo is ON/OFF.
       Values from the constant table AT_MODEM_ECHO_STATUS
    */
    uint8   echo_value;
    uint8   fill_byte;
    } AT_MODEM_SB_ECHO_VALUE_STR;

#define SIZE_AT_MODEM_SB_ECHO_VALUE_STR   sizeof(AT_MODEM_SB_ECHO_VALUE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: AT_MODEM_SB_SIGNAL_DETECTED - Valid from version 002.000      */
/* ----------------------------------------------------------------------- */
/* Signal detected sub block sends the signal which has been detected by the
   client.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Signal detected tells about the type of signal has been detected by
       the client.
       Values from the constant table AT_MODEM_TYPE_OF_SIGNAL_DETECTED
    */
    uint8   type_of_signal_detected;
    uint8   fill_byte;
    } AT_MODEM_SB_SIGNAL_DETECTED_STR;

#define SIZE_AT_MODEM_SB_SIGNAL_DETECTED_STR   \
        sizeof(AT_MODEM_SB_SIGNAL_DETECTED_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_CONNECT_REQ                                           */
/* ----------------------------------------------------------------------- */
/* This message is used to request AT Modem to start a new session for a
   particular DTE. Related Message: AT_MODEM_CONNECT_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    /* Requested DTE ID can take a value from 0-254. Requested DTE ID is used
       as initial Data Path ID in Data Call cases. For AT Modem DTE ID
       allocation used AT_MODEM_DTE_ID_UNDEFINED.
    */
    uint8   dte_id;
    uint8   fill_byte;
    } AT_MODEM_CONNECT_REQ_STR;

#define SIZE_AT_MODEM_CONNECT_REQ_STR   sizeof(AT_MODEM_CONNECT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_CONNECT_RESP                                          */
/* ----------------------------------------------------------------------- */
/* This message is used to send response from the AT Modem whether the
   starting of new session is successful or not. Related Message:
   AT_MODEM_CONNECT_REQ.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Result corresponds to whether the new session initiation is successful
       or not
       Values from the constant table AT_MODEM_RESULT_STATUS
    */
    uint8   result;
    } AT_MODEM_CONNECT_RESP_STR;

#define SIZE_AT_MODEM_CONNECT_RESP_STR   sizeof(AT_MODEM_CONNECT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DISCONNECT_REQ                                        */
/* ----------------------------------------------------------------------- */
/* This message is used to request AT Modem to disconnect a session for a
   particular DTE. Related Message: AT_MODEM_DISCONNECT_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   fill_byte;
    } AT_MODEM_DISCONNECT_REQ_STR;

#define SIZE_AT_MODEM_DISCONNECT_REQ_STR   \
        sizeof(AT_MODEM_DISCONNECT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DISCONNECT_RESP                                       */
/* ----------------------------------------------------------------------- */
/* This message is used to send response from the AT Modem whether
   disconnection of the session is successful or not. Related Message:
   AT_MODEM_DISCONNECT_REQ.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Result corresponds to whether the session is disconnected successfuly
       or not
       Values from the constant table AT_MODEM_RESULT_STATUS
    */
    uint8   result;
    } AT_MODEM_DISCONNECT_RESP_STR;

#define SIZE_AT_MODEM_DISCONNECT_RESP_STR   \
        sizeof(AT_MODEM_DISCONNECT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_CMD_REQ                                               */
/* ----------------------------------------------------------------------- */
/* This message is used to send an AT Command to the Modem AT Server. Related
   message: AT_MODEM_CMD_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   fill_byte;
    uint16  length;
    /* AT Command Line buffer contains the AT commands  from the DTE to be
       processed.
    */
    uint8   cmd_line_buffer;
    } AT_MODEM_CMD_REQ_STR;

#define SIZE_AT_MODEM_CMD_REQ_STR   (5*sizeof(uint8) + sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_CMD_RESP                                              */
/* ----------------------------------------------------------------------- */
/* This message is used to send the response of an AT Command processing to
   the particular DTE. Related message: AT_MODEM_CMD_REQ. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   fill_byte;
    uint16  length;
    /* AT Command response for the AT command line buffer received from the
       DTE.
    */
    uint8   cmd_line_buffer;
    } AT_MODEM_CMD_RESP_STR;

#define SIZE_AT_MODEM_CMD_RESP_STR   (5*sizeof(uint8) + sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_REDIRECT_IND - Obsolete from version 003.000     */
/* ----------------------------------------------------------------------- */
/* This indication is send by the AT Modem to the clients to indicate that
   the redirection is needed between different servers.
*/

#if !AT_MODEM_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Server ID is the id of the server in the modem environment */
    uint8   server_id;
    } AT_MODEM_DATA_REDIRECT_IND_STR;

#define SIZE_AT_MODEM_DATA_REDIRECT_IND_STR   \
        sizeof(AT_MODEM_DATA_REDIRECT_IND_STR)

#endif /* !AT_MODEM_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_REDIRECT_IND - Valid from version 003.000        */
/* ----------------------------------------------------------------------- */
/* This indication is send by the AT Modem to the clients to indicate that
   the redirection is needed between different servers.
*/

#if AT_MODEM_ISI_MIN_VERSION(3,0)

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   device_id;    /* Device ID tells which type of device */
    /* Server ID (Object ID) is the identification of the Server */
    uint16  server_id;
    uint8   fill_byte[2];
    } AT_MODEM_DATA_REDIRECT_IND_STR;

#define SIZE_AT_MODEM_DATA_REDIRECT_IND_STR   \
        sizeof(AT_MODEM_DATA_REDIRECT_IND_STR)

#endif /* AT_MODEM_ISI_MIN_VERSION(3,0) */


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_UNSOLICITED_DATA_IND                                  */
/* ----------------------------------------------------------------------- */
/* This indication message is used to send the unsolicited data to the client
   which needs to be displayed to particular DTE.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-255 */
    uint8   fill_byte;
    uint16  length;
    /* Unsolicited data for the DTE to be displayed. */
    uint8   unsolicited_data_buffer;
    } AT_MODEM_UNSOLICITED_DATA_IND_STR;

#define SIZE_AT_MODEM_UNSOLICITED_DATA_IND_STR   (5*sizeof(uint8) + \
        sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_INTERMEDIATE_DATA_IND - Valid from version 002.000    */
/* ----------------------------------------------------------------------- */
/* This indication message is used to send the intermediate data to the
   client which needs to be send to the particular DTE during the execution
   of the AT command line buffer.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   fill_byte;
    uint16  length;
    /* Intermediate data for the DTE to be displayed. */
    uint8   intermediate_data_buffer;
    } AT_MODEM_INTERMEDIATE_DATA_IND_STR;

#define SIZE_AT_MODEM_INTERMEDIATE_DATA_IND_STR   (5*sizeof(uint8) + \
        sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_SIGNAL_DETECTED_REQ - Valid from version 002.000      */
/* ----------------------------------------------------------------------- */
/* This message is used by the client to inform AT Modem Server that a signal
   is detected or the signal has set/reset. Also Client can send the signal
   information using this message like flow_ctrl values. Related Message:
   AT_MODEM_SIGNAL_DETECTED_RESP.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   no_of_sub_blocks;
    /* Atleast one of the subblock needs to be added (mandatory).
       Subblock list:
       AT_MODEM_SB_DTE_PARAMS
       AT_MODEM_SB_FLOW_CTRL
       AT_MODEM_SB_SIGNAL_DETECTED
    */
    uint8   sb[AT_MODEM_ANY_SIZE];
    } AT_MODEM_SIGNAL_DETECTED_REQ_STR;

#define SIZE_AT_MODEM_SIGNAL_DETECTED_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_SIGNAL_DETECTED_RESP - Valid from version 002.000     */
/* ----------------------------------------------------------------------- */
/* This message is used to send response to the client from the AT Modem
   Server whether the processing is successful or not. Related Message:
   AT_MODEM_SIGNAL_DETECTED_REQ.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Result corresponds to whether the processing is successful or not
       Values from the constant table AT_MODEM_RESULT_STATUS
    */
    uint8   result;
    } AT_MODEM_SIGNAL_DETECTED_RESP_STR;

#define SIZE_AT_MODEM_SIGNAL_DETECTED_RESP_STR   \
        sizeof(AT_MODEM_SIGNAL_DETECTED_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_SIGNAL_IND - Valid from version 002.000               */
/* ----------------------------------------------------------------------- */
/* This message is used to send indication to the client when any change in
   the signal value takes place during the execution of the AT command
   received from the client. Also if the value of the signal is changed
   during any other AT command processing.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   no_of_sub_blocks;
    /* Atleast one of the subblock needs to be added (mandatory).
       Subblock list:
       AT_MODEM_SB_AUTOBAUD
       AT_MODEM_SB_DTE_PARAMS
       AT_MODEM_SB_DTE_SIGNALS
       AT_MODEM_SB_ECHO_VALUE
       AT_MODEM_SB_ESCAPE_PARAMS
       AT_MODEM_SB_FLOW_CTRL
    */
    uint8   sb[AT_MODEM_ANY_SIZE];
    } AT_MODEM_SIGNAL_IND_STR;

#define SIZE_AT_MODEM_SIGNAL_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_REDIRECT_RESULT_REQ - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
/* This message is send to tell the AT Modem whether the redirection of the
   pipe was successful or not, for a particular DTE. Related Message:
   AT_MODEM_REDIRECT_RESULT_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Result corresponds to whether the processing of redirect indication is
       successfuly or not
       Values from the constant table AT_MODEM_REDIRECT_RESULT_STATUS
    */
    uint8   result;
    } AT_MODEM_DATA_REDIRECT_RESULT_REQ_STR;

#define SIZE_AT_MODEM_DATA_REDIRECT_RESULT_REQ_STR   \
        sizeof(AT_MODEM_DATA_REDIRECT_RESULT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_REDIRECT_RESULT_RESP - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */
/* This message is used to send response from the AT Modem whether the
   processing of the redirect result message is successful or not. Related
   Message: AT_MODEM_REDIRECT_RESULT_REQ.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Result corresponds to whether the ISI message
       AT_MODEM_DATA_REDIRECT_RESULT_REQ processing is successful or not
       Values from the constant table AT_MODEM_RESULT_STATUS
    */
    uint8   result;
    } AT_MODEM_DATA_REDIRECT_RESULT_RESP_STR;

#define SIZE_AT_MODEM_DATA_REDIRECT_RESULT_RESP_STR   \
        sizeof(AT_MODEM_DATA_REDIRECT_RESULT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_PATH_ID_REQ - Valid from version 003.002         */
/* ----------------------------------------------------------------------- */
/* This message is used to configure the Data Path when using Data Calls.
   Data Path ID will be set for particular DTE and should be set before
   AT_MODEM_DATA_REDIRECT_RESULT_REQ. Related Message:
   AT_MODEM_DATA_REDIRECT_RESULT_REQ and AT_MODEM_DATA_PATH_ID_RESP. 
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    uint8   data_path_id; /* Data Path ID can take a value from 0-255 */
    /* Command to be executed.
       Values from the constant table AT_MODEM_DATA_PATH_ID_COMMANDS
    */
    uint8   command;
    uint8   fill_byte[3];
    } AT_MODEM_DATA_PATH_ID_REQ_STR;

#define SIZE_AT_MODEM_DATA_PATH_ID_REQ_STR   \
        sizeof(AT_MODEM_DATA_PATH_ID_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: AT_MODEM_DATA_PATH_ID_RESP - Valid from version 003.002        */
/* ----------------------------------------------------------------------- */
/* This message is used to send response from the AT Modem whether the
   command is successful or not. Related Message: AT_MODEM_DATA_PATH_ID_REQ.
*/

typedef struct
    {
    uint8   tid;
    uint8   message_id;
    uint8   dte_id;       /* DTE ID can take a value from 0-254 */
    /* Query result or set Data Path ID, can take a value from 0-255 */
    uint8   data_path_id;
    /* Result corresponds to whether the ISI message
       AT_MODEM_DATA_PATH_ID_REQ processing is successfull or not
       Values from the constant table AT_MODEM_RESULT_STATUS
    */
    uint8   result;
    uint8   fill_byte[3];
    } AT_MODEM_DATA_PATH_ID_RESP_STR;

#define SIZE_AT_MODEM_DATA_PATH_ID_RESP_STR   \
        sizeof(AT_MODEM_DATA_PATH_ID_RESP_STR)




#endif /* _AT_WM_SRV_ISI_H */
