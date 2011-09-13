/*
Renesas Mobile                                                    CONFIDENTIAL
                  gpds_shared_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            gpds_shared_wm_isi.h

version:         019.010

type:            incl


ISI header file for GPDS Shared Subblock Descriptions

Current   ISI Version : 019.010
Supported ISI Versions: 011.001, 012.000, 012.001, 012.002, 012.003, 012.004, 
                        012.005, 012.006, 012.007, 012.008, 012.009, 012.010, 
                        012.011, 013.000, 013.001, 013.002, 013.003, 013.004, 
                        013.005, 013.006, 013.007, 014.000, 014.001, 015.000, 
                        015.001, 016.000, 016.001, 016.002, 016.003, 016.004, 
                        016.005, 016.006, 016.007, 016.008, 016.009, 017.000, 
                        017.001, 017.002, 017.003, 017.004, 017.005, 017.006, 
                        017.007, 017.008, 017.009, 017.010, 017.011, 017.012, 
                        017.013, 017.014, 017.015, 017.016, 017.017, 017.018, 
                        017.019, 017.020, 017.021, 017.022, 017.023, 017.024, 
                        017.025, 018.000, 018.001, 018.002, 018.003, 018.004, 
                        018.005, 018.006, 018.007, 019.000, 019.001, 019.002, 
                        019.003, 019.004, 019.005, 019.006, 019.007, 019.008, 
                        019.009, 019.010

Copyright (c) Renesas Mobile Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _GPDS_SHARED_WM_ISI_H
#define _GPDS_SHARED_WM_ISI_H

#include "isi_conf.h"

#ifndef GPDS_ISI_VERSION
#define GPDS_ISI_VERSION
#define GPDS_ISI_VERSION_Z  19
#define GPDS_ISI_VERSION_Y  10
#endif

#define GPDS_ISI_MIN_VERSION(z,y) \
 ((GPDS_ISI_VERSION_Z == (z) && GPDS_ISI_VERSION_Y >= (y)) || \
  (GPDS_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define GPDS_MAX_APN_STRING_SIZE                 0x64
#define GPDS_MAX_TFT_INFO_SB_DATA                0x0100
#define GPDS_MAX_TFT_AUTH_TOKEN_SIZE             0xF4

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_DATA_COMPRESSION                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_DATA_COMPRESSION_CONST;

#define GPDS_PDP_DCOMP_OFF                       0x00
#define GPDS_PDP_DCOMP_ON                        0x01
#define GPDS_PDP_DCOMP_DEFAULT                   0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_HEADER_COMPRESSION                                 */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_HEADER_COMPRESSION_CONST;

#define GPDS_PDP_HCOMP_OFF                       0x00
#define GPDS_PDP_HCOMP_ON                        0x01
#define GPDS_PDP_HCOMP_DEFAULT                   0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_TRAFFIC_CLASSES                              */
/* ----------------------------------------------------------------------- */
/* QoS99 Traffic Classes */
typedef uint8 GPDS_QOS99_TRAFFIC_CLASSES_CONST;

#define GPDS_QOS99_TRAC_SUBSCRIBED               0x00
#define GPDS_QOS99_TRAC_CONVERSATIONAL           0x01
#define GPDS_QOS99_TRAC_STREAMING                0x02
#define GPDS_QOS99_TRAC_INTERACTIVE              0x03
#define GPDS_QOS99_TRAC_BACKGROUND               0x04
#define GPDS_QOS99_TRAC_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_DELIVERY_ORDERS                              */
/* ----------------------------------------------------------------------- */
/* QoS99 Delivery Orders */
typedef uint8 GPDS_QOS99_DELIVERY_ORDERS_CONST;

#define GPDS_QOS99_DELO_SUBSCRIBED               0x00
#define GPDS_QOS99_DELO_YES                      0x01
#define GPDS_QOS99_DELO_NO                       0x02
#define GPDS_QOS99_DELO_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS                   */
/* ----------------------------------------------------------------------- */
/* QoS99 Delivery of Erroneus SDUs */
typedef uint8 GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS_CONST;

#define GPDS_QOS99_DOES_SUBSCRIBED               0x00
#define GPDS_QOS99_DOES_NO_DETECT                0x01
#define GPDS_QOS99_DOES_YES                      0x02
#define GPDS_QOS99_DOES_NO                       0x03
#define GPDS_QOS99_DOES_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_RESIDUAL_BERS                                */
/* ----------------------------------------------------------------------- */
/* QoS99 Residual BERs
   The values of the constants are mantissa-exponent presentations of the
   error ratios, e.g., 0x53(GPDS_QOS99_RBER_3) represents SDU error ratio
   5*10^-3
*/
typedef uint8 GPDS_QOS99_RESIDUAL_BERS_CONST;

#define GPDS_QOS99_RBER_SUBSCRIBED               0x00
#define GPDS_QOS99_RBER_1                        0x52
#define GPDS_QOS99_RBER_2                        0x12
#define GPDS_QOS99_RBER_3                        0x53
#define GPDS_QOS99_RBER_4                        0x43
#define GPDS_QOS99_RBER_5                        0x13
#define GPDS_QOS99_RBER_6                        0x14
#define GPDS_QOS99_RBER_7                        0x15
#define GPDS_QOS99_RBER_8                        0x16
#define GPDS_QOS99_RBER_9                        0x68
#define GPDS_QOS99_RBER_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_ERROR_RATIOS                                 */
/* ----------------------------------------------------------------------- */
/* QoS99 SDU Error ratios
   The values of the constants are mantissa-exponent presentations of the
   error ratios, e.g., 0x73(GPDS_QOS99_SDER_2) represents SDU error ratio
   7*10^-3
*/
typedef uint8 GPDS_QOS99_ERROR_RATIOS_CONST;

#define GPDS_QOS99_SDER_SUBSCRIBED               0x00
#define GPDS_QOS99_SDER_1                        0x12
#define GPDS_QOS99_SDER_2                        0x73
#define GPDS_QOS99_SDER_3                        0x13
#define GPDS_QOS99_SDER_4                        0x14
#define GPDS_QOS99_SDER_5                        0x15
#define GPDS_QOS99_SDER_6                        0x16
#define GPDS_QOS99_SDER_7                        0x11
#define GPDS_QOS99_SDER_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES                  */
/* ----------------------------------------------------------------------- */
/* QoS99 Traffic Handling Priorities */
typedef uint8 GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES_CONST;

#define GPDS_QOS99_TRHP_SUBSCRIBED               0x00
#define GPDS_QOS99_TRHP_1                        0x01
#define GPDS_QOS99_TRHP_2                        0x02
#define GPDS_QOS99_TRHP_3                        0x03
#define GPDS_QOS99_TRHP_DEFAULT                  0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_TFT_OPERATION                                      */
/* ----------------------------------------------------------------------- */
typedef uint8 GPDS_TFT_OPERATION_CONST;

#define GPDS_TFT_CREATE_NEW                      0x01
#define GPDS_TFT_DELETE_EXISTING                 0x02
#define GPDS_TFT_ADD_PACKET_FILTERS              0x03
#define GPDS_TFT_REPLACE_PACKET_FILTERS          0x04
#define GPDS_TFT_DELETE_PACKET_FILTERS           0x05
#define GPDS_TFT_NO_OPERATION                    0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_REL5_SOURCE_DESC                                   */
/* ----------------------------------------------------------------------- */
/* REL5 Source Descriptor */
typedef uint8 GPDS_REL5_SOURCE_DESC_CONST;

#define GPDS_SOURCE_UNKNOWN                      0x00  /* Unknown Source */
#define GPDS_SOURCE_SPEECH                       0x01  /* Speech source */
#define GPDS_SOURCE_DEFAULT                      0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_REL5_SGN_IND_FLAG                                  */
/* ----------------------------------------------------------------------- */
/* REL5 Signaling indication flag */
typedef uint8 GPDS_REL5_SGN_IND_FLAG_CONST;

/* QoS of the PDP context is not optimized for signaling */
#define GPDS_QOS_NOT_OPT_SGN                     0x00
/* QoS of the PDP context is optimized for signaling */
#define GPDS_QOS_OPT_SGN                         0x01
#define GPDS_QOS_OPT_DEFAULT                     0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: GPDS_IM_CN_SIGN_FLAG                                    */
/* ----------------------------------------------------------------------- */
/* REL5 IM CN Signaling indication flag */
typedef uint8 GPDS_IM_CN_SIGN_FLAG_CONST;

/* Context is not optimized for dedicated signaling */
#define GPDS_CTX_NOT_FOR_DEDICATED_SIGN          0x00
/* Context is for dedicated signaling */
#define GPDS_CTX_FOR_DEDICATED_SIGN              0x01

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define GPDS_SHARED_APN_INFO                     0xE1
#define GPDS_SHARED_COMP_INFO                    0xE0
#define GPDS_SHARED_QOS99_REQ_INFO               0xE2
#define GPDS_SHARED_QOS99_MIN_INFO               0xE3
#define GPDS_SHARED_QOS99_NEG_INFO               0xE4
#define GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO      0xE6
#define GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO      0xE7
#define GPDS_SHARED_FILT_PROTOCOL_INFO           0xE8
#define GPDS_SHARED_FILT_DST_PORT_INFO           0xE9
#define GPDS_SHARED_FILT_DST_PORT_RANGE_INFO     0xEA
#define GPDS_SHARED_FILT_SRC_PORT_INFO           0xEB
#define GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO     0xEC
#define GPDS_SHARED_FILT_SPI_INFO                0xED
#define GPDS_SHARED_FILT_TOS_INFO                0xEE
#define GPDS_SHARED_FILT_FLOW_LABEL_INFO         0xEF
#define GPDS_SHARED_TFT_INFO                     0xE5
#define GPDS_SHARED_TFT_PACKET_FILTER_INFO       0xF6
#define GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO   0xF2
#define GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO 0xF1
#define GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO       0xF3
#define GPDS_SHARED_PCSCF_ADDRESS_INFO           0xF4
#define GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO 0xF5
#define GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO    0xF7
#define GPDS_SHARED_REL5_QOS_INFO                0xF8
#define GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO      0xF9
#define GPDS_SHARED_INITIAL_DL_DCH_RATE          0xFC

/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_APN_INFO                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   addr_length;
    char    apn_name[GPDS_MAX_APN_STRING_SIZE];
    uint8   pad1;
    /* The amount of the filler bytes must be chosen so that the total size
       of the SB is divisible by 4.
    */
    } GPDS_SHARED_APN_INFO_STR;

#define SIZE_GPDS_SHARED_APN_INFO_STR   sizeof(GPDS_SHARED_APN_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_COMP_INFO                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_DATA_COMPRESSION */
    uint8   data_compression;
    /* Values from the constant table GPDS_HEADER_COMPRESSION */
    uint8   header_compression;
    } GPDS_SHARED_COMP_INFO_STR;

#define SIZE_GPDS_SHARED_COMP_INFO_STR   sizeof(GPDS_SHARED_COMP_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_QOS99_REQ_INFO                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_SHARED_QOS99_REQ_INFO_STR;

#define SIZE_GPDS_SHARED_QOS99_REQ_INFO_STR   \
        sizeof(GPDS_SHARED_QOS99_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_QOS99_MIN_INFO                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_SHARED_QOS99_MIN_INFO_STR;

#define SIZE_GPDS_SHARED_QOS99_MIN_INFO_STR   \
        sizeof(GPDS_SHARED_QOS99_MIN_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_QOS99_NEG_INFO                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_CLASSES */
    uint8   traffic_class;
    /* Values from the constant table GPDS_QOS99_DELIVERY_ORDERS */
    uint8   delivery_order;
    /* Values from the constant table GPDS_QOS99_DELIVERY_OF_ERRONEOUS_SDUS
    */
    uint8   delivery_of_erroneus_sdu;
    /* Values from the constant table GPDS_QOS99_RESIDUAL_BERS */
    uint8   residual_ber;
    /* Values from the constant table GPDS_QOS99_ERROR_RATIOS */
    uint8   error_ratio;
    /* Values from the constant table GPDS_QOS99_TRAFFIC_HANDLING_PRIORITIES
    */
    uint8   priority;
    uint16  transfer_delay;
    uint16  max_sdu_size;
    uint16  max_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  max_bitrate_downlink;
    uint16  gua_bitrate_uplink;
    /* Even though the new value range covers higher bitrates, for ReL99 the
       valid range is still only 1kbps to 8640kbps, 0 or 65535. The range
       from 8641 to 16,000 can only be used in case of Release 5.
    */
    uint16  gua_bitrate_downlink;
    } GPDS_SHARED_QOS99_NEG_INFO_STR;

#define SIZE_GPDS_SHARED_QOS99_NEG_INFO_STR   \
        sizeof(GPDS_SHARED_QOS99_NEG_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /*  Number of bits to be masked,i.e. the number of ones starting from the
       most significant bit to be used for masking.
    */
    uint8   ipv4_addr_mask;
    uint8   pad;
    uint8   ipv4_address[4];
    } GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /*  Number of bits to be masked,i.e. the number of ones starting from the
       most significant bit to be used for masking.
    */
    uint8   ipv6_addr_mask;
    uint8   pad;
    uint8   ipv6_address[16];
    } GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_PROTOCOL_INFO                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   protocol_id;
    uint8   pad;
    } GPDS_SHARED_FILT_PROTOCOL_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_PROTOCOL_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_PROTOCOL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_DST_PORT_INFO                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  destination_port;
    } GPDS_SHARED_FILT_DST_PORT_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_DST_PORT_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_DST_PORT_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_DST_PORT_RANGE_INFO                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  low_limit_dst_port_range;
    uint16  high_limit_dst_port_range;
    uint8   pad1;
    uint8   pad2;
    } GPDS_SHARED_FILT_DST_PORT_RANGE_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_DST_PORT_RANGE_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_DST_PORT_RANGE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_SRC_PORT_INFO                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  source_port;
    } GPDS_SHARED_FILT_SRC_PORT_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_SRC_PORT_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_SRC_PORT_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  low_limit_src_port_range;
    uint16  high_limit_src_port_range;
    uint8   pad1;
    uint8   pad2;
    } GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_SPI_INFO                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    uint32  security_param_ind;
    } GPDS_SHARED_FILT_SPI_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_SPI_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_SPI_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_TOS_INFO                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   tos;
    /* Traffic Class Mask: Number of bits to be masked,i.e. the number of
       ones starting from the most significant bit to be used for masking.
    */
    uint8   tos_mask;
    } GPDS_SHARED_FILT_TOS_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_TOS_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_TOS_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_FILT_FLOW_LABEL_INFO                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    uint32  flow_label;
    } GPDS_SHARED_FILT_FLOW_LABEL_INFO_STR;

#define SIZE_GPDS_SHARED_FILT_FLOW_LABEL_INFO_STR   \
        sizeof(GPDS_SHARED_FILT_FLOW_LABEL_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GPDS_TFT_PACKET_FILTER - Obsolete from version 013.002        */
/* ----------------------------------------------------------------------- */
/* - There can not be more than one occurrence of each packet filter content
     subblock. Among the 'IPv4 source address type' and 'IPv6 source address
     type' packet filter components, only one shall be present in one packet
     filter. Among the 'single destination port type' and 'destination port
     range type' packet filter components, only one shall be present in one
     packet filter. Among the 'single source port type' and 'source port
     range type' packet filter components, only one shall be present in one
     packet filter. Therefore the maximum length of this subblock is 64
     bytes.
   - There can also be zero occurrence of packet filter content subblocks
     when the TFT operation is GPDS_TFT_DELETE_PACKET_FILTERS.
   - There can not be more than one occurrence of each packet filter content
     subblock. Among the 'IPv4 source address type' and 'IPv6 source address
     type' packet filter components, only one shall be present in one packet
     filter. Among the 'single destination port type' and 'destination port
     range type' packet filter components, only one shall be present in one
     packet filter. Among the 'single source port type' and 'source port
     range type' packet filter components, only one shall be present in one
     packet filter. Therefore the maximum length of this subblock is 64
     bytes.
*/

#if !GPDS_ISI_MIN_VERSION(13,2)

typedef struct
    {
    uint8   packet_filter_id;
    uint8   filter_eval_prec;
    uint8   pad1;
    uint8   number_of_subblocks;
    uint8   sub_block_data[GPDS_MAX_TFT_INFO_SB_DATA];
    /* Subblock list:
       GPDS_SHARED_FILT_DST_PORT_INFO
       GPDS_SHARED_FILT_DST_PORT_RANGE_INFO
       GPDS_SHARED_FILT_FLOW_LABEL_INFO
       GPDS_SHARED_FILT_PROTOCOL_INFO
       GPDS_SHARED_FILT_SPI_INFO
       GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO
       GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO
       GPDS_SHARED_FILT_SRC_PORT_INFO
       GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO
       GPDS_SHARED_FILT_TOS_INFO
    */
    } GPDS_TFT_PACKET_FILTER_STR;

#define SIZE_GPDS_TFT_PACKET_FILTER_STR   (4*sizeof(uint8))

#endif /* !GPDS_ISI_MIN_VERSION(13,2) */


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_TFT_INFO - Obsolete from version 013.002          */
/* ----------------------------------------------------------------------- */
/* 
   - The maximum length of the this subblock (256 bytes) limits the total
     number of the packet filters. E.g there can be only 3 packet filters if
     maximum size packet filters are used.
   - There can also be zero occurrence of packet filters when the TFT
     operation is GPDS_TFT_DELETE_EXISTING.
*/

#if !GPDS_ISI_MIN_VERSION(13,2)

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_TFT_OPERATION */
    uint8   tft_operation;
    uint8   number_of_filters;
    uint8   filters[GPDS_MAX_TFT_INFO_SB_DATA];
    } GPDS_SHARED_TFT_INFO_STR;

#define SIZE_GPDS_SHARED_TFT_INFO_STR   (4*sizeof(uint8))

#endif /* !GPDS_ISI_MIN_VERSION(13,2) */


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_TFT_PACKET_FILTER_INFO - Valid from version 013.002 */
/* ----------------------------------------------------------------------- */
/* - There can not be more than one occurrence of each packet filter content
     subblock. Among the 'IPv4 source address type' and 'IPv6 source address
     type' packet filter components, only one shall be present in one packet
     filter. Among the 'single destination port type' and 'destination port
     range type' packet filter components, only one shall be present in one
     packet filter. Among the 'single source port type' and 'source port
     range type' packet filter components, only one shall be present in one
     packet filter. Therefore the maximum length of this subblock is 64
     bytes.
   - There can also be zero occurrence of packet filter content subblocks
     when the TFT operation is GPDS_TFT_DELETE_PACKET_FILTERS.
   - The Packet Filter Identifier and Filter Evaluation Precedence must be
     unique among different GPDS_SHARED_TFT_PACKET_FILTER_INFOs inside
     GPDS_SHARED_TFT_INFO. 
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   packet_filter_id;
    uint8   filter_eval_prec;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   number_of_subblocks;
    uint8   sub_block_data[GPDS_MAX_TFT_INFO_SB_DATA];
    /* Subblock list:
       GPDS_SHARED_FILT_DST_PORT_INFO
       GPDS_SHARED_FILT_DST_PORT_RANGE_INFO
       GPDS_SHARED_FILT_FLOW_LABEL_INFO
       GPDS_SHARED_FILT_PROTOCOL_INFO
       GPDS_SHARED_FILT_SPI_INFO
       GPDS_SHARED_FILT_SRC_IPV4_ADDR_INFO
       GPDS_SHARED_FILT_SRC_IPV6_ADDR_INFO
       GPDS_SHARED_FILT_SRC_PORT_INFO
       GPDS_SHARED_FILT_SRC_PORT_RANGE_INFO
       GPDS_SHARED_FILT_TOS_INFO
    */
    } GPDS_SHARED_TFT_PACKET_FILTER_INFO_STR;

#define SIZE_GPDS_SHARED_TFT_PACKET_FILTER_INFO_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO - Valid from version 013.002 */
/* ----------------------------------------------------------------------- */
/* 
   - Media Component Number is the ordinal number of the position of the 'm='
     line in the final Session Description Protocol (SDP) negotiated for the
     session, and IP flow number is the ordinal number of the IP flow(s)
     within the 'm=' line assigned in the order of increasing port numbers
     where both are numbered starting from 1. The parameters are derived
     using the rules described in 3GPP TS 29.207. Applications can use API
     provided by new Flow Authorization API module(QoS Policy/API extension)
     to get the information. 
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    uint16  media_comp_no;
    uint16  ip_flow_no;
    } GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO_STR;

#define SIZE_GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO_STR   \
        sizeof(GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO - Valid from version 013.002 */
/* ----------------------------------------------------------------------- */
/* - The authorization token is obtained via SIP from the P-CSCF by means of
     an extension SIP header(described in RFC 3313). Applications can use API
     provided by new Flow Authorization API module(QoS Policy/API extension)
     to get the information. 
*/

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   auth_token_length;
    uint8   pad;
    char    auth_token[GPDS_MAX_TFT_AUTH_TOKEN_SIZE];
    } GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO_STR;

#define SIZE_GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO_STR   (\
        4*sizeof(uint8) + GPDS_MAX_TFT_AUTH_TOKEN_SIZE*sizeof(char))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_TFT_INFO - Valid from version 013.002             */
/* ----------------------------------------------------------------------- */
/* - The maximum length of the this subblock (256 bytes) limits the total
     number of the packet filters. E.g there can be only 3 packet filters if
     maximum size packet filters are used.
   - There can also be zero occurrence of packet filters when the TFT
     operation is GPDS_TFT_DELETE_EXISTING or GPDS_TFT_NO_OPERATION.For all
     other operations, the number of packet filters shall be greater than 0
     and less than or equal to 8.
   - The subblocks GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO and
     GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO are optional. These subblocks are
     only required when using Rel5 IMS features. 
   - The subblock GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO must be followed
     by one or more GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO subblocks as
     illustrated in example below. The subblock
     GPDS_SHARED_TFT_PACKET_FILTER_INFO in the message can be ordered in any
     way and can also be placed between
     GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO and
     GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO. 
   GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO (this is authentication for flow
   1)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
   (1)GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO (this is authentication for
   flows 2 and 3)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
   (2)GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO (3)
*/

#if GPDS_ISI_MIN_VERSION(13,2)

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_TFT_OPERATION */
    uint8   tft_operation;
    uint8   number_of_subblocks;
    uint8   sub_block_data[GPDS_MAX_TFT_INFO_SB_DATA];
    /* Subblock list:
       GPDS_SHARED_TFT_PACKET_FILTER_INFO
       GPDS_SHARED_TFT_PARAMETER_AUTH_TOKEN_INFO
       GPDS_SHARED_TFT_PARAMETER_IP_FLOW_INFO
    */
    } GPDS_SHARED_TFT_INFO_STR;

#define SIZE_GPDS_SHARED_TFT_INFO_STR   (4*sizeof(uint8))

#endif /* GPDS_ISI_MIN_VERSION(13,2) */


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO - Valid from version 013.002 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    } GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO_STR;

#define SIZE_GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO_STR   \
        sizeof(GPDS_SHARED_PCSCF_ADDRESS_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_PCSCF_ADDRESS_INFO - Valid from version 013.002   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   addr_length;
    uint8   pcscf_address[16]; /* IP address of P-CSCF */
    } GPDS_SHARED_PCSCF_ADDRESS_INFO_STR;

#define SIZE_GPDS_SHARED_PCSCF_ADDRESS_INFO_STR   (20*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO - Valid from version 013.002 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   rejection_cause;
    uint8   pad1;
    } GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO_STR;

#define SIZE_GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO_STR   \
        sizeof(GPDS_SHARED_POLICY_CONTROL_REJ_CODE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO - Valid from version 013.004 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Set to GPDS_CTX_FOR_DEDICATED_SIGN for Dedicated signalling context
       and GPDS_CTX_NOT_FOR_DEDICATED_SIGN otherwise.
       Values from the constant table GPDS_IM_CN_SIGN_FLAG
    */
    uint8   imcn_sig_flag;
    uint8   pad1;
    } GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO_STR;

#define SIZE_GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO_STR   \
        sizeof(GPDS_SHARED_IM_CN_SIGNALING_FLAG_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_REL5_QOS_INFO - Valid from version 013.004        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    /* Values from the constant table GPDS_REL5_SOURCE_DESC */
    uint8   src_stat_desc;
    /* Values from the constant table GPDS_REL5_SGN_IND_FLAG */
    uint8   sig_ind_flag;
    } GPDS_SHARED_REL5_QOS_INFO_STR;

#define SIZE_GPDS_SHARED_REL5_QOS_INFO_STR   \
        sizeof(GPDS_SHARED_REL5_QOS_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO - Valid from version 014.001 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint8   pad1;
    uint8   pad2;
    } GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO_STR;

#define SIZE_GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO_STR   \
        sizeof(GPDS_SHARED_RADIO_ACTIVITY_REQ_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: GPDS_SHARED_INITIAL_DL_DCH_RATE - Valid from version 017.011  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   id;
    uint8   length;
    uint16  max_bitrate_downlink;
    } GPDS_SHARED_INITIAL_DL_DCH_RATE_STR;

#define SIZE_GPDS_SHARED_INITIAL_DL_DCH_RATE_STR   \
        sizeof(GPDS_SHARED_INITIAL_DL_DCH_RATE_STR)




#endif /* _GPDS_SHARED_WM_ISI_H */
