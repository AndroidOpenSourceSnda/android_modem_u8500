/*
Renesas                                                           CONFIDENTIAL
                  srv_gss_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            srv_gss_wm_isi.h

version:         009.007

type:            incl


ISI header file for GSM Stack Server

Current   ISI Version : 009.007
Supported ISI Versions: 009.001, 009.002, 009.003, 009.004, 009.005, 009.006, 
                        009.007

Copyright (c) 2010 Renesas Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _SRV_GSS_WM_ISI_H
#define _SRV_GSS_WM_ISI_H

#include "isi_conf.h"

#ifndef GSS_ISI_VERSION
#define GSS_ISI_VERSION
#define GSS_ISI_VERSION_Z   9
#define GSS_ISI_VERSION_Y   7
#endif

#define GSS_ISI_MIN_VERSION(z,y) \
 ((GSS_ISI_VERSION_Z == (z) && GSS_ISI_VERSION_Y >= (y)) || \
  (GSS_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define GSS_FILL                                 0x00  /* Value: 0x00 */
#define GSS_GENERAL_ISI_DATA_HDR_LEN             0x02  /* Value: 2 */
#define GSS_DATA_IND_LENGTH                      0x04  /* Value: 4 */
#define GSS_SUBBLOCK_HEADER_LENGTH               0x04  /* Value: 4 */
#define GSS_CS_MSG_HDR_LENGTH                    0x04  /* Value: 4 */
#define GSS_IND_DATA_MAX_SIZE                    0x0258  /* Value: 0x00 */
#define GSS_TIMING_ADVANCE_NOT_AVAILABLE         0xFF  /* Value: 0xFF */
#define GSS_SGW_IP_ADDRESS_LENGTH                0x10  /* Value: 16 */
#define GSS_UNC_IP_ADDRESS_LENGTH                0x10  /* Value: 16 */
#define GSS_SRV_NO_FQDN                          0x00  /* Value: 0 */
/* GSS has not received the environment information from APE. */
#define GSS_ENV_INFO_STATUS_UNKNOWN              0x00
/* constant for variable-length definitions */
#define GSS_ANY_SIZE                             1

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_OPERATION                                           */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_OPERATION_CONST;

#define GSS_CS_STATUS_GET                        0x00
#define GSS_CS_LOCAL_INFO_GET                    0x03
#define GSS_POWER_CLASS_CHANGE                   0x04
#define GSS_BAND_INFO_GET                        0x05
#define GSS_SELECTED_RAT_WRITE                   0x0E
#define GSS_ATK_TIMING_ADVANCE_GET               0x96
#define GSS_UMA_PREF_MODE_READ                   0x97
#define GSS_UMA_PREF_MODE_WRITE                  0x98
/* New request will always delete all previously stored information, all
   provisioning information can be removed from GSS by setting the number of
   sub-blocks to zero.
*/
#define GSS_PROV_SGW_UNC_WRITE                   0x99
/* Allowed values for number of sub-blocks are '0' or '1'. If number of
   sub-blocks is zero, then all provisioning info sub-blocks are added to
   response. When number of sub-blocks is '1' use a sub-block
   GSS_PROV_INFO_SB_IDS to define required provisioning info sub-blocks.
*/
#define GSS_PROV_SGW_UNC_READ                    0x9A
#define GSS_GAN_CONNECT                          0x9B
#define GSS_SELECTED_RAT_READ                    0x9C

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_COMMAND_QUALIFIER                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_COMMAND_QUALIFIER_CONST;

#define GSS_CELL_INFO_CMD                        0x00
#define GSS_LONG_CELL_INFO_CMD                   0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_POWERCLASS                                          */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_POWERCLASS_CONST;

#define GSS_POWER_CLASS_1                        0x01
#define GSS_POWER_CLASS_2                        0x02
#define GSS_POWER_CLASS_3                        0x03
#define GSS_POWER_CLASS_4                        0x04
#define GSS_POWER_CLASS_5                        0x05
#define GSS_POWER_CLASS_NO_CHANGE                0xFD
#define GSS_POWER_CLASS_DEFAULT                  0xFE
#define GSS_POWER_CLASS_NOT_IN_USE               0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_CAUSE                                               */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_CAUSE_CONST;

#define GSS_SERVICE_FAIL                         0x01
#define GSS_SERVICE_NOT_ALLOWED                  0x02
#define GSS_SERVICE_FAIL_CS_INACTIVE             0x03

/* ----------------------------------------------------------------------- */
/* Bitmask Table: GSS_GSM_BAND_INFO                                        */
/* ----------------------------------------------------------------------- */
/* The corresponding bit set to '1' to indicate action listed below. If
   f.e.x. GSM 900 band and GSM 1800 bands both are supported, bitmask
   0000_0011 is returned. If f.e.x. GSM 900 band and GSM1900 band are
   supported, bitmask 0000_0101 is returned etc.
*/
typedef uint8 GSS_GSM_BAND_INFO_CONST;

#define GSM_900_BAND_SUPPORT                     0x01  /* -------1 */
#define GSM_1800_BAND_SUPPORT                    0x02  /* ------1- */
#define GSM_1900_BAND_SUPPORT                    0x04  /* -----1-- */
#define GSM_850_BAND_SUPPORT                     0x08  /* ----1--- */

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_CS_STATE                                            */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_CS_STATE_CONST;

#define GSS_CS_IDLE                              0x00
#define GSS_CS_SIGNALLING                        0x01
#define GSS_CS_CALL                              0x02
#define GSS_CS_PACKET_DATA                       0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_CS_REGISTRATION_STATUS                              */
/* ----------------------------------------------------------------------- */
/* When the MS in on the service, all the CS registration status values are
   masked with 0x80. When the MS is not on the service, masking is not done.
*/
typedef uint8 GSS_CS_REGISTRATION_STATUS_CONST;

#define GSS_CS_STATUS_SERV                       0x80  /* MS in service */
/* MS is camping on CCCH/PCCCH/BCCH channel */
#define GSS_CS_STATUS_CAMPED_ON_CELL             0x0C
#define GSS_CS_STATUS_IDLE                       0x0D  /* MS in idle */
/* Serving cell measurements in progress */
#define GSS_CS_STATUS_RSSI_MEASURING             0x0E
/* MS is searching for PSW(FCCH) */
#define GSS_CS_STATUS_PSW_WAIT                   0x10
/* MS is searching for SYNC(SCH) */
#define GSS_CS_STATUS_SYNC_WAIT                  0x11
/* MS is searching channels */
#define GSS_CS_STATUS_SCANNING                   0x12
/* MS is listening to all paging blocks */
#define GSS_CS_STATUS_ALL_CCCH                   0x13
/* SDCCH allocated */
#define GSS_CS_STATUS_SDCCH                      0x14
#define GSS_CS_STATUS_TCH                        0x15  /* TCH allocated */
/* MS is starting-up */
#define GSS_CS_STATUS_INIT                       0x16

/* ----------------------------------------------------------------------- */
/* Bitmask Table: GSS_RAT_INFO_FUNCTIONS                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_RAT_INFO_FUNCTIONS_CONST;

#define GSS_GSM_RAT                              0x01  /* -------1 */
#define GSS_UMTS_RAT                             0x02  /* ------1- */
#define GSS_EUTRAN_RAT                           0x04  /* -----1-- */
/* GSM and UMTS RATs */
#define GSS_DUAL_RAT                             0x03  /* ------11 */

/* ----------------------------------------------------------------------- */
/* Constant Table: TIMING_ADVANCE_STATUS                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 TIMING_ADVANCE_STATUS_CONST;

#define GSS_TIMING_ADVANCE_NOT_VALID             0x00
#define GSS_TIMING_ADVANCE_VALID                 0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_UMA_MODE_SELECTION                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_UMA_MODE_SELECTION_CONST;

#define GSS_GERAN_ONLY                           0x00
#define GSS_GERAN_PREFERRED                      0x01
#define GSS_UMAN_ONLY                            0x02
#define GSS_UMAN_PREFERRED                       0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_SGW_UNC_IP_ADDRESS                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_SGW_UNC_IP_ADDRESS_CONST;

#define GSS_SRV_NO_IP_ADDRESS                    0x00
#define GSS_SRV_IP_ADDR_TYPE_IPv4                0x01
#define GSS_SRV_IP_ADDR_TYPE_IPv6                0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_HSXPA_USER_SETTING                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_HSXPA_USER_SETTING_CONST;

#define GSS_HSXPA_DISABLED                       0x01
#define GSS_HSXPA_ALLOWED                        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_WRITE_STATUS                                        */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_WRITE_STATUS_CONST;

#define GSS_OK                                   0x01
#define GSS_FAIL                                 0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_HSXPA_CAUSE                                         */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_HSXPA_CAUSE_CONST;

#define GSS_HSXPA_NO_CAUSE                       0x00
#define GSS_HSXPA_DISABLED_VIA_PP                0x01  /* Obsolete */

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_HAC_MODE                                            */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_HAC_MODE_CONST;

#define GSS_HAC_ACTIVE                           0x01
#define GSS_HAC_INACTIVE                         0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_ENV_REQUEST_TYPE                                    */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_ENV_REQUEST_TYPE_CONST;

/* Set environment information to GSS */
#define GSS_ENV_INFO_SET                         0x01
/* Ask current situation of certain environment information */
#define GSS_ENV_INFO_QUERY_CERTAIN               0x02
/* Ask current situation of all available environment information */
#define GSS_ENV_INFO_QUERY_ALL                   0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_ENV_INFO_RESP_STATUS                                */
/* ----------------------------------------------------------------------- */
typedef uint8 GSS_ENV_INFO_RESP_STATUS_CONST;

#define GSS_ENV_INFO_OK                          0x01
/* Unknown sub-block or value of information is out of range */
#define GSS_ENV_INFO_FAIL                        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_USER_ACTIVITY_STATUS                                */
/* ----------------------------------------------------------------------- */
/* It is up to APE to decide what is considered as active or inactive. */
typedef uint8 GSS_USER_ACTIVITY_STATUS_CONST;

/* #define GSS_ENV_INFO_STATUS_UNKNOWN           0x00 (already defined) */
#define GSS_ENV_USER_ACTIVE                      0x01
#define GSS_ENV_USER_INACTIVE                    0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: GSS_BATTERY_INFO                                        */
/* ----------------------------------------------------------------------- */
/* It is up to APE to decide what is considered as battery low. */
typedef uint8 GSS_BATTERY_INFO_CONST;

/* #define GSS_ENV_INFO_STATUS_UNKNOWN           0x00 (already defined) */
/* Phone is connected to charger. */
#define GSS_BATTERY_IN_CHARGER                   0x01
#define GSS_BATTERY_NORMAL                       0x02
#define GSS_BATTERY_LOW                          0x03

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define GSS_CS_SERVICE_REQ                       0x00
#define GSS_CS_SERVICE_RESP                      0x01
#define GSS_CS_SERVICE_FAIL_RESP                 0x02
#define GSS_CS_IND                               0x03
#define GSS_POWER_CLASS_IND                      0x0A
#define GSS_HSXPA_USER_SETTING_WRITE_REQ         0x0F
#define GSS_HSXPA_USER_SETTING_WRITE_RESP        0x10
#define GSS_HSXPA_USER_SETTING_IND               0x11
#define GSS_HSXPA_USER_SETTING_READ_REQ          0x12
#define GSS_HSXPA_USER_SETTING_READ_RESP         0x13
#define GSS_SELECTED_RAT_IND                     0x14
#define GSS_UMA_PREF_MODE_IND                    0x15
#define GSS_HAC_MODE_WRITE_REQ                   0x17
#define GSS_HAC_MODE_WRITE_RESP                  0x18
#define GSS_ENV_INFO_REQ                         0x19
#define GSS_ENV_INFO_RESP                        0x20
#define GSS_ENV_INFO_IND                         0x21

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define GSS_CS_LOCAL_INFO                        0x01
#define GSS_POWER_CLASS                          0x02
#define GSS_CS_STATUS                            0x00
#define GSS_CELL_INFO                            0x03
#define GSS_LONG_CELL_INFO                       0x11
#define GSS_BAND_INFO                            0x04
#define GSS_RAT_INFO                             0x0B
#define GSS_ATK_TIMING_ADVANCE                   0x0C
#define GSS_UMA_PREF_MODE_INFO                   0x0D
#define GSS_PROV_INFO_SB_IDS                     0x10
#define GSS_SGW_INFO                             0x0E
#define GSS_UNC_INFO                             0x0F
#define GSS_REL_SIGNAL_LEVEL_INFO                0x14
#define GSS_THRESHOLD_INFO                       0x15
#define GSS_ENV_USER_ACTIVITY_INFO               0x17
#define GSS_ENV_BATTERY_INFO                     0x18

/* ----------------------------------------------------------------------- */
/* Subblock: GSS_CS_LOCAL_INFO                                             */
/* ----------------------------------------------------------------------- */
/* Command qualifier defines the sub block to be returned. GSS_CELL_INFO_CMD
   returns sub block GSS_CELL_INFO in which the length of the cell ID is 2
   bytes( GSM ). GSS_LONG_CELL_INFO_CMD returns sub block GSS_LONG_CELL_INFO
   in which the length of the cell ID is 4 bytes( WCDMA ).
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table GSS_COMMAND_QUALIFIER */
    uint8   command_qualifier;
    uint8   fill_byte;
    } SRV_GSS_LOCAL_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_POWER_CLASS                                               */
/* ----------------------------------------------------------------------- */
/* - Power class for lower bands tells power class for band GSM850 or GSM900.
     - Power class for upper bands tells power class for band GSM1800 or
     GSM1900.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* A subset of values from the constant table GSS_POWERCLASS */
    uint8   gsm_lower_bands_power_class;
    /* A subset of values from the constant table GSS_POWERCLASS */
    uint8   gsm_upper_bands_power_class;
    } SRV_GSS_POWER_CLASS_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_CS_STATUS                                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table GSS_CS_REGISTRATION_STATUS */
    uint8   registration_status;
    uint8   fill_byte;
    } SRV_GSS_CS_STATUS_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_CELL_INFO                                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   mcc_mnc[3];
    uint8   timing_advance;
    uint8   lac[2];
    uint8   cell_id[2];
    uint8   fill_bytes[2];
    } SRV_GSS_CELL_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_LONG_CELL_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   mcc_mnc[3];
    uint8   timing_advance;
    uint8   lac[2];
    uint8   cell_id[4];
    } SRV_GSS_LONG_CELL_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_BAND_INFO                                                 */
/* ----------------------------------------------------------------------- */
/* - Band information tells supported GSM bands (GSM900, GSM1800, GSM1900,
     GSM850). 
   - Power class for lower bands tells power class for band GSM850 or GSM900.
     - Power class for upper bands tells power class for band GSM1800 or
     GSM1900.
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   band_info;  /* Values from the bitmask table GSS_GSM_BAND_INFO */
    /* A subset of values from the constant table GSS_POWERCLASS */
    uint8   gsm_lower_bands_power_class;
    /* A subset of values from the constant table GSS_POWERCLASS */
    uint8   gsm_upper_bands_power_class;
    uint8   fill_byte[3];
    } SRV_GSS_BAND_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_RAT_INFO                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the bitmask table GSS_RAT_INFO_FUNCTIONS */
    uint8   function;
    uint8   fill_byte;
    } SRV_GSS_RAT_INFO_STR;

#define SIZEOF_GSS_RAT_INFO   sizeof(SRV_GSS_RAT_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_ATK_TIMING_ADVANCE                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table TIMING_ADVANCE_STATUS */
    uint8   ta_status;
    uint8   timing_advance;
    } SRV_GSS_ATK_TIMING_ADVANCE_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_UMA_PREF_MODE_INFO                                        */
/* ----------------------------------------------------------------------- */
/* GERAN/UMA mode selection */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table GSS_UMA_MODE_SELECTION */
    uint8   uma_pref_mode_i;
    uint8   fill_byte;
    } GSS_UMA_PREF_MODE_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_PROV_INFO_SB_IDS                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   sb_id_count;  /* Number of items in the list. */
    uint8   prov_sb_id[GSS_ANY_SIZE]; /* GSS_SGW_INFO, GSS_UNC_INFO */
    } GSS_PROV_INFO_SB_IDS_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_SGW_INFO                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   fill;
    uint16  sub_block_length;
    /* Values from the constant table GSS_SGW_UNC_IP_ADDRESS */
    uint8   sgw_ip_addr_type;
    /* The field SGW IP address is used for two types of IP address. When SGW
       IP address type is 'IPv4' then four first bytes will be used to the
       address and the rest of the bytes of the field are not used. When an
       address type is 'IPv6', its length will be 16 bytes.
    */
    uint8   sgw_ip_address[GSS_SGW_IP_ADDRESS_LENGTH];
    /* FQDN length '0' means that a client do not want to store FQDN. Please
       use a literal constant GSS_SRV_NO_FQDN'.
    */
    uint8   sgw_fqdn_length;
    /* SGW FQDN. Maximum of 255x1 byte(text string). */
    uint8   sgw_fqdn[GSS_ANY_SIZE];
    } GSS_SGW_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_UNC_INFO                                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   fill;
    uint16  sub_block_length;
    uint16  unc_tcp_port;
    /* Values from the constant table GSS_SGW_UNC_IP_ADDRESS */
    uint8   unc_ip_addr_type;
    /* The field UNC IP address is used for two types of IP address. When UNC
       IP address type is 'IPv4' then four first bytes will be used to the
       address and the rest of the bytes of the field are not used. When an
       address type is 'IPv6', its length will be 16 bytes. 
    */
    uint8   unc_ip_address[GSS_UNC_IP_ADDRESS_LENGTH];
    /* FQDN length '0' means that a client do not want to store FQDN. Please
       use a literal constant GSS_SRV_NO_FQDN'.
    */
    uint8   unc_fqdn_length;
    /* UNC FQDN. Maximum of 255x1 byte(text string). */
    uint8   unc_fqdn[GSS_ANY_SIZE];
    } GSS_UNC_INFO_STR;


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_REL_SIGNAL_LEVEL_INFO                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   rel_signal_level;
    uint8   fill_byte;
    } GSS_REL_SIGNAL_LEVEL_INFO_STR;

#define SIZEOF_GSS_REL_SIGNAL_LEVEL_INFO   \
        sizeof(GSS_REL_SIGNAL_LEVEL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_THRESHOLD_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   threshold;
    uint8   fill_byte;
    } GSS_THRESHOLD_INFO_STR;

#define SIZEOF_GSS_THRESHOLD_INFO   sizeof(GSS_THRESHOLD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_ENV_USER_ACTIVITY_INFO                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* In case of GSS_ENV_REQUEST_TYPE as GSS_ENV_INFO_SET, the status field
       is not allowed to be set as GSS_ENV_INFO_STATUS_UNKNOWN.
       
       In case of GSS_ENV_REQUEST_TYPE as GSS_ENV_INFO_QUERY_CERTAIN, the
       status field does not have any meaning, so it is always set as
       GSS_ENV_INFO_STATUS_UNKNOWN.
       Values from the constant table GSS_USER_ACTIVITY_STATUS
    */
    uint8   activity_status;
    uint8   fill_byte;
    } GSS_ENV_USER_ACTIVITY_INFO_STR;

#define SIZEOF_GSS_ENV_USER_ACTIVITY_INFO   \
        sizeof(GSS_ENV_USER_ACTIVITY_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GSS_ENV_BATTERY_INFO                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* In case of GSS_ENV_REQUEST_TYPE as GSS_ENV_INFO_SET, the status field
       is not allowed to be set as GSS_ENV_INFO_STATUS_UNKNOWN.
       
       In case of GSS_ENV_REQUEST_TYPE as GSS_ENV_INFO_QUERY_CERTAIN, the
       status field does not have any meaning, so it is always set as
       GSS_ENV_INFO_STATUS_UNKNOWN.
       Values from the constant table GSS_BATTERY_INFO
    */
    uint8   battery_information;
    uint8   fill_byte;
    } GSS_ENV_BATTERY_INFO_STR;

#define SIZEOF_GSS_ENV_BATTERY_INFO   sizeof(GSS_ENV_BATTERY_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_CS_SERVICE_REQ                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table GSS_OPERATION */
    uint8   operation;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_CS_LOCAL_INFO
       GSS_POWER_CLASS
       GSS_PROV_INFO_SB_IDS
       GSS_RAT_INFO
       GSS_REL_SIGNAL_LEVEL_INFO
       GSS_SGW_INFO
       GSS_UMA_PREF_MODE_INFO
       GSS_UNC_INFO
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } SRV_GSS_CS_SERVICE_REQ_STR;

#define SIZEOF_GSS_CS_SERVICE_REQ   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GSS_CS_SERVICE_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table GSS_OPERATION */
    uint8   operation;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_ATK_TIMING_ADVANCE
       GSS_BAND_INFO
       GSS_CELL_INFO
       GSS_CS_STATUS
       GSS_LONG_CELL_INFO
       GSS_RAT_INFO
       GSS_SGW_INFO
       GSS_THRESHOLD_INFO
       GSS_UMA_PREF_MODE_INFO
       GSS_UNC_INFO
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } SRV_GSS_CS_SERVICE_RESP_STR;

#define SIZEOF_GSS_CS_SERVICE_RESP   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GSS_CS_SERVICE_FAIL_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table GSS_OPERATION */
    uint8   operation;
    uint8   cause;        /* Values from the constant table GSS_CAUSE */
    } SRV_GSS_CS_SERVICE_FAIL_RESP_STR;


/* ----------------------------------------------------------------------- */
/* Message: GSS_CS_IND                                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   cs_state;     /* Values from the constant table GSS_CS_STATE */
    uint8   fill_byte;
    } SRV_GSS_CS_IND_STR;


/* ----------------------------------------------------------------------- */
/* Message: GSS_POWER_CLASS_IND                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_POWER_CLASS
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } SRV_GSS_POWER_CLASS_IND_STR;


/* ----------------------------------------------------------------------- */
/* Message: GSS_SELECTED_RAT_IND                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the bitmask table GSS_RAT_INFO_FUNCTIONS */
    uint8   selected_rat;
    uint8   fill_byte;
    } SRV_GSS_SELECTED_RAT_IND_STR;

#define SIZEOF_GSS_SELECTED_RAT_IND   sizeof(SRV_GSS_SELECTED_RAT_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_UMA_PREF_MODE_IND                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_UMA_MODE_SELECTION */
    uint8   uma_pref_mode;
    uint8   fill_byte;
    } SRV_GSS_UMA_PREF_MODE_IND_STR;

#define SIZEOF_GSS_UMA_PREF_MODE_IND   sizeof(SRV_GSS_UMA_PREF_MODE_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HSXPA_USER_SETTING_WRITE_REQ                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_HSXPA_USER_SETTING */
    uint8   hsxpa_user_setting;
    uint8   fill_byte;
    } GSS_HSXPA_USER_SETTING_WRITE_REQ_STR;

#define SIZEOF_GSS_HSXPA_USER_SETTING_WRITE_REQ   \
        sizeof(GSS_HSXPA_USER_SETTING_WRITE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HSXPA_USER_SETTING_WRITE_RESP                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_WRITE_STATUS */
    uint8   write_status;
    uint8   fail_cause;  /* Values from the constant table GSS_HSXPA_CAUSE */
    } GSS_HSXPA_USER_SETTING_WRITE_RESP_STR;

#define SIZEOF_GSS_HSXPA_USER_SETTING_WRITE_RESP   \
        sizeof(GSS_HSXPA_USER_SETTING_WRITE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HSXPA_USER_SETTING_IND                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_HSXPA_USER_SETTING */
    uint8   hsxpa_user_setting;
    uint8   cause;       /* Values from the constant table GSS_HSXPA_CAUSE */
    } GSS_HSXPA_USER_SETTING_IND_STR;

#define SIZEOF_GSS_HSXPA_USER_SETTING_IND   \
        sizeof(GSS_HSXPA_USER_SETTING_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HSXPA_USER_SETTING_READ_REQ                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte[2];
    } GSS_HSXPA_USER_SETTING_READ_REQ_STR;

#define SIZEOF_GSS_HSXPA_USER_SETTING_READ_REQ   \
        sizeof(GSS_HSXPA_USER_SETTING_READ_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HSXPA_USER_SETTING_READ_RESP                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_HSXPA_USER_SETTING */
    uint8   hsxpa_user_setting;
    uint8   cause;       /* Values from the constant table GSS_HSXPA_CAUSE */
    } GSS_HSXPA_USER_SETTING_READ_RESP_STR;

#define SIZEOF_GSS_HSXPA_USER_SETTING_READ_RESP   \
        sizeof(GSS_HSXPA_USER_SETTING_READ_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HAC_MODE_WRITE_REQ                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   hac_mode;     /* Values from the constant table GSS_HAC_MODE */
    uint8   fill_byte;
    } GSS_HAC_MODE_WRITE_REQ_STR;

#define SIZEOF_GSS_HAC_MODE_WRITE_REQ   sizeof(GSS_HAC_MODE_WRITE_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_HAC_MODE_WRITE_RESP                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_WRITE_STATUS */
    uint8   write_status;
    uint8   fill_byte;
    } GSS_HAC_MODE_WRITE_RESP_STR;

#define SIZEOF_GSS_HAC_MODE_WRITE_RESP   sizeof(GSS_HAC_MODE_WRITE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GSS_ENV_INFO_REQ                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Identifies what the client wants to do:
       
       
       - GSS_ENV_INFO_SET: Tell environment information to GSS server. The
         number of sub-blocks should be more than 0
       - GSS_ENV_INFO_QUERY_CERTAIN: Ask current situation of certain
         information. The number of sub-blocks should be more than 0.
       - GSS_ENV_INFO_QUERY_ALL: Ask current situation of all information.
         The sub-blocks are not needed.
       Values from the constant table GSS_ENV_REQUEST_TYPE
    */
    uint8   env_request_type;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_ENV_BATTERY_INFO
       GSS_ENV_USER_ACTIVITY_INFO
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } GSS_ENV_INFO_REQ_STR;

#define SIZEOF_GSS_ENV_INFO_REQ   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GSS_ENV_INFO_RESP                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table GSS_ENV_INFO_RESP_STATUS */
    uint8   env_info_status;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_ENV_BATTERY_INFO
       GSS_ENV_USER_ACTIVITY_INFO
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } GSS_ENV_INFO_RESP_STR;

#define SIZEOF_GSS_ENV_INFO_RESP   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: GSS_ENV_INFO_IND                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill_byte;
    uint8   nbr_of_sub_blocks;
    /* Subblock list:
       GSS_ENV_BATTERY_INFO
       GSS_ENV_USER_ACTIVITY_INFO
    */
    uint8   sub_blocks[GSS_ANY_SIZE];
    } GSS_ENV_INFO_IND_STR;

#define SIZEOF_GSS_ENV_INFO_IND   (4*sizeof(uint8))




#endif /* _SRV_GSS_WM_ISI_H */
