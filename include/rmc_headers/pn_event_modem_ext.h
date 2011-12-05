/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 001.002 
Specifications : MSW-03.26 ISI General Information, version 4.0
                 supports also versions 0.x, 2.0, 3.0

Object (this information is substituted by Synergy/CM):
    %name:           pn_event_modem_ext.h %
    %instance:       sa1mexe_1 %
    %version:        001.002 %
    %date_modified:  Fri Mar  5 18:36:47 2010 %

Copyright (c) Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

-------------------------------------------------------------------------------
*/

#ifndef PN_EVENT_MODEM_EXT_HFILE
#define PN_EVENT_MODEM_EXT_HFILE

#define PNS_SUBSCRIBED_RESOURCES_EXTEND_IND      0x12
#define PNS_SUBSCRIBED_MESSAGES_IND              0x20

#define PNS_SB_SUBSCRIBED_MESSAGES_LIST          0x00

/* Subblock: PNS_SB_SUBSCRIBED_MESSAGES_LIST
*/

typedef struct
    {
    uint8_t   sb_id;                      /* PNS_SB_SUBSCRIBED_MESSAGES_LIST     */
    uint8_t   sb_length;
    uint8_t   message_count;
    uint8_t   filler;
    /* PhoNet resource ID's of subscribed ISI indications
       xxxxxxxx------------------------  Filler (0x00)
       --------xxxxxxxx----------------  Filler (0x00)
       ----------------xxxxxxxx--------  Filler (0x00)
       ------------------------xxxxxxxx  resource
    */
    uint32_t  resource;
    uint8_t   message_list[1];
    } PNS_SB_SUBSCRIBED_MESSAGES_LIST_STR;

/* Message: PNS_SUBSCRIBED_RESOURCES_EXTEND_IND
   
   This message specifies the resources from which indications should be sent
   to the message sender's object. Subscriptions can be cancelled by sending an
   empty list.
*/

typedef struct
    {
    uint8_t       media;                  /* Media                               */
    uint8_t       receiver_dev;           /* Receiver's Device Address           */
    uint8_t       sender_dev;             /* Sender's Device Address             */
    uint8_t       function;               /* Resource (PN_COMMGR)                */
    uint16_t      length;                 /* Length (MSB, LSB)                   */
    uint8_t       receiver_obj;           /* Receiver's Object Address           */
    uint8_t       sender_obj;             /* Sender's Object Address             */
    uint8_t       transaction_id;
    uint8_t       message_id;             /* PNS_SUBSCRIBED_RESOURCES_EXTEND_IND */
    uint8_t       resource_count;
    uint8_t       filler;
    /* PhoNet resource ID's of subscribed ISI indications
       xxxxxxxx------------------------  Filler (0x00)
       --------xxxxxxxx----------------  Filler (0x00)
       ----------------xxxxxxxx--------  Filler (0x00)
       ------------------------xxxxxxxx  resource
    */
    uint32_t      resource_list[1];
    } PNS_SUBSCRIBED_RESOURCES_EXTEND_MSG_STR;

/* Message: PNS_SUBSCRIBED_MESSAGES_IND

   This message contains the sub blocks which contains a list of the indication messages 
   of particular resources for which indications should be sent to the message sender's object. 
   Subscriptions can be cancelled by sending an empty list on a sub block.
*/

typedef struct
    {
    uint8_t       media;                  /* Media                               */
    uint8_t       receiver_dev;           /* Receiver's Device Address           */
    uint8_t       sender_dev;             /* Sender's Device Address             */
    uint8_t       function;               /* Resource (PN_COMMGR)                */
    uint16_t      length;                 /* Length (MSB, LSB)                   */
    uint8_t       receiver_obj;           /* Receiver's Object Address           */
    uint8_t       sender_obj;             /* Sender's Object Address             */
    uint8_t       transaction_id;
    uint8_t       message_id;             /* PNS_SUBSCRIBED_MESSAGES_IND         */
    uint8_t       sub_block_count;
    uint8_t       filler;
    /* Subblock list:
       PNS_SB_SUBSCRIBED_MESSAGES_LIST
    */
    uint8_t       sub_blocks[1];
    } PNS_SUBSCRIBED_MESSAGES_MSG_STR;

#endif /* PN_EVENT_MODEM_EXT_HFILE */

/* End of File */
