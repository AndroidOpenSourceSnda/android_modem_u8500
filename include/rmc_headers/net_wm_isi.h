/*
RENESAS                                                           CONFIDENTIAL
                  net_wm_isi.h
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            net_wm_isi.h

version:         017.008

type:            incl


ISI header file for Modem Network Select Server

Current   ISI Version : 017.008
Supported ISI Versions: 003.008, 003.009, 003.010, 003.011, 003.012, 003.013, 
                        003.014, 003.015, 003.016, 003.017, 003.018, 003.019, 
                        003.020, 003.021, 004.000, 004.001, 004.002, 004.003, 
                        004.004, 005.000, 005.001, 005.002, 006.000, 006.001, 
                        006.002, 007.000, 007.001, 007.002, 007.003, 008.000, 
                        009.000, 009.001, 009.002, 009.003, 009.004, 009.005, 
                        009.006, 009.007, 009.008, 009.009, 009.010, 010.000, 
                        010.001, 011.000, 011.001, 011.002, 012.000, 012.001, 
                        013.000, 014.000, 014.001, 015.000, 016.000, 016.001, 
                        016.002, 016.003, 016.004, 016.005, 016.006, 016.007, 
                        016.008, 016.009, 016.010, 016.011, 016.012, 017.000, 
                        017.001, 017.002, 017.003, 017.004, 017.005, 017.006, 
                        017.007, 017.008

Copyright (c) Renesas Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _NET_WM_ISI_H
#define _NET_WM_ISI_H

#include "isi_conf.h"

#ifndef NET_MODEM_ISI_VERSION
#define NET_MODEM_ISI_VERSION
#define NET_MODEM_ISI_VERSION_Z  17
#define NET_MODEM_ISI_VERSION_Y   8
#endif

#define NET_MODEM_ISI_MIN_VERSION(z,y) \
 ((NET_MODEM_ISI_VERSION_Z == (z) && NET_MODEM_ISI_VERSION_Y >= (y)) || \
  (NET_MODEM_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define NET_INVALID_TIME                         0x64
#define NET_FILL                                 0x00
#define NET_ALPHA_TAG_LEN                        0x20
#define NET_MCC_INVALID                          0xFFFF
#define NET_MNC_INVALID                          0xFFFF
#define NET_ECID_UCID_UNDEFINED                  0xFFFFFFFF
#define NET_ECID_CPICH_ECNO_UNDEFINED            0xFF
#define NET_ECID_CPICH_RSCP_UNDEFINED            (-127)
#define NET_ECID_PATHLOSS_UNDEFINED              0xFF
/* constant for variable-length definitions */
#define NET_MODEM_ANY_SIZE                       1
#define NET_RSSI_UNDEFINED                       0x00
#define NET_INDEX_NOT_USED                       0x00
#define NET_BER_UNDEFINED                        0x63
#define NET_ECNO_UNDEFINED                       0x63
#define NET_SCRAMBLING_CODE_UNDEFINED            0xFFFF
#define NET_ECID_TA_UNDEFINED                    0xFF
#define NET_GSM_FRAME_NUMBER_WRONG               0xFFFFFFFF
#define NET_NO_RSSI_INDICATED                    0x00
#define NET_ALL_RSSI_INDICATED                   0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_SUCCESS_CODES                                 */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_SUCCESS_CODES_CONST;

/* is used when request was performed successfully. All other values are
   indications of some kind of error
*/
#define NET_CAUSE_OK                             0x00
/* is a general error cause when no more specific reason can not be given */
#define NET_CAUSE_COMMUNICATION_ERROR            0x01
/* means that request was not understood due to an erroneous message */
#define NET_CAUSE_INVALID_PARAMETER              0x02
/* means that requested operation is not possible due to missing SIM-card or
   missing subscription
*/
#define NET_CAUSE_NO_SIM                         0x03
/* means that request can not be done due that SIM initialization is not done
   (usually due to PIN or PUK enquiry)
*/
#define NET_CAUSE_SIM_NOT_YET_READY              0x04
/* means that network search was done but no networks were found */
#define NET_CAUSE_NET_NOT_FOUND                  0x05
/* means that request is not allowed for instance due that request is not
   supported by NWS
*/
#define NET_CAUSE_REQUEST_NOT_ALLOWED            0x06
/* means that serving request is temporarily not possible due to active call
*/
#define NET_CAUSE_CALL_ACTIVE                    0x07
/* means that serving request is not currently possible due that NWS is
   serving some other service request
*/
#define NET_CAUSE_SERVER_BUSY                    0x08
/* means that service request is not fulfilled due to missing security code
*/
#define NET_CAUSE_SECURITY_CODE_REQUIRED         0x09
/* is an indication that cancel operation is not possible because there is no
   request ongoing, which could be cancelled
*/
#define NET_CAUSE_NOTHING_TO_CANCEL              0x0A
/* is an indication that cancel operation could not be fulfilled */
#define NET_CAUSE_UNABLE_TO_CANCEL               0x0B
/* is an indication that registration has failed due that network(s) are
   forbidden
*/
#define NET_CAUSE_NETWORK_FORBIDDEN              0x0C
/* means that radio network has rejected the registration request */
#define NET_CAUSE_REQUEST_REJECTED               0x0D
/* means that CS type in request is not supported by the server (at least for
   that particular request)
*/
#define NET_CAUSE_CS_NOT_SUPPORTED               0x0E
/* means that information can not be returned due that it is missing */
#define NET_CAUSE_PAR_INFO_NOT_AVAILABLE         0x0F
/* is a general indication of that some request was not fulfilled */
#define NET_CAUSE_NOT_DONE                       0x10
/* means that CS is in manual network selection mode, but there is not valid
   network selected. So CS will not register to any network
*/
#define NET_CAUSE_NO_SELECTED_NETWORK            0x11
/* is used when a new request has interrupted the current request before the
   outcome of request is not yet clear
*/
#define NET_CAUSE_REQUEST_INTERRUPTED            0x12
/* is used when there is a reference to index but the index is out of range
*/
#define NET_CAUSE_TOO_BIG_INDEX                  0x14
/* is used when storing data fails due that memory is full */
#define NET_CAUSE_MEMORY_FULL                    0x15
/* is used when the requested operation is rejected due to missing
   subscription
*/
#define NET_CAUSE_SERVICE_NOT_ALLOWED            0x16
/* is used when the requested operation is rejected because of carrier
   dependent information.
*/
#define NET_CAUSE_NOT_SUPPORTED_IN_TECH          0x17

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_NETWORK_SEARCH_MODE                           */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_NETWORK_SEARCH_MODE_CONST;

/* is a search mode, which will request to search all networks */
#define NET_MANUAL_SEARCH                        0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CS_TYPE                                             */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CS_TYPE_CONST;

/* GSM Cellular System */
#define NET_CS_GSM                               0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CS_OPERATION_MODE - Valid from version 007.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CS_OPERATION_MODE_CONST;

/* CS is in normal operation mode */
#define NET_CS_OP_MODE_NORMAL                    0x00
/* CS is in GAN only operation mode */
#define NET_CS_OP_MODE_GAN_ONLY                  0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MEASUREMENT_TYPES                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MEASUREMENT_TYPES_CONST;

/* means that RSSI/RSCP level of the currently used channel is requested.  */
#define NET_CURRENT_CELL_RSSI                    0x02
/* means that Bit Error Rate (BER) of the currently used GERAN channel is
   requested.
*/
#define NET_CURRENT_BER                          0x03
/* means that RSSI/RSCP level, Bit Error Rate (BER) of the currently used
   GERAN channel and ratio of energy per modulating bit to the noise spectral
   density (Ec/No) of the currently used UTRAN channel is requested.
*/
#define NET_MEASUREMENT_QUERY_ALL                0x04
/* means that ratio of energy per modulating bit to the noise spectral
   density (Ec/No) of the currently used UTRAN channel is requested.
*/
#define NET_CURRENT_ECNO                         0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CONTROL_MESSAGE_TYPES                               */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CONTROL_MESSAGE_TYPES_CONST;

/* means that CS shall be switched off, it is possible that this causes
   deregistration to network (in GSM IMSI detach-procedure)
*/
#define NET_CS_POWER_OFF                         0x02
/* means that CS shall be switched on */
#define NET_CS_POWER_ON                          0x03
/* means that CS shall be switched to GAN flight mode */
#define NET_CS_POWER_WIFI                        0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_REGISTRATION_STATUS                           */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_REGISTRATION_STATUS_CONST;

/* CS is registered to home network */
#define NET_REG_STATUS_HOME                      0x00
/* CS is registered to some other network than home network */
#define NET_REG_STATUS_ROAM                      0x01
/* CS is not in service */
#define NET_REG_STATUS_NOSERV                    0x03
/* CS is not in service, but is currently searching for service */
#define NET_REG_STATUS_NOSERV_SEARCHING          0x04
/* CS is not in service and it is not currently searching for service */
#define NET_REG_STATUS_NOSERV_NOTSEARCHING       0x05
/* CS is not in service due to missing SIM or missing subscription */
#define NET_REG_STATUS_NOSERV_NOSIM              0x06
/* CS is in power off state */
#define NET_REG_STATUS_POWER_OFF                 0x08
/* CS is in No Service Power Save State (currently not listening to any cell)
*/
#define NET_REG_STATUS_NSPS                      0x09
/* CS is in No Service Power Save State (CS is entered to this  state because
   there is no network coverage)
*/
#define NET_REG_STATUS_NSPS_NO_COVERAGE          0x0A
/* CS is not in service due to missing subscription (See reference /6/) */
#define NET_REG_STATUS_NOSERV_SIM_REJECTED_BY_NW 0x0B

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_SERVICE_STATUS - Valid from version 011.002         */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_SERVICE_STATUS_CONST;

/* CS is in service */
#define NET_SERVICE                              0x00
/* CS is in limited_service */
#define NET_LIMITED_SERVICE                      0x01
/* CS is not in service. Other cell informations are not valid */
#define NET_NO_COVERAGE                          0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_NETWORK_SELECTION_MODE                        */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_NETWORK_SELECTION_MODE_CONST;

/* Network selection mode is unset or does not matter */
#define NET_SELECT_MODE_UNKNOWN                  0x00
/* Network selection mode is manual */
#define NET_SELECT_MODE_MANUAL                   0x01
/* Network selection mode is automatic */
#define NET_SELECT_MODE_AUTOMATIC                0x02
/* CS performs user reselection. This is currently GSM-specific procedure,
   which is specified in GSM TS 03.22. (See reference /9/)
*/
#define NET_SELECT_MODE_USER_RESELECTION         0x03
/* This mode is used after NET_MODEM_AVAILABLE_GET_RESP to indicate that user
   does not want to select any networks
*/
#define NET_SELECT_MODE_NO_SELECTION             0x04
/* This is used to set default power-on selection mode to automatic */
#define NET_SELECT_MODE_POWER_ON_AUTOMATIC       0x05
/* This is used to set default power-on selection mode to manual */
#define NET_SELECT_MODE_POWER_ON_MANUAL          0x06
/* This is used to clear power-on default network selection mode */
#define NET_SELECT_MODE_POWER_ON_NO_SELECTION    0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_NETWORK_STATUS                                */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_NETWORK_STATUS_CONST;

/* It is not known in which category operator belongs */
#define NET_OPER_STATUS_UNKNOWN                  0x00
/* The operator is heard and allowed */
#define NET_OPER_STATUS_AVAILABLE                0x01
/* The CS is currently in service in this operator */
#define NET_OPER_STATUS_CURRENT                  0x02
/* The operator is forbidden */
#define NET_OPER_STATUS_FORBIDDEN                0x03

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_ADDITIONAL_RAT_INFO                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_ADDITIONAL_RAT_INFO_CONST;

/* Used when in service in GAN mode */
#define NET_UMA_RAT                              0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_TEST_CARRIER_SETTING_OPERATIONS                     */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_TEST_CARRIER_SETTING_OPERATIONS_CONST;

/* Test carrier is to be set so that MS shall use only the limited set of
   carriers
*/
#define NET_TEST_CARRIER_SET                     0x00
/* Test carrier is no longer valid */
#define NET_TEST_CARRIER_CLEAR                   0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_TEST_CARRIER_TYPE                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_TEST_CARRIER_TYPE_CONST;

/* Carrier used in production */
#define NET_PRODUCTION_CARRIER                   0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_BAND_SELECTION                                      */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_BAND_SELECTION_CONST;

/* The frequency belongs to GSM900 or GSM1800 or E-GSM or R-GSM frequencies
*/
#define NET_GSM900_1800                          0x00
/* The frequency belongs to GSM850 or GSM1900 frequencies */
#define NET_GSM850_1900                          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CIPHERING_STATUS                                    */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CIPHERING_STATUS_CONST;

/* Ciphering is off */
#define NET_CIPHERING_INDICATOR_OFF              0x00
/* Ciphering is on */
#define NET_CIPHERING_INDICATOR_ON               0x01
/* There is no radio connection, which could be ciphered */
#define NET_CIPHERING_NO_CONNECTION              0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CIPHERING_KEY_STATUS                                */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CIPHERING_KEY_STATUS_CONST;

/* The key status has no meaning */
#define NET_KEY_STATUS_UNKNOWN                   0x00
/* The ciphering key is derived from a different context (e.g. ciphering key
   context is UMTS and active RAT is GSM).
*/
#define NET_KEY_STATUS_DERIVED                   0x01
/* The ciphering key is derived from the same context (e.g.  ciphering key
   context is UMTS and active RAT is UMTS).
*/
#define NET_KEY_STATUS_NOT_DERIVED               0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CIPHERING_CONTEXT                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CIPHERING_CONTEXT_CONST;

/* When ciphering key context is unknown */
#define NET_CONTEXT_UNKNOWN                      0x00
/* When ciphering key context is GSM */
#define NET_CONTEXT_GSM                          0x01
/* When ciphering key context is UMTS */
#define NET_CONTEXT_UMTS                         0x02
/* When ciphering key context is EPS */
#define NET_CONTEXT_EPS                          0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_ACTIVE_RAT                                          */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_ACTIVE_RAT_CONST;

/* When no NET activity and therefore no RAT active */
#define NET_ACTIVE_RAT_UNKNOWN                   0x00
/* When the active RAT is GSM (RR connection) */
#define NET_ACTIVE_RAT_GSM                       0x01
/* When the active RAT is UMTS (RRC connection) */
#define NET_ACTIVE_RAT_UMTS                      0x02
/* When the active RAT is EPS (RRC connection) */
#define NET_ACTIVE_RAT_EPS                       0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_RAT_NAME                                            */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_RAT_NAME_CONST;

#define NET_GSM_RAT                              0x01  /* GSM RAT */
#define NET_UMTS_RAT                             0x02  /* UMTS RAT */
#define NET_EPS_RAT                              0x04  /* EPS RAT */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_RAT_TYPE                                            */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_RAT_TYPE_CONST;

#define NET_CURRENT_RAT                          0x00  /* Current RAT */
#define NET_SUPPORTED_RATS                       0x01  /* Supported RATs */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_DAYLIGHT_SAVING_TIME                                */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_DAYLIGHT_SAVING_TIME_CONST;

/* Information not available */
#define NET_DST_INFO_NOT_AVAIL                   0x64
/* Local time zone adjusted by 1 hour */
#define NET_DST_1_HOUR                           0x01
/* Local time zone adjusted by 2 hours */
#define NET_DST_2_HOURS                          0x02
/* No adjustment to local time zone */
#define NET_DST_0_HOUR                           0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_CS_STATES                                           */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_CS_STATES_CONST;

/* CS is not usable before resuming or power on */
#define NET_CS_INACTIVE                          0x00
#define NET_CS_ACTIVE                            0x01  /* CS is usable */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_GSM_NETWORK_TYPE                              */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_GSM_NETWORK_TYPE_CONST;

/* GSM operator code equals to home network operator code */
#define NET_GSM_HOME_PLMN                        0x00
/* GSM operator code is same as one of the operator codes in PLMN selection
   list of SIM card
*/
#define NET_GSM_PREFERRED_PLMN                   0x01
/* GSM operator code is same as one of the forbidden PLMN operator codes */
#define NET_GSM_FORBIDDEN_PLMN                   0x02
/* GSM operator code can not be identified as neither home PLMN nor preferred
   PLMN nor forbidden PLMN
*/
#define NET_GSM_OTHER_PLMN                       0x03
/* There is no GSM operator available */
#define NET_GSM_NO_PLMN_AVAIL                    0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_UMTS_AVAIL_INFO                               */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_UMTS_AVAIL_INFO_CONST;

/* Network is not heard from 3G */
#define NET_UMTS_NOT_AVAILABLE                   0x00
/* Network is heard from 3G */
#define NET_UMTS_AVAILABLE                       0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_REJECT_CODES                                  */
/* ----------------------------------------------------------------------- */
/* This value is got directly from the network as a cause code. If the value
   is other than any of the above table the meaning is same as
   NET_GSM_SERV_TEMP_OUT_OF_ORDER.
   For more detailed description of the meaning of reject causes see GSM
   specification 24.008. Reference /10/
*/
typedef uint8 NET_MODEM_REJECT_CODES_CONST;

/* IMSI unknown in HLR */
#define NET_GSM_IMSI_UNKNOWN_IN_HLR              0x02
#define NET_GSM_ILLEGAL_MS                       0x03  /* Illegal MS */
/* IMSI unknown in VLR */
#define NET_GSM_IMSI_UNKNOWN_IN_VLR              0x04
/* IMEI not accepted */
#define NET_GSM_IMEI_NOT_ACCEPTED                0x05
#define NET_GSM_ILLEGAL_ME                       0x06  /* Illegal ME */
/* GPRS services not allowed */
#define NET_GSM_GPRS_SERVICES_NOT_ALLOWED        0x07
/* GPRS services and non-GPRS services not allowed */
#define NET_GSM_GPRS_AND_NON_GPRS_NA             0x08
/* MS identity cannot be derived by the network */
#define NET_GSM_MS_ID_CANNOT_BE_DERIVED          0x09
/* Implicitly detached */
#define NET_GSM_IMPLICITLY_DETACHED              0x0A
/* PLMN not allowed */
#define NET_GSM_PLMN_NOT_ALLOWED                 0x0B
/* Location Area not allowed */
#define NET_GSM_LA_NOT_ALLOWED                   0x0C
/* Roaming not allowed in this location area */
#define NET_GSM_ROAMING_NOT_IN_THIS_LA           0x0D
/* GPRS services not allowed in this PLMN */
#define NET_GSM_GPRS_SERV_NA_IN_THIS_PLMN        0x0E
/* No suitable cells in location area */
#define NET_GSM_NO_SUITABLE_CELLS_IN_LA          0x0F
/* MSC temporarily not reachable */
#define NET_GSM_MSC_TEMP_NOT_REACHABLE           0x10
/* Network failure */
#define NET_GSM_NETWORK_FAILURE                  0x11
#define NET_GSM_MAC_FAILURE                      0x14  /* MAC failure */
#define NET_GSM_SYNCH_FAILURE                    0x15  /* Synch failure */
#define NET_GSM_CONGESTION                       0x16  /* Congestion */
/* GSM authentication unacceptable */
#define NET_GSM_AUTH_UNACCEPTABLE                0x17
/* Service option not supported */
#define NET_GSM_SERV_OPT_NOT_SUPPORTED           0x20
/* Requested service option not subscribed */
#define NET_GSM_SERV_OPT_NOT_SUBSCRIBED          0x21
/* Service option temporarily out of order */
#define NET_GSM_SERV_TEMP_OUT_OF_ORDER           0x22
/* Retry upon entry into a new cell */
#define NET_GSM_RETRY_ENTRY_NEW_CELL_LOW         0x30
/* Retry upon entry into a new cell */
#define NET_GSM_RETRY_ENTRY_NEW_CELL_HIGH        0x3F
/* Semantically incorrect message */
#define NET_GSM_SEMANTICALLY_INCORRECT           0x5F
/* Invalid mandatory information */
#define NET_GSM_INVALID_MANDATORY_INFO           0x60
/* Message type non-existent or not implemented */
#define NET_GSM_MSG_TYPE_NONEXISTENT             0x61
/* Conditional IE error */
#define NET_GSM_CONDITIONAL_IE_ERROR             0x64
/* Message type not compatible with the protocol state */
#define NET_GSM_MSG_TYPE_WRONG_STATE             0x65
/* Protocol error, unspecified */
#define NET_GSM_PROTOCOL_ERROR_UNSPECIFIED       0x6F

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_NEIGHBOUR_CELL_INFO_TYPE                            */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_NEIGHBOUR_CELL_INFO_TYPE_CONST;

/* The information of serving cell and its neighbours; Location area code,
   Cell identity and RSSI
*/
#define NET_HOME_ZONE_CELLS                      0x00
/* The information of serving and neighbouring cells for GERAN, mainly to be
   used by SIM Application toolkit
*/
#define NET_SIM_NMR                              0x01
/* The information of Intra-frequency measurement for UTRAN, mainly to be
   used by SIM Application toolkit
*/
#define NET_SIM_INTRA_FREQ_NMR                   0x02
/* The information of Inter-frequency measurement for UTRAN, mainly to be
   used by SIM Application toolkit
*/
#define NET_SIM_INTER_FREQ_NMR                   0x03
/* The information of Inter-RAT(GSM) measurement for UTRAN, mainly to be used
   by SIM Application toolkit
*/
#define NET_SIM_INTER_RAT_NMR                    0x04
/* The information of current and neighbouring cells for ECID positioning
   method
*/
#define NET_ECID_INFORMATION                     0x05
/* The information of the neighbouring cells of GERAN and UTRAN */
#define NET_NEIGHBOUR_CELLS_INFORMATION          0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_GSM_BAND_INFO_TBL                             */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_GSM_BAND_INFO_TBL_CONST;

/* The frequency belongs to GSM900 or GSM1800 or E-GSM or R-GSM frequencies
*/
#define NET_GSM_BAND_900_1800                    0x00
/* The frequency belongs to GSM850 or GSM1900 frequencies */
#define NET_GSM_BAND_850_1900                    0x01
/* The band information is either not available or does not matter */
#define NET_GSM_BAND_INFO_NOT_AVAIL              0x02
/* All supported bands can be used */
#define NET_GSM_BAND_ALL_SUPPORTED_BANDS         0x03

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_GSM_BANDS_INFO_TBL                                   */
/* ----------------------------------------------------------------------- */
typedef uint32 NET_GSM_BANDS_INFO_TBL_CONST;

/* All GSM supported bands */
#define NET_GSM_BAND_ALL_MASK                    0x00000000  /* -------------------------------- */
/* The GSM 900 band */
#define NET_GSM_BAND_900_MASK                    0x00000001  /* -------------------------------1 */
/* The GSM 1800 band */
#define NET_GSM_BAND_1800_MASK                   0x00000002  /* ------------------------------1- */
/* The GSM 1900 band */
#define NET_GSM_BAND_1900_MASK                   0x00000004  /* -----------------------------1-- */
/* The GSM 850 band */
#define NET_GSM_BAND_850_MASK                    0x00000008  /* ----------------------------1--- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_WCDMA_BANDS_INFO_TBL                                 */
/* ----------------------------------------------------------------------- */
typedef uint32 NET_WCDMA_BANDS_INFO_TBL_CONST;

/* All WCDMA band supported by phone */
#define NET_WCDMA_FDD_BAND_ALL_MASK              0x00000000  /* -------------------------------- */
/* The WCDMA FDD BAND 1 */
#define NET_WCDMA_FDD_BAND_1_MASK                0x00000001  /* -------------------------------1 */
/* The WCDMA FDD BAND 2 */
#define NET_WCDMA_FDD_BAND_2_MASK                0x00000002  /* ------------------------------1- */
/* The WCDMA FDD BAND 3 */
#define NET_WCDMA_FDD_BAND_3_MASK                0x00000004  /* -----------------------------1-- */
/* The WCDMA FDD BAND 4 */
#define NET_WCDMA_FDD_BAND_4_MASK                0x00000008  /* ----------------------------1--- */
/* The WCDMA FDD BAND 5 */
#define NET_WCDMA_FDD_BAND_5_MASK                0x00000010  /* ---------------------------1---- */
/* The WCDMA FDD BAND 6 */
#define NET_WCDMA_FDD_BAND_6_MASK                0x00000020  /* --------------------------1----- */
/* The WCDMA FDD BAND 7 */
#define NET_WCDMA_FDD_BAND_7_MASK                0x00000040  /* -------------------------1------ */
/* The WCDMA FDD BAND 8 */
#define NET_WCDMA_FDD_BAND_8_MASK                0x00000080  /* ------------------------1------- */
/* The WCDMA FDD BAND 9 */
#define NET_WCDMA_FDD_BAND_9_MASK                0x00000100  /* -----------------------1-------- */
/* The WCDMA FDD BAND 10 */
#define NET_WCDMA_FDD_BAND_10_MASK               0x00000200  /* ----------------------1--------- */
/* The WCDMA FDD BAND 11 */
#define NET_WCDMA_FDD_BAND_11_MASK               0x00000400  /* ---------------------1---------- */
/* The WCDMA FDD BAND 12 */
#define NET_WCDMA_FDD_BAND_12_MASK               0x00000800  /* --------------------1----------- */
/* The WCDMA FDD BAND 13 */
#define NET_WCDMA_FDD_BAND_13_MASK               0x00001000  /* -------------------1------------ */
/* The WCDMA FDD BAND 14 */
#define NET_WCDMA_FDD_BAND_14_MASK               0x00002000  /* ------------------1------------- */
/* The WCDMA FDD BAND 15 */
#define NET_WCDMA_FDD_BAND_15_MASK               0x00004000  /* -----------------1-------------- */
/* The WCDMA FDD BAND 16 */
#define NET_WCDMA_FDD_BAND_16_MASK               0x00008000  /* ----------------1--------------- */
/* The WCDMA FDD BAND 17 */
#define NET_WCDMA_FDD_BAND_17_MASK               0x00010000  /* ---------------1---------------- */
/* The WCDMA FDD BAND 18 */
#define NET_WCDMA_FDD_BAND_18_MASK               0x00020000  /* --------------1----------------- */
/* The WCDMA FDD BAND 19 */
#define NET_WCDMA_FDD_BAND_19_MASK               0x00040000  /* -------------1------------------ */
/* The WCDMA FDD BAND 20 */
#define NET_WCDMA_FDD_BAND_20_MASK               0x00080000  /* ------------1------------------- */
/* The WCDMA FDD BAND 21 */
#define NET_WCDMA_FDD_BAND_21_MASK               0x00100000  /* -----------1-------------------- */
/* The WCDMA FDD BAND 22 */
#define NET_WCDMA_FDD_BAND_22_MASK               0x00200000  /* ----------1--------------------- */
/* The WCDMA FDD BAND 23 */
#define NET_WCDMA_FDD_BAND_23_MASK               0x00400000  /* ---------1---------------------- */
/* The WCDMA FDD BAND 24 */
#define NET_WCDMA_FDD_BAND_24_MASK               0x00800000  /* --------1----------------------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_EUTRAN_BANDS_INFO_TBL - Valid from version 016.007   */
/* ----------------------------------------------------------------------- */
typedef uint32 NET_EUTRAN_BANDS_INFO_TBL_CONST;

/* The band information is either not available or does not matter. */
#define NET_EUTRAN_NO_BANDS                      0x00000000  /* -------------------------------- */
/* The EUTRAN BAND 1 */
#define NET_EUTRAN_BAND_1_MASK                   0x00000001  /* -------------------------------1 */
/* The EUTRAN BAND 2 */
#define NET_EUTRAN_BAND_2_MASK                   0x00000002  /* ------------------------------1- */
/* The EUTRAN BAND 3 */
#define NET_EUTRAN_BAND_3_MASK                   0x00000004  /* -----------------------------1-- */
/* The EUTRAN BAND 4 */
#define NET_EUTRAN_BAND_4_MASK                   0x00000008  /* ----------------------------1--- */
/* The EUTRAN BAND 5 */
#define NET_EUTRAN_BAND_5_MASK                   0x00000010  /* ---------------------------1---- */
/* The EUTRAN BAND 6 */
#define NET_EUTRAN_BAND_6_MASK                   0x00000020  /* --------------------------1----- */
/* The EUTRAN BAND 7 */
#define NET_EUTRAN_BAND_7_MASK                   0x00000040  /* -------------------------1------ */
/* The EUTRAN BAND 8 */
#define NET_EUTRAN_BAND_8_MASK                   0x00000080  /* ------------------------1------- */
/* The EUTRAN BAND 9 */
#define NET_EUTRAN_BAND_9_MASK                   0x00000100  /* -----------------------1-------- */
/* The EUTRAN  BAND 10 */
#define NET_EUTRAN_BAND_10_MASK                  0x00000200  /* ----------------------1--------- */
/* The EUTRAN BAND 11 */
#define NET_EUTRAN_BAND_11_MASK                  0x00000400  /* ---------------------1---------- */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_MODEM_GPRS_NETWORK_MODE                             */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_MODEM_GPRS_NETWORK_MODE_CONST;

/* Mode is unknown or GPRS is not in use */
#define NET_GPRS_MODE_NONE                       0x00
/* Combined location update procedure for GMM and MM is used */
#define NET_GPRS_MODE_I                          0x01
/* Both GMM and MM perform a separate location update */
#define NET_GPRS_MODE_II                         0x02
/* Either GMM or MM is registered and performs the location update */
#define NET_GPRS_MODE_III                        0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_UMA_FAILURE_REASON                                  */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_UMA_FAILURE_REASON_CONST;

/* The provosioning UNC is too busy or congested */
#define NET_NETWORK_CONGESTION                   0x00
/* The AP is barred by the UMA Access Point database */
#define NET_AP_NOT_ALLOWED                       0x01
/* The CGI (location value) is barred by the UMA CGI database */
#define NET_LOCATION_NOT_ALLOWED                 0x02
/* Network communication error at the UNC */
#define NET_INVALID_UNC                          0x03
/* The geological location is not known */
#define NET_GEO_LOCATION_NOT_KNOWN               0x04
/* The SIM is barred by the UMA subscriber database */
#define NET_IMSI_NOT_ALLOWED                     0x05
/* Network communication error at the UNC */
#define NET_UNSPECIFIED                          0x06
/* The Security Gateway could not establish a connection with serving UNC.
   The UNC may be down
*/
#define NET_UNC_SGW_CERTIF_NOT_VALID             0x07
/* EAP_SIM communication failed. The UMA Network's AAA (authentication,
   authorization, accounting) server may be down
*/
#define NET_EAP_SIM_AUTH_FAILED                  0x08
/* TCP connection establishment failed */
#define NET_TCP_ESTABLISHMENT_FAILED             0x09
/* UNC redirection. This is normal behaviour, no problem found */
#define NET_REDIRECTION                          0x0A
/* UMA secure connection establishment failed due EAP-AKA authentication */
#define NET_EAP_AKA_AUTH_FAILED                  0x0B
/* The TCP connection has been reseted */
#define NET_TCP_CONNECTION_RESET                 0x14
/* TCP link creation failed */
#define NET_TCP_LINK_CREATION_FAILED             0x15
/* Query of IP address failed */
#define NET_DHCP_QUERY_NO_IP_ADDRESS             0x16
/* Could not convert Domain Name to IP address. Network's DNS server may be
   down
*/
#define NET_DNS_QUERY_FAILED                     0x17
/* Address resolution procedure failed */
#define NET_ARP_PROCEDURE_FAILED                 0x18
/* Can't establish connection to network */
#define NET_NW_LINK_CREATION_FAILED              0x19
/* Secure tunnel creation fails */
#define NET_SEC_TUNNEL_CREATION_FAIL             0x1A
/* WLAN connection failed due authentication. Check used WEP/WPA keys */
#define NET_WLAN_AUTH_FAILED                     0x1E
/* WLAN coverage lost suddenly */
#define NET_WLAN_COVERAGE_LOSS                   0x1F
/* Other WLAN related failure cases */
#define NET_WLAN_GENERIC_FAILURE                 0x20
/* RM rejects UMA PLMN. UMA service via that PLMN not possible */
#define NET_UMA_PLMN_REJECTED                    0x21
/* Network rejects Location Update made over UMA */
#define NET_UMA_LU_REJECTED                      0x22
/* TCP link re-establishment ~ TCP reset */
#define NET_IP_ADDRESS_UPDATED                   0x23
/* Network or secure connection lost during UMA connection */
#define NET_NW_LINK_LOST                         0x24
/* TCP connection lost during UMA connection */
#define NET_TCP_CONNECTION_LOST                  0x25
/* Unrecoverable loop due to misbehaving network */
#define NET_UMA_UNRECOVERABLE_LOOP               0x26
/* UMA voice call failed */
#define NET_UMA_VOICE_CALL_FAILED                0x28
/* Could not convert Domain Name to IP address for SGW. */
#define NET_DNS_QUERY_SGW_FAILED                 0x29
/* Could not convert Domain Name to IP address for UNC. */
#define NET_DNS_QUERY_UNC_FAILED                 0x30
/* UMA connection succeeded */
#define NET_UMA_CONNECTED                        0xFE

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_UMA_FAILURE_SEVERITY - Valid from version 009.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_UMA_FAILURE_SEVERITY_CONST;

/* Just informative error cause */
#define NET_SEVERITY_MINOR                       0x00
/* Can be recovered by user interaction, e.g. wrong settings stored to
   terminal
*/
#define NET_SEVERITY_SEVERE                      0x01
/* Can be recovered only after reboot */
#define NET_SEVERITY_FATAL                       0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_UMA_FAILURE_PHASE - Valid from version 009.000      */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_UMA_FAILURE_PHASE_CONST;

/* Registration towards Provision UNC/SGW */
#define NET_DISCOVERY_PROCEDURE                  0x00
/* Registration towards Default UNC/SGW */
#define NET_REGISTRATION_PROCEDURE               0x01
/* Registration towards Serving UNC/SGW */
#define NET_REG_REDIR_PROCEDURE                  0x02
/* During UMA connection */
#define NET_ERR_AFTER_UMA_REGISTRATION           0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_UTRAN_RADIO_STATE                                   */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_UTRAN_RADIO_STATE_CONST;

/* Radio state is Idle */
#define NET_UTRAN_RADIO_IDLE                     0x00
/* Radio state is Cell DCH */
#define NET_UTRAN_RADIO_CELL_DCH                 0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_SIGNAL_LEVEL_TYPE_TBL - Valid from version 016.010  */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_SIGNAL_LEVEL_TYPE_TBL_CONST;

#define PERCENT                                  0x00  /* Percent */
#define DBM                                      0x01  /* dBm */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_NW_ACCESS_CONF_OPERATIONS_TBL - Valid from version 017.002 */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_NW_ACCESS_CONF_OPERATIONS_TBL_CONST;

/* Configure the Network access.  */
#define NET_NW_ACCESS_CONFIGURE                  0x00
/* Query the statuses of Registration mode and Roaming mode.  */
#define NET_NW_ACCESS_QUERY_ALL                  0x01
/* Query the status of Registration mode.  */
#define NET_NW_ACCESS_QUERY_REGISTRATION         0x02
/* Query the status of Roaming mode.  */
#define NET_NW_ACCESS_QUERY_ROAMING              0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_REGISTRATION_MODE_TBL - Valid from version 017.002  */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_REGISTRATION_MODE_TBL_CONST;

/* Registration is not allowed.  */
#define NET_REGISTRATION_DISABLED                0x00
/* Registration is allowed. */
#define NET_REGISTRATION_ENABLED                 0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_ROAMING_MODE_TBL - Valid from version 017.002       */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_ROAMING_MODE_TBL_CONST;

/* Roaming is not allowed.  */
#define NET_ROAMING_DISABLED                     0x00
/* Roaming is allowed. */
#define NET_ROAMING_ENABLED                      0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_REG_INFO_TBL - Valid from version 017.002            */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_REG_INFO_TBL_CONST;

/* The detailed registration information is either not available or does not
   matter.
*/
#define NET_REG_INFO_NOT_AVAIL                   0x00  /* 00000000 */
/* Registration is not allowed.  */
#define NET_REG_INFO_REG_NOT_ALLOWED             0x01  /* -------1 */
/* Roaming is not allowed.  */
#define NET_REG_INFO_ROAM_NOT_ALLOWED            0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Constant Table: NET_DOMAIN_TYPE_TBL - Valid from version 017.005        */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_DOMAIN_TYPE_TBL_CONST;

#define NET_DOMAIN_CS                            0x00  /* Domain is CS */
#define NET_DOMAIN_PS                            0x01  /* Domain is PS */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: NET_REG_STATUS_IND_SEND_MODE_TBL - Valid from version 017.006 */
/* ----------------------------------------------------------------------- */
typedef uint8 NET_REG_STATUS_IND_SEND_MODE_TBL_CONST;

/* Default mode. Message is sent every time some parameter indicated in
   message changes. 
*/
#define NET_MSG_SEND_MODE_SEND_ALL               0x00  /* 00000000 */
/* Message is sent when registration status (in sub block
   NET_MODEM_REG_INFO_COMMON ) or CS services (in sub block
   NET_MODEM_GSM_REG_INFO ) or GPRS services (in sub block
   NET_MODEM_GSM_REG_INFO ) changes. 
*/
#define NET_MSG_SEND_MODE_REG_STATUS_CHANGE      0x01  /* -------1 */
/* Message is sent when Cell ID and/or LAC (in sub block
   NET_MODEM_GSM_REG_INFO ) changes. 
*/
#define NET_MSG_SEND_MODE_CELL_ID_OR_LAC_CHANGE  0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define NET_MODEM_REG_STATUS_GET_REQ             0x00
#define NET_MODEM_REG_STATUS_GET_RESP            0x01
#define NET_MODEM_REG_STATUS_IND                 0x02
#define NET_MODEM_AVAILABLE_GET_REQ              0x03
#define NET_MODEM_AVAILABLE_GET_RESP             0x04
#define NET_AVAILABLE_CANCEL_REQ                 0x05
#define NET_AVAILABLE_CANCEL_RESP                0x06
#define NET_SET_REQ                              0x07
#define NET_SET_RESP                             0x08
#define NET_SET_CANCEL_REQ                       0x09
#define NET_SET_CANCEL_RESP                      0x0A
#define NET_RSSI_GET_REQ                         0x0B
#define NET_RSSI_GET_RESP                        0x0C
#define NET_CS_CONTROL_REQ                       0x0D
#define NET_CS_CONTROL_RESP                      0x0E
#define NET_CS_WAKEUP_REQ                        0x0F
#define NET_CS_WAKEUP_RESP                       0x10
#define NET_TEST_CARRIER_REQ                     0x11
#define NET_TEST_CARRIER_RESP                    0x12
#define NET_CS_STATE_IND                         0x19
#define NET_NEIGHBOUR_CELLS_REQ                  0x1A
#define NET_NEIGHBOUR_CELLS_RESP                 0x1B
#define NET_NETWORK_SELECT_MODE_SET_REQ          0x1C
#define NET_NETWORK_SELECT_MODE_SET_RESP         0x1D
#define NET_RSSI_IND                             0x1E
#define NET_CIPHERING_IND                        0x20
#define NET_TIME_IND                             0x27
#define NET_CHANNEL_INFO_IND                     0x2C
#define NET_CHANNEL_INFO_REQ                     0x2D
#define NET_CHANNEL_INFO_RESP                    0x2E
#define NET_RAT_IND                              0x35
#define NET_RAT_REQ                              0x36
#define NET_RAT_RESP                             0x37
#define NET_CS_STATE_REQ                         0x3A
#define NET_CS_STATE_RESP                        0x3B
#define NET_UMA_INFO_IND                         0x3C
#define NET_RADIO_INFO_IND                       0x3F
#define NET_CELL_INFO_GET_REQ                    0x40
#define NET_CELL_INFO_GET_RESP                   0x41
#define NET_CELL_INFO_IND                        0x42
#define NET_NITZ_NAME_IND                        0x43
#define NET_SOR_REQ                              0x44
#define NET_SOR_RESP                             0x45
#define NET_RSSI_CONF_REQ                        0x46
#define NET_RSSI_CONF_RESP                       0x47
#define NET_NW_ACCESS_CONF_REQ                   0x48
#define NET_NW_ACCESS_CONF_RESP                  0x49
#define NET_CONFIGURE_REQ                        0x4A
#define NET_CONFIGURE_RESP                       0x4B

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define NET_MODEM_REG_INFO_COMMON                0x00
#define NET_MODEM_AVAIL_NETWORK_INFO_COMMON      0x01
#define NET_OPERATOR_INFO_COMMON                 0x02
#define NET_RSSI_CURRENT                         0x04
#define NET_BER_CURRENT                          0x57
#define NET_ECNO_CURRENT                         0x5C
#define NET_TEST_CARRIER_PARAM                   0x05
#define NET_TEST_WCDMA_PARAMS                    0x2D
#define NET_CIPHERING_INFO                       0x29
#define NET_MODEM_GSM_REG_INFO                   0x09
#define NET_MODEM_CURRENT_CELL_INFO              0x39
#define NET_TIME_INFO                            0x10
#define NET_MODEM_DETAILED_NETWORK_INFO          0x0B
#define NET_MODEM_GSM_OPERATOR_INFO              0x0C
#define NET_GSM_HOME_CELLS_INFO                  0x0D
#define NET_GSM_SIM_NMR_INFO                     0x0E
#define NET_MODEM_CAUSE_EXTENSION                0x0F
#define NET_MODEM_GSM_BAND_INFO                  0x11
#define NET_UTRAN_SIM_NMR_INFO                   0x3D
#define NET_ECID_GERAN_INFO                      0x3E
#define NET_ECID_UTRAN_FDD_INFO                  0x3F
#define NET_NEIGHBOUR_CELLS_GERAN_INFO           0x55
#define NET_NEIGHBOUR_CELLS_UTRAN_INFO           0x56
#define NET_ECID_GERAN_ADDITIONAL_INFO           0x5E
#define NET_RAT_INFO                             0x2C
#define NET_MODEM_UMA_SERVICE_ZONE_INFO          0x37
#define NET_UMA_FAILURE_INFO                     0x38
#define NET_UTRAN_RADIO_INFO                     0x3C
#define NET_UARFCN_INFO                          0x28
#define NET_GSM_CELL_INFO                        0x46
#define NET_WCDMA_CELL_INFO                      0x47
#define NET_EPS_CELL_INFO                        0x50
#define NET_FULL_NITZ_NAME                       0x48
#define NET_SHORT_NITZ_NAME                      0x49
#define NET_RSSI_CONF_INFO                       0x54
#define NET_GSM_FRAME_INFO                       0x58
#define NET_REGISTRATION_CONF_INFO               0x59
#define NET_ROAMING_CONF_INFO                    0x5A
#define NET_MODEM_DETAILED_REG_INFO              0x5B
#define NET_REG_STATUS_IND_CONF_INFO             0x5D

/* ----------------------------------------------------------------------- */
/* Sequence: NET_GSM_NMR_LIST_SEQ - Valid from version 009.001             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  arfcn;
    uint8   bsic;
    /* Measured power of the channel. The actual measured power X in dBm is
       derived from this value N by using the formula X = N-110.
    */
    uint8   rx_level;
    } tNET_SeqOfGsmNmrList;


/* ----------------------------------------------------------------------- */
/* Sequence: NET_GSM_NMR_INFO_SEQ - Valid from version 017.000             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  mcc;
    uint16  mnc;
    /* LAC is invalid in case MCC value is NET_MCC_INVALID and MNC value is
       NET_MNC_INVALID.
    */
    uint16  lac;
    /* Cell ID is invalid in case MCC value is NET_MCC_INVALID and MNC value
       is NET_MNC_INVALID.
    */
    uint16  cell_id;
    /* Measured power of the channel. The actual measured power X in dBm is
       derived from this value N by using the formula X = N-110.
    */
    uint8   rx_level;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SeqOfGsmNmrInfo;


/* ----------------------------------------------------------------------- */
/* Sequence: NET_UTRAN_CELL_LIST_SEQ - Valid from version 009.001          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint32  uc_id;
    uint16  p_cpich;
    uint8   cpich_ecno;
    int8    cpich_rscp;
    uint8   pathloss;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SeqOfUtranCellList;


/* ----------------------------------------------------------------------- */
/* Sequence: NET_UTRAN_NEIGH_LIST_SEQ - Valid from version 009.001         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  uarfcn_dl;
    uint8   uc_rssi;
    uint8   n_cell;
    tNET_SeqOfUtranCellList detailed_cell_info[NET_MODEM_ANY_SIZE];
    } tNET_SeqOfUtranNmrList;


/* ----------------------------------------------------------------------- */
/* Sequence: NET_UTRAN_NEIGH_INFO_SEQ - Valid from version 017.000         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  pri_scrambling;
    /* Measured power of the channel. The actual measured power X in dBm is
       derived from this value N by using the formula X = N-116.
    */
    int8    cpich_rscp;
    uint8   pad1;
    } tNET_SeqOfUtranNmrInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_REG_INFO_COMMON - Valid from version 014.000        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_MODEM_REGISTRATION_STATUS */
    uint8   registration_status;
    /* A subset of values from the constant table
       NET_MODEM_NETWORK_SELECTION_MODE
    */
    uint8   network_selection_mode;
    } tNET_SubModemRegInfoCommon;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_AVAIL_NETWORK_INFO_COMMON - Valid from version 014.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_MODEM_NETWORK_STATUS */
    uint8   network_status;
    /* Index referring to CS arrays. It can be used when selecting network
       with NET_SET_REG. 
    */
    uint8   index;
    } tNET_SubModemAvailNetworkInfoCommon;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_OPERATOR_INFO_COMMON                                      */
/* ----------------------------------------------------------------------- */
/* Index is used only if Network selection mode is set to
   NET_SELECT_MODE_MANUAL. Index values are found from NET_AVAIL_RESP in sub
   blocks NET_MODEM_AVAIL_NETWORK_INFO_COMMON. When index is not used, it
   shall be set as NET_INDEX_NOT_USED
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* A subset of values from the constant table
       NET_MODEM_NETWORK_SELECTION_MODE
    */
    uint8   selection_mode;
    uint8   index;        /* Index referring to CS arrays */
    } tNET_SubOperInfoCommon;

#define NET_SUB_OPER_INFO_COMMON_LEN   sizeof(tNET_SubOperInfoCommon)


/* ----------------------------------------------------------------------- */
/* Subblock: NET_RSSI_CURRENT                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   signal_bars;
    uint8   rssi_in_dbm;
    } tNET_SubRssiCurrent;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_BER_CURRENT - Valid from version 017.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* As RXQUAL values in the table in TS 45.008 / chapter 8.2.4. */
    uint8   ber;
    uint8   pad;
    } tNET_SubBerCurrent;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_ECNO_CURRENT - Valid from version 017.004                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   ecno;
    uint8   pad;
    } tNET_SubEcnoCurrent;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_TEST_CARRIER_PARAM                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  carrier_channel_nbr;
    /* Values from the constant table NET_BAND_SELECTION */
    uint8   band_selection;
    /* Values from the constant table NET_TEST_CARRIER_TYPE */
    uint8   test_carrier_type;
    uint8   pad1;
    uint8   pad2;
    } tNET_SubTestCarrierParam;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_TEST_WCDMA_PARAMS                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  carrier_channel_nbr;
    uint16  carrier_scrambling_code;
    /* Values from the constant table NET_TEST_CARRIER_TYPE */
    uint8   test_carrier_type;
    uint8   pad2;
    } tNET_SubTestWCDMAParams;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_CIPHERING_INFO                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_CIPHERING_KEY_STATUS */
    uint8   ciphering_key_status;
    /* Values from the constant table NET_CIPHERING_CONTEXT */
    uint8   ciphering_context;
    uint8   active_rat;   /* Values from the constant table NET_ACTIVE_RAT */
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubCipheringInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_GSM_REG_INFO - Valid from version 014.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_lac;  /* Location Area Code or Tracking Area Code */
    uint32  current_cell_id;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* A subset of values from the constant table NET_MODEM_GSM_BAND_INFO_TBL
    */
    uint8   gsm_band_info;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    uint8   gprs_support_in_cell;
    /* Values from the constant table NET_MODEM_GPRS_NETWORK_MODE */
    uint8   gprs_network_mode;
    uint8   cs_services;
    uint8   gprs_services;
    uint8   egprs_support_in_cell;
    uint8   dtm_support_in_cell;
    uint8   current_rac;  /* Routing Area Code */
    /* If set TRUE then the cell supports HSDPA. If set FALSE then support
       either way has not been indicated by the NW.
    */
    uint8   hsdpa_available_in_cell;
    /* If set TRUE then the cell supports HSUPA. If set FALSE then support
       either way has not been indicated by the NW.
    */
    uint8   hsupa_available_in_cell;
    /* If set TRUE then the PLMN is HPLMN or equivalent HPLMN. In other cases
       (also in case where the PLMN is equivalent with (E)HPLMN)
       camped_in_hplmn is set to FALSE.
    */
    uint8   camped_in_hplmn;
    uint8   rat_name;     /* Values from the constant table NET_RAT_NAME */
    } tNET_SubModemGsmRegInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_CURRENT_CELL_INFO - Valid from version 014.000      */
/* ----------------------------------------------------------------------- */
/* This sub block carries the same information as the sub block
   NET_MODEM_GSM_REG_INFO, but this is added to NET_MODEM_REG_STATUS_IND
   message only when phone is in 3G connected mode. This sub block carries
   the valid cell information when phone is in 3G connected mode. 
*/

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_lac;  /* Location Area Code */
    uint32  current_cell_id;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* A subset of values from the constant table NET_MODEM_GSM_BAND_INFO_TBL
    */
    uint8   gsm_band_info;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    uint8   gprs_support_in_cell;
    /* Values from the constant table NET_MODEM_GPRS_NETWORK_MODE */
    uint8   gprs_network_mode;
    uint8   cs_services;
    uint8   gprs_services;
    uint8   egprs_support_in_cell;
    uint8   dtm_support_in_cell;
    uint8   current_rac;  /* Routing Area Code */
    /* If set TRUE then the cell supports HSDPA. If set FALSE then support
       either way has not been indicated by the NW.
    */
    uint8   hsdpa_available_in_cell;
    /* If set TRUE then the cell supports HSUPA. If set FALSE then support
       either way has not been indicated by the NW.
    */
    uint8   hsupa_available_in_cell;
    /* If set TRUE then the PLMN is HPLMN or equivalent HPLMN. In other cases
       (also in case where the PLMN is equivalent with (E)HPLMN)
       camped_in_hplmn is set to FALSE.
    */
    uint8   camped_in_hplmn;
    uint8   pad1;
    } tNET_SubNetModemCurrentCellInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_TIME_INFO                                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Year or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case
       only time zone is sent by network.  Only the two last digits are
       indicated
    */
    uint8   year;
    /* Month or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case
       only time zone is sent by network. 
    */
    uint8   month;
    /* Day or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case only
       time zone is sent by network. 
    */
    uint8   day;
    /* Hour or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case
       only time zone is sent by network. 
    */
    uint8   hour;
    /* Minute or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case
       only time zone is sent by network. 
    */
    uint8   minute;
    /* Second or NET_INVALID_TIME. Value is set to NET_INVALID_TIME in case
       only time zone is sent by network. 
    */
    uint8   second;
    /* x-------  Time sign 1 is negative and 0 is positive
       -x------  reserved
       --xxxxxx  Time Zone
    */
    uint8   time_zone;
    /* Values from the constant table NET_DAYLIGHT_SAVING_TIME */
    uint8   day_light_saving_time;
    uint8   pad1;
    uint8   pad2;
    } tNET_SubTimeInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_DETAILED_NETWORK_INFO - Valid from version 014.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   oper_code1;
    uint8   oper_code2;
    uint8   oper_code3;
    /* A subset of values from the constant table NET_MODEM_GSM_BAND_INFO_TBL
    */
    uint8   band_info;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    /* A subset of values from the constant table NET_MODEM_UMTS_AVAIL_INFO
    */
    uint8   umts_available;
    uint16  current_lac;  /* Location Area Code */
    uint8   pad1;
    uint8   pad2;
    } tNET_SubModemDetailedNetworkInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_GSM_OPERATOR_INFO - Valid from version 014.001      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   oper_code1;
    uint8   oper_code2;
    uint8   oper_code3;
    /* Values from the constant table NET_MODEM_GSM_BAND_INFO_TBL */
    uint8   band_info;
    uint8   pad1;
    uint8   pad2;
    } tNET_SubModemGsmOperInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_GSM_HOME_CELLS_INFO                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   number_of_measurements;
    uint8   pad;
    uint32  cell_identity_1;
    /* the contents depend on the number_of_measurements.
     * May be several bytes of more data */
    } tNET_SubGsmHomeCellsInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_GSM_SIM_NMR_INFO                                          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* The contents are equal to Measurements Results information element
       starting at octet 2. The description can be found in 3GPP TS 44.018
       (See reference /18/ for details)
    */
    uint8   measurement_results[16];
    uint8   pad;
    uint8   number_of_channels; /* Number of BCCH channels */
    uint8   arfcn1_msb;
    uint8   arfcn1_lsb;
    /* may be longer... */
    } tNET_SubGsmSimNmrInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_CAUSE_EXTENSION                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_MODEM_REJECT_CODES */
    uint8   reject_code;
    uint8   pad;
    } tNET_SubModemCauseExtension;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_GSM_BAND_INFO - Valid from version 014.001          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* A subset of values from the constant table NET_MODEM_GSM_BAND_INFO_TBL
    */
    uint8   band_info;
    uint8   pad;
    } tNET_SubModemGsmBandInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UTRAN_SIM_NMR_INFO - Valid from version 009.001           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   meas_report_length;
    uint8   pad;
    /* The contents are equal to Measurements Report coded as RRC:UL-DCCH
       message. The description can be found in 3GPP TS 25.331/16/
    */
    uint8   meas_report;
    } tNET_SubUtranSimNmrInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_ECID_GERAN_INFO - Valid from version 009.001              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_mcc;
    uint16  current_mnc;
    uint16  current_lac;
    uint16  current_cell_id;
    uint8   current_ta;
    uint8   n_nmr;        /* NMR list for GSM */
    tNET_SeqOfGsmNmrList gsm_nmr_list[NET_MODEM_ANY_SIZE];
    } tNET_SubGsmEcidInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_ECID_UTRAN_FDD_INFO - Valid from version 009.001          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   filler_byte;
    uint16  sub_block_length;
    uint32  uc_id;
    uint16  current_mcc;
    uint16  current_mnc;
    uint16  pri_scrambling;
    uint16  uarfcn_dl;
    uint8   n_nmr;        /* NMR list for WCDMA */
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    tNET_SeqOfUtranNmrList wcdma_nmr_list[NET_MODEM_ANY_SIZE];
    } tNET_SubUtranEcidInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_NEIGHBOUR_CELLS_GERAN_INFO - Valid from version 017.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   n_nmr;
    uint8   pad1;
    tNET_SeqOfGsmNmrInfo gsm_nmr_list[NET_MODEM_ANY_SIZE];
    } tNET_SubGeranNeighCellsInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_NEIGHBOUR_CELLS_UTRAN_INFO - Valid from version 017.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   n_nmr;
    uint8   pad1;
    tNET_SeqOfUtranNmrInfo wcdma_nmr_list[NET_MODEM_ANY_SIZE];
    } tNET_SubUtranNeighCellsInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_ECID_GERAN_ADDITIONAL_INFO - Valid from version 017.007   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   current_bsic;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   pad4;
    uint8   pad5;
    } tNET_EcidGeranAdditionalInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_RAT_INFO                                                  */
/* ----------------------------------------------------------------------- */
/* Only four first bytes used in case of NET_SET_REQ. */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   rat_name;     /* Values from the constant table NET_RAT_NAME */
    uint8   additional_rat_info_length;
    /* Values from the bitmask table NET_ADDITIONAL_RAT_INFO */
    } tNET_SubRatInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_UMA_SERVICE_ZONE_INFO - Valid from version 014.000  */
/* ----------------------------------------------------------------------- */
/* NOTE! Sub block is sent only when UMA is active. */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* 1 or 128-254. Value 1:  Unlimited calls. Values 128-254 are operator
       specific. All other values are reserved.
    */
    uint8   uma_service_zone_inicator;
    uint8   alpha_tag_length;
/* the fields after this can be various lengths, so only the 
 * begin address of alpha_tag can be found here. */
    uint8   alpha_tag[NET_MODEM_ANY_SIZE]; /* 0 - n */
    uint8   pads[2]; /* 0 or 2  */
    } tNET_SubModemUmaServiceZoneInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UMA_FAILURE_INFO - Obsolete from version 009.000          */
/* ----------------------------------------------------------------------- */

#if !NET_MODEM_ISI_MIN_VERSION(9,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_UMA_FAILURE_REASON */
    uint8   failure_cause;
    uint8   pad1;
    } tNET_SubUmaFailureInfo;

#endif /* !NET_MODEM_ISI_MIN_VERSION(9,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UMA_FAILURE_INFO - Valid from version 009.000             */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(9,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_UMA_FAILURE_REASON */
    uint8   failure_cause;
    /* Values from the constant table NET_UMA_FAILURE_SEVERITY */
    uint8   failure_severity;
    /* Values from the constant table NET_UMA_FAILURE_PHASE */
    uint8   failure_phase;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubUmaFailureInfo;

#endif /* NET_MODEM_ISI_MIN_VERSION(9,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UTRAN_RADIO_INFO - Versions 007.002 - 008.000             */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(7,2) && !NET_MODEM_ISI_MIN_VERSION(8,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_UTRAN_RADIO_STATE */
    uint8   radio_state;
    uint8   pad1;
    } tNET_SubUtranRadioInfo;

#endif /* NET_MODEM_ISI_MIN_VERSION(7,2) && !NET_MODEM_ISI_MIN_VERSION(8,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UTRAN_RADIO_INFO - Valid from version 008.000             */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(8,0)

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_UTRAN_RADIO_STATE */
    uint8   radio_state;
    uint8   hsdpa_allocated;
    uint8   hsupa_allocated;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubUtranRadioInfo;

#endif /* NET_MODEM_ISI_MIN_VERSION(8,0) */


/* ----------------------------------------------------------------------- */
/* Subblock: NET_UARFCN_INFO - Valid from version 009.004                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* UTRAN radio channel number. Value range can be found from  reference
       /17/.
    */
    uint16  uarfcn;
    } tNET_SubUARFCNInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_GSM_CELL_INFO - Valid from version 011.002                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_lac;  /* Location Area Code */
    uint32  current_cell_id;
    /* Values from the bitmask table NET_GSM_BANDS_INFO_TBL */
    uint32  NET_GSM_CELL_INFO_BAND;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* Values from the constant table NET_SERVICE_STATUS */
    uint8   service_status;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubGsmCellInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_WCDMA_CELL_INFO - Valid from version 011.002              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_lac;  /* Location Area Code */
    uint32  current_cell_id;
    /* Values from the bitmask table NET_WCDMA_BANDS_INFO_TBL */
    uint32  NET_WCDMA_CELL_INFO_BAND;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* Values from the constant table NET_SERVICE_STATUS */
    uint8   service_status;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubWcdmaCellInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_EPS_CELL_INFO - Valid from version 016.007                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint16  current_tac;  /* Tracking Area Code */
    uint32  current_cell_id;
    /* Values from the bitmask table NET_EUTRAN_BANDS_INFO_TBL */
    uint32  NET_EPS_CELL_INFO_BAND;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* Values from the constant table NET_SERVICE_STATUS */
    uint8   service_status;
    /* A subset of values from the constant table NET_MODEM_GSM_NETWORK_TYPE
    */
    uint8   network_type;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    } tNET_SubEpsCellInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_FULL_NITZ_NAME - Valid from version 014.000               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   data_length;
    uint8   pad;
    /* The content of data field is equal to Network name IE received from
       Network. The IE description can be found from 3GPP TS 24.008. 
    */
    uint8   data;
    } tNET_SubFullNitzName;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_SHORT_NITZ_NAME - Valid from version 014.000              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   data_length;
    uint8   pad;
    /* The content is equal to Network name IE received from Network. The IE
       description can be found from 3GPP TS 24.008
    */
    uint8   data;
    } tNET_SubShortNitzName;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_RSSI_CONF_INFO - Valid from version 016.010               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Configured signal level type ( percent or dBm ). 
       Values from the constant table NET_SIGNAL_LEVEL_TYPE_TBL
    */
    uint8   NET_SIGNAL_LEVEL_TYPE;
    /* Hysteresis when signal weakening. Unit is 1% or 1dBm, depending on
       configured signal level type.
    */
    uint8   hysteresis_down;
    /* Hysteresis when signal improving. Unit is 1% or 1dBm, depending on
       configured signal level type.
    */
    uint8   hysteresis_up;
    /* Value NET_RSSI_UNDEFINED is used in case Configured signal level type
       is percent
    */
    uint8   low_limit;
    /* Value NET_RSSI_UNDEFINED is used in case Configured signal level type
       is percent
    */
    uint8   up_limit;
    uint8   pad1;
    } tNET_SubRssiConfInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_GSM_FRAME_INFO - Valid from version 017.001               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   pad1;
    uint8   pad2;
    uint32  gsm_frame_nbr;
    } tNET_SubGsmFrameNbr;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_REGISTRATION_CONF_INFO - Valid from version 017.002       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_REGISTRATION_MODE_TBL */
    uint8   reg_mode;
    uint8   pad2;
    } tNET_RegistrationConfInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_ROAMING_CONF_INFO - Valid from version 017.002            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the constant table NET_ROAMING_MODE_TBL */
    uint8   roam_mode;
    uint8   pad2;
    } tNET_RoamingConfInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_MODEM_DETAILED_REG_INFO - Valid from version 017.002      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    uint8   information; /* Values from the bitmask table NET_REG_INFO_TBL */
    uint8   pad2;
    } tNET_ModemDetailedRegInfo;


/* ----------------------------------------------------------------------- */
/* Subblock: NET_REG_STATUS_IND_CONF_INFO - Valid from version 017.006     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sub_block_id;
    uint8   sub_block_length;
    /* Values from the bitmask table NET_REG_STATUS_IND_SEND_MODE_TBL */
    uint8   send_mode;
    uint8   pad2;
    } tNET_RegStatusConfInfo;


/* ----------------------------------------------------------------------- */
/* Message: NET_MODEM_REG_STATUS_GET_REQ - Valid from version 014.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This is a general message for inquiring general cell information and
       registration status of CS-system
    */
    uint8   trans_id;
    uint8   message_id;
    } tNET_ModemRegStatusGetReq;

#define NET_MODEM_REG_STATUS_GET_REQ_LEN   sizeof(tNET_ModemRegStatusGetReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_MODEM_REG_STATUS_GET_RESP - Valid from version 014.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message returns the registration status of CS. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_CAUSE_EXTENSION
       NET_MODEM_CURRENT_CELL_INFO
       NET_MODEM_DETAILED_REG_INFO
       NET_MODEM_GSM_REG_INFO
       NET_MODEM_REG_INFO_COMMON
       NET_MODEM_UMA_SERVICE_ZONE_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ModemRegStatusGetResp;

#define NET_MODEM_REG_STATUS_GET_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_MODEM_REG_STATUS_IND - Valid from version 014.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is sent when a client has registered to network server
       registration status events. Message is sent every time some parameter
       indicated in sub blocks changes
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_CAUSE_EXTENSION
       NET_MODEM_CURRENT_CELL_INFO
       NET_MODEM_DETAILED_REG_INFO
       NET_MODEM_GSM_REG_INFO
       NET_MODEM_REG_INFO_COMMON
       NET_MODEM_UMA_SERVICE_ZONE_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ModemRegStatusInd;

#define NET_MODEM_REG_STATUS_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_MODEM_AVAILABLE_GET_REQ - Valid from version 014.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to search all available networks */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_MODEM_NETWORK_SEARCH_MODE */
    uint8   mode;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_GSM_BAND_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ModemAvailableGetReq;

#define NET_MODEM_AVAILABLE_GET_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_MODEM_AVAILABLE_GET_RESP - Valid from version 014.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message returns information about available networks. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_AVAIL_NETWORK_INFO_COMMON
       NET_MODEM_DETAILED_NETWORK_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ModemAvailableResp;

#define NET_MODEM_AVAILABLE_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_AVAILABLE_CANCEL_REQ                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to interrupt the network search, which was
       initiated with NET_MODEM_AVAILABLE_GET_REQ. NOTE! Cancel is possible
       only after issuing NET_MODEM_AVAILABLE_GET_REQ
    */
    uint8   trans_id;
    uint8   message_id;
    } tNET_AvailableCancelReq;

#define NET_AVAILABLE_CANCEL_REQ_LEN   sizeof(tNET_AvailableCancelReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_AVAILABLE_CANCEL_RESP                                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for interrupting the network search. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    } tNET_AvailableCancelResp;

#define NET_AVAILABLE_CANCEL_RESP_LEN   sizeof(tNET_AvailableCancelResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_SET_REQ                                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This is a general message for starting registration or setting the
       network selection mode of CS
    */
    uint8   trans_id;
    uint8   message_id;
    /* 'YES' means that the subscriber was registered in another NET server
       last time it was registered
    */
    uint8   reg_in_another_protocol;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_GSM_OPERATOR_INFO
       NET_OPERATOR_INFO_COMMON
       NET_RAT_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_SetReq;

#define NET_SET_REQ_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_SET_RESP                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This is a general response message for NET_SET_REQ. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_MODEM_CAUSE_EXTENSION
       NET_MODEM_DETAILED_REG_INFO
       NET_MODEM_GSM_REG_INFO
       NET_MODEM_REG_INFO_COMMON
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_SetResp;

#define NET_SET_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_SET_CANCEL_REQ                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to cancel the NET_SET_REQ issued previously.
       NOTE! It is possible to cancel only NET_SET_REQ requests where network
       selection mode is NET_SELECT_MODE_MANUAL
    */
    uint8   trans_id;
    uint8   message_id;
    } tNET_SetCancelReq;

#define NET_SET_CANCEL_REQ_LEN   sizeof(tNET_SetCancelReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_SET_CANCEL_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for cancelling NET_SET_REQ. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    } tNET_SetCancelResp;

#define NET_SET_CANCEL_RESP_LEN   sizeof(tNET_SetCancelResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_GET_REQ                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message can be used to measure the RSSI level of current cell */
    uint8   trans_id;
    uint8   message_id;
    uint8   cs_type;      /* Values from the constant table NET_CS_TYPE */
    /* Values from the constant table NET_MEASUREMENT_TYPES */
    uint8   measurement_type;
    uint8   pad1;
    uint8   pad2;
    uint8   pad3;
    uint8   sub_block_count; /* For future expansion */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE]; /* Subblock list: */
    } tNET_RssiGetReq;

#define NET_RSSI_GET_HDR_LEN   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_GET_RESP                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message returns the RSSI/RSCP level of current cell or/and
       current Bit Error Rate and/or ratio of energy per modulating bit to
       the noise spectral density.
    */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_BER_CURRENT
       NET_ECNO_CURRENT
       NET_RSSI_CURRENT
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_RssiGetResp;

#define NET_RSSI_GET_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_IND - Obsolete from version 017.000                   */
/* ----------------------------------------------------------------------- */

#if !NET_MODEM_ISI_MIN_VERSION(17,0)

typedef struct
    {
    /* This message is an indication of the percentage of signal bars to be
       shown
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   signals_bar;
    uint8   rssi_in_dbm;
    } tNET_RssiInd;

#define NET_RSSI_IND_LEN   sizeof(tNET_RssiInd)

#endif /* !NET_MODEM_ISI_MIN_VERSION(17,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_IND - Versions 017.000 - 017.004                      */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(17,0) && !NET_MODEM_ISI_MIN_VERSION(17,4)

typedef struct
    {
    /* This message is an indication of the percentage of signal bars to be
       shown
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   signals_bar;
    uint8   rssi_in_dbm;
    uint8   ber;
    uint8   pad[3];
    } tNET_RssiInd;

#define NET_RSSI_IND_LEN   sizeof(tNET_RssiInd)

#endif /* NET_MODEM_ISI_MIN_VERSION(17,0) && !NET_MODEM_ISI_MIN_VERSION(17,4) */


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_IND - Valid from version 017.004                      */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(17,4)

typedef struct
    {
    /* This message is an indication of the percentage of signal bars to be
       shown
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   signals_bar;
    uint8   rssi_in_dbm;
    uint8   ber;
    uint8   ecno;
    uint8   pad[2];
    } tNET_RssiInd;

#define NET_RSSI_IND_LEN   sizeof(tNET_RssiInd)

#endif /* NET_MODEM_ISI_MIN_VERSION(17,4) */


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_CONTROL_REQ                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a general message to control CS state */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_CONTROL_MESSAGE_TYPES */
    uint8   control_message;
    uint8   sub_block_count; /* For future expansion */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE]; /* Subblock list: */
    } tNET_CsControlReq;

#define NET_CS_CONTROL_REQ_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_CONTROL_RESP                                            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response to controlling CS state. */
    uint8   trans_id;
    uint8   message_id;
    uint8   cs_type;      /* Values from the constant table NET_CS_TYPE */
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    /* Values from the constant table NET_CONTROL_MESSAGE_TYPES */
    uint8   control_message;
    } tNET_CsControlResp;

#define NET_CS_CONTROL_RESP_LEN   sizeof(tNET_CsControlResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_WAKEUP_REQ                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to indicate that CS should start search if not in
       service and not searching for suitable cells
    */
    uint8   trans_id;
    uint8   message_id;
    } tNET_CsWakeupReq;

#define NET_CS_WAKEUP_REQ_LEN   sizeof(tNET_CsWakeupReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_WAKEUP_RESP                                             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;     /* This message is a response to start CS. */
    uint8   message_id;
    } tNET_CsWakeupResp;

#define NET_CS_WAKEUP_RESP_LEN   sizeof(tNET_CsWakeupResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_TEST_CARRIER_REQ                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to set up the production carrier. Access
       technology related setting parameters are included in the
       corresponding SB.
    */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_TEST_CARRIER_SETTING_OPERATIONS */
    uint8   operation;
    uint8   sub_block_count;
    /* Subblock list:
       NET_TEST_CARRIER_PARAM
       NET_TEST_WCDMA_PARAMS
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_TestCarrierReq;

#define SIZE_NET_TEST_CARRIER_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_TEST_CARRIER_RESP - Valid from version 013.000             */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(13,0)

typedef struct
    {
    /* This message is a response to production carrier setting. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_TEST_CARRIER_PARAM
       NET_TEST_WCDMA_PARAMS
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_TestCarrierResp;

#define SIZE_NET_TEST_CARRIER_RESP_STR   (4*sizeof(uint8))

#endif /* NET_MODEM_ISI_MIN_VERSION(13,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_TEST_CARRIER_RESP - Obsolete from version 013.000          */
/* ----------------------------------------------------------------------- */

#if !NET_MODEM_ISI_MIN_VERSION(13,0)

typedef struct
    {
    /* This message is a response to production carrier setting. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    } tNET_TestCarrierResp;

#define SIZE_NET_TEST_CARRIER_RESP_STR   sizeof(tNET_TestCarrierResp)

#endif /* !NET_MODEM_ISI_MIN_VERSION(13,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_NETWORK_SELECT_MODE_SET_REQ                                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to set network selection mode of CS */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table
       NET_MODEM_NETWORK_SELECTION_MODE
    */
    uint8   selection_mode;
    } tNET_NetworkSelectModeReq;

#define NET_NETWORK_SEL_MODE_SET_REQ_LEN   sizeof(tNET_NetworkSelectModeReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_NETWORK_SELECT_MODE_SET_RESP                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response to network selection mode setting of CS. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    } tNET_NetworkSelectModeResp;

#define NET_NETWORK_SEL_MODE_SET_RESP_LEN   \
        sizeof(tNET_NetworkSelectModeResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_CIPHERING_IND                                              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This indication is used to indicate whether the ciphering is used or
       not
    */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_CIPHERING_STATUS */
    uint8   ciphering_status;
    uint8   sub_block_count;
    /* Subblock list:
       NET_CIPHERING_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_CipheringInd;

#define NET_CIPHERING_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_TIME_IND                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This indication is sent whenever time information is received from the
       network
    */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_DOMAIN_TYPE_TBL */
    uint8   source_domain;
    uint8   sub_block_count;
    /* Subblock list:
       NET_TIME_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_TimeInd;

#define NET_TIME_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_STATE_IND - Obsolete from version 007.000               */
/* ----------------------------------------------------------------------- */

#if !NET_MODEM_ISI_MIN_VERSION(7,0)

typedef struct
    {
    /* This indication is sent whenever CS main state changes */
    uint8   trans_id;
    uint8   message_id;
    uint8   cs_state;     /* Values from the constant table NET_CS_STATES */
    uint8   cs_type;      /* Values from the constant table NET_CS_TYPE */
    } tNET_CsStateInd;

#define SIZE_NET_CS_STATE_IND_STR   sizeof(tNET_CsStateInd)

#endif /* !NET_MODEM_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_STATE_IND - Valid from version 007.000                  */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(7,0)

typedef struct
    {
    /* This indication is sent whenever CS main state changes */
    uint8   trans_id;
    uint8   message_id;
    uint8   cs_state;     /* Values from the constant table NET_CS_STATES */
    uint8   cs_type;      /* Values from the constant table NET_CS_TYPE */
    /* Values from the constant table NET_CS_OPERATION_MODE */
    uint8   cs_operation_mode;
    uint8   pad[3];
    } tNET_CsStateInd;

#define SIZE_NET_CS_STATE_IND_STR   sizeof(tNET_CsStateInd)

#endif /* NET_MODEM_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_NEIGHBOUR_CELLS_REQ                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to get information of neighbouring cells.  */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_NEIGHBOUR_CELL_INFO_TYPE */
    uint8   cell_info_type;
    } tNET_NeighbourCellsReq;

#define SIZE_NET_NEIGHBOUR_CELLS_REQ_STR   sizeof(tNET_NeighbourCellsReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_NEIGHBOUR_CELLS_RESP                                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to return the information of neighbouring cells.
    */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_ECID_GERAN_ADDITIONAL_INFO
       NET_ECID_GERAN_INFO
       NET_ECID_UTRAN_FDD_INFO
       NET_GSM_HOME_CELLS_INFO
       NET_GSM_SIM_NMR_INFO
       NET_NEIGHBOUR_CELLS_GERAN_INFO
       NET_NEIGHBOUR_CELLS_UTRAN_INFO
       NET_UTRAN_SIM_NMR_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_NeighbourCellsResp;

#define NET_NEIGHBOUR_CELLS_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RAT_IND                                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to give information about the current RAT. */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_RAT_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_RatInd;

#define SIZE_NET_RAT_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RAT_REQ                                                    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to query the RAT information. */
    uint8   trans_id;
    uint8   message_id;
    uint8   rat_type;     /* Values from the constant table NET_RAT_TYPE */
    } tNET_RatReq;

#define SIZE_NET_RAT_REQ_STR   sizeof(tNET_RatReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_RAT_RESP                                                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to return the RAT information. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_RAT_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_RatResp;

#define SIZE_NET_RAT_RESP_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_STATE_REQ                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to query the main state of CS */
    uint8   trans_id;
    uint8   message_id;
    } tNET_CsStateReq;

#define NET_CS_STATE_LEN   sizeof(tNET_CsStateReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_STATE_RESP - Obsolete from version 007.000              */
/* ----------------------------------------------------------------------- */

#if !NET_MODEM_ISI_MIN_VERSION(7,0)

typedef struct
    {
    /* This message is used to return the main state of CS. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   cs_state;     /* Values from the constant table NET_CS_STATES */
    } tNET_CsStateResp;

#define NET_CS_STATE_HDR_LEN   sizeof(tNET_CsStateResp)

#endif /* !NET_MODEM_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_CS_STATE_RESP - Valid from version 007.000                 */
/* ----------------------------------------------------------------------- */

#if NET_MODEM_ISI_MIN_VERSION(7,0)

typedef struct
    {
    /* This message is used to return the main state of CS. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   cs_state;     /* Values from the constant table NET_CS_STATES */
    /* Values from the constant table NET_CS_OPERATION_MODE */
    uint8   cs_operation_mode;
    } tNET_CsStateResp;

#define NET_CS_STATE_HDR_LEN   sizeof(tNET_CsStateResp)

#endif /* NET_MODEM_ISI_MIN_VERSION(7,0) */


/* ----------------------------------------------------------------------- */
/* Message: NET_UMA_INFO_IND                                               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is sent when UNC registration failure is received from
       network 
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_UMA_FAILURE_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_UmaInfoInd;

#define NET_UMA_INFO_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RADIO_INFO_IND - Valid from version 007.002                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message indicates the status of radio connection */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_UTRAN_RADIO_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_RadioInfoInd;

#define NET_RADIO_INFO_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CHANNEL_INFO_IND - Valid from version 009.004              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message indicates the channel number of UTRAN */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_UARFCN_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ChannelInfoInd;

#define NET_CHANNEL_INFO_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CHANNEL_INFO_REQ - Valid from version 009.004              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This is a general message for inquiring the UTRAN channel number */
    uint8   trans_id;
    uint8   message_id;
    } tNET_ChannelInfoReq;

#define NET_CHANNEL_INFO_REQ_LEN   sizeof(tNET_ChannelInfoReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_CHANNEL_INFO_RESP - Valid from version 009.004             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to return the UTRAN channel number */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_UARFCN_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ChannelInfoResp;

#define NET_CHANNEL_INFO_RESP_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CELL_INFO_GET_REQ - Valid from version 011.002             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This is a general message for inquiring the service status and general
       cell information of current cell.
    */
    uint8   trans_id;
    uint8   message_id;
    } tNET_CellInfoGetReq;

#define NET_CELL_INFO_GET_REQ_LEN   sizeof(tNET_CellInfoGetReq)


/* ----------------------------------------------------------------------- */
/* Message: NET_CELL_INFO_GET_RESP - Valid from version 011.002            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to return service status and general cell
       information.
    */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_EPS_CELL_INFO
       NET_GSM_CELL_INFO
       NET_GSM_FRAME_INFO
       NET_WCDMA_CELL_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_CellInfoGetResp;

#define NET_CELL_INFO_GET_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CELL_INFO_IND - Valid from version 011.002                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is sent when there is changes in service status, current
       rat or current cell parameters and only when UE is proceeded to some
       final state.
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_EPS_CELL_INFO
       NET_GSM_CELL_INFO
       NET_GSM_FRAME_INFO
       NET_WCDMA_CELL_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_CellInfoInd;

#define NET_CELL_INFO_IND_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_NITZ_NAME_IND - Valid from version 014.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message indicates about NITZ (Network Identified Time Zone) name
       received from Network.
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   operator_code_1;
    uint8   operator_code_2;
    uint8   operator_code_3;
    /* Values from the constant table NET_DOMAIN_TYPE_TBL */
    uint8   source_domain;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_FULL_NITZ_NAME
       NET_SHORT_NITZ_NAME
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_NitzNameInd;

#define SIZE_NET_NITZ_NAME_IND_STR   (8)


/* ----------------------------------------------------------------------- */
/* Message: NET_SOR_REQ - Valid from version 016.009                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This request updates steering of roaming list and triggers steering of
       roaming (higher priority PLMN scan).
    */
    uint8   trans_id;
    uint8   message_id;
    uint8   list_tag;     /* PLMNwAcT List tag should be used.  */
    /* Data length runs in steps of five (5, 10, ... 255)  */
    uint8   data_length;
    /* The content of data -field is equal to PLMNwAcT List element starting
       at octet 3 (from the field of 1st PLMN Identifier). The description of
       PLMNwAcT List can be found from 3GPP TS 31.111 / chapter 8.90. 
    */
    uint8   data[NET_MODEM_ANY_SIZE];
    } tNET_SorReq;

#define NET_SOR_REQ_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_SOR_RESP - Valid from version 016.009                      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for updating steering of roaming list. */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   pad;
    } tNET_SorResp;

#define NET_SOR_RESP_HDR_LEN   sizeof(tNET_SorResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_CONF_REQ - Valid from version 016.010                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to configure the sending of NET_RSSI_IND.  */
    uint8   trans_id;
    uint8   message_id;
    uint8   nbr_of_segments;
    uint8   sub_block_count;
    /* Subblock list:
       NET_RSSI_CONF_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_RssiConfReq;

#define NET_RSSI_CONF_REQ_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_RSSI_CONF_RESP - Valid from version 016.010                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for configuring the sending of
       NET_RSSI_IND.
    */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   pad;
    } tNET_RssiConfResp;

#define NET_RSSI_CONF_RESP_HDR_LEN   sizeof(tNET_RssiConfResp)


/* ----------------------------------------------------------------------- */
/* Message: NET_NW_ACCESS_CONF_REQ - Valid from version 017.002            */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to configure the Network access.  */
    uint8   trans_id;
    uint8   message_id;
    /* Values from the constant table NET_NW_ACCESS_CONF_OPERATIONS_TBL */
    uint8   operation;
    uint8   sub_block_count;
    /* Subblock list:
       NET_REGISTRATION_CONF_INFO
       NET_ROAMING_CONF_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_NwAccessConfReq;

#define NET_NW_ACCESS_CONF_REQ_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_NW_ACCESS_CONF_RESP - Valid from version 017.002           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for configuring the Network access.  */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   sub_block_count;
    /* Subblock list:
       NET_REGISTRATION_CONF_INFO
       NET_ROAMING_CONF_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_NwAccessConfResp;

#define NET_NW_ACCESS_CONF_RESP_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CONFIGURE_REQ - Valid from version 017.006                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is used to configure the services of NET Server.  */
    uint8   trans_id;
    uint8   message_id;
    uint8   pad;
    uint8   sub_block_count;
    /* Subblock list:
       NET_REG_STATUS_IND_CONF_INFO
    */
    uint8   sub_blocks[NET_MODEM_ANY_SIZE];
    } tNET_ConfigureReq;

#define NET_CONFIGURE_REQ_HDR_LEN   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: NET_CONFIGURE_RESP - Valid from version 017.006                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This message is a response for configuring the services of NET Server.
       
    */
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table NET_MODEM_SUCCESS_CODES */
    uint8   success_code;
    uint8   pad;
    } tNET_ConfigureResp;

#define NET_CONFIGURE_RESP_HDR_LEN   sizeof(tNET_ConfigureResp)


#define NET_MODEM_HEADER_WITH_SUB_BLOCKS_LEN_COUNT(str)   \
    ((sizeof(str)-NET_MODEM_ANY_SIZE*sizeof(byte)) -          \
    ((sizeof(str)-NET_MODEM_ANY_SIZE*sizeof(byte))%4))
typedef struct
    {
    byte sub_block_id;
    byte sub_block_length;
    } tNET_CommonSubBlock;


#endif /* _NET_WM_ISI_H */
