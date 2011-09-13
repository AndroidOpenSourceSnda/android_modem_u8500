/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 002.000
Specifications : MSW-<#>-03.08 Modem Control Entity Feature and Protocol Description, version 2.0

                 MSW-<#>-03.08 Modem Control Entity (MCE) Public Message Interface Specification, version 002.000

Object (this information is substituted by Synergy/CM):
    %name:           mce_isi_modem_ext.h %
    %instance:       sa1mexe_1 %
    %version:        002.000 %
    %date_modified:  Fri Jan 29 13:36:17 2010 %

Copyright (c) 2010 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

-------------------------------------------------------------------------------
*/

#ifndef _MCE_ISI_MODEM_EXT_H
#define _MCE_ISI_MODEM_EXT_H

#ifndef MCE_ISI_VERSION
#define MCE_ISI_VERSION
#define MCE_ISI_VERSION_Z   2
#define MCE_ISI_VERSION_Y   0
#endif

#define MCE_ISI_MIN_VERSION(z,y) \
 ((MCE_ISI_VERSION_Z == (z) && MCE_ISI_VERSION_Y >= (y)) || \
  (MCE_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constant Table: MCE_STATUS_INFO                                         */
/* ----------------------------------------------------------------------- */
typedef uint8_t MCE_STATUS_INFO_CONST;

#define MCE_OK                                   0x00  /* - */
#define MCE_FAIL                                 0x01  /* - */
#define MCE_ALREADY_ACTIVE                       0x06  /* - */
#define MCE_TRANSITION_ONGOING                   0x16  /* - */

/* ----------------------------------------------------------------------- */
/* Constant Table: MCE_MODEM_STATE                                         */
/* ----------------------------------------------------------------------- */
typedef uint8_t MCE_MODEM_STATE_CONST;

#define MCE_NORMAL                               0x00  /* - */
#define MCE_LOCAL                                0x01  /* - */
#define MCE_SW_RESET                             0x80  /* - */
#define MCE_POWER_OFF                            0x81  /* - */

/* ----------------------------------------------------------------------- */
/* Constant Table: MCE_ACTION                                              */
/* ----------------------------------------------------------------------- */
typedef uint8_t MCE_ACTION_CONST;

#define MCE_START                                0x03  /* - */
#define MCE_READY                                0x04  /* - */

/* ----------------------------------------------------------------------- */
/* Constant Table: MCE_RF_STATE                                            */
/* ----------------------------------------------------------------------- */
typedef uint8_t MCE_RF_STATE_CONST;

#define MCE_RF_OFF                               0x00  /* - */
#define MCE_RF_ON                                0x01  /* - */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define MCE_MODEM_STATE_IND                      0x00
#define MCE_MODEM_STATE_QUERY_REQ                0x01
#define MCE_MODEM_STATE_QUERY_RESP               0x02
#define MCE_RF_STATE_REQ                         0x03
#define MCE_RF_STATE_RESP                        0x04
#define MCE_RF_STATE_IND                         0x05
#define MCE_RF_STATE_QUERY_REQ                   0x06
#define MCE_RF_STATE_QUERY_RESP                  0x07
#define MCE_POWER_OFF_REQ                        0x08
#define MCE_POWER_OFF_RESP                       0x09
#define MCE_RESET_REQ                            0x0A
#define MCE_RESET_RESP                           0x0B

/* ----------------------------------------------------------------------- */
/* Message: MCE_MODEM_STATE_IND                                            */
/* ----------------------------------------------------------------------- */
/* The MCE_MODEM_STATE_IND message is sent twice each time the modem state
   changes. In the first message, the action parameter is MCE_START, which
   indicates that the state transition has started. In the second message,
   the action parameter is MCE_READY, which indicates that state transition
   has been completed.
   
   This message is sent in three scenarios:
   - To indicate that the modem has started (state = MCE_NORMAL or
     MCE_LOCAL). The host controls the state in which the modem is started.
     The control system is specified in the MCE Feature and Protocol
     Description document.
   - To indicate that the modem is going to start the software reset sequence
     (state = MCE_SW_RESET)
   - To indicate that the modem is going into power-off state (state =
     MCE_POWER_OFF)
   
   The states that are currently possible are:
   - MCE_NORMAL: In this state, the modem operates normally and the protocol
     layers are active. When the modem has started and goes into this state,
     RF state is off and RF can be switched on by using the MCE_RF_STATE_REQ
     message.
   - MCE_LOCAL: This state is for testing purposes. Protocol layers are
     inactive and RF state is always on. 
   - MCE_SW_RESET: In this state, the modem sets RF state to MCE_RF_OFF,
     shuts down all modem services, and starts the software reset sequence.
     Note that when the modem is performing a state transition to
     MCE_SW_RESET state, the host is not allowed to shut down services that
     are required by the modem until the modem sends the MCE_MODEM_STATE_IND
     indication message with parameters: state = MCE_SW_RESET, action =
     MCE_READY. 
   - MCE_POWER_OFF: In this state, the modem sets RF state to MCE_RF_OFF,
     shuts down all modem services, and waits for the host to power off the
     modem. Note that when the modem is performing a state transition to
     MCE_POWER_OFF state, the host is not allowed to shut down services that
     are required by the modem until the modem sends the MCE_MODEM_STATE_IND
     indication message with parameters: state = MCE_POWER_OFF, action =
     MCE_READY.
   
   For more information, see the MCE Feature and Protocol Description
   document. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   state;       /* Values from the constant table MCE_MODEM_STATE */
    /* A subset of values from the constant table MCE_ACTION */
    uint8_t   action;
    } MCE_MODEM_STATE_IND_STR;

#define SIZE_MCE_MODEM_STATE_IND_STR   sizeof(MCE_MODEM_STATE_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_MODEM_STATE_QUERY_REQ                                      */
/* ----------------------------------------------------------------------- */
/* This message can be used to query the modem state.  */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1;
    uint8_t   fill2;
    } MCE_MODEM_STATE_QUERY_REQ_STR;

#define SIZE_MCE_MODEM_STATE_QUERY_REQ_STR   \
        sizeof(MCE_MODEM_STATE_QUERY_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_MODEM_STATE_QUERY_RESP                                     */
/* ----------------------------------------------------------------------- */
/* This message shows the modem state. If the current state and the target
   state are different, a modem state transition is ongoing.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   current;     /* Values from the constant table MCE_MODEM_STATE */
    uint8_t   target;      /* Values from the constant table MCE_MODEM_STATE */
    } MCE_MODEM_STATE_QUERY_RESP_STR;

#define SIZE_MCE_MODEM_STATE_QUERY_RESP_STR   \
        sizeof(MCE_MODEM_STATE_QUERY_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RF_STATE_IND                                               */
/* ----------------------------------------------------------------------- */
/* This message is sent twice every time an RF state transition occurs. In
   the first message, the action parameter is MCE_START, which indicates that
   the RF state transition has started. In the second message, the action
   parameter is MCE_READY, which indicates that the RF state transition is
   completed. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   target;       /* Values from the constant table MCE_RF_STATE */
    /* A subset of values from the constant table MCE_ACTION */
    uint8_t   action;
    } MCE_RF_STATE_IND_STR;

#define SIZE_MCE_RF_STATE_IND_STR   sizeof(MCE_RF_STATE_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RF_STATE_REQ                                               */
/* ----------------------------------------------------------------------- */
/* This message is used to request an RF state transition. The RF state can
   only be changed when the modem state is MCE_NORMAL.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   action;       /* Values from the constant table MCE_RF_STATE */
    uint8_t   fill1;
    } MCE_RF_STATE_REQ_STR;

#define SIZE_MCE_RF_STATE_REQ_STR   sizeof(MCE_RF_STATE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RF_STATE_RESP                                              */
/* ----------------------------------------------------------------------- */
/* Status is one of the following:
   - MCE_OK: The request is accepted. Note: This does not mean that the
     transition has been completed. The MCE indicates the status of the
     transition using the MCE_RF_STATE_IND message.
   - MCE_FAIL: The request failed. This happens, for example, if a request is
     received when the modem state is not MCE_NORMAL. 
   - MCE_ALREADY_ACTIVE: The request failed because the requested RF state is
     the same as the current RF state. 
   - MCE_TRANSITION_ONGOING: The request failed because the request was
     received during an ongoing RF state or modem state transition. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MCE_STATUS_INFO */
    uint8_t   status;
    uint8_t   fill1;
    } MCE_RF_STATE_RESP_STR;

#define SIZE_MCE_RF_STATE_RESP_STR   sizeof(MCE_RF_STATE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RF_STATE_QUERY_REQ                                         */
/* ----------------------------------------------------------------------- */
/* This message can be used to query RF state.  */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } MCE_RF_STATE_QUERY_REQ_STR;

#define SIZE_MCE_RF_STATE_QUERY_REQ_STR   sizeof(MCE_RF_STATE_QUERY_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RF_STATE_QUERY_RESP                                        */
/* ----------------------------------------------------------------------- */
/* This message shows the RF state. If the current state and the target state
   are different, an RF state transition is ongoing. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   current;      /* Values from the constant table MCE_RF_STATE */
    uint8_t   target;       /* Values from the constant table MCE_RF_STATE */
    } MCE_RF_STATE_QUERY_RESP_STR;

#define SIZE_MCE_RF_STATE_QUERY_RESP_STR   \
        sizeof(MCE_RF_STATE_QUERY_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_POWER_OFF_REQ                                              */
/* ----------------------------------------------------------------------- */
/* This message can be used to request a modem state transition to
   MCE_POWER_OFF state. For more information, see MCE_MODEM_STATE_IND
   message. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } MCE_POWER_OFF_REQ_STR;

#define SIZE_MCE_POWER_OFF_REQ_STR   sizeof(MCE_POWER_OFF_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_POWER_OFF_RESP                                             */
/* ----------------------------------------------------------------------- */
/* This message confirms that MCE_POWER_OFF_REQ message has been received.
   Note: This does not mean that the state transition has been completed. The
   MCE indicates the status of the transition using the MCE_MODEM_STATE_IND
   message.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MCE_STATUS_INFO */
    uint8_t   status;
    uint8_t   fill1;
    } MCE_POWER_OFF_RESP_STR;

#define SIZE_MCE_POWER_OFF_RESP_STR   sizeof(MCE_POWER_OFF_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RESET_REQ                                                  */
/* ----------------------------------------------------------------------- */
/* This message can be used to request a modem state transition to
   MCE_SW_RESET state. For more information, see MCE_MODEM_STATE_IND message.
   
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   fill1[2];
    } MCE_RESET_REQ_STR;

#define SIZE_MCE_RESET_REQ_STR   sizeof(MCE_RESET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MCE_RESET_RESP                                                 */
/* ----------------------------------------------------------------------- */
/* This message confirms that the MCE_RESET_REQ message has been received.
   Note: This does not mean that the state transition has been completed. The
   MCE indicates the status of the transition using the MCE_MODEM_STATE_IND
   message.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* A subset of values from the constant table MCE_STATUS_INFO */
    uint8_t   status;
    uint8_t   fill1;
    } MCE_RESET_RESP_STR;

#define SIZE_MCE_RESET_RESP_STR   sizeof(MCE_RESET_RESP_STR)




#endif /* _MCE_ISI_MODEM_EXT_H */
