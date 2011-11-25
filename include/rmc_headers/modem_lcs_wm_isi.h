/*
NOKIA                                                             CONFIDENTIAL
                  ISA MODEM LCS Server
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            modem_lcs_wm_isi.h

version:         009.000

type:            incl


ISI header file for Modem LCS Server

Current   ISI Version : 009.000
Supported ISI Versions: 009.000

Copyright (c) Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _MODEM_LCS_WM_ISI_H
#define _MODEM_LCS_WM_ISI_H

#include "isi_conf.h"

#ifndef MODEM_LCS_ISI_VERSION
#define MODEM_LCS_ISI_VERSION
#define MODEM_LCS_ISI_VERSION_Z   9
#define MODEM_LCS_ISI_VERSION_Y   0
#endif

#define MODEM_LCS_ISI_MIN_VERSION(z,y) \
 ((MODEM_LCS_ISI_VERSION_Z == (z) && MODEM_LCS_ISI_VERSION_Y >= (y)) || \
  (MODEM_LCS_ISI_VERSION_Z > (z)))

#if ((MODEM_LCS_ISI_VERSION_Z ==   1 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   1 && MODEM_LCS_ISI_VERSION_Y ==   1) || \
     (MODEM_LCS_ISI_VERSION_Z ==   2 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   3 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   4 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   5 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   5 && MODEM_LCS_ISI_VERSION_Y ==   1) || \
     (MODEM_LCS_ISI_VERSION_Z ==   6 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   7 && MODEM_LCS_ISI_VERSION_Y ==   0) || \
     (MODEM_LCS_ISI_VERSION_Z ==   7 && MODEM_LCS_ISI_VERSION_Y ==   1) || \
     (MODEM_LCS_ISI_VERSION_Z ==   8 && MODEM_LCS_ISI_VERSION_Y ==   0))
#error The specified interface version is no longer supported
#endif


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define MODEM_LCS_MAX_EXT_GEO_INFO_LENGTH        0x14
#define MODEM_LCS_MAX_ADD_GEO_INFO_LENGTH        0x5B
#define MODEM_LCS_NOT_AVAILABLE                  0xFFFF
#define MODEM_LCS_ABSENT                         0xFF
#define MODEM_LCS_RRLP_UNDEFINED_ACCURACY        0xFF
#define MODEM_LCS_SS_MAX_CODEWORD_LEN            0x16
/* constant for variable-length definitions */
#define MODEM_LCS_ANY_SIZE                       1
#define MODEM_LCS_NO_REF_FRAME                   0xFFFF
#define MODEM_LCS_MAX_MEAS_AMOUNT                0x10
#define MODEM_LCS_MAX_MEAS_SET_COUNT             0x03
#define MODEM_LCS_ASN1_MAX_LENGTH                0x2000
#define MODEM_LCS_MAX_USSD_LEN                   0x48
#define MODEM_LCS_MAX_CLIENT_EXT_ID_BYTES        0x10
#define MODEM_LCS_SS_MAX_REQUESTOR_ID_LEN        0x48
#define MODEM_LCS_UNDEFINED_GPS_TOW              0xFFFFFFFF
#define MODEM_LCS_RRLP_NO_ASSISTANCE_NEEDED      0x00
#define MODEM_LCS_RRC_UNDEFINED_ACCURACY         0xFF
#define MODEM_LCS_UNKNOWN_UNCERTAINTY_VALUE      0xFFFF
#define MODEM_LCS_NOT_FOR_A_SPECIFIC_MEASUREMENT 0x00
#define MODEM_LCS_GPS_INVALID_TIMING_ADVANCE     0xFF

#if MODEM_LCS_ISI_MIN_VERSION(1,0)
#define MODEM_LCS_UMTS_UNDEFINED_RTT             0xFFFF
#endif /* MODEM_LCS_ISI_MIN_VERSION(1,0) */


/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_SFN_TOW_UNCERTAINTY - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_SFN_TOW_UNCERTAINTY_CONST;

#define MODEM_LCS_RRC_LESS_THAN_10               0x00
#define MODEM_LCS_RRC_GRTR_THAN_10               0x01
#define MODEM_LCS_RRC_UNCERTAINTY_UNKNOWN        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_NAVIGATION_TYPES - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_NAVIGATION_TYPES_CONST;

/* New satellite, new Navigation Model */
#define MODEM_LCS_RRC_NEW_SAT_AND_NEW_MODEL      0x00
/* Existing satellite, Existing Navigation Model */
#define MODEM_LCS_RRC_OLD_SAT_AND_OLD_MODEL      0x01
/* Existing satellite, new Navigation Model */
#define MODEM_LCS_RRC_OLD_SAT_AND_NEW_MODEL      0x02
#define MODEM_LCS_RRC_REV2                       0x03  /* rev2 */
#define MODEM_LCS_RRC_REV                        0x04  /* rev */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_REF_BTS_RELATION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_REF_BTS_RELATION_CONST;

#define MODEM_LCS_RRLP_REF1_TO_12_AND_2_TO_3     0x00
#define MODEM_LCS_RRLP_REF1_TO_13_AND_2_TO_2     0x01
#define MODEM_LCS_RRLP_REF1_TO_1_AND_2_TO_23     0x02
#define MODEM_LCS_RRLP_DIRECT_RELATION           0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_METHOD_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_METHOD_TYPE_CONST;

#define MODEM_LCS_RRLP_ASSISTED_METHOD           0x00  /* MS-Assisted */
#define MODEM_LCS_RRLP_BASED_METHOD              0x01  /* MS-Based */
/* MS-Based preferred, but MS-Assisted is allowed */
#define MODEM_LCS_RRLP_BASED_PREFERRED_METHOD    0x02
/* MS-Assisted preferred, but MS-Based is allowed */
#define MODEM_LCS_RRLP_ASSISTED_PREFERRED_METHOD 0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_POSITIONING_METHOD - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_POSITIONING_METHOD_CONST;

#define MODEM_LCS_RRLP_EOTD_METHOD               0x00  /* E-OTD */
#define MODEM_LCS_RRLP_GPS_METHOD                0x01  /* GPS */
/* E-OTD or GPS (i.e. both can be reported */
#define MODEM_LCS_RRLP_EOTD_OR_GPS_METHOD        0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_MULTIPLE_SETS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_MULTIPLE_SETS_CONST;

/* Multiple IEs can be send */
#define MODEM_LCS_RRLP_MULTIPLE_SETS             0x00
/* Sending of multiple sets is not allowed */
#define MODEM_LCS_RRLP_NO_MULTIPLE_SETS          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_ENV_CHARACTER - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_ENV_CHARACTER_CONST;

/* Possible heavy multipath and NLOS conditions (e.g. bad urban or urban) */
#define MODEM_LCS_RRLP_HEAVY_MP_AND_NLOS         0x00
/* No or light multipath and usually LOS conditions (e.g. suburban or rural)
*/
#define MODEM_LCS_RRLP_LIGHT_MP_AND_LOS          0x01
/* Not defined or mixed environment */
#define MODEM_LCS_RRLP_MIXED_OR_UNDEFINED_ENV    0x02
/* Environment Characterization field not included */
#define MODEM_LCS_RRLP_UNDEFINED_ENV_FIELD       0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_FIX_TYPE - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_FIX_TYPE_CONST;

#define MODEM_LCS_RRLP_FIX_TYPE_2D               0x00
#define MODEM_LCS_RRLP_FIX_TYPE_3D               0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_LOCATION_ERROR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRLP_LOCATION_ERROR_CONST;

/* Undefined error */
#define MODEM_LCS_RRLP_UNDEFINED_ERROR           0x00
/* There were not enough BTSs to be received when performing mobile based
   E-OTD
*/
#define MODEM_LCS_RRLP_EOTD_NOT_ENOUGH_BTS       0x01
/* There were not enough GPS satellites to be received, when performing GPS
   location
*/
#define MODEM_LCS_RRLP_GPS_NOT_ENOUGH_SATS       0x02
/* E-OTD location calculation assistance data missing */
#define MODEM_LCS_RRLP_EOTD_LC_ASTNC_MSNG        0x03
/* E-OTD assistance data missing */
#define MODEM_LCS_RRLP_EOTD_ASTNC_MSNG           0x04
/* GPS location calculation assistance data missing */
#define MODEM_LCS_RRLP_GPS_LOC_CALC_ASTNC_MSNG   0x05
/* GPS assistance data missing */
#define MODEM_LCS_RRLP_GPS_ASTNC_MSNG            0x06
/* Requested method not supported */
#define MODEM_LCS_RRLP_UNSUPPORTED_METHOD        0x07
/* Location request not processed */
#define MODEM_LCS_RRLP_NOT_PROCESSED             0x08
/* Reference BTS for GPS is not the serving BTS */
#define MODEM_LCS_RRLP_GPS_REF_BTS_NOT_SERV_BTS  0x09
/* Reference BTS for E-OTD is not the serving BTS */
#define MODEM_LCS_RRLP_EOTD_REF_BTS_NOT_SERV_BTS 0x0A
#define MODEM_LCS_RRLP_MSMNTS_TERM_AO_RRPR       0xFE
#define MODEM_LCS_RRLP_MSMNTS_TERM_AO_REQ        0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRLP_GPS_MULTIPATH_INDICATOR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* [3GPP TS 44.031, Table A.9] */
typedef uint8 MODEM_LCS_RRLP_GPS_MULTIPATH_INDICATOR_CONST;

#define MODEM_LCS_RRLP_GPS_MP_NOT_MEASURED       0x00  /* Not specified */
/* MP Error <= 5 m */
#define MODEM_LCS_RRLP_GPS_MP_LOW                0x01
/* 5 m < MP Error <= 43 m */
#define MODEM_LCS_RRLP_GPS_MP_MEDIUM             0x02
/* MP Error > 43 m */
#define MODEM_LCS_RRLP_GPS_MP_HIGH               0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_GPS_NAVIGATION_TYPES - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_GPS_NAVIGATION_TYPES_CONST;

/* New satellite, new Navigation Model */
#define MODEM_LCS_GPS_NEW_SAT_AND_NEW_MODEL      0x00
/* Existing satellite, Existing Navigation Model */
#define MODEM_LCS_GPS_OLD_SAT_AND_OLD_MODEL      0x01
/* Existing satellite, new Navigation Model */
#define MODEM_LCS_GPS_OLD_SAT_AND_NEW_MODEL      0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_ERROR_CODE - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_ERROR_CODE_CONST;

/* Success, no errors. */
#define MODEM_LCS_RRC_ERROR_SUCCESS              0x00
/* Unspecified error. */
#define MODEM_LCS_RRC_ERROR_UNSPECIFIED          0x01
#define MODEM_LCS_RRC_ERROR_MISSING_DATA         0x02  /* Missing data. */
/* The requested measurement is not supported. */
#define MODEM_LCS_RRC_ERROR_UNSUPPORTED_MEASUREMENT 0x03
/* The measurement configuration is invalid. */
#define MODEM_LCS_RRC_ERROR_INVALID_CONFIGURATION 0x04
/* The measurement configuration is incomplete. */
#define MODEM_LCS_RRC_ERROR_CONFIGURATION_INCOMPLETE 0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_MEASUREMENT_COMMAND - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_MEASUREMENT_COMMAND_CONST;

/* Setup measurement */
#define MODEM_LCS_RRC_MEAS_SETUP                 0x00
/* Modify measurement */
#define MODEM_LCS_RRC_MEAS_MODIFY                0x01
/* Release measurement */
#define MODEM_LCS_RRC_MEAS_RELEASE               0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_POSITIONING_METHOD - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_POSITIONING_METHOD_CONST;

#define MODEM_LCS_RRC_OTDOA_METHOD               0x00  /* OTDOA */
#define MODEM_LCS_RRC_GPS_METHOD                 0x01  /* GPS */
/* OTDOA or GPS (i.e. both can be reported */
#define MODEM_LCS_RRC_OTDOA_OR_GPS_METHOD        0x02
#define MODEM_LCS_RRC_CELLID                     0x03  /* CellID */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_ENV_CHARACTER - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_ENV_CHARACTER_CONST;

/* Possible heavy multipath and NLOS conditions (e.g. bad urban or urban) */
#define MODEM_LCS_RRC_HEAVY_MP_AND_NLOS          0x00
/* No or light multipath and usually LOS conditions (e.g. suburban or rural)
*/
#define MODEM_LCS_RRC_LIGHT_MP_AND_LOS           0x01
/* Not defined or mixed environment */
#define MODEM_LCS_RRC_MIXED_OR_UNDEFINED_ENV     0x02
/* Environment Characterization field not included */
#define MODEM_LCS_RRC_UNDEFINED_ENV_FIELD        0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_REPORT_CRITERIA - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_REPORT_CRITERIA_CONST;

/* Event reporting */
#define MODEM_LCS_RRC_REPORT_EVENT               0x00
/* Periodic reporting. */
#define MODEM_LCS_RRC_REPORT_PERIODIC            0x01
#define MODEM_LCS_RRC_REPORT_NO_REPORTING        0x02  /* No reporting */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_REPORTING_QUANTITY - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Number of reports */
typedef uint8 MODEM_LCS_RRC_REPORTING_QUANTITY_CONST;

#define MODEM_LCS_RRC_QUANTITY_R_1               0x00  /* 1 report */
#define MODEM_LCS_RRC_QUANTITY_R_2               0x01  /* 2 reports */
#define MODEM_LCS_RRC_QUANTITY_R_4               0x02  /* 4 reports */
#define MODEM_LCS_RRC_QUANTITY_R_8               0x03  /* 8 reports */
#define MODEM_LCS_RRC_QUANTITY_R_16              0x04  /* 16 reports */
#define MODEM_LCS_RRC_QUANTITY_R_32              0x05  /* 32 reports */
#define MODEM_LCS_RRC_QUANTITY_R_64              0x06  /* 64 reports */
/* Infinite number of reports */
#define MODEM_LCS_RRC_QUANTITY_R_INFINITY        0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_REPORTING_INTERVAL - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_REPORTING_INTERVAL_CONST;

/* 0 seconds (undefined behaviour). */
#define MODEM_LCS_RRC_INTERVAL_RIL_0             0x00
#define MODEM_LCS_RRC_INTERVAL_RIL_0_25          0x01  /* 0.25 second */
#define MODEM_LCS_RRC_INTERVAL_RIL_0_50          0x02  /* 0.5 second */
#define MODEM_LCS_RRC_INTERVAL_RIL_1             0x03  /* 1 second */
#define MODEM_LCS_RRC_INTERVAL_RIL_2             0x04  /* 2 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_3             0x05  /* 3 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_4             0x06  /* 4 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_6             0x07  /* 6 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_8             0x08  /* 8 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_12            0x09  /* 12 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_16            0x0A  /* 16 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_20            0x0B  /* 20 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_24            0x0C  /* 24 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_28            0x0D  /* 28 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_32            0x0E  /* 32 seconds */
#define MODEM_LCS_RRC_INTERVAL_RIL_64            0x0F  /* 64 seconds */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_MEAS_ERROR - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_MEAS_ERROR_CONST;

/* Not enough OTDOA cells. */
#define MODEM_LCS_RRC_NOT_ENOUGH_OTDOA_CELLS     0x00
/* Not enough GPS satellites. */
#define MODEM_LCS_RRC_NOT_ENOUGH_GPS_SATELLITES  0x01
/* Assistance data missing. */
#define MODEM_LCS_RRC_ASSISTANCE_DATA_MISSING    0x02
/* Method not supported. */
#define MODEM_LCS_RRC_METHOD_NOT_SUPPORTED       0x03
/* Undefined error. */
#define MODEM_LCS_RRC_UNDEFINED_ERROR            0x04
/* Request denied by user. */
#define MODEM_LCS_RRC_REQUEST_DENIED_BY_USER     0x05
/* Not processed and timeout. */
#define MODEM_LCS_RRC_NOT_PROCESSED_AND_TIMEOUT  0x06
/* Reference cell not serving cell. */
#define MODEM_LCS_RRC_REFERENCE_CELL_NOT_SERVING_CELL 0x07
/* Could not accomplish GPS timing of cell frames. */
#define MODEM_LCS_RRC_GPS_TIMING_OF_CELL_FRAMES_FAIL 0x08

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_REF_TIME_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_REF_TIME_TYPE_CONST;

/* utran-GPSReferenceTimeResult */
#define MODEM_LCS_RRC_UTRAN_GPS_REF_TIME         0x00
/* gps-ReferenceTimeOnly */
#define MODEM_LCS_RRC_GPS_REF_TIME_ONLY          0x01
#define MODEM_LCS_RRC_CELL_TIMING                0x02  /* cell-Timing */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_MULTIPATH_INDICATOR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* [3GPP TS 44.031, Table A.9] */
typedef uint8 MODEM_LCS_RRC_MULTIPATH_INDICATOR_CONST;

#define MODEM_LCS_RRC_MP_NOT_MEASURED            0x00  /* Not specified */
/* MP Error <= 5 m */
#define MODEM_LCS_RRC_MP_LOW                     0x01
/* 5 m < MP Error <= 43 m */
#define MODEM_LCS_RRC_MP_MEDIUM                  0x02
/* MP Error > 43 m */
#define MODEM_LCS_RRC_MP_HIGH                    0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_POSITION_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_POSITION_TYPE_CONST;

/* Ellipsoid Point */
#define MODEM_LCS_RRC_POINT                      0x00
/* Ellipsoid Point with uncertainty Circle */
#define MODEM_LCS_RRC_POINT_UNCER_CIRCLE         0x01
/* Ellipsoid Point with uncertainty Ellipse */
#define MODEM_LCS_RRC_POINT_UNCERT_ELLIPSE       0x02
/* Ellipsoid Point with Altitude */
#define MODEM_LCS_RRC_POINT_ALTITUDE             0x03
/* Ellipsoid Point with altitude and uncertainty ellipsoid */
#define MODEM_LCS_RRC_POINT_ALTITUDE_UNCERT      0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_LATITUDE_SIGN - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_LATITUDE_SIGN_CONST;

#define MODEM_LCS_RRC_NORTH                      0x00  /* North */
#define MODEM_LCS_RRC_SOUTH                      0x01  /* South */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_ALTITUDE_DIRECTION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_ALTITUDE_DIRECTION_CONST;

#define MODEM_LCS_RRC_HEIGHT                     0x00  /* Height */
#define MODEM_LCS_RRC_DEPTH                      0x01  /* Depth */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_MEASUREMENT_INTERVAL - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_MEASUREMENT_INTERVAL_CONST;

#define MODEM_LCS_RRC_INTERVAL_E5                0x00  /* 5 seconds. */
#define MODEM_LCS_RRC_INTERVAL_E15               0x01  /* 15 seconds. */
#define MODEM_LCS_RRC_INTERVAL_E60               0x02  /* 1 minute. */
#define MODEM_LCS_RRC_INTERVAL_E300              0x03  /* 5 minutes. */
#define MODEM_LCS_RRC_INTERVAL_E900              0x04  /* 15 minutes. */
#define MODEM_LCS_RRC_INTERVAL_E1800             0x05  /* 30 minutes. */
#define MODEM_LCS_RRC_INTERVAL_E3600             0x06  /* 1 hour. */
#define MODEM_LCS_RRC_INTERVAL_E7200             0x07  /* 2 hours. */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_7A_THRESHHOLD - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_7A_THRESHHOLD_CONST;

#define MODEM_LCS_RRC_7A_PC10                    0x00  /* 10 meters. */
#define MODEM_LCS_RRC_7A_PC20                    0x01  /* 20 meters. */
#define MODEM_LCS_RRC_7A_PC30                    0x02  /* 30 meters. */
#define MODEM_LCS_RRC_7A_PC40                    0x03  /* 40 meters. */
#define MODEM_LCS_RRC_7A_PC50                    0x04  /* 50 meters. */
#define MODEM_LCS_RRC_7A_PC100                   0x05  /* 100 meters. */
#define MODEM_LCS_RRC_7A_PC200                   0x06  /* 200 meters. */
#define MODEM_LCS_RRC_7A_PC300                   0x07  /* 300 meters. */
#define MODEM_LCS_RRC_7A_PC500                   0x08  /* 500 meters. */
#define MODEM_LCS_RRC_7A_PC1000                  0x09  /* 1 kilometer. */
#define MODEM_LCS_RRC_7A_PC2000                  0x0A  /* 2 kilometers. */
#define MODEM_LCS_RRC_7A_PC5000                  0x0B  /* 5 kilometers. */
#define MODEM_LCS_RRC_7A_PC10000                 0x0C  /* 10 kilometers. */
#define MODEM_LCS_RRC_7A_PC20000                 0x0D  /* 20 kilometers. */
#define MODEM_LCS_RRC_7A_PC50000                 0x0E  /* 50 kilometers. */
/* 100 kilometers. */
#define MODEM_LCS_RRC_7A_PC100000                0x0F

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_7B_THRESHHOLD - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_7B_THRESHHOLD_CONST;

#define MODEM_LCS_RRC_7B_C0_25                   0x00  /* 0.25 chips. */
#define MODEM_LCS_RRC_7B_C0_5                    0x01  /* 0.5 chips. */
#define MODEM_LCS_RRC_7B_C1                      0x02  /* 1 chips. */
#define MODEM_LCS_RRC_7B_C2                      0x03  /* 2 chips. */
#define MODEM_LCS_RRC_7B_C3                      0x04  /* 3 chips. */
#define MODEM_LCS_RRC_7B_C4                      0x05  /* 4 chips. */
#define MODEM_LCS_RRC_7B_C5                      0x06  /* 5 chips. */
#define MODEM_LCS_RRC_7B_C10                     0x07  /* 10 chips. */
#define MODEM_LCS_RRC_7B_C20                     0x08  /* 20 chips. */
#define MODEM_LCS_RRC_7B_C50                     0x09  /* 50 chips. */
#define MODEM_LCS_RRC_7B_C100                    0x0A  /* 100 chips. */
#define MODEM_LCS_RRC_7B_C200                    0x0B  /* 200 chips. */
#define MODEM_LCS_RRC_7B_C500                    0x0C  /* 500 chips. */
#define MODEM_LCS_RRC_7B_C1000                   0x0D  /* 1000 chips. */
#define MODEM_LCS_RRC_7B_C2000                   0x0E  /* 2000 chips. */
#define MODEM_LCS_RRC_7B_C5000                   0x0F  /* 5000 chips. */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_7C_THRESHHOLD - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_7C_THRESHHOLD_CONST;

#define MODEM_LCS_RRC_7C_MS1                     0x00  /* 1 millisecond. */
#define MODEM_LCS_RRC_7C_MS2                     0x01  /* 2 millisecond. */
#define MODEM_LCS_RRC_7C_MS3                     0x02  /* 3 millisecond. */
#define MODEM_LCS_RRC_7C_MS5                     0x03  /* 5 millisecond. */
/* 10 millisecond. */
#define MODEM_LCS_RRC_7C_MS10                    0x04
/* 20 millisecond. */
#define MODEM_LCS_RRC_7C_MS20                    0x05
/* 50 millisecond. */
#define MODEM_LCS_RRC_7C_MS50                    0x06
/* 100 millisecond. */
#define MODEM_LCS_RRC_7C_MS100                   0x07

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_EVENT_TYPE - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_EVENT_TYPE_CONST;

#define MODEM_LCS_RRC_EVENT_7A                   0x00  /* Event 7a */
#define MODEM_LCS_RRC_EVENT_7B                   0x01  /* Event 7b */
#define MODEM_LCS_RRC_EVENT_7C                   0x02  /* Event 7c */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_METHOD_TYPE - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_METHOD_TYPE_CONST;

#define MODEM_LCS_RRC_ASSISTED_METHOD            0x00  /* MS-Assisted */
#define MODEM_LCS_RRC_BASED_METHOD               0x01  /* MS-Based */
/* MS-Based preferred, but MS-Assisted is allowed */
#define MODEM_LCS_RRC_BASED_PREFERRED_METHOD     0x02
/* MS-Assisted preferred, but MS-Based is allowed */
#define MODEM_LCS_RRC_ASSISTED_PREFERRED_METHOD  0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_VERTICAL_COORDINATE_REQUEST - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_VERTICAL_COORDINATE_REQUEST_CONST;

#define MODEM_LCS_SS_VERT_COORD_REQ              0x00
#define MODEM_LCS_SS_VERT_COORD_NOT_REQ          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_RESPONSE_TIME - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_RESPONSE_TIME_CONST;

#define MODEM_LCS_SS_LOW_DELAY                   0x00
#define MODEM_LCS_SS_DELAY_TOLERATED             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_NUMBER_TYPE - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
/* Number type consists of numbering plan and type of address. The four least
   significant bits (1-4)  contain numbering plan (see above) and the next
   three bits (5-7) contain type of number. The most significant bit (8) is a
   spare bit and shall be ignored.
*/
#define MODEM_LCS_SS_NBR_TYPE_UNKNOWN            0x00
#define MODEM_LCS_SS_NBR_TYPE_INTERNATIONAL      0x01
#define MODEM_LCS_SS_NBR_TYPE_NATIONAL           0x02
#define MODEM_LCS_SS_NBR_TYPE_NETWORK_SPECIFIC   0x03
#define MODEM_LCS_SS_NBR_TYPE_SUBSCRIBER         0x04
#define MODEM_LCS_SS_NBR_TYPE_ALPHANUMERIC       0x05
#define MODEM_LCS_SS_NBR_TYPE_ABBREVIATED        0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_NUMBER_PLAN - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
#define MODEM_LCS_SS_NBR_PLAN_UNKNOWN            0x00
#define MODEM_LCS_SS_NBR_PLAN_ISDN_TELEPHONY     0x01
#define MODEM_LCS_SS_NBR_PLAN_DATA               0x03
#define MODEM_LCS_SS_NBR_PLAN_TELEX              0x04
#define MODEM_LCS_SS_NBR_PLAN_LAND_MOBILE        0x06
#define MODEM_LCS_SS_NBR_PLAN_NATIONAL           0x08
#define MODEM_LCS_SS_NBR_PLAN_PRIVATE            0x09

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_METHOD - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_METHOD_CONST;

#define MODEM_LCS_SS_MS_BASED_EOTD               0x00
#define MODEM_LCS_SS_MS_ASSISTED_EOTD            0x01
#define MODEM_LCS_SS_ASSISTED_GPS                0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_PRIVACY_VERIFICATION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_PRIVACY_VERIFICATION_CONST;

#define MODEM_LCS_SS_PERMISSION_DENIED           0x00
#define MODEM_LCS_SS_PERMISSION_GRANTED          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_REQ_RESP_TYPES - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_REQ_RESP_TYPES_CONST;

#define MODEM_LCS_SS_LOCATION_GET                0x00
#define MODEM_LCS_SS_LOCATION_SEND               0x01
#define MODEM_LCS_SS_ASSISTANCE_DATA             0x02
#define MODEM_LCS_SS_DECIPHERING_KEYS            0x03
#define MODEM_LCS_SS_PRIVACY_VER                 0x04
#define MODEM_LCS_SS_STOP                        0x05
/* Disconnect of the current session */
#define MODEM_LCS_SS_DISCONNECT                  0x06
#define MODEM_LCS_SS_PRIVACY_VER_TIMEOUT         0x07
#define MODEM_LCS_SS_ERROR                       0x09

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_SERVICE_TYPE_ID - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_SERVICE_TYPE_ID_CONST;

#define MODEM_LCS_SS_SERV_TYPE_EMERG_SERV        0x00
#define MODEM_LCS_SS_SERV_TYPE_EMERG_ALERT_SERV  0x01
#define MODEM_LCS_SS_SERV_TYPE_PERSON_TRACKING   0x02
#define MODEM_LCS_SS_SERV_TYPE_FLEET_MGMT        0x03
#define MODEM_LCS_SS_SERV_TYPE_ASSET_MGMT        0x04
#define MODEM_LCS_SS_SERV_TYPE_TRAFF_CONG_REPORT 0x05
#define MODEM_LCS_SS_SERV_TYPE_ROADSIDE_ASSISTANCE 0x06
#define MODEM_LCS_SS_SERV_TYPE_ROUTING_TO_NEAR_COMM_ENT 0x07
#define MODEM_LCS_SS_SERV_TYPE_NAVIGATION        0x08
#define MODEM_LCS_SS_SERV_TYPE_CITY_SIGHTSEEING  0x09
#define MODEM_LCS_SS_SERV_TYPE_LOCALIZED_ADVERTISING 0x0A
#define MODEM_LCS_SS_SERV_TYPE_MOBILE_YELLOW_PAGES 0x0B
#define MODEM_LCS_SS_SERV_TYPE_TRAF_AND_PUB_TRANSP_INFO 0x0C
#define MODEM_LCS_SS_SERV_TYPE_WEATHER           0x0D
#define MODEM_LCS_SS_SERV_TYPE_ASSET_AND_SERV_FINDING 0x0E
#define MODEM_LCS_SS_SERV_TYPE_GAMING            0x0F
#define MODEM_LCS_SS_SERV_TYPE_FIND_YOUR_FRIEND  0x10
#define MODEM_LCS_SS_SERV_TYPE_DATING            0x11
#define MODEM_LCS_SS_SERV_TYPE_CHATTING          0x12
#define MODEM_LCS_SS_SERV_TYPE_ROUTE_FINDING     0x13
#define MODEM_LCS_SS_SERV_TYPE_WHERE_AM_I        0x14

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_LOCATION_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_LOCATION_TYPE_CONST;

#define MODEM_LCS_SS_LOCATION_TYPE_CURRENT       0x00
#define MODEM_LCS_SS_LOCATION_TYPE_CURRENTORLAST 0x01
#define MODEM_LCS_SS_LOCATION_TYPE_INITIAL       0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_RESPONSE_STATUS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_RESPONSE_STATUS_CONST;

#define MODEM_LCS_SS_SERVICE_GRANTED             0x00
#define MODEM_LCS_SS_SERVICE_DENIED              0x01
#define MODEM_LCS_SS_INVALID_REQUEST             0x05

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_ERROR_CODES - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_ERROR_CODES_CONST;

#define MODEM_LCS_SS_SS_SUBSCRIPTION_VIOLATION   0x13
#define MODEM_LCS_SS_FACILITY_NOT_SUPPORTED      0x15
#define MODEM_LCS_SS_SYSTEM_FAILURE              0x22
#define MODEM_LCS_SS_DATA_MISSING                0x23
#define MODEM_LCS_SS_UNEXPECTED_DATA_VALUE       0x24
#define MODEM_LCS_SS_MODEM_LCS_POSITION_METHOD_FAILURE 0x36

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_ERROR_ADDITIONAL_INDICATION - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_ERROR_ADDITIONAL_INDICATION_CONST;

#define MODEM_LCS_SS_SHAPE_OF_LOCATION_ESTIMATE_NOT_SUPP 0x01
#define MODEM_LCS_SS_DEFAULT_VALUE               0x00  /* Default value */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_MISC_SS_ERRORS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_MISC_SS_ERRORS_CONST;

#define MODEM_LCS_SS_MM_RELEASE                  0x01
#define MODEM_LCS_SS_MM_ERROR                    0x0B
#define MODEM_LCS_SS_CS_INACTIVE                 0x0F
#define MODEM_LCS_SS_SS_NOT_AVAILABLE            0x12
#define MODEM_LCS_SS_MO_LR_TIMER_TLCSL_EXPIRED   0x17

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SS_PSEUDONYM_REQUESTED - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SS_PSEUDONYM_REQUESTED_CONST;

#define MODEM_LCS_SS_PSEUDONYM_NOT_REQUESTED     0x00
#define MODEM_LCS_SS_PSEUDONYM_REQUESTED         0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_LOCATION_TYPE - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_LOCATION_TYPE_CONST;

#define MODEM_LCS_LOCATION_TYPE_CURRENT          0x00
#define MODEM_LCS_LOCATION_TYPE_CURRENTORLAST    0x01
#define MODEM_LCS_LOCATION_TYPE_INITIAL          0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_NOTIFICATION_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_NOTIFICATION_TYPE_CONST;

#define MODEM_LCS_NOTIFICATION_INFORMATION       0x00
#define MODEM_LCS_NOTIFICATION_VERIFICATION      0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_NOTIFICATION_RESULT - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_NOTIFICATION_RESULT_CONST;

#define MODEM_LCS_NOTIFICATION_REJECTED          0x00
#define MODEM_LCS_NOTIFICATION_ACCEPTED          0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_PRIV_INFO_TYPE - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_PRIV_INFO_TYPE_CONST;

#define MODEM_LCS_PRIV_NOT_APPLICABLE            0x00
#define MODEM_LCS_PRIV_PHONE_NUMBER              0x01  /* MSISDN */
/* E.g. an application */
#define MODEM_LCS_PRIV_LOGICAL_NAME              0x02
#define MODEM_LCS_PRIV_EMAIL                     0x03
#define MODEM_LCS_PRIV_URL                       0x04
#define MODEM_LCS_PRIV_SIP_URL                   0x05
/* IMS public identity */
#define MODEM_LCS_PRIV_IMS_PUB_IDENT             0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_W_OPTIONAL_TAG - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
/* Tag to indicate existence of optional field */
/* Field is not present */
#define MODEM_LCS_W_OPTIONAL_NOT_PRESENT         0x00
/* Field is present */
#define MODEM_LCS_W_OPTIONAL_PRESENT             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_W_CS_STATUS - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */
/* Operation status */
typedef uint8 MODEM_LCS_W_CS_STATUS_CONST;

#define MODEM_LCS_W_CS_SUCCESS                   0x00  /* No error */
/* Error, Entering to previous state */
#define MODEM_LCS_W_CS_FAILURE_ORIG_STATE_RESTORED 0x01
/* Modem specific error. See related hex code in 'sub_error' */
#define MODEM_LCS_MODEM_SPECIFIC_ERROR           0xFF

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RELEASE - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RELEASE_CONST;

#define MODEM_LCS_RELEASE_5                      0x05  /* Release 5 */
#define MODEM_LCS_RELEASE_6                      0x06  /* Release 6 */
#define MODEM_LCS_RELEASE_7                      0x07  /* Release 7 */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_SUPPORT_STATUS_CODE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_SUPPORT_STATUS_CODE_CONST;

/* Support is activated (started) by a supporting client */
#define MODEM_LCS_SUPPORT_STARTED                0x00
/* Support is not activated  by a supporting client */
#define MODEM_LCS_SUPPORT_NOT_STARTED            0x01
/* Error: Support is already activated */
#define MODEM_LCS_SUPPORT_ALREADY_ACTIVATED      0x02
/* Error: Support for the event is not possible */
#define MODEM_LCS_SUPPORT_CANNOT_BE_ACTIVATED    0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_FRAME_TRIGGER_SUCCESS_CODES                   */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_FRAME_TRIGGER_SUCCESS_CODES_CONST;

/* is used when request was performed successfully. All other values are
   indications of some kind of error
*/
#define MODEM_LCS_NET_CAUSE_OK                   0x00
/* is a general error cause when no more specific reason can not be given */
#define MODEM_LCS_CAUSE_COMMUNICATION_ERROR      0x01
/* means that serving request is not currently possible due that NWS is
   serving some other service request
*/
#define MODEM_LCS_CAUSE_SERVER_BUSY              0x08
/* is used when a new request has interrupted the current request before the
   outcome of request is not yet clear
*/
#define MODEM_LCS_CAUSE_REQUEST_INTERRUPTED      0x12
/* #define MODEM_LCS_MODEM_SPECIFIC_ERROR        0xFF (already defined) */

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_UE_POSITION_TECHNOLOGY - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_UE_POSITION_TECHNOLOGY_CONST;

#define MODEM_LCS_UE_POS_TECHNOLOGY_AGPS         0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_MS_POSITION_TECHNOLOGY - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_MS_POSITION_TECHNOLOGY_CONST;

#define MODEM_LCS_MS_POS_TECHNOLOGY_AGPS         0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_CURRENT_STATE_STATUS_TYPE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_CURRENT_STATE_STATUS_TYPE_CONST;

/* Minimum interval = 64 secs */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_CELL_PCH 0x06
/* Minimum interval = 64 secs */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_URA_PCH  0x05
/* No minimum interval */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_CELL_DCH 0x04
/* No minimum interval */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_CELL_FACH 0x03
/* No minimum interval */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_IDLE_FACH 0x02
/* No minimum interval */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_IDLE_PCH 0x01
/* No minimum interval */
#define MODEM_LCS_RRC_STATE_STATUS_TYPE_IDLE     0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: MODEM_LCS_RRC_MEAS_SUSPEND_CONTROL - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
typedef uint8 MODEM_LCS_RRC_MEAS_SUSPEND_CONTROL_CONST;

/* Current UE positioning measurement continues */
#define MODEM_LCS_RRC_STATE_MEAS_CONTINUE        0x00
/* Current UE positioning measurement is suspended. No reports must be sent
   to RRC
*/
#define MODEM_LCS_RRC_STATE_MEAS_SUSPEND         0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_LCS_GAD_SHAPES - Valid from version 009.000        */
/* ----------------------------------------------------------------------- */
typedef uint16 MODEM_LCS_GAD_SHAPES_CONST;

/* Ellipsoid point */
#define MODEM_LCS_SS_ELLIP_POINT                 0x0001  /* ---------------1 */
/* Ellipsoid point with uncertainty circle */
#define MODEM_LCS_SS_ELLIP_POINT_UNC_CIRCLE      0x0002  /* --------------1- */
/* Ellipsoid point with uncertainty ellipse */
#define MODEM_LCS_SS_ELLIP_POINT_UNC_ELLIP       0x0004  /* -------------1-- */
/* Polygon */
#define MODEM_LCS_SS_POLYGON                     0x0008  /* ------------1--- */
/* Ellipsoid point with altitude */
#define MODEM_LCS_SS_ELLIP_POINT_ALT             0x0010  /* -----------1---- */
/* Ellipsoid point with altitude and uncertainty ellipsoid */
#define MODEM_LCS_SS_ELLIP_POINT_ALT_UNC_ELLIP   0x0020  /* ----------1----- */
/* Ellipsoid arc */
#define MODEM_LCS_SS_ELLIP_ARC                   0x0040  /* ---------1------ */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_LCS_REQUIRED_DECODING - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Indicate whether ASN1 raw data shall be delivered in a subblock and/or
   ASN1 data shall be decoded
*/
typedef uint8 MODEM_LCS_REQUIRED_DECODING_CONST;

/* Mark all fields as true */
#define MODEM_LCS_ALL_ON                         0xFF  /* 11111111 */
/* Subblocks with ASN1 decoded data is delivered */
#define MODEM_LCS_ASN1_DECODING                  0x01  /* -------1 */
/* Subblocks with ASN1 raw data is delivered */
#define MODEM_LCS_ASN1_RAW_DATA                  0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: MODEM_LCS_POSITIONING_SUPPORT - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Interface for GSM classmarks and WCDMA UE capabilities */
typedef uint8 MODEM_LCS_POSITIONING_SUPPORT_CONST;

/* Stand-Alone GPS */
#define MODEM_LCS_SUPPORT_STANDALONE_GPS         0x01  /* -------1 */
/* MS-Based GPS */
#define MODEM_LCS_SUPPORT_MS_BASED_GPS           0x02  /* ------1- */
/* MS-Assisted GPS */
#define MODEM_LCS_SUPPORT_MS_ASSISTED_GPS        0x04  /* -----1-- */
/* GPS Timing of Cell Frames */
#define MODEM_LCS_SUPPORT_UE_GPS_TIMING_OF_CELL_FRAMES 0x08  /* ----1--- */

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define MODEM_LCS_GPS_REF_CLOCK_INFO_REQ         0x00
#define MODEM_LCS_GPS_REF_CLOCK_INFO_RESP        0x01
#define MODEM_LCS_GPS_REF_CLOCK_INFO_IND         0x02
#define MODEM_LCS_SUPPORT_CONTROL_REQ            0x03
#define MODEM_LCS_SUPPORT_CONTROL_RESP           0x04
#define MODEM_LCS_RRLP_ASTNC_IND                 0x05
#define MODEM_LCS_RRLP_MEASURE_POS_REQUEST_IND   0x06
#define MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_REQ  0x07
#define MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_RESP 0x08
#define MODEM_LCS_RESET_MS_POS_STORED_INFO_IND   0x09
#define MODEM_LCS_RRC_ASTNC_IND                  0x0A
#define MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_IND 0x0B
#define MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_REQ 0x0C
#define MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_RESP 0x0D
#define MODEM_LCS_RRC_POS_MEASURED_RESULT_REQ    0x0E
#define MODEM_LCS_RRC_POS_MEASURED_RESULT_RESP   0x0F
#define MODEM_LCS_RESET_UE_POS_STORED_INFO_IND   0x10
#define MODEM_LCS_SS_REQ                         0x11
#define MODEM_LCS_SS_RESP                        0x12
#define MODEM_LCS_SS_PRIVACY_IND                 0x13
#define MODEM_LCS_SS_PRIVACY_TIMEOUT_IND         0x14
#define MODEM_LCS_TEST_HW_PIN_CTRL_REQ           0x15
#define MODEM_LCS_TEST_HW_PIN_CTRL_RESP          0x16
#define MODEM_LCS_GSM_TIME_STAMP_REQ             0x17
#define MODEM_LCS_GSM_TIME_STAMP_RESP            0x18
#define MODEM_LCS_WCDMA_TIME_STAMP_REQ           0x19
#define MODEM_LCS_WCDMA_TIME_STAMP_RESP          0x20
#define MODEM_LCS_SS_IND                         0x21
#define MODEM_LCS_SUPPORT_CONTROL_IND            0x22

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define MODEM_LCS_SB_RRLP_MULTIPLE_SETS          0x0400
#define MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ   0x0407
#define MODEM_LCS_SB_RRLP_REF_TIME_UNC           0x0408
#define MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS       0x0409
#define MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME 0x040A
#define MODEM_LCS_SB_RRLP_EXT_REF_ID             0x0406
#define MODEM_LCS_SB_RRLP_POSITIONING_INSTR      0x0402
#define MODEM_LCS_SB_RRC_LOCATION_INFO           0x0501
#define MODEM_LCS_SB_SS_CODEWORD                 0x0211
#define MODEM_LCS_SB_SS_SUPP_GAD_SHAPES          0x0212
#define MODEM_LCS_SB_RRLP_MEAS_INFO              0x0403
#define MODEM_LCS_SB_RRLP_REF_TIME               0x040B
#define MODEM_LCS_SB_RRLP_REF_LOCATION           0x040C
#define MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS       0x040D
#define MODEM_LCS_SB_RRLP_NAVIGATION             0x040E
#define MODEM_LCS_SB_RRLP_IONOSPHERIC            0x040F
#define MODEM_LCS_SB_RRLP_UTC                    0x0410
#define MODEM_LCS_SB_RRLP_ALMANAC                0x0411
#define MODEM_LCS_SB_RRLP_ACQUISITION            0x0412
#define MODEM_LCS_SB_RRLP_BAD_SAT                0x0413
#define MODEM_LCS_SB_ASN1                        0x0300
#define MODEM_LCS_SB_SS_CLIENT_NAME              0x020F
#define MODEM_LCS_SB_SS_CLIENT_EXT_ID            0x020E
#define MODEM_LCS_SB_SS_NOTIFICATION_INFO        0x0210
#define MODEM_LCS_SB_SS_REQUESTOR_ID             0x020D
#define MODEM_LCS_SB_RRC_REF_TIME                0x0100
#define MODEM_LCS_SB_RRC_REF_LOCATION            0x0101
#define MODEM_LCS_SB_RRC_DGPS_CORRECTIONS        0x0102
#define MODEM_LCS_SB_RRC_NAVIGATION              0x0103
#define MODEM_LCS_SB_RRC_IONOSPHERIC             0x0104
#define MODEM_LCS_SB_RRC_UTC                     0x0105
#define MODEM_LCS_SB_RRC_ALMANAC                 0x0106
#define MODEM_LCS_SB_RRC_ACQUISITION             0x0107
#define MODEM_LCS_SB_RRC_BAD_SAT                 0x0108
#define MODEM_LCS_SB_RRLP_LOCATION_INFO          0x0405
#define MODEM_LCS_SB_RRLP_MEAS_ERROR_INFO        0x0401
#define MODEM_LCS_SB_RRC_POSITIONING_INSTR       0x0500
#define MODEM_LCS_SB_RRC_STATE                   0x0109
#define MODEM_LCS_SB_RRC_MEAS_ERROR_INFO         0x0502
#define MODEM_LCS_SB_RRC_GPS_MEAS_INFO           0x0503
#define MODEM_LCS_SB_RRC_REF_TIME_UNC            0x0504
#define MODEM_LCS_SB_SS_QUALITY_OF_SERVICE       0x0202
#define MODEM_LCS_SB_SS_MLC_NUMBER               0x0203
#define MODEM_LCS_SB_SS_GPS_ASSISTANCE_DATA      0x0204
#define MODEM_LCS_SB_SS_ESTIMATED_LOCATION       0x0205
#define MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION   0x0213
#define MODEM_LCS_SB_SS_DECIPHERING_KEYS         0x0206
#define MODEM_LCS_SB_SS_LOCATION_METHOD          0x0207
#define MODEM_LCS_SB_SS_PRIVACY_VER              0x0208
#define MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR      0x0209
#define MODEM_LCS_SB_SS_SERVICE_TYPE_ID          0x020C
#define MODEM_LCS_SB_SS_MAX_LOCATION_AGE         0x020A
#define MODEM_LCS_SB_SS_LOCATION_TYPE            0x020B
#define MODEM_LCS_SB_SS_INDICATE_ERROR           0x0201
#define MODEM_LCS_SB_SS_OTHER_ERROR              0x0200
#define MODEM_LCS_SB_RRC_SUPPORT_REGISTER        0x0600
#define MODEM_LCS_SB_RRLP_SUPPORT_REGISTER       0x0601
#define MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER 0x0602
#define MODEM_LCS_SB_RRC_SUPPORT_STATUS          0x0603
#define MODEM_LCS_SB_RRLP_SUPPORT_STATUS         0x0604
#define MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS   0x0605
#define MODEM_LCS_SB_PROD_TEST_TXP_SET           0x0700
#define MODEM_LCS_SB_PROD_TEST_TIME_STAMP_SET    0x0701
#define MODEM_LCS_SB_PROD_TEST_TXP_RESULT        0x0702
#define MODEM_LCS_SB_PROD_TEST_TIME_STAMP_RESULT 0x0703

/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_GPS_TOW_ASSIST_SEQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    /* Reserved bits in TLM word, MSB occurs earlier in TLM Word transmitted
       by satellite
    */
    uint8   tlmReserved;
    uint16  tlm;
    uint8   antiSpoof;
    uint8   alert;
    uint8   fill1[2];
    } MODEM_LCS_RRLP_GPS_TOW_ASSIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_GPS_TOW_ASSIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_GPS_TOW_ASSIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_GPS_MEAS_SEQ - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sv_id;
    uint8   sv_cno;
    uint16  sv_code_ph_wh;
    uint16  sv_code_ph_fr;
    int16   ps_doppler;
    /* Values from the constant table MODEM_LCS_RRLP_GPS_MULTIPATH_INDICATOR
    */
    uint8   mul_path_ind;
    /* Use [3GPP TS 44.031, Table A.10] to interpret Value */
    uint8   ps_range_rms_er;
    uint8   fill1[2];
    } MODEM_LCS_RRLP_GPS_MEAS_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_GPS_MEAS_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_GPS_MEAS_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_SAT_DATA_SEQ - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   satellite_id;
    uint8   iode;
    uint8   fill1[2];
    } MODEM_LCS_SAT_DATA_SEQ_STR;

#define SIZE_MODEM_LCS_SAT_DATA_SEQ_STR   sizeof(MODEM_LCS_SAT_DATA_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_PSEUDO_RANGE_DATA_SEQ - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   satellite_id;
    uint8   satellite_cno;
    uint16  whole_chips;
    uint16  fractional_chips;
    int16   doppler;
    /* Values from the constant table MODEM_LCS_RRC_MULTIPATH_INDICATOR */
    uint8   multipath_indicator;
    uint8   pr_rms_error;
    uint8   fill1[2];
    } MODEM_LCS_PSEUDO_RANGE_DATA_SEQ_STR;

#define SIZE_MODEM_LCS_PSEUDO_RANGE_DATA_SEQ_STR   \
        sizeof(MODEM_LCS_PSEUDO_RANGE_DATA_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_W_OPTIONAL_PSC - Valid from version 001.000         */
/* ----------------------------------------------------------------------- */
/* CPICH Primary scrambling code number */

typedef struct
    {
    /* x---------------  Flag for PSC present
       -xxxxxx---------  Filler
       -------xxxxxxxxx  Scrambling code number according TS25 213
    */
    uint16  prisrcd;
    } MODEM_LCS_W_OPTIONAL_PSC_STR;

#define SIZE_MODEM_LCS_W_OPTIONAL_PSC_STR   \
        sizeof(MODEM_LCS_W_OPTIONAL_PSC_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_W_PSC - Valid from version 001.000                  */
/* ----------------------------------------------------------------------- */
/* CPICH Primary scrambling code number */

typedef struct
    {
    /* xxxxxxx---------  Filler
       -------xxxxxxxxx  Scrambling code number according TS25 213
    */
    uint16  prisrcd;
    } MODEM_LCS_W_PSC_STR;

#define SIZE_MODEM_LCS_W_PSC_STR   sizeof(MODEM_LCS_W_PSC_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_GPS_SAT_LIST_SEQ - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    uint8   iode;
    uint8   udre;         /* User Differential Range Error */
    int8    rrc;
    int16   prc;
    uint8   fill1[2];
    } MODEM_LCS_RRLP_GPS_SAT_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_GPS_SAT_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_GPS_SAT_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_MULTIPLE_SETS - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   measurement_sets;
    uint8   reference_btss;
    /* Values from the constant table MODEM_LCS_RRLP_REF_BTS_RELATION */
    uint8   btss_sets_relation;
    uint8   fill1;
    } MODEM_LCS_SB_RRLP_MULTIPLE_SETS_STR;

#define SIZE_MODEM_LCS_SB_RRLP_MULTIPLE_SETS_STR   \
        sizeof(MODEM_LCS_SB_RRLP_MULTIPLE_SETS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    } MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ_STR;

#define SIZE_MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ_STR   \
        sizeof(MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_REF_TIME_UNC - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   gps_ref_time_unc;
    uint8   fill1[3];
    } MODEM_LCS_SB_RRLP_REF_TIME_UNC_STR;

#define SIZE_MODEM_LCS_SB_RRLP_REF_TIME_UNC_STR   \
        sizeof(MODEM_LCS_SB_RRLP_REF_TIME_UNC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  gps_tow_subms;
    uint8   ref_frame_msb;
    uint8   delta_tow;
    uint8   gps_ref_time_unc;
    uint8   fill1[3];
    } MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_STR;

#define SIZE_MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_STR   \
        sizeof(MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   required_response_time;
    uint8   fill1[3];
    } MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME_STR;

#define SIZE_MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME_STR   \
        sizeof(MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_EXT_REF_ID - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* RRLP Extended Reference Id */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Transaction Id part of the Extended Reference Id */
    uint32  ext_tran_id;
    uint8   smlc_code;    /* SMLC Code part of the Extended Reference Id */
    uint8   fill1[3];
    } MODEM_LCS_SB_RRLP_EXT_REF_ID_STR;

#define SIZE_MODEM_LCS_SB_RRLP_EXT_REF_ID_STR   \
        sizeof(MODEM_LCS_SB_RRLP_EXT_REF_ID_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_POSITIONING_INSTR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* GSM POSITIONING INSTRUCTIONS Based on GSM 04.31 */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRLP_METHOD_TYPE */
    uint8   method_type;
    /* Values from the constant table MODEM_LCS_RRLP_POSITIONING_METHOD */
    uint8   positioning_method;
    uint8   response_time; /* 2^N seconds, N is the value of the field */
    uint8   accuracy;
    /* Values from the constant table MODEM_LCS_RRLP_MULTIPLE_SETS */
    uint8   multiple_sets;
    /* Values from the constant table MODEM_LCS_RRLP_ENV_CHARACTER */
    uint8   env_character;
    uint8   fill1[2];
    } MODEM_LCS_SB_RRLP_POSITIONING_INSTR_STR;

#define SIZE_MODEM_LCS_SB_RRLP_POSITIONING_INSTR_STR   \
        sizeof(MODEM_LCS_SB_RRLP_POSITIONING_INSTR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_LOCATION_INFO - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
/* Contains position calculation for UE-Based measurements. Ref 3GPP 25.331 -
   10.3.7.109
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRC_REF_TIME_TYPE */
    uint8   ref_time_type;
    uint8   fill1;
    uint16  cellfrtime_ms;
    uint32  cellfrtime_ls;
    uint16  sfn;
    uint16  scrambling_code;
    uint32  gps_ref_time_only;
    /* Values from the constant table MODEM_LCS_RRC_POSITION_TYPE */
    uint8   est_type;
    uint8   un_semi_major;
    uint8   un_semi_minor;
    /* Values from the constant table MODEM_LCS_RRC_LATITUDE_SIGN */
    uint8   latitude_sign;
    uint32  latitude;
    int32   longitude;
    uint8   un_altitude;
    /* Values from the constant table MODEM_LCS_RRC_ALTITUDE_DIRECTION */
    uint8   altitude_dir;
    uint16  altitude;
    uint8   un_code;
    uint8   orientation;  /* Actual value in degrees is * 2 */
    uint8   confidence;
    uint8   fill2;
    } MODEM_LCS_SB_RRC_LOCATION_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRC_LOCATION_INFO_STR   \
        sizeof(MODEM_LCS_SB_RRC_LOCATION_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_CODEWORD - Valid from version 001.001         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1;
    /* Note: string_len is number of characters so the size in bytes in
       Unicode is twice this number!
    */
    uint8   string_len;
    char16  codeword_string[MODEM_LCS_ANY_SIZE];
    } MODEM_LCS_SB_SS_CODEWORD_STR;

#define SIZE_MODEM_LCS_SB_SS_CODEWORD_STR   (2*sizeof(uint16) + \
        2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_SUPP_GAD_SHAPES - Valid from version 009.000  */
/* ----------------------------------------------------------------------- */
/* Supported GAD shapes */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the bitmask table MODEM_LCS_GAD_SHAPES */
    uint16  gad_shapes;
    uint8   fill1[2];
    } MODEM_LCS_SB_SS_SUPP_GAD_SHAPES_STR;

#define SIZE_MODEM_LCS_SB_SS_SUPP_GAD_SHAPES_STR   \
        sizeof(MODEM_LCS_SB_SS_SUPP_GAD_SHAPES_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_MEAS_INFO_SEQ - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint32  gps_tow;
    uint16  frame_number;
    uint8   fill1;
    uint8   num_prm;
    } MODEM_LCS_RRLP_MEAS_INFO_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_MEAS_INFO_SEQ_STR   (sizeof(uint32) + \
        sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_MEAS_INFO - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    uint8   measurement_sets;
    } MODEM_LCS_SB_RRLP_MEAS_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRLP_MEAS_INFO_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_NAV_LIST_SEQ - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    /* If Satellite status is NET_GPS_OLD_SAT_AND_OLD_MODEL all other items
       in this sequence shall be considered as invalid
       Values from the constant table MODEM_LCS_GPS_NAVIGATION_TYPES
    */
    uint8   sat_status;
    uint8   code_on_l2;
    uint8   ura;
    uint8   svhealth;
    uint8   l2_p_data_flag;
    uint16  iodc;
    uint32  sf1reserved1;
    uint32  sf1reserved2;
    uint32  sf1reserved3;
    uint16  sf1reserved4;
    uint16  toc;
    int8    tgd;
    int8    af_2;
    int16   af_1;
    int32   af_0;
    int16   crs;
    int16   delta_n;
    int32   m_0;
    int16   cuc;
    int16   cus;
    uint32  e;
    uint32  a_power_half;
    uint16  toe;
    uint8   fit_flag;
    uint8   aoda;
    int16   cic;
    int16   cis;
    int32   omega_0;
    int32   i0;
    int16   crc;
    int16   i_dot;
    int32   omega;
    int32   omega_dot;
    } MODEM_LCS_RRLP_NAV_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_NAV_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_NAV_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_GPS_ACQUIS_LIST_SEQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   svid;
    /* If Additional Doppler Present is FALSE Doppler 1 and Doppler
       Uncertainty shall be considered as invalid
    */
    uint8   add_dopp_present;
    /* Doppler 0th order term, 5120.0 - 5117.5 Hz  (= -2048 - 2047 with 2.5
       Hz resolution)
    */
    int16   doppler_0;
    uint8   doppler_1;
    uint8   doppler_uncertainty;
    uint16  code_phase;
    uint8   int_code_phase;
    uint8   gps_bit_number;
    uint16  code_phase_search_window;
    /* If Additional Angle Present is FALSE Azimuth and Elevation shall be
       considered as invalid
    */
    uint8   add_angle_present;
    /* Azimuth angle, 0 - 348.75 deg (= 0 - 31 with 11.25 deg resolution) */
    uint8   azimuth;
    /* Elevation angle, 0 - 78.75 deg (= 0 - 7 with 11.25 deg resolution) */
    uint8   elevation;
    uint8   fill1;
    } MODEM_LCS_RRLP_GPS_ACQUIS_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_GPS_ACQUIS_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_GPS_ACQUIS_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRLP_GPS_ALMANAC_LIST_SEQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    uint8   toa;
    uint16  e;
    int16   delta_i;
    int16   omega_dot;
    uint8   sv_health;
    uint8   fill1[3];
    uint32  a_power_half;
    int32   omega_0;
    int32   omega;
    int32   m0;
    int16   af_0;
    int16   af_1;
    } MODEM_LCS_RRLP_GPS_ALMANAC_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRLP_GPS_ALMANAC_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRLP_GPS_ALMANAC_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_REF_TIME - Valid from version 001.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;
    uint16  gps_week;
    /* If GSM Time present is FALSE next items in this SB shall be considered
       as invalid:GSM BSIC, GSM BCCH Carrier, GSM Timeslot Number, GSM Bit
       Number, GSM Frame Number
    */
    uint8   gsm_time_present;
    uint8   bsic;
    uint16  bcch_carrier;
    uint8   tn;
    uint8   bn;
    uint32  fnm;          /* Frame number (Modulo 2^21) */
    uint8   fill1[3];
    uint8   n_ta;
    } MODEM_LCS_SB_RRLP_REF_TIME_STR;

#define SIZE_MODEM_LCS_SB_RRLP_REF_TIME_STR   (4*sizeof(uint16) + \
        2*sizeof(uint32) + 8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_REF_LOCATION - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
/* The Reference Location field contains a 3-Dlocation (with uncertainty)
   specified as per 3GPP TS 03.32.The purpose of this field is to provide the
   MS with a prioriknowledge of its location in order to improve GPS receiver
   performance. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   byte_count;   /* Number of Shape type bytes */
    /* Shape types are specified in 3GPP TS 23.032. */
    uint8   shape_bytes[14];
    uint8   fill1;
    } MODEM_LCS_SB_RRLP_REF_LOCATION_STR;

#define SIZE_MODEM_LCS_SB_RRLP_REF_LOCATION_STR   \
        sizeof(MODEM_LCS_SB_RRLP_REF_LOCATION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* This SB specify the DGPS corrections to be used by the MS */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;      /* DGPS Reference Time */
    /* 000 UDRE Scale Factor = 1.0; 001 UDRE Scale Factor = 0.75; 010 UDRE
       Scale Factor = 0.5; 011 UDRE Scale Factor = 0.3; 100 UDRE Scale Factor
       = 0.2; 101 UDRE Scale Factor = 0.1; 110 Reference Station Transmission
       Not Monitored; 111 Data is invalid - disregard 
    */
    uint8   status;
    uint8   fill1[2];
    uint8   n_sat;        /* Number of Satellites */
    } MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS_STR;

#define SIZE_MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS_STR   (2*sizeof(uint16) + \
        sizeof(uint32) + 4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_NAVIGATION - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This SB contains information required to manage the transfer of
       precise navigation data to the GPS-capable MS.
    */
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    uint8   n_sat;        /* Navigation model list */
    } MODEM_LCS_SB_RRLP_NAVIGATION_STR;

#define SIZE_MODEM_LCS_SB_RRLP_NAVIGATION_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_IONOSPHERIC - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
/* The Ionospheric SB contains fields needed to model the propagation delays
   of the GPS signals through the ionosphere
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int8    alfa_0;
    int8    alfa_1;
    int8    alfa_2;
    int8    alfa_3;
    int8    beta_0;
    int8    beta_1;
    int8    beta_2;
    int8    beta_3;
    } MODEM_LCS_SB_RRLP_IONOSPHERIC_STR;

#define SIZE_MODEM_LCS_SB_RRLP_IONOSPHERIC_STR   \
        sizeof(MODEM_LCS_SB_RRLP_IONOSPHERIC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_UTC - Valid from version 001.000            */
/* ----------------------------------------------------------------------- */
/* The UTC Model field contains a set of parameters needed to relate GPS time
   to Universal Time Coordinate (UTC).
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int32   utc_a1;
    int32   utc_a0;
    uint8   utc_tot;
    uint8   utc_wnt;
    int8    utc_delta_tls;
    uint8   utc_wnlsf;
    int8    utc_dn;
    int8    utc_delta_tlsf;
    uint8   fill1[2];
    } MODEM_LCS_SB_RRLP_UTC_STR;

#define SIZE_MODEM_LCS_SB_RRLP_UTC_STR   sizeof(MODEM_LCS_SB_RRLP_UTC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_ALMANAC - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* These fields specify the coarse, long-term model of the satellite
       positions and clocksNOTE: These are parameters are subset of the
       ephemeris, but with reduced resolution and accuracy
    */
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint8   almanac_wna;
    uint8   n_sat;        /* Almanac list */
    } MODEM_LCS_SB_RRLP_ALMANAC_STR;

#define SIZE_MODEM_LCS_SB_RRLP_ALMANAC_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_ACQUISITION - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
/* The Acquisition SB contains parameters that enable fast acquisition of the
   GPS signals in network-based GPS positioning
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;
    /* If GSM Time present is FALSE next items in this SB shall be considered
       as invalid:GSM BSIC, GSM BCCH Carrier, GSM Timeslot Number, GSM Bit
       Number, GSM Frame Number
    */
    uint8   gsm_time_present;
    uint8   bsic;
    uint16  bcch_carrier;
    uint32  fnm;          /* Frame number (Modulo 2^21) */
    uint8   tn;
    uint8   bn;
    uint8   fill1;
    uint8   n_sat;        /* Acquisition List */
    } MODEM_LCS_SB_RRLP_ACQUISITION_STR;

#define SIZE_MODEM_LCS_SB_RRLP_ACQUISITION_STR   (3*sizeof(uint16) + \
        2*sizeof(uint32) + 6*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_BAD_SAT - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */
/* Number of bad satellites can be read from this SB */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   n_sat;
    /* Bad satelite IDs can be found from bad satellite bytes. I.e. if number
       of bad satellites indicates that there is 2 bad satellites, first byte
       includes the first satellite ID and second byte second satellite ID.
       Rest bytes shall be considered as invalid. Value range of satellite ID
       is 0 to 63
    */
    uint8   list[16];
    uint8   fill1[3];
    } MODEM_LCS_SB_RRLP_BAD_SAT_STR;

#define SIZE_MODEM_LCS_SB_RRLP_BAD_SAT_STR   \
        sizeof(MODEM_LCS_SB_RRLP_BAD_SAT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_ASN1 - Valid from version 001.000                */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    uint16  pos_len;
    /* ASN1 Payload data */
    } MODEM_LCS_SB_ASN1_STR;

#define SIZE_MODEM_LCS_SB_ASN1_STR   (3*sizeof(uint16) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_CLIENT_NAME - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[2];
    /* Values from the constant table MODEM_LCS_PRIV_INFO_TYPE */
    uint8   priv_info_type;
    /* Note: name_len is number of characters so the size in bytes in Unicode
       is twice this number!
    */
    uint8   name_len;
    } MODEM_LCS_SB_SS_CLIENT_NAME_STR;

#define SIZE_MODEM_LCS_SB_SS_CLIENT_NAME_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_CLIENT_EXT_ID - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxx----  Number type
       ----xxxx  Number plan
    */
    uint8   type_of_number;
    uint8   fill1[2];
    /* Note: data_len is number of characters so the size in bytes in Unicode
       is twice this number!
    */
    uint8   data_len;
    /* IMPORTANT: Only following Unicode characters are valid: Characters
       from 0 through 9, *, #, a, b, c. (Other Unicode characters cannot be
       encoded to TBCD format which is used in air-interface).
    */
    } MODEM_LCS_SB_SS_CLIENT_EXT_ID_STR;

#define SIZE_MODEM_LCS_SB_SS_CLIENT_EXT_ID_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_NOTIFICATION_INFO - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_LOCATION_TYPE */
    uint8   location_type;
    /* Values from the constant table MODEM_LCS_NOTIFICATION_TYPE */
    uint8   notification_type;
    /* Values from the constant table MODEM_LCS_NOTIFICATION_RESULT */
    uint8   result;
    uint8   fill1;
    } MODEM_LCS_SB_SS_NOTIFICATION_INFO_STR;

#define SIZE_MODEM_LCS_SB_SS_NOTIFICATION_INFO_STR   \
        sizeof(MODEM_LCS_SB_SS_NOTIFICATION_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_REQUESTOR_ID - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_PRIV_INFO_TYPE */
    uint8   priv_info_type;
    uint8   fill1;
    /* Note: string_len is number of characters so the size in bytes in
       Unicode is twice this number!
    */
    uint16  string_len;
    } MODEM_LCS_SB_SS_REQUESTOR_ID_STR;

#define SIZE_MODEM_LCS_SB_SS_REQUESTOR_ID_STR   (3*sizeof(uint16) + \
        2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_ACQUIS_LIST_SEQ                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    /* If Additional Doppler Present is FALSE Doppler 1 and Doppler
       Uncertainty shall be considered as invalid
    */
    uint8   add_dopp_present;
    /* Doppler 0th order term, 5120.0 - 5117.5 Hz  (= -2048 - 2047 with 2.5
       Hz resolution)
    */
    int16   doppler_0;
    int8    doppler_1;  /* Doppler 1 - actual value = ASN.1 value * 0.023  */
    uint8   fill1;
    /* Doppler Uncertainty value in ISI message is Hz * 2 */
    uint16  doppler_uncertainty;
    uint16  code_phase;
    uint8   int_code_phase;
    uint8   gps_bit_number;
    uint16  code_phase_search_window;
    /* If Additional Angle Present is FALSE Azimuth and Elevation shall be
       considered as invalid
    */
    uint8   add_angle_present;
    /* Azimuth angle, 0 - 348.75 deg (= 0 - 31 with 11.25 deg resolution) */
    uint8   azimuth;
    /* Elevation angle, 0 - 78.75 deg (= 0 - 7 with 11.25 deg resolution) */
    uint8   elevation;
    uint8   fill2[3];
    } MODEM_LCS_RRC_ACQUIS_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_ACQUIS_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_ACQUIS_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_ALMANAC_LIST_SEQ - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   data_id;
    uint8   sat_id;
    uint8   toa;
    uint8   fill1;
    uint16  e;
    int16   delta_i;
    int16   omega_dot;
    uint8   sv_health;
    uint8   fill2;
    uint32  a_power_half;
    int32   omega_0;
    int32   omega;
    int32   m0;
    int16   af_0;
    int16   af_1;
    } MODEM_LCS_RRC_ALMANAC_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_ALMANAC_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_ALMANAC_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_NAV_LIST_SEQ - Valid from version 001.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    /* If Satellite status is WRAN_OLD_SAT_AND_OLD_MODEL all other items in
       this sequence shall be considered as invalid
       Values from the constant table MODEM_LCS_RRC_NAVIGATION_TYPES
    */
    uint8   sat_status;
    uint8   code_on_l2;
    uint8   ura;
    uint8   svhealth;
    uint8   l2_p_data_flag;
    uint16  iodc;
    uint32  sf1reserved1;
    uint32  sf1reserved2;
    uint32  sf1reserved3;
    uint16  sf1reserved4;
    uint16  toc;
    int8    tgd;
    int8    af_2;
    int16   af_1;
    int32   af_0;
    int16   crs;
    int16   delta_n;
    int32   m_0;
    int16   cuc;
    int16   cus;
    uint32  e;
    uint32  a_power_half;
    uint16  toe;
    uint8   fit_flag;
    uint8   aoda;
    int16   cic;
    int16   cis;
    int32   omega_0;
    int32   i0;
    int16   crc;
    int16   i_dot;
    int32   omega;
    int32   omega_dot;
    } MODEM_LCS_RRC_NAV_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_NAV_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_NAV_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_SAT_LIST_SEQ - Valid from version 001.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    uint8   iode;
    uint8   udre;         /* User Differential Range Error */
    int8    rrc;
    int16   prc;
    uint8   fill1[2];
    } MODEM_LCS_RRC_SAT_LIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_SAT_LIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_SAT_LIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_TOW_ASSIST_SEQ - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   sat_id;
    /* Reserved bits in TLM word, MSB occurs earlier in TLM Word transmitted
       by satellite
    */
    uint8   tlmReserved;
    uint16  tlm;
    uint8   antiSpoof;
    uint8   alert;
    uint8   fill1[2];
    } MODEM_LCS_RRC_TOW_ASSIST_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_TOW_ASSIST_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_TOW_ASSIST_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: MODEM_LCS_RRC_EVENT_SEQ - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   event_quantity; /* Number of reports or MODEM_LCS_INFINITE. */
    uint8   report_first;
    /* Interval in seconds between measurements.
       Values from the constant table MODEM_LCS_RRC_MEASUREMENT_INTERVAL
    */
    uint8   measurement_interval;
    /* Event 7a threshhold value in meters.
       Values from the constant table MODEM_LCS_RRC_7A_THRESHHOLD
    */
    uint8   value_7a;
    /* Event 7b SFN/SFN threshhold value in chips.
       Values from the constant table MODEM_LCS_RRC_7B_THRESHHOLD
    */
    uint8   value_7b;
    /* Event 7c SFN/GPS_TOW threshhold value in milliseconds.
       Values from the constant table MODEM_LCS_RRC_7C_THRESHHOLD
    */
    uint8   value_7c;
    uint8   fill1;
    /* Values from the constant table MODEM_LCS_RRC_EVENT_TYPE */
    uint8   event_type;
    } MODEM_LCS_RRC_EVENT_SEQ_STR;

#define SIZE_MODEM_LCS_RRC_EVENT_SEQ_STR   \
        sizeof(MODEM_LCS_RRC_EVENT_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_REF_TIME - Valid from version 001.000        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;
    uint16  gps_week;
    uint8   utran_time_present;
    uint8   fill1[3];
    uint16  CellFrameTimeMS;
    uint32  CellFrameTimeLS;
    uint16  sfn;
    uint16  primary_cpich;
    /* Values from the constant table MODEM_LCS_RRC_SFN_TOW_UNCERTAINTY */
    uint8   sfntow_uncertainty;
    uint8   udrift_rate_present;
    int8    TutranGPSDriftRate;
    uint8   n_ta;
    } MODEM_LCS_SB_RRC_REF_TIME_STR;

#define SIZE_MODEM_LCS_SB_RRC_REF_TIME_STR   (6*sizeof(uint16) + \
        2*sizeof(uint32) + 7*sizeof(uint8) + sizeof(int8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_REF_LOCATION - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
/* The Reference Location field contains a 3-D location (with uncertainty)
   specified as per 3GPP TS 03.32. The purpose of this field is to provide
   the MS with prior knowledge of its location in order to improve GPS
   receiver performance. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRC_LATITUDE_SIGN */
    uint8   latitudeSign;
    /* Values from the constant table MODEM_LCS_RRC_ALTITUDE_DIRECTION */
    uint8   altitudeSign;
    uint16  altitude;
    uint32  latitude;
    int32   longitude;
    uint8   uncertaintySemiMajor;
    uint8   uncertaintySemiMinor;
    uint8   orientationMajorAxis;
    uint8   uncertaintyAltitude;
    uint8   confidence;
    uint8   fill1[3];
    } MODEM_LCS_SB_RRC_REF_LOCATION_STR;

#define SIZE_MODEM_LCS_SB_RRC_REF_LOCATION_STR   \
        sizeof(MODEM_LCS_SB_RRC_REF_LOCATION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_DGPS_CORRECTIONS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This SB specifies the DGPS corrections to be used by the UE */
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;      /* DGPS Reference Time in SECONDS */
    /* 000 UDRE Scale Factor = 1.0; 001 UDRE Scale Factor = 0.75; 010 UDRE
       Scale Factor = 0.5; 011 UDRE Scale Factor = 0.3; 100 UDRE Scale Factor
       = 0.2; 101 UDRE Scale Factor = 0.1; 110 Reference Station Transmission
       Not Monitored; 111 Data is invalid - disregard 
    */
    uint8   status;
    uint8   fill1[2];
    uint8   n_sat;        /* Number of Satellites */
    } MODEM_LCS_SB_RRC_DGPS_CORRECTIONS_STR;

#define SIZE_MODEM_LCS_SB_RRC_DGPS_CORRECTIONS_STR   (2*sizeof(uint16) + \
        sizeof(uint32) + 4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_NAVIGATION - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* This SB contains information required to manage the transfer of
       precise navigation data to the GPS-capable UE.
    */
    uint16  sb_id;
    uint16  sb_len;
    uint8   fill1[3];
    uint8   n_sat;        /* Navigation model list */
    } MODEM_LCS_SB_RRC_NAVIGATION_STR;

#define SIZE_MODEM_LCS_SB_RRC_NAVIGATION_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_IONOSPHERIC - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* The Ionospheric SB contains fields needed to model the propagation delays
   of the GPS signals through the ionosphere
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int8    alfa_0;
    int8    alfa_1;
    int8    alfa_2;
    int8    alfa_3;
    int8    beta_0;
    int8    beta_1;
    int8    beta_2;
    int8    beta_3;
    } MODEM_LCS_SB_RRC_IONOSPHERIC_STR;

#define SIZE_MODEM_LCS_SB_RRC_IONOSPHERIC_STR   \
        sizeof(MODEM_LCS_SB_RRC_IONOSPHERIC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_UTC - Valid from version 001.000             */
/* ----------------------------------------------------------------------- */
/* The UTC Model field contains a set of parameters needed to relate GPS time
   to Universal Time Coordinate (UTC).
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int32   utc_a1;
    int32   utc_a0;
    uint8   utc_tot;
    uint8   utc_wnt;
    int8    utc_delta_tls;
    uint8   utc_wnlsf;
    int8    utc_dn;
    int8    utc_delta_tlsf;
    uint8   fill1[2];
    } MODEM_LCS_SB_RRC_UTC_STR;

#define SIZE_MODEM_LCS_SB_RRC_UTC_STR   sizeof(MODEM_LCS_SB_RRC_UTC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_ALMANAC - Valid from version 001.000         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* These fields specify the coarse, long-term model of the satellite
       positions and clocksNOTE: These parameters are a subset of the
       ephemeris, but with reduced resolution and accuracy
    */
    uint8   fill1;
    uint8   svGlobalHealth_present;
    uint8   almanac_wna;
    uint8   n_sat;        /* Almanac list */
    /* sv-Global Health 364 bits (optional field) */
    } MODEM_LCS_SB_RRC_ALMANAC_STR;

#define SIZE_MODEM_LCS_SB_RRC_ALMANAC_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_ACQUISITION - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* The Acquisition SB contains parameters that enable fast acquisition of the
   GPS signals in network-based GPS positioning
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gps_tow;
    uint8   utran_time_present;
    uint8   n_sat;
    uint16  CellFrameTimeMS;
    uint32  CellFrameTimeLS;
    uint16  sfn;
    uint16  primary_cpich;
    } MODEM_LCS_SB_RRC_ACQUISITION_STR;

#define SIZE_MODEM_LCS_SB_RRC_ACQUISITION_STR   (5*sizeof(uint16) + \
        2*sizeof(uint32) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_BAD_SAT - Valid from version 001.000         */
/* ----------------------------------------------------------------------- */
/* Number of bad satellites can be read from this SB */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   n_sat;
    /* Bad satelite IDs can be found from bad satellite list. I.e. if number
       of bad satellites indicates that there are 2 bad satellites, first
       byte is the first bad satellite ID and second byte second bad
       satellite ID. Remaining bytes shall be considered invalid. Value range
       of satellite ID is 0 to 63
    */
    uint8   list[16];
    uint8   fill1[3];
    } MODEM_LCS_SB_RRC_BAD_SAT_STR;

#define SIZE_MODEM_LCS_SB_RRC_BAD_SAT_STR   \
        sizeof(MODEM_LCS_SB_RRC_BAD_SAT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_LOCATION_INFO - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* This field shall be within above range if field 'frame_number' equals
       MODEM_LCS_NOT_AVAILABLE!
    */
    uint32  gps_tow;
    uint16  frame_number;
    /* Values from the constant table MODEM_LCS_RRLP_FIX_TYPE */
    uint8   fix_type;
    uint8   byte_count;
    /* See [3GPP TS 23.032, Section 7]. Possible shapes:
       - Ellipsoid Point (7 bytes)
       - Ellipsoid Point with uncertainty Circle (8 bytes)
       - Ellipsoid Point with uncertainty Ellipse (11 bytes)
       - Ellipsoid Point with Altitude (9 bytes)
       - Ellipsoid Point with Altitude and uncertainty Ellipse  (14 bytes)
    */
    } MODEM_LCS_SB_RRLP_LOCATION_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRLP_LOCATION_INFO_STR   (3*sizeof(uint16) + \
        sizeof(uint32) + 2*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_MEAS_ERROR_INFO - Valid from version 002.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRLP_LOCATION_ERROR */
    uint8   error_reason;
    uint8   fill1[2];
    uint8   n_assistance;
    /* Additional GPS Assistance Data needed in order to complete a GPS fix
       (structure and encoding are defined in section 10.10 of /10/,
       excluding the IEI octet and the length indicator octect).
    */
    } MODEM_LCS_SB_RRLP_MEAS_ERROR_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRLP_MEAS_ERROR_INFO_STR   (2*sizeof(uint16) + \
        4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_POSITIONING_INSTR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* WCDMA POSITIONING INSTRUCTIONS Based on 3GPP 25.331 */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   measurement_id; /* Measurement ID. */
    /* Measurement command.
       Values from the constant table MODEM_LCS_RRC_MEASUREMENT_COMMAND
    */
    uint8   measurement_command;
    /* Values from the constant table MODEM_LCS_RRC_METHOD_TYPE */
    uint8   method_type;
    /* Values from the constant table MODEM_LCS_RRC_POSITIONING_METHOD */
    uint8   positioning_method;
    uint8   h_accuracy;
    uint8   v_accuracy;
    /* if TRUE the SRNC wants the UE to report the SFN-GPS timing of the
       reference cell. This is however optional in the UE.
    */
    uint8   gps_sfn_timing;
    /* Values from the constant table MODEM_LCS_RRC_ENV_CHARACTER */
    uint8   env_character;
    uint8   add_data;
    /* Values from the constant table MODEM_LCS_RRC_REPORT_CRITERIA */
    uint8   report_criteria;
    /* Values from the constant table MODEM_LCS_RRC_REPORTING_QUANTITY */
    uint8   report_quantity;
    /* Values from the constant table MODEM_LCS_RRC_REPORTING_INTERVAL */
    uint8   report_interval;
    uint8   num_events;
    uint8   fill1[3];
    /* List of events */
    } MODEM_LCS_SB_RRC_POSITIONING_INSTR_STR;

#define SIZE_MODEM_LCS_SB_RRC_POSITIONING_INSTR_STR   (2*sizeof(uint16) + \
        16*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_STATE - Valid from version 001.000           */
/* ----------------------------------------------------------------------- */
/* Requirement from 25.331 section 8.4.1.6.7. This sub-block contains the
   current RRC state relevant to UE positioning where the supporting Client
   has to make the change to reporting interval itself. It may also command
   the client to suspend or continue the on-going measurement.
   This sub-block is only included if the on-going measurement is affected by
   the RRC state change.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRC_CURRENT_STATE_STATUS_TYPE
    */
    uint8   current_rrc_state;
    /* Values from the constant table MODEM_LCS_RRC_MEAS_SUSPEND_CONTROL */
    uint8   meas_suspend_ctrl;
    uint8   fill1[2];
    } MODEM_LCS_SB_RRC_STATE_STR;

#define SIZE_MODEM_LCS_SB_RRC_STATE_STR   sizeof(MODEM_LCS_SB_RRC_STATE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_MEAS_ERROR_INFO - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Measurement error code
       Values from the constant table MODEM_LCS_RRC_MEAS_ERROR
    */
    uint8   error;
    uint8   ad_req;
    uint8   almanac_req;
    uint8   utc_model_req;
    uint8   ionspheric_model_req;
    uint8   navigation_model_req;
    uint8   dgps_corrections_req;
    uint8   reference_location_req;
    uint8   ref_time_req;
    uint8   aa_req;
    uint8   rt_intregrity_req;
    uint8   navigation_model_ad_req;
    uint16  gps_week;
    uint8   gps_toe;
    uint8   ttoe_limit;
    uint8   fill1[3];
    uint8   nbr_satellites;
    } MODEM_LCS_SB_RRC_MEAS_ERROR_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRC_MEAS_ERROR_INFO_STR   (3*sizeof(uint16) + \
        18*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_GPS_MEAS_INFO - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */
/* Contains measured results. Ref 3GPP 25.331 - 10.3.7.93 */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_RRC_REF_TIME_TYPE */
    uint8   ref_time_type;
    uint8   fill1;
    uint16  cellfrtime_ms;
    uint32  cellfrtime_ls;
    uint16  sfn;
    uint16  scrambling_code;
    uint32  gps_ref_time_only;
    uint8   fill2[3];
    uint8   nbr_satellites;
    } MODEM_LCS_SB_RRC_GPS_MEAS_INFO_STR;

#define SIZE_MODEM_LCS_SB_RRC_GPS_MEAS_INFO_STR   (5*sizeof(uint16) + \
        6*sizeof(uint8) + 2*sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_REF_TIME_UNC - Valid from version 006.000    */
/* ----------------------------------------------------------------------- */
/* This SB contains the accuracy of the provided GPS time or alternatively
   the accuracy of the provided relation between GPS and UTRAN time.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   gps_ref_time_unc;
    uint8   fill1[3];
    } MODEM_LCS_SB_RRC_REF_TIME_UNC_STR;

#define SIZE_MODEM_LCS_SB_RRC_REF_TIME_UNC_STR   \
        sizeof(MODEM_LCS_SB_RRC_REF_TIME_UNC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_QUALITY_OF_SERVICE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Each of the SS parameters marked absent or present by individual bits
       within this byte. 
       Allocation of bits:
       Bit . . .Parameter indicated
       1 . . . .Horizontal Accuracy
       2 . . . .Vertical Coordinate Request
       3 . . . .Vertical Accuracy
       4 . . . .Response Time
       5 . . . .reserved, set to 1
       6 . . . .reserved, set to 1
       7 . . . .reserved, set to 1
       8 . . . .reserved, set to 1
       
       Bit value . . Meaning
       1 . . . . . . Parameter present
       0 . . . . . . Parameter absent
    */
    uint8   ss_parameter_indicator;
    /* 7 bit (B6 - B0) Horizontal Uncertainty Code defined in 3GPP TS 23.032
       /9/. B7 (MSB) 0 (Spare).
    */
    uint8   horizontal_accuracy;
    /* Values from the constant table
       MODEM_LCS_SS_VERTICAL_COORDINATE_REQUEST
    */
    uint8   vertical_coord_req;
    /* 7 bit (B6 - B0) Vertical Uncertainty Code defined in 3GPP TS 23.032
       /9/. B7 (MSB) 0 (Spare).
    */
    uint8   vertical_accuracy;
    /* Values from the constant table MODEM_LCS_SS_RESPONSE_TIME */
    uint8   response_time_category;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_QUALITY_OF_SERVICE_STR;

#define SIZE_MODEM_LCS_SB_SS_QUALITY_OF_SERVICE_STR   \
        sizeof(MODEM_LCS_SB_SS_QUALITY_OF_SERVICE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_MLC_NUMBER - Valid from version 002.000       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxx----  Number type
       ----xxxx  Number plan
    */
    uint8   type_of_number;
    uint8   number_length;
    /* IMPORTANT: Only following Unicode characters are valid: Characters
       from 0 through 9, *, #, a, b, c. (Other Unicode characters cannot be
       encoded to TBCD format which is used in air-interface).
    */
    } MODEM_LCS_SB_SS_MLC_NUMBER_STR;

#define SIZE_MODEM_LCS_SB_SS_MLC_NUMBER_STR   (2*sizeof(uint16) + \
        2*sizeof(uint8))

#define SIZE_SS_MODEM_LCS_MLC_NUMBER_FIXED   SIZE_SS_MODEM_LCS_MLC_NUMBER_STR

/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_GPS_ASSISTANCE_DATA - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Note : See 3GPP 49.031 /10/ for GPS Assistance Data details. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   len_of_gps_assist_data;
    /* Note: See 3GPP 49.031 /10/ for GPS Assistance Data details. */
    } MODEM_LCS_SB_SS_GPS_ASSISTANCE_DATA_STR;

#define SIZE_MODEM_LCS_SB_SS_GPS_ASSISTANCE_DATA_STR   (2*sizeof(uint16) + \
        sizeof(uint8))

#define SIZE_SS_MODEM_LCS_GPS_ASSISTANCE_DATA_FIXED   SIZE_SS_MODEM_LCS_GPS_ASSISTANCE_DATA_STR

/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_ESTIMATED_LOCATION - Valid from version 005.000 */
/* ----------------------------------------------------------------------- */
/* Location Estimate (Ext-GeographicalInformation) as defined in 3GPP TS
   29.002.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Note: See 3GPP TS 23.032 /9/ for Location Estimate coding details.
       This field includes the location estimate shape type in the first
       byte.
    */
    uint8   location_estimate[MODEM_LCS_MAX_EXT_GEO_INFO_LENGTH];
    } MODEM_LCS_SB_SS_ESTIMATED_LOCATION_STR;

#define SIZE_MODEM_LCS_SB_SS_ESTIMATED_LOCATION_STR   \
        sizeof(MODEM_LCS_SB_SS_ESTIMATED_LOCATION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION - Valid from version 009.000 */
/* ----------------------------------------------------------------------- */
/* Additional Location Estimate (Add-GeographicalInformation) as defined in
   3GPP TS 29.002.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Note: See 3GPP TS 23.032 /9/ for Additional Location Estimate coding
       details.
       This field includes the location estimate shape type in the first
       byte.
    */
    uint8   add_location_estimate[MODEM_LCS_MAX_ADD_GEO_INFO_LENGTH];
    uint8   fill1;
    } MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION_STR;

#define SIZE_MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION_STR   \
        sizeof(MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_DECIPHERING_KEYS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Octet 3 of Deciphering Key IE defined in 3GPP 49.031 /10/ */
    uint8   deciphering_key_flag;
    /* Octet 4-10 of Deciphering Key IE defined in 3GPP TS 49.031 /10/ */
    uint8   current_deciphering_key[7];
    /* Octet 11-17 of Deciphering Key IE defined in 3GPP TS 49.031 /10/ */
    uint8   next_deciphering_key[7];
    uint8   fill1;
    } MODEM_LCS_SB_SS_DECIPHERING_KEYS_STR;

#define SIZE_MODEM_LCS_SB_SS_DECIPHERING_KEYS_STR   \
        sizeof(MODEM_LCS_SB_SS_DECIPHERING_KEYS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_LOCATION_METHOD - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_METHOD */
    uint8   location_method;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_LOCATION_METHOD_STR;

#define SIZE_MODEM_LCS_SB_SS_LOCATION_METHOD_STR   \
        sizeof(MODEM_LCS_SB_SS_LOCATION_METHOD_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_PRIVACY_VER - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_PRIVACY_VERIFICATION */
    uint8   privacy_verification;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_PRIVACY_VER_STR;

#define SIZE_MODEM_LCS_SB_SS_PRIVACY_VER_STR   \
        sizeof(MODEM_LCS_SB_SS_PRIVACY_VER_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_PSEUDONYM_REQUESTED */
    uint8   pseudonym_indicator;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR_STR;

#define SIZE_MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR_STR   \
        sizeof(MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_SERVICE_TYPE_ID - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_SERVICE_TYPE_ID */
    uint8   service_type_id;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_SERVICE_TYPE_ID_STR;

#define SIZE_MODEM_LCS_SB_SS_SERVICE_TYPE_ID_STR   \
        sizeof(MODEM_LCS_SB_SS_SERVICE_TYPE_ID_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_MAX_LOCATION_AGE - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* The value represents the elapsed time in minutes since the last
       network contact of the mobile station. See 3GPP 29.002 section 17.7.8
       for details
    */
    uint16  age_of_location;
    uint8   fill1[2];
    } MODEM_LCS_SB_SS_MAX_LOCATION_AGE_STR;

#define SIZE_MODEM_LCS_SB_SS_MAX_LOCATION_AGE_STR   \
        sizeof(MODEM_LCS_SB_SS_MAX_LOCATION_AGE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_LOCATION_TYPE - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_LOCATION_TYPE */
    uint8   location_type;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_LOCATION_TYPE_STR;

#define SIZE_MODEM_LCS_SB_SS_LOCATION_TYPE_STR   \
        sizeof(MODEM_LCS_SB_SS_LOCATION_TYPE_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_INDICATE_ERROR - Valid from version 001.000   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_ERROR_CODES */
    uint8   error_code;
    /* Default value is 0x00. Additional indication is not present.
       Values from the constant table
       MODEM_LCS_SS_ERROR_ADDITIONAL_INDICATION
    */
    uint8   additional_indication;
    uint8   fill1[2];
    } MODEM_LCS_SB_SS_INDICATE_ERROR_STR;

#define SIZE_MODEM_LCS_SB_SS_INDICATE_ERROR_STR   \
        sizeof(MODEM_LCS_SB_SS_INDICATE_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_OTHER_ERROR - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SS_MISC_SS_ERRORS */
    uint8   error_code;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_OTHER_ERROR_STR;

#define SIZE_MODEM_LCS_SB_SS_OTHER_ERROR_STR   \
        sizeof(MODEM_LCS_SB_SS_OTHER_ERROR_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_SUPPORT_REGISTER - Valid from version 003.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   support_offer;
    /* Values from the bitmask table MODEM_LCS_REQUIRED_DECODING */
    uint8   required_decoding;
    /* A subset of values from the bitmask table
       MODEM_LCS_POSITIONING_SUPPORT
    */
    uint8   capabilities;
    uint8   fill1;
    } MODEM_LCS_SB_RRC_SUPPORT_REGISTER_STR;

#define SIZE_MODEM_LCS_SB_RRC_SUPPORT_REGISTER_STR   \
        sizeof(MODEM_LCS_SB_RRC_SUPPORT_REGISTER_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_SUPPORT_REGISTER - Valid from version 003.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   support_offer;
    /* Values from the bitmask table MODEM_LCS_REQUIRED_DECODING */
    uint8   required_decoding;
    /* A subset of values from the bitmask table
       MODEM_LCS_POSITIONING_SUPPORT
    */
    uint8   capabilities;
    uint8   fill1;
    } MODEM_LCS_SB_RRLP_SUPPORT_REGISTER_STR;

#define SIZE_MODEM_LCS_SB_RRLP_SUPPORT_REGISTER_STR   \
        sizeof(MODEM_LCS_SB_RRLP_SUPPORT_REGISTER_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint8   support_offer;
    uint8   fill1[3];
    } MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER_STR;

#define SIZE_MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER_STR   \
        sizeof(MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRC_SUPPORT_STATUS - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SUPPORT_STATUS_CODE */
    uint8   support_status_code;
    uint8   release;   /* Values from the constant table MODEM_LCS_RELEASE */
    uint8   fill1[2];
    } MODEM_LCS_SB_RRC_SUPPORT_STATUS_STR;

#define SIZE_MODEM_LCS_SB_RRC_SUPPORT_STATUS_STR   \
        sizeof(MODEM_LCS_SB_RRC_SUPPORT_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_RRLP_SUPPORT_STATUS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SUPPORT_STATUS_CODE */
    uint8   support_status_code;
    uint8   release;   /* Values from the constant table MODEM_LCS_RELEASE */
    uint8   fill1[2];
    } MODEM_LCS_SB_RRLP_SUPPORT_STATUS_STR;

#define SIZE_MODEM_LCS_SB_RRLP_SUPPORT_STATUS_STR   \
        sizeof(MODEM_LCS_SB_RRLP_SUPPORT_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table MODEM_LCS_SUPPORT_STATUS_CODE */
    uint8   support_status_code;
    uint8   release;   /* Values from the constant table MODEM_LCS_RELEASE */
    uint8   fill1[2];
    } MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS_STR;

#define SIZE_MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS_STR   \
        sizeof(MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_GPS_REF_CLOCK_INFO_REQ - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */
/* This message is used to request information about the reference clock */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   subscription;
    uint8   fill1;
    } MODEM_LCS_GPS_REF_CLOCK_INFO_REQ_STR;

#define SIZE_MODEM_LCS_GPS_REF_CLOCK_INFO_REQ_STR   \
        sizeof(MODEM_LCS_GPS_REF_CLOCK_INFO_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_GPS_REF_CLOCK_INFO_RESP - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint16  uncertainty;
    } MODEM_LCS_GPS_REF_CLOCK_INFO_RESP_STR;

#define SIZE_MODEM_LCS_GPS_REF_CLOCK_INFO_RESP_STR   \
        sizeof(MODEM_LCS_GPS_REF_CLOCK_INFO_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_GPS_REF_CLOCK_INFO_IND - Valid from version 001.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint16  uncertainty;
    } MODEM_LCS_GPS_REF_CLOCK_INFO_IND_STR;

#define SIZE_MODEM_LCS_GPS_REF_CLOCK_INFO_IND_STR   \
        sizeof(MODEM_LCS_GPS_REF_CLOCK_INFO_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SUPPORT_CONTROL_REQ - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */
/* This message is used to indicate that a server might support one or
   several incoming location related events from the network
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_RRC_SUPPORT_REGISTER
       MODEM_LCS_SB_RRLP_SUPPORT_REGISTER
       MODEM_LCS_SB_SS_PRIVACY_SUPPORT_REGISTER
    */
    } MODEM_LCS_SUPPORT_CONTROL_REQ_STR;

#define SIZE_MODEM_LCS_SUPPORT_CONTROL_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SUPPORT_CONTROL_RESP - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    /* Subblock list:
       MODEM_LCS_SB_RRC_SUPPORT_STATUS
       MODEM_LCS_SB_RRLP_SUPPORT_STATUS
       MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS
    */
    } MODEM_LCS_SUPPORT_CONTROL_RESP_STR;

#define SIZE_MODEM_LCS_SUPPORT_CONTROL_RESP_STR   \
        sizeof(MODEM_LCS_SUPPORT_CONTROL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SUPPORT_CONTROL_IND - Valid from version 007.001     */
/* ----------------------------------------------------------------------- */
/* This message is used to indicate that some of the location services
   support status was changed. This indication is sent whenever some location
   event support status changes.
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    /* Subblock list:
       MODEM_LCS_SB_RRC_SUPPORT_STATUS
       MODEM_LCS_SB_RRLP_SUPPORT_STATUS
       MODEM_LCS_SB_SS_PRIVACY_SUPPORT_STATUS
    */
    } MODEM_LCS_SUPPORT_CONTROL_IND_STR;

#define SIZE_MODEM_LCS_SUPPORT_CONTROL_IND_STR   \
        sizeof(MODEM_LCS_SUPPORT_CONTROL_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRLP_ASTNC_IND - Valid from version 001.000          */
/* ----------------------------------------------------------------------- */
/* This is a GSM specific message.
   This notification is sent after LCS layer has received whole RRLP
   assistance data packet
   More information about usage of data specified in SBs can be found from
   /15/
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   rrlp_ref_nbr;
    uint8   more_astnc_coming;
    uint8   fill1[3];
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_ASN1
       MODEM_LCS_SB_RRLP_ACQUISITION
       MODEM_LCS_SB_RRLP_ALMANAC
       MODEM_LCS_SB_RRLP_BAD_SAT
       MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS
       MODEM_LCS_SB_RRLP_EXT_REF_ID
       MODEM_LCS_SB_RRLP_IONOSPHERIC
       MODEM_LCS_SB_RRLP_NAVIGATION
       MODEM_LCS_SB_RRLP_REF_LOCATION
       MODEM_LCS_SB_RRLP_REF_TIME
       MODEM_LCS_SB_RRLP_REF_TIME_UNC
       MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ
       MODEM_LCS_SB_RRLP_UTC
    */
    } MODEM_LCS_RRLP_ASTNC_IND_STR;

#define SIZE_MODEM_LCS_RRLP_ASTNC_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRLP_MEASURE_POS_REQUEST_IND - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   rrlp_ref_nbr;
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_ASN1
       MODEM_LCS_SB_RRLP_ACQUISITION
       MODEM_LCS_SB_RRLP_ALMANAC
       MODEM_LCS_SB_RRLP_BAD_SAT
       MODEM_LCS_SB_RRLP_DGPS_CORRECTIONS
       MODEM_LCS_SB_RRLP_EXT_REF_ID
       MODEM_LCS_SB_RRLP_IONOSPHERIC
       MODEM_LCS_SB_RRLP_NAVIGATION
       MODEM_LCS_SB_RRLP_POSITIONING_INSTR
       MODEM_LCS_SB_RRLP_REF_LOCATION
       MODEM_LCS_SB_RRLP_REF_TIME
       MODEM_LCS_SB_RRLP_REF_TIME_UNC
       MODEM_LCS_SB_RRLP_REQUIRED_RESPONSE_TIME
       MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS_REQ
       MODEM_LCS_SB_RRLP_UTC
    */
    } MODEM_LCS_RRLP_MEASURE_POS_REQUEST_IND_STR;

#define SIZE_MODEM_LCS_RRLP_MEASURE_POS_REQUEST_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_REQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* See [3GPP TS 44.031, Section A.3] */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   rrlp_ref_nbr;
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_RRLP_EXT_REF_ID
       MODEM_LCS_SB_RRLP_LOCATION_INFO
       MODEM_LCS_SB_RRLP_MEAS_ERROR_INFO
       MODEM_LCS_SB_RRLP_MEAS_INFO
       MODEM_LCS_SB_RRLP_MULTIPLE_SETS
       MODEM_LCS_SB_RRLP_TIME_ASSIST_MEAS
    */
    } MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_REQ_STR;

#define SIZE_MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_REQ_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_RESP - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    } MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_RESP_STR;

#define SIZE_MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_RESP_STR   \
        sizeof(MODEM_LCS_RRLP_MEASURE_POS_RESPONSE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RESET_MS_POS_STORED_INFO_IND - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Used to clear all data / information stored in the GPS receiver (i.e.
   assistance data).See :3GPP TS 44.014
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Position technologies as defined in 3GPP spec. 44.014
       Values from the constant table MODEM_LCS_MS_POSITION_TECHNOLOGY
    */
    uint8   pos_technology;
    uint8   fill1;
    } MODEM_LCS_RESET_MS_POS_STORED_INFO_IND_STR;

#define SIZE_MODEM_LCS_RESET_MS_POS_STORED_INFO_IND_STR   \
        sizeof(MODEM_LCS_RESET_MS_POS_STORED_INFO_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_IND - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* This message is sent when delivering assistance data or a RRC position
   measurement is requested
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    /* 'Not for a specific measurement' is used when delivering only
       assistance data
    */
    uint8   measurement_id;
    uint8   fill2[3];
    uint8   sb_count;
    /* 
       Subblock list:
       MODEM_LCS_SB_ASN1
       MODEM_LCS_SB_RRC_ACQUISITION
       MODEM_LCS_SB_RRC_ALMANAC
       MODEM_LCS_SB_RRC_BAD_SAT
       MODEM_LCS_SB_RRC_DGPS_CORRECTIONS
       MODEM_LCS_SB_RRC_IONOSPHERIC
       MODEM_LCS_SB_RRC_NAVIGATION
       MODEM_LCS_SB_RRC_POSITIONING_INSTR
       MODEM_LCS_SB_RRC_REF_LOCATION
       MODEM_LCS_SB_RRC_REF_TIME
       MODEM_LCS_SB_RRC_REF_TIME_UNC
       MODEM_LCS_SB_RRC_STATE
       MODEM_LCS_SB_RRC_UTC
    */
    } MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_IND_STR;

#define SIZE_MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_REQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* 'Not for a specific measurement' is used for a response to a status
       report or assistance data
    */
    uint8   measurement_id;
    /* Error code
       Values from the constant table MODEM_LCS_RRC_ERROR_CODE
    */
    uint8   error;
    } MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_REQ_STR;

#define SIZE_MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_REQ_STR   \
        sizeof(MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_RESP - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    } MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_RESP_STR;

#define SIZE_MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_RESP_STR   \
        sizeof(MODEM_LCS_RRC_POS_MEASUREMENT_REQUEST_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRC_POS_MEASURED_RESULT_REQ - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* TRUE if this is a single report or the last of multiple reports. FALSE
       if this is not the last of multiple reports.
    */
    uint8   final_measurement;
    uint8   measurement_id; /* Measurement ID. */
    uint8   fill1[3];
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_RRC_GPS_MEAS_INFO
       MODEM_LCS_SB_RRC_LOCATION_INFO
       MODEM_LCS_SB_RRC_MEAS_ERROR_INFO
       MODEM_LCS_SB_RRC_REF_TIME_UNC
    */
    } MODEM_LCS_RRC_POS_MEASURED_RESULT_REQ_STR;

#define SIZE_MODEM_LCS_RRC_POS_MEASURED_RESULT_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RRC_POS_MEASURED_RESULT_RESP - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    } MODEM_LCS_RRC_POS_MEASURED_RESULT_RESP_STR;

#define SIZE_MODEM_LCS_RRC_POS_MEASURED_RESULT_RESP_STR   \
        sizeof(MODEM_LCS_RRC_POS_MEASURED_RESULT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_RESET_UE_POS_STORED_INFO_IND - Valid from version 001.000 */
/* ----------------------------------------------------------------------- */
/* Used to clear all data / information stored in the GPS receiver (i.e.
   assistance data).See :3GPP TS 34.109
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* Position technologies as defined in 3GPP spec. 34.109
       Values from the constant table MODEM_LCS_UE_POSITION_TECHNOLOGY
    */
    uint8   pos_technology;
    uint8   fill1;
    } MODEM_LCS_RESET_UE_POS_STORED_INFO_IND_STR;

#define SIZE_MODEM_LCS_RESET_UE_POS_STORED_INFO_IND_STR   \
        sizeof(MODEM_LCS_RESET_UE_POS_STORED_INFO_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SS_REQ - Valid from version 001.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* A subset of values from the constant table MODEM_LCS_SS_REQ_RESP_TYPES
    */
    uint8   request_type;
    uint8   sb_count;
    /* In case of  a new session the value is  equal '0'. Otherwise session
       shall be set equal the session id received in the response message
       returned from Modem LCS server
    */
    uint8   session;
    uint8   fill1[3];
    /* Subblock list:
       MODEM_LCS_SB_SS_CLIENT_EXT_ID
       MODEM_LCS_SB_SS_GPS_ASSISTANCE_DATA
       MODEM_LCS_SB_SS_LOCATION_METHOD
       MODEM_LCS_SB_SS_LOCATION_TYPE
       MODEM_LCS_SB_SS_MAX_LOCATION_AGE
       MODEM_LCS_SB_SS_MLC_NUMBER
       MODEM_LCS_SB_SS_PRIVACY_VER
       MODEM_LCS_SB_SS_PSEUDONYM_INDICATOR
       MODEM_LCS_SB_SS_QUALITY_OF_SERVICE
       MODEM_LCS_SB_SS_SERVICE_TYPE_ID
       MODEM_LCS_SB_SS_SUPP_GAD_SHAPES
    */
    } MODEM_LCS_SS_REQ_STR;

#define SIZE_MODEM_LCS_SS_REQ_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SS_RESP - Valid from version 004.000                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    /* If 'TRUE' also MODEM_LCS_SS_IND will be sent */
    uint8   valid_session_id;
    uint8   session;
    } MODEM_LCS_SS_RESP_STR;

#define SIZE_MODEM_LCS_SS_RESP_STR   sizeof(MODEM_LCS_SS_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SS_IND - Valid from version 004.000                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   session;
    /* Values from the constant table MODEM_LCS_SS_RESPONSE_STATUS */
    uint8   response_status;
    /* A subset of values from the constant table MODEM_LCS_SS_REQ_RESP_TYPES
    */
    uint8   response_type;
    uint8   fill1[2];
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_SS_ADD_ESTIMATED_LOCATION
       MODEM_LCS_SB_SS_DECIPHERING_KEYS
       MODEM_LCS_SB_SS_ESTIMATED_LOCATION
       MODEM_LCS_SB_SS_INDICATE_ERROR
       MODEM_LCS_SB_SS_OTHER_ERROR
       MODEM_LCS_SB_SS_SERVICE_TYPE_ID
    */
    } MODEM_LCS_SS_IND_STR;

#define SIZE_MODEM_LCS_SS_IND_STR   (8*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SS_PRIVACY_IND - Valid from version 003.000          */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   session;
    uint8   sb_count;
    /* Subblock list:
       MODEM_LCS_SB_SS_CLIENT_EXT_ID
       MODEM_LCS_SB_SS_CLIENT_NAME
       MODEM_LCS_SB_SS_CODEWORD
       MODEM_LCS_SB_SS_NOTIFICATION_INFO
       MODEM_LCS_SB_SS_REQUESTOR_ID
       MODEM_LCS_SB_SS_SERVICE_TYPE_ID
    */
    } MODEM_LCS_SS_PRIVACY_IND_STR;

#define SIZE_MODEM_LCS_SS_PRIVACY_IND_STR   (4*sizeof(uint8))


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_SS_PRIVACY_TIMEOUT_IND - Valid from version 003.000  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   session;
    uint8   fill1;
    } MODEM_LCS_SS_PRIVACY_TIMEOUT_IND_STR;

#define SIZE_MODEM_LCS_SS_PRIVACY_TIMEOUT_IND_STR   \
        sizeof(MODEM_LCS_SS_PRIVACY_TIMEOUT_IND_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_GSM_TIME_STAMP_REQ - Valid from version 001.000      */
/* ----------------------------------------------------------------------- */
/* This request is used to get specific information to synchronize GPS time
*/

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    } MODEM_LCS_GSM_TIME_STAMP_REQ_STR;

#define SIZE_MODEM_LCS_GSM_TIME_STAMP_REQ_STR   \
        sizeof(MODEM_LCS_GSM_TIME_STAMP_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_GSM_TIME_STAMP_RESP - Valid from version 001.000     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint16  bit_no;
    uint32  frame_number;
    uint8   time_slot;
    uint8   ta;
    uint16  bcch_carrier;
    uint8   bsic;
    /* If success code is not MODEM_LCS_NET_CAUSE_OK all parameters shall be
       considered as invalid
       Values from the constant table MODEM_LCS_FRAME_TRIGGER_SUCCESS_CODES
    */
    uint8   success_code;
    /* Only valid if succes_code = MODEM_LCS_MODEM_SPECIFIC_ERROR. More
       details can be found in Modem specific documentation
    */
    uint8   sub_error;
    uint8   fill1;
    } MODEM_LCS_GSM_TIME_STAMP_RESP_STR;

#define SIZE_MODEM_LCS_GSM_TIME_STAMP_RESP_STR   \
        sizeof(MODEM_LCS_GSM_TIME_STAMP_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_WCDMA_TIME_STAMP_REQ - Valid from version 001.000    */
/* ----------------------------------------------------------------------- */
/* This message is used to request an ATT pulse to the GPS HW. */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1[2];
    MODEM_LCS_W_OPTIONAL_PSC_STR bsid_for_att;
    uint8   fill2[2];
    } MODEM_LCS_WCDMA_TIME_STAMP_REQ_STR;

#define SIZE_MODEM_LCS_WCDMA_TIME_STAMP_REQ_STR   \
        sizeof(MODEM_LCS_WCDMA_TIME_STAMP_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: MODEM_LCS_WCDMA_TIME_STAMP_RESP - Valid from version 003.000   */
/* ----------------------------------------------------------------------- */
/* This message is used to report sending an ATT pulse to the GPS HW. */

typedef struct
    {
    uint8   trans_id;
    uint8   message_id;
    uint8   fill1;
    uint8   cell_dch;
    /* Unspecified values for "Operation status"should be treated as unknown
       failure reasons
       Values from the constant table MODEM_LCS_W_CS_STATUS
    */
    uint8   status;
    /* Only valid if status = MODEM_LCS_MODEM_SPECIFIC_ERROR. More details
       can be found in Modem specific documentation
    */
    uint8   sub_error;
    uint16  sfn;
    MODEM_LCS_W_PSC_STR scrc_for_att;
    uint16  rtt;
    } MODEM_LCS_WCDMA_TIME_STAMP_RESP_STR;

#define SIZE_MODEM_LCS_WCDMA_TIME_STAMP_RESP_STR   \
        sizeof(MODEM_LCS_WCDMA_TIME_STAMP_RESP_STR)




#endif /* _MODEM_LCS_WM_ISI_H */
