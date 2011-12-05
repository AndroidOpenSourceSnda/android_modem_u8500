/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 000.002 
Specifications : MSW-<#>-03.31: NVD server message interface specification, version 000.002
                 

Object (this information is substituted by Synergy/CM):
    %name:           nvd_msg_ext.h %
    %instance:       sa1mexe_1 %
    %version:        000.002 %
    %date_modified:  Wed Sep  9 19:22:32 2009 %
    
Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

------------------------------------------------------------------------------
*/


#ifndef _NVD_MSG_EXT_H
#define _NVD_MSG_EXT_H


/* ----------------------------------------------------------------------- */
/* Constant Table: NVD_STATUS                                              */
/* ----------------------------------------------------------------------- */
typedef uint8 NVD_STATUS_CONST;

#define NVD_STATUS_OK                            0x00
#define NVD_STATUS_FAIL                          0x01

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define NVD_SET_DEFAULT_REQ                      0x01
#define NVD_SET_DEFAULT_RESP                     0x02

/* ----------------------------------------------------------------------- */
/* Message: NVD_SET_DEFAULT_REQ                                            */
/* ----------------------------------------------------------------------- */
/* Some modem data stored to non-volatile memory can be changed at runtime.
   This message allows the host to restore this data to default values
   defined at compile time.
*/

typedef struct
    {
    uint8_t   transactionID;
    uint8_t   messageID;
    uint16_t  fill;         /* Padding for alignment */
    } NVD_SET_DEFAULT_REQ_STR;

#define SIZE_NVD_SET_DEFAULT_REQ_STR   sizeof(NVD_SET_DEFAULT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: NVD_SET_DEFAULT_RESP                                           */
/* ----------------------------------------------------------------------- */
/* The NVD server responds with the NVD_SET_DEFAULT_RESP message and status
   NVD_STATUS_OK when all non-volatile data is set to default values
   successfully.
   The NVD_STATUS_FAIL is returned if one or more NVD data is unsuccesfully
   restored to the default values. 
*/

typedef struct
    {
    uint8_t   transactionID;
    uint8_t   messageID;
    uint8_t   status;       /* Values from the constant table NVD_STATUS */
    uint8_t   fillData;     /* Padding for alignment */
    } NVD_SET_DEFAULT_RESP_STR;

#define SIZE_NVD_SET_DEFAULT_RESP_STR   sizeof(NVD_SET_DEFAULT_RESP_STR)




#endif /* _NVD_MSG_EXT_H */
