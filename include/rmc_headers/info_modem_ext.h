/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 001.007
Specifications : MSW-<#>-03.24: Info server message interface specification,
                 version 001.007
                 supports also versions 001.000, 001.004, 001.005, 001.006
                 

Object (this information is substituted by Synergy/CM):
    %name:           info_modem_ext.h %
    %instance:       sa1mexe_3 %
    %version:        7.1.1 %
    %date_modified:  Mon Dec 13 15:17:25 2010 %
    
Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

------------------------------------------------------------------------------
*/

#ifndef _INFO_MODEM_EXT_H
#define _INFO_MODEM_EXT_H


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* constant for variable-length definitions */
#define INFO_ANY_SIZE                            1

/* ----------------------------------------------------------------------- */
/* Constant Table: M_INFO_GENERAL_SYM                                      */
/* ----------------------------------------------------------------------- */
typedef uint8_t M_INFO_GENERAL_SYM_CONST;

#define M_INFO_OK                                0x00  /* - */
#define M_INFO_FAIL                              0x01  /* - */
#define M_INFO_NOT_SUPPORTED                     0x02  /* - */

/* ----------------------------------------------------------------------- */
/* Constant Table: M_INFO_BATCH_TYPE                                       */
/* ----------------------------------------------------------------------- */
typedef uint8_t M_INFO_BATCH_TYPE_CONST;

/* Reads the PP features that are specified in the M_INFO_SB_PP_DATA
   sub-block
*/
#define M_INFO_PP_FEATURE                        0x00
/* Reads all PP features */
#define M_INFO_PP_ALL_FEATURES                   0x01
/* Returns the PP feature sources that are specified in the M_INFO_SB_PP_DATA
   sub-block
*/
#define M_INFO_PP_SOURCE                         0x02
/* Returns all PP feature sources */
#define M_INFO_PP_ALL_SOURCES                    0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: M_INFO_PP_SOURCE                                        */
/* ----------------------------------------------------------------------- */
typedef uint8_t M_INFO_PP_SOURCE_CONST;

/* Compile time default */
#define M_INFO_PP_SOURCE_DEFAULT                 0x00
/* Stored in PP value file */
#define M_INFO_PP_SOURCE_STORAGE                 0x01
/* Secure storage */
#define M_INFO_PP_SOURCE_SECURE                  0x02

/* ----------------------------------------------------------------------- */
/* Bitmask Table: M_INFO_VERSION_TARGETS                                   */
/* ----------------------------------------------------------------------- */
typedef uint32_t M_INFO_VERSION_TARGETS_CONST;

/* Modem software version string */
#define M_INFO_MODEMSW                           0x00000001  /* -------------------------------1 */
/* Dynamic Object version */
#define M_INFO_DO                                0x00000002  /* ------------------------------1- */
/* RFIC version */
#define M_INFO_RFIC                              0x00100000  /* -----------1-------------------- */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define M_INFO_VERSION_READ_REQ                  0x00
#define M_INFO_VERSION_READ_RESP                 0x01
#define M_INFO_PP_DATA_READ_REQ                  0x02
#define M_INFO_PP_DATA_READ_RESP                 0x03
#define M_INFO_PP_DATA_WRITE_REQ                 0x04
#define M_INFO_PP_DATA_WRITE_RESP                0x05
#define M_INFO_PP_DEFAULTS_RESTORE_REQ           0x06
#define M_INFO_PP_DEFAULTS_RESTORE_RESP          0x07

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define M_INFO_SB_MODEMSW_VERSION                0x00
#define M_INFO_SB_DO_NUM_VERSION                 0x02
#define M_INFO_SB_DO_STR_VERSION                 0x03
#define M_INFO_SB_PP_DATA                        0x01
#define M_INFO_SB_PP_SOURCE                      0x04
#define M_INFO_SB_RFIC_VERSION                   0x84

/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_MODEMSW_VERSION                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   sub_block_len;
    uint8_t   filler;       /* 0 */
    uint8_t   str_len;
    uint8_t   mcusw_versn_c8[INFO_ANY_SIZE];
    /* 0 */
    } M_INFO_SB_MODEMSW_VERSION_t;


/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_DO_NUM_VERSION                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   sub_block_len;
    uint8_t   filler[2];
    uint32_t  do_num_ver;
    } M_INFO_SB_DO_NUM_VERSION_t;


/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_DO_STR_VERSION                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   sub_block_len;
    uint8_t   filler;       /* 0 */
    uint8_t   str_len;
    uint8_t   do_str_ver[INFO_ANY_SIZE];
    /* 0 */
    } M_INFO_SB_DO_STR_VERSION_t;


/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_RFIC_VERSION                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   sub_block_len;
    uint8_t   filler;
    uint8_t   str_len;
    uint8_t   rfic_ver[INFO_ANY_SIZE];
    } M_INFO_SB_RFIC_VERSION_t;


/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_PP_DATA                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   filler;
    uint16_t  sub_block_len;
    uint8_t   filler2[2];
    uint16_t  pp_fea_cnt;
    /* xxxxxxxxxxxxxxxx----------------  PP Feature Number
       ----------------xxxxxxxxxxxxxxxx  PP Feature Value
    */
    uint32_t  pp_feaval[INFO_ANY_SIZE];
    } M_INFO_SB_PP_DATA_t;


/* ----------------------------------------------------------------------- */
/* Subblock: M_INFO_SB_PP_SOURCE                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   sub_block_id;
    uint8_t   filler;
    uint16_t  sub_block_len;
    uint8_t   filler2[2];
    uint16_t  pp_fea_cnt;
    /* xxxxxxxxxxxxxxxx----------------  PP Feature Number
       ----------------xxxxxxxxxxxxxxxx  PP Feature Source
    */
    uint32_t  pp_feasrc[INFO_ANY_SIZE];
    } M_INFO_SB_PP_SOURCE_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DEFAULTS_RESTORE_REQ                                 */
/* ----------------------------------------------------------------------- */
/* This message is used for restoring the values of all PP flags to their
   default values set at compile-time.
   The M_INFO_PP_DEFAULTS_RESTORE_RESP message is returned with the status
   field set to either M_INFO_OK or M_INFO_FAIL, depending on the outcome of
   the request.
   The effect of this message is that all changes made previously to the PP
   flag values using M_INFO_PP_DATA_WRITE_REQ are undone. That is, upon
   receiving the next M_INFO_PP_DATA_READ_REQ message the modem info server
   will return default, hard-coded values for any of the PP flags requested.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    } M_INFO_PP_DEFAULTS_RESTORE_REQ_t;

#define SIZEOF_M_INFO_PP_DEFAULTS_RESTORE_REQ   \
        sizeof(M_INFO_PP_DEFAULTS_RESTORE_REQ_t)


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DEFAULTS_RESTORE_RESP                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* The following are the possible statuses and causes of the responses:
       
       
       - ***M_INFO_OK***
       Cause: The request message has been handled successfully.
       Result: The values of all PP flags have been restored to the default
       ones.
       
       
       - ***M_INFO_FAIL***
       Cause: There was an error when processing the request message.
       Result: The values of all PP flags remain unchanged.
       A subset of values from the constant table M_INFO_GENERAL_SYM
    */
    uint8_t   status;
    } M_INFO_PP_DEFAULTS_RESTORE_RESP_t;

#define SIZEOF_M_INFO_PP_DEFAULTS_RESTORE_RESP   \
        sizeof(M_INFO_PP_DEFAULTS_RESTORE_RESP_t)


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DATA_READ_REQ                                        */
/* ----------------------------------------------------------------------- */
/* This message reads the values of the requested product profile (PP) flags.
   The flags that should be read can be specified in the M_INFO_SB_PP_DATA
   sub-block.With PP Batch Reading values M_INFO_PP_SOURCE
   or M_INFO_PP_ALL_SOURCES, this request reads the effective sources of PP
   values. The source in response message can be one of constants from table
   M_INFO_PP_SOURCE.
   The M_INFO_PP_DATA_READ_RESP message is returned with the status field set
   to either M_INFO_OK, M_INFO_FAIL or M_INFO_NOT_SUPPORTED, depending on the
   outcome of the request.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   filler;    /* Values from the constant table M_INFO_BATCH_TYPE */
    uint8_t   sub_block_count;
    /* Subblock list:
       M_INFO_SB_PP_DATA
    */
    uint8_t   sub_block[INFO_ANY_SIZE];
    } M_INFO_PP_DATA_READ_REQ_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DATA_READ_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* The following are the possible statuses, causes and included
       sub-blocks of the responses:
       
       
       - ***M_INFO_OK***
       Cause: The request message has been handled successfully.
       Sub-blocks: All requested features are included.
       
       
       - ***M_INFO_FAIL***
       Cause: Something other than an undefined PP feature caused the
       unsuccessful read operation.
       Sub-blocks: None.
       
       
       - ***M_INFO_NOT_SUPPORTED***
       Cause: At least one of the PP features requested is not defined.
       Sub-blocks: None.
       A subset of values from the constant table M_INFO_GENERAL_SYM
    */
    uint8_t   status;
    uint8_t   sub_block_count;
    /* Subblock list:
       M_INFO_SB_PP_DATA
       M_INFO_SB_PP_SOURCE
    */
    uint8_t   sub_block[INFO_ANY_SIZE];
    } M_INFO_PP_DATA_READ_RESP_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DATA_WRITE_REQ                                       */
/* ----------------------------------------------------------------------- */
/* This message is used to write a new value of a PP flag. The new value is
   stored to the non-volatile memory. The flags that should be written can be
   specified in the M_INFO_SB_PP_DATA sub-block.
   The M_INFO_PP_DATA_WRITE_RESP message is returned with the status field
   set to either M_INFO_OK, M_INFO_FAIL or M_INFO_NOT_SUPPORTED, depending on
   the outcome of the write request.
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   filler;
    uint8_t   sub_block_count;
    /* Subblock list:
       M_INFO_SB_PP_DATA
    */
    uint8_t   sub_block[INFO_ANY_SIZE];
    } M_INFO_PP_DATA_WRITE_REQ_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_PP_DATA_WRITE_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   filler;
    /* The following are the possible statuses and causes of the responses:
       
       
       - ***M_INFO_OK***
       Cause: The request message has been handled successfully.
       Result: All requested PP values have been changed in NVM.
       
       
       - ***M_INFO_FAIL***
       Cause: Something other than an undefined PP feature caused the
       unsuccessful write operation.
       Result: None of the requested PP values has been changed in NVM.
       
       
       - ***M_INFO_NOT_SUPPORTED***
       Cause: At least one of the PP features requested is not defined.
       Result: None of the requested PP values has been changed in NVM.
       A subset of values from the constant table M_INFO_GENERAL_SYM
    */
    uint8_t   status;
    } M_INFO_PP_DATA_WRITE_RESP_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_VERSION_READ_REQ                                        */
/* ----------------------------------------------------------------------- */
/* This message reads the version information of different parts of the
   software in the device, for example the modem software version. The
   version target M_INFO_DO requires name of a Dynamic Object, which version
   information will be queried. The Dynamic Object can contain any number of
   version entries and all of them are returned in the response, each in
   their own sub-block. DO Version entry is either numeric or string type. 
*/

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    uint8_t   filler[2];
    /* Values from the bitmask table M_INFO_VERSION_TARGETS */
    uint32_t  target;
    /* Name of the dynamic object in version query. This field is used with
       M_INFO_DO target.
    */
    uint8_t   do_name[INFO_ANY_SIZE];
    } M_INFO_VERSION_READ_REQ_t;


/* ----------------------------------------------------------------------- */
/* Message: M_INFO_VERSION_READ_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t   trans_id;
    uint8_t   message_id;
    /* The following are the possible statuses, causes and included
       sub-blocks of the responses:
       
       
       - ***M_INFO_OK***
       Cause: The request message is sent successfully.
       Sub-blocks: All successfully read version sub-blocks are included.
       
       
       - ***M_INFO_FAIL***
       Cause: The target field in the request message is zero.
       Sub-blocks: None
       
       Cause: At least one of the version queries, that was requested in the
       target field fails.
       Sub-blocks: All successfully read version sub-blocks are included.
       
       
       - ***M_INFO_NOT_SUPPORTED***
       Cause: The request message contains a target or targets that are not
       supported.
       Sub-blocks: All successfully read version sub-blocks are included.
       A subset of values from the constant table M_INFO_GENERAL_SYM
    */
    uint8_t   status;
    uint8_t   sub_block_count;
    /* Subblock list:
       M_INFO_SB_DO_NUM_VERSION
       M_INFO_SB_DO_STR_VERSION
       M_INFO_SB_MODEMSW_VERSION
       M_INFO_SB_RFIC_VERSION
    */
    uint8_t   sub_block[INFO_ANY_SIZE];
    } M_INFO_VERSION_READ_RESP_t;




#endif /* _INFO_MODEM_EXT_H */
