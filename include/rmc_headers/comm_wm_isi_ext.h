/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 000.031
Specifications : MSW-<#>-03.28: ISI common specification
                 

Object (this information is substituted by Synergy/CM):
    %name:           isi_conf.h%
    %instance:       sa1mexe#1%
    %version:        2%
    %date_modified:  Wed Sep 17 10:54:38 2009%
    
Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

------------------------------------------------------------------------------
*/

#ifndef _COMM_WM_ISI_H
#define _COMM_WM_ISI_H

#include "isi_conf.h"

#ifndef COMM_ISI_VERSION
#define COMM_ISI_VERSION
#define COMM_ISI_VERSION_Z   0
#define COMM_ISI_VERSION_Y  31
#endif

#define COMM_ISI_MIN_VERSION(z,y) \
 ((COMM_ISI_VERSION_Z == (z) && COMM_ISI_VERSION_Y >= (y)) || \
  (COMM_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* Range from 0xF0(240) to 0xFF(255) is reserved for common purposes and
   should therefore not be used for server specific ISI messages
*/
#define COMMON_MESSAGE                           0xF0

/* ----------------------------------------------------------------------- */
/* Constant Table: COMM_ISA_ENTITY_NOT_REACHABLE_STATUS - Valid from version 000.019 */
/* ----------------------------------------------------------------------- */
/* ISA Entity not Reachable States */
typedef uint8 COMM_ISA_ENTITY_NOT_REACHABLE_STATUS_CONST;

#define COMM_ISA_ENTITY_NOT_AVAILABLE            0x00
#define COMM_ISA_ENTITY_NOT_EXISTING             0x01

/* ----------------------------------------------------------------------- */
/* Message ID's and Submessage ID's                                        */
/* ----------------------------------------------------------------------- */


/* Submessage ID's for COMMON_MESSAGE */
#define COMM_SERVICE_NOT_IDENTIFIED_RESP         0x01
#define COMM_ISI_VERSION_GET_REQ                 0x12
#define COMM_ISI_VERSION_GET_RESP                0x13
#define COMM_ISA_ENTITY_NOT_REACHABLE_RESP       0x14

/* ----------------------------------------------------------------------- */
/* Message: COMM_ISA_ENTITY_NOT_REACHABLE_RESP - Valid from version 000.019 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   transactionID;
    uint8   messageID;
    uint8   submessageID;
    uint8   not_delivered_messageID;
    /* Values from the constant table COMM_ISA_ENTITY_NOT_REACHABLE_STATUS */
    uint8   status;
    uint8   filler1;
    uint8   filler2;
    uint8   filler3;
    } COMM_ISA_ENTITY_NOT_REACHABLE_RESP_STR;

#define SIZE_COMM_ISA_ENTITY_NOT_REACHABLE_RESP_STR   \
        sizeof(COMM_ISA_ENTITY_NOT_REACHABLE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: COMM_SERVICE_NOT_IDENTIFIED_RESP                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   transactionID;
    uint8   messageID;
    uint8   submessageID;
    uint8   not_served_messageID;
    uint8   filler;       /* Filler for future use, should always be zero. */
    uint8   not_served_submessageID;
    uint8   filler1;
    uint8   filler2;
    } COMM_SERVICE_NOT_IDENTIFIED_RESP_STR;

#define SIZE_COMM_SERVICE_NOT_IDENTIFIED_RESP_STR   \
        sizeof(COMM_SERVICE_NOT_IDENTIFIED_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: COMM_ISI_VERSION_GET_REQ                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   transaction_ID;
    uint8   messageID;
    uint8   submessageID;
    uint8   filler;
    } COMM_ISI_VERSION_GET_REQ_STR;

#define SIZE_COMM_ISI_VERSION_GET_REQ_STR   \
        sizeof(COMM_ISI_VERSION_GET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: COMM_ISI_VERSION_GET_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   transaction_ID;
    uint8   messageID;
    uint8   submessageID;
    uint8   isi_version_zzz;
    uint8   isi_version_yyy;
    uint8   filler1;
    uint8   filler2;
    uint8   filler3;
    } COMM_ISI_VERSION_GET_RESP_STR;

#define SIZE_COMM_ISI_VERSION_GET_RESP_STR   \
        sizeof(COMM_ISI_VERSION_GET_RESP_STR)




#endif /* _COMM_WM_ISI_H */
