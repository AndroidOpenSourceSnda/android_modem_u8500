/*
NOKIA                                                             CONFIDENTIAL
                  COMMON_DSP_TEST_ISI.H
                  --------------------------------
                  SW Include Document - ANSI C/C++



name:            common_dsp_test_isi.h

version:         000.154

type:            incl


ISI header file for COMMON CDSP Test Interface

Current   ISI Version : 000.154
Supported ISI Versions: 000.001, 000.002, 000.003, 000.004, 000.005, 000.006, 
                        000.007, 000.008, 000.010, 000.011, 000.012, 000.013, 
                        000.014, 000.015, 000.016, 000.017, 000.018, 000.019, 
                        000.020, 000.021, 000.022, 000.023, 000.024, 000.025, 
                        000.027, 000.028, 000.029, 000.030, 000.031, 000.032, 
                        000.033, 000.034, 000.035, 000.036, 000.037, 000.038, 
                        000.039, 000.040, 000.041, 000.042, 000.043, 000.044, 
                        000.045, 000.046, 000.047, 000.048, 000.049, 000.050, 
                        000.051, 000.052, 000.053, 000.054, 000.055, 000.056, 
                        000.057, 000.058, 000.059, 000.060, 000.061, 000.062, 
                        000.063, 000.064, 000.065, 000.066, 000.067, 000.068, 
                        000.069, 000.070, 000.071, 000.072, 000.073, 000.074, 
                        000.075, 000.076, 000.077, 000.078, 000.079, 000.080, 
                        000.081, 000.082, 000.083, 000.084, 000.085, 000.086, 
                        000.087, 000.088, 000.089, 000.090, 000.091, 000.092, 
                        000.093, 000.094, 000.095, 000.096, 000.097, 000.098, 
                        000.099, 000.100, 000.101, 000.102, 000.103, 000.104, 
                        000.105, 000.106, 000.107, 000.108, 000.109, 000.110, 
                        000.111, 000.112, 000.113, 000.114, 000.115, 000.116, 
                        000.117, 000.118, 000.119, 000.120, 000.121, 000.122, 
                        000.123, 000.124, 000.125, 000.126, 000.127, 000.128, 
                        000.129, 000.130, 000.131, 000.132, 000.133, 000.134, 
                        000.135, 000.136, 000.137, 000.138, 000.139, 000.140, 
                        000.141, 000.142, 000.143, 000.144, 000.145, 000.146, 
                        000.147, 000.148, 000.149, 000.150, 000.151, 000.152, 
                        000.153, 000.154

Copyright (c) Nokia Corporation. All rights reserved.



------------------------------------------------------------------------------
*/

#ifndef _COMMON_DSP_TEST_ISI_H
#define _COMMON_DSP_TEST_ISI_H


#ifndef COMMON_DSP_TEST_ISI_VERSION
#define COMMON_DSP_TEST_ISI_VERSION
#define COMMON_DSP_TEST_ISI_VERSION_Z   0
#define COMMON_DSP_TEST_ISI_VERSION_Y 154
#endif

#define COMMON_DSP_TEST_ISI_MIN_VERSION(z,y) \
 ((COMMON_DSP_TEST_ISI_VERSION_Z == (z) && COMMON_DSP_TEST_ISI_VERSION_Y >= (y)) || \
  (COMMON_DSP_TEST_ISI_VERSION_Z > (z)))


/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define TUNING_RX_CONTROL_DEFAULT_VALUE_USED     0x7FFF
/* constant for variable-length definitions */
#define COMMON_DSP_TEST_ANY_SIZE                 1
#define TUNING_AFC_DEFAULT_VALUE_USED            0x7FFF

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))
#define C_TEST_VALUE_NOT_VALID                   0x7FFF
#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */

#define C_TEST_NOT_VALID_Q6_DBM                  0xDA80
#define MAX_GSM_CHANNEL_NUMBER                   0x03FF
#define C_HAL_ALL_COMPENSATIONS                  0xFFFF
#define C_TEST_NOT_USED                          0xFFFF

/* ----------------------------------------------------------------------- */
/* Bitmask Table: INFO_GSM_BAND                                            */
/* ----------------------------------------------------------------------- */
#define INFO_NO_GSM                              0x00000000  /* 00000000000000000000000000000000 */
#define INFO_GSM850                              0x00000001  /* -------------------------------1 */
#define INFO_GSM900                              0x00000002  /* ------------------------------1- */
#define INFO_GSM1800                             0x00000004  /* -----------------------------1-- */
#define INFO_GSM1900                             0x00000008  /* ----------------------------1--- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: INFO_WCDMA_BAND                                          */
/* ----------------------------------------------------------------------- */
/* Not supported */
#define INFO_NO_WCDMA                            0x00000000  /* 00000000000000000000000000000000 */
/* Operating Band 1 */
#define INFO_WCDMA_FDD_BAND1                     0x00000001  /* -------------------------------1 */
/* Operating Band 2 */
#define INFO_WCDMA_FDD_BAND2                     0x00000002  /* ------------------------------1- */
/* Operating Band 3 */
#define INFO_WCDMA_FDD_BAND3                     0x00000004  /* -----------------------------1-- */
/* Operating Band 4 */
#define INFO_WCDMA_FDD_BAND4                     0x00000008  /* ----------------------------1--- */
/* Operating Band 5 */
#define INFO_WCDMA_FDD_BAND5                     0x00000010  /* ---------------------------1---- */
/* Operating Band 6 */
#define INFO_WCDMA_FDD_BAND6                     0x00000020  /* --------------------------1----- */
/* Operating Band 7 */
#define INFO_WCDMA_FDD_BAND7                     0x00000040  /* -------------------------1------ */
/* Operating Band 8 */
#define INFO_WCDMA_FDD_BAND8                     0x00000080  /* ------------------------1------- */
/* Operating Band 9 */
#define INFO_WCDMA_FDD_BAND9                     0x00000100  /* -----------------------1-------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND10                    0x00000200  /* ----------------------1--------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND11                    0x00000400  /* ---------------------1---------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND12                    0x00000800  /* --------------------1----------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND13                    0x00001000  /* -------------------1------------ */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND14                    0x00002000  /* ------------------1------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND15                    0x00004000  /* -----------------1-------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND16                    0x00008000  /* ----------------1--------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND17                    0x00010000  /* ---------------1---------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND18                    0x00020000  /* --------------1----------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND19                    0x00040000  /* -------------1------------------ */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND20                    0x00080000  /* ------------1------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND21                    0x00100000  /* -----------1-------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND22                    0x00200000  /* ----------1--------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND23                    0x00400000  /* ---------1---------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND24                    0x00800000  /* --------1----------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND25                    0x01000000  /* -------1------------------------ */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND26                    0x02000000  /* ------1------------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND27                    0x04000000  /* -----1-------------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND28                    0x08000000  /* ----1--------------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND29                    0x10000000  /* ---1---------------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND30                    0x20000000  /* --1----------------------------- */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND31                    0x40000000  /* -1------------------------------ */
/* Unspecified */
#define INFO_WCDMA_FDD_BAND32                    0x80000000  /* 1------------------------------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: TUNING_CTRL_OPT - Valid from version 000.043             */
/* ----------------------------------------------------------------------- */
/* Tx tuning Control options. */
typedef uint16 TUNING_CTRL_OPT_CONST;

/* WCDMA Signal or CW signal, 1=WCDMA, 0=CW */
#define WCDMA_OR_CW_MOD                          0x0001  /* ---------------1 */
/* Tuning data storing options, if bit is set, DSP saves the data to
   Permanent Memory
   1=YES, 0=NO
*/
#define SAVE_TO_PM                               0x0002  /* --------------1- */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_STATUS - Valid from version 000.001              */
/* ----------------------------------------------------------------------- */
/* Status of operation */
/* Operation succeeded */
#define C_TEST_OK                                0x00
/* Operation failed */
#define C_TEST_FAILED                            0x01
/* Operation or feature is not supported */
#define C_TEST_NOT_SUPPORTED                     0x02
/* Operation is not done */
#define C_TEST_NOT_DONE                          0x03
/* Permanent Memory operation failed */
#define C_TEST_PM_FAIL                           0x04
/* Not valid, to be ignored  */
#define C_TEST_NOT_VALID                         0x05
/* Too many subblocks in message */
#define C_TEST_TOO_MANY_SUBBLOCKS                0x06
/* ADC saturated, values not valid */
#define C_TEST_ADC_OVERFLOW                      0x07
/* Entered non-controllable area */
#define C_TEST_CTRL_OUT_OF_RANGE                 0x08
/* Given parameter value is invalid */
#define C_TEST_INVALID_PARAMETER                 0x09
/* Failed to start or stop HW */
#define C_TEST_HW_FAILURE                        0x10
/* Failed to measure transmit forward power */
#define C_TEST_HW_TX_FW_POWER_MEAS_FAILURE       0x11
/* Failed to measure transmit reverse power */
#define C_TEST_HW_TX_REV_POWER_MEAS_FAILURE      0x12
/* Failed to set targeted power level */
#define C_TEST_HW_POWER_SETTING_FAILURE          0x13
/* Failed to measure Rx power */
#define C_TEST_HW_RX_POWER_MEAS_FAILURE          0x14
/* Failed to measure frequency error */
#define C_TEST_SW_FREQUENCY_ERROR_MEAS_FAILURE   0x15
/* Failed to measure temperature */
#define C_TEST_HW_TEMPERATURE_MEAS_FAILURE       0x16
/* Maximum iteration number for self-tuning reached */
#define C_TEST_HW_ITERATION_NUMBER_FAILURE       0x17
/* WCDMA 3GPP sync failed due to: Primary scrambling code detected was
   different to requested value.
*/
#define C_TEST_WCDMA_3GPP_SYNC_WRONG_PSC         0x18
/* WCDMA 3GPP sync failed due to: No primary scrambling code detected on
   requested DL UARFCN.
*/
#define C_TEST_WCDMA_3GPP_SYNC_NO_PSC_ON_DL_UARFCN 0x19
/* WCDMA 3GPP sync failed due to: Failure to receive BCH  ( i.e. could not
   get SFN sync ).
*/
#define C_TEST_WCDMA_3GPP_SYNC_BCH_FAILURE       0x20
/* WCDMA BER sync failed due to: Not able to achieve DPCH DL sync. */
#define C_TEST_WCDMA_BER_SYNC_DPCH_NO_DL_SYNC    0x21
/* WCDMA BER sync failed due to: Not able to get PBRS sync. */
#define C_TEST_WCDMA_BER_SYNC_NO_PBRS_SYNC       0x22
/* WCDMA BER test failed due to: Not able to achieve DPCH DL sync after
   frequency switch.
*/
#define C_TEST_WCDMA_BER_TEST_FREQ_SWITCH_FAILED 0x23
/* GSM  sync failed due to: PSW not found */
#define C_TEST_GSM_BER_SYNC_FCH_FAILED           0x24
/* GSM sync failed due to: SCH decode error */
#define C_TEST_GSM_BER_SYNC_SCH_FAILED           0x25
/* GSM BER sync failed due to: Not able to get PRBS sync  */
#define C_TEST_GSM_BER_SYNC_NO_PRBS_SYNC         0x26
/* GSM BER test failed due to TCH failure */
#define C_TEST_GSM_BER_TEST_TCH_FAILED           0x27
/* ISI message not allowed in the current state */
#define C_TEST_WRONG_STATE                       0x28
#define C_TEST_NOT_AVAILABLE                     0xFF  /* Not available */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: SYSTEM - Valid from version 000.001                      */
/* ----------------------------------------------------------------------- */
/* System selections */
typedef uint16 SYSTEM_CONST;

/* GSM system */
#define C_TEST_GSM                               0x0001  /* ---------------1 */
/* WCDMA system */
#define C_TEST_WCDMA                             0x0002  /* --------------1- */
/* EUTRAN system */
#define C_TEST_EUTRAN                            0x0004  /* -------------1-- */

/* ----------------------------------------------------------------------- */
/* Constant Table: G_TEST_BAND - Valid from version 000.002                */
/* ----------------------------------------------------------------------- */
/* Band */
typedef uint16 G_TEST_BAND_CONST;

/* UNINITIALIZED GSM BAND */
#define G_TEST_UNINITIALIZED_GSM_BAND            0x0000
#define G_TEST_GSM850                            0x0001  /* GSM 850 */
#define G_TEST_GSM900                            0x0002  /* GSM 900 */
#define G_TEST_GSM1800                           0x0003  /* GSM 1800 */
#define G_TEST_GSM1900                           0x0004  /* GSM 1900 */
/* EDGE band, mask with band constant: G_TEST_GSM850|G_EDGE_ON */
#define G_EDGE_ON                                0x8000

/* ----------------------------------------------------------------------- */
/* Constant Table: W_TEST_BAND - Versions 000.014 - 000.028                */
/* ----------------------------------------------------------------------- */
/* Band */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 14) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 28) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))
typedef uint16 W_TEST_BAND_CONST;

/* UNINITIALIZED WCDMA BAND */
#define C_TEST_UNINITIALIZED_WCDMA_BAND          0x0000
/* WCDMA 1900 band */
#define C_TEST_WCDMA1900                         0x0001
/* WCDMA 2100 band */
#define C_TEST_WCDMA2100                         0x0002
/* WCDMA 850 band */
#define C_TEST_WCDMA850                          0x0003
/* WCDMA 900 band */
#define C_TEST_WCDMA900                          0x0004
/* WCDMA 800 band */
#define C_TEST_WCDMA800                          0x0005
/* WCDMA 1700 band */
#define C_TEST_WCDMA1700                         0x0006
/* WCDMA 1800 band */
#define C_TEST_WCDMA1800                         0x0007
/* WCDMA 2000 band */
#define C_TEST_WCDMA2000                         0x0008
/* WCDMA 2600 band */
#define C_TEST_WCDMA2600                         0x0009
#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 14) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 28) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Constant Table: G_TEST_PA_MODE - Valid from version 000.002             */
/* ----------------------------------------------------------------------- */
/* PA-modes */
typedef uint16 G_TEST_PA_MODE_CONST;

#define G_TEST_PA_MODE_HI                        0x0001  /* PA-mode HIGH */
#define G_TEST_PA_MODE_LO                        0x0002  /* PA-mode LOW */
#define G_TEST_PA_MODE_FREE                      0x0003  /* PA-mode FREE */
/* PA-mode not exist/not controlled by DSP */
#define G_TEST_PA_MODE_NONE                      0x00FF

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RF_CTRL_OPER_MODE - Valid from version 000.030   */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_RF_CTRL_OPER_MODE_CONST;

#define C_TEST_BURST                             0x0000  /* Burst mode */
/* Continuous mode */
#define C_TEST_CONTINUOUS                        0x0001

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_FREQ_MEAS_MODE - Valid from version 000.076      */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_FREQ_MEAS_MODE_CONST;

/* Measure frequency error */
#define C_TEST_FREQ_MEAS                         0x0000
/* Adjust frequency error */
#define C_TEST_FREQ_ADJUST                       0x0001

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RF_CTRL_MODE - Valid from version 000.030        */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_RF_CTRL_MODE_CONST;

#define C_TEST_RX_OFF                            0x0000  /* Turn Rx off */
#define C_TEST_RX_ON                             0x0001  /* Turn Rx on */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_VALUE_SOURCE - Valid from version 000.031        */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_VALUE_SOURCE_CONST;

/* Tuning data from PM */
#define C_TEST_SOURCE_PM                         0x0000
/* Default tuning data from DSP */
#define C_TEST_SOURCE_DSP                        0x0001

/* ----------------------------------------------------------------------- */
/* Bitmask Table: C_TEST_TX_IQ_TUNING_MODE - Valid from version 000.002    */
/* ----------------------------------------------------------------------- */
/* Fast Tx IQ tuning operation mode */
typedef uint16 C_TEST_TX_IQ_TUNING_MODE_CONST;

/* DC offset tuning */
#define DC_OFFSET                                0x0001  /* ---------------1 */
/* Amplitude offset tuning */
#define AMPLITUDE                                0x0002  /* --------------1- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 149) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))
/* Phase offset tuning */
#define PHASE                                    0x0004  /* -------------1-- */
#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 149) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */

/* Phase offset tuning */
#define IQ_PHASE                                 0x0004  /* -------------1-- */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_MEASUREMENT_TYPE - Valid from version 000.011    */
/* ----------------------------------------------------------------------- */
/* Measurement choices */
/* Tx asic temperature sensor measurement */
#define C_TEST_RF_TX_TEMP                        0x00

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_ACCESS_MODE - Valid from version 000.013         */
/* ----------------------------------------------------------------------- */
/* Select access mode */
#define C_TEST_SINGLE                            0x01  /* Single */
#define C_TEST_SCHEDULED                         0x02  /* Timer */
#define C_TEST_BUFFERED                          0x03  /* Interruptible */
#define C_TEST_DELAYED                           0x04  /* Timer/Strobe */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_INCREMENT_MODE - Valid from version 000.013      */
/* ----------------------------------------------------------------------- */
/* Incremental step direction in sequential memory access */
#define C_TEST_STEP_NONE                         0x00  /*  0 */
#define C_TEST_STEP_FORWARD                      0x01  /* +1 */
#define C_TEST_STEP_BACKWARD                     0x02  /* -1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: C_TEST_INFO_TARGET - Valid from version 000.014          */
/* ----------------------------------------------------------------------- */
/* Info target  */
/* GSM system band dependent records */
#define GSM_BAND_REC_INFO                        0x00000001  /* -------------------------------1 */
/* GSM system common records */
#define GSM_COMMON_REC_INFO                      0x00000002  /* ------------------------------1- */
/* WCDMA system band dependent records */
#define WCDMA_BAND_REC_INFO                      0x00000004  /* -----------------------------1-- */
/* Records that are Common to all systems */
#define COMMON_REC_INFO                          0x00000008  /* ----------------------------1--- */
/* GSM system feature information */
#define GSM_FEAT_INFO                            0x00000010  /* ---------------------------1---- */
/* CDSP returns all supported info subblocks */
#define ALL_INFO                                 0x80000000  /* 1------------------------------- */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_ANTENNA_CONTROL_MODE - Valid from version 000.019 */
/* ----------------------------------------------------------------------- */
/* Antenna control modes */
typedef uint16 C_TEST_ANTENNA_CONTROL_MODE_CONST;

/* Toggle antenna control state and measure RSSI's before and after toggling
*/
#define TOGGLE_MEAS                              0x0001
/* FORCE given antenna control state */
#define FORCE                                    0x0002
/* FORCE given antenna control state and measure RSSI in forced state */
#define FORCE_MEAS                               0x0003
/* Measure RSSI in current antenna control state */
#define MEAS                                     0x0004
/* read currently used antenna parameters in DSP memory. No sub-blocks */
#define READ_ANT_PARAM                           0x0005
/* update current antenna parameters to DSP RAM only */
#define UPDATE_ANT_PARAM_DSP                     0x0006
/* update current antenna parameters to PMM and also DSP RAM */
#define UPDATE_ANT_PARAM_PMM                     0x0007
/* Start Atomic specific antenna connection test */
#define OEM_ANTENNA_TEST                         0x0008
/* Start antenna connection test (returns a VSWR value) */
#define ANTENNA_VSWR                             0x0009
/* Detect Antenna status */
#define ANTENNA_DETECT                           0x000A

/* ----------------------------------------------------------------------- */
/* Bitmask Table: G_DSP_FEATURE_INFO - Valid from version 000.025          */
/* ----------------------------------------------------------------------- */
/* GSM feature bits. Bits which has 'DSP use only' are meant for DSP
   debugging purposes.
*/
/* PA bias runtime calculation supported */
#define GSM_FEAT_PA_BIAS_OPT                     0x00000001  /* -------------------------------1 */
/* SW Tx IQ modulator in use. DSP use only */
#define GSM_FEAT_SW_MOD                          0x00000002  /* ------------------------------1- */
/* HW Tx IQ modulator in use. DSP use only */
#define GSM_FEAT_HW_MOD                          0x00000004  /* -----------------------------1-- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: C_TEST_WCDMA_TX_SEND_MODE - Valid from version 000.051   */
/* ----------------------------------------------------------------------- */
/* CW signal */
#define C_TEST_WCDMA_TX_CW_SIGNAL                0x00  /* -------0 */
/* WCDMA signal */
#define C_TEST_WCDMA_TX_WCDMA_SIGNAL             0x01  /* -------1 */
/* Power detector reporting enabled */
#define C_TEST_WCDMA_TX_PWR_DET_REPORTING        0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RF_LNA_MODE - Valid from version 000.034         */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_RF_LNA_MODE_CONST;

#define C_TEST_RF_LNA_OFF                        0x0000  /* LNA off */
#define C_TEST_RF_LNA_ON                         0x0001  /* LNA on */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_RF_INFORM_VALUE - Valid from version 000.105          */
/* ----------------------------------------------------------------------- */
/* C_NO_STATUS */
#define C_NO_STATUS                              0x00000000
/* FOLD_SLIDE_MECH_CLOSED */
#define FOLD_SLIDE_MECH_CLOSED                   0x00000001
/* FOLD_SLIDE_MECH_OPEN */
#define FOLD_SLIDE_MECH_OPEN                     0x00000002
/* DVBH_INACTIVE */
#define DVBH_INACTIVE                            0x00000003
/* DVBH_ACTIVE */
#define DVBH_ACTIVE                              0x00000004
/* PROXIMITY_DETECTOR_FAR */
#define PROXIMITY_DETECTOR_FAR                   0x00000005
/* PROXIMITY_DETECTOR_NEAR */
#define PROXIMITY_DETECTOR_NEAR                  0x00000006
/* GPS_INACTIVE */
#define GPS_INACTIVE                             0x00000007
/* GPS_ACTIVE */
#define GPS_ACTIVE                               0x00000008
/* ANTENNA_INACTIVE */
#define ANTENNA_INACTIVE                         0x00000009
/* ANTENNA_ACTIVE */
#define ANTENNA_ACTIVE                           0x0000000A

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RFIC_ID - Valid from version 000.138             */
/* ----------------------------------------------------------------------- */
/* RF Licensee API RFIC ID's (actually interpreted as tuning id) */
typedef uint16 C_TEST_RFIC_ID_CONST;

#define VENDOR_ID                                0x0000
#define RFIC_ID                                  0x0001
#define RFIC2_ID                                 0x0002
#define BOM_ID                                   0x0003
#define RF_CAL_AFC_COARSE_ID                     0x0004
#define RF_CAL_AFC_FINE_ID                       0x0005
#define RF_TX_MEAS_ID                            0x0006
#define RF_RX_MEAS_ID                            0x0007

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RFIC_STATUS - Valid from version 000.138         */
/* ----------------------------------------------------------------------- */
/* Status of RFIC access */
#define RFIC_OK                                  0x00  /* OK */
#define RFIC_NOT_OK                              0x01  /* Not OK */
#define RFIC_WRONG_SIZE                          0x02  /* Wrong Size */
#define RFIC_ID_UNDEFINED                        0x03  /* ID undefined */
/* Offset undefined */
#define RFIC_OFFSET_UNDEFINED                    0x04
/* ID not supported */
#define RFIC_ID_NOT_SUPPORTED                    0x05
/* Offset not supported */
#define RFIC_OFFSET_NOT_SUPPORTED                0x06

/* ----------------------------------------------------------------------- */
/* Bitmask Table: C_TEST_PA_COMPRESSION_TUNING_CTRL_WORD - Valid from version 000.126 */
/* ----------------------------------------------------------------------- */
typedef uint16 C_TEST_PA_COMPRESSION_TUNING_CTRL_WORD_CONST;

/* Save tuning values */
#define C_TEST_SAVE                              0x0001  /* ---------------1 */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_RF_TX_CONTROL_DATA_TYPE - Valid from version 000.044 */
/* ----------------------------------------------------------------------- */
#define C_TEST_DATA_TYPE_0                       0x00  /* Zero data */
#define C_TEST_DATA_TYPE_1                       0x01  /* One data */
/* PN9 data for BB5.0, GMSK dummy burst for DCT4 */
#define C_TEST_DATA_TYPE_RAND                    0x02
#define C_TEST_DATA_TYPE_PN9                     0x03  /* PN9 data */
/* GMSK Dummy burst */
#define C_TEST_DATA_TYPE_DUMMY                   0x04
#define C_TEST_DATA_TYPE_PRBS_9                  0x05  /* PRBS 9 */
#define C_TEST_DATA_TYPE_PRBS_11                 0x06  /* PRBS 11 */
#define C_TEST_DATA_TYPE_PRBS_15                 0x07  /* PRBS 15 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: PA_BIAS - Valid from version 000.055                     */
/* ----------------------------------------------------------------------- */
typedef uint16 PA_BIAS_CONST;

#define C_TEST_BIAS_VOLTAGE                      0xFFE0  /* 11111111111----- */
#define C_TEST_BIAS_CURRENT                      0x001F  /* -----------11111 */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_ATTENUATOR_SETTING - Valid from version 000.068  */
/* ----------------------------------------------------------------------- */
/* Fine attenuation setting */
#define C_TEST_ATTENUATOR_FINE                   0x00
/* Coarse attenuation setting */
#define C_TEST_ATTENUATOR_COARSE                 0x01
/* Attenuation setting defined by power level */
#define C_TEST_ATTENUATOR_BY_POWER_LEVEL         0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_AFC_TABLE - Valid from version 000.093             */
/* ----------------------------------------------------------------------- */
/* Use tuned afc value from PMM */
#define CTRL_AFC_TUNED                           0x01
/* Use given absolute afc freq value */
#define CTRL_AFC_FREQ_ABS_MANUAL                 0x02
/* Use given afc freq offset in PPM value */
#define CTRL_AFC_FREQ_PPM_MANUAL                 0x04

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_RX_AGC_MODE - Valid from version 000.093           */
/* ----------------------------------------------------------------------- */
/* Use MON for AGC adjust */
#define CTRL_RX_AGC_AUTOMATIC                    0x00
/* Use given AGC value */
#define CTRL_RX_AGC_MANUAL                       0x01

/* ----------------------------------------------------------------------- */
/* Bitmask Table: CTRL_RX_AGC_PATH_MODE - Valid from version 000.137       */
/* ----------------------------------------------------------------------- */
/* #define CTRL_RX_AGC_AUTOMATIC                 0x00 (already defined) */
/* #define CTRL_RX_AGC_MANUAL                    0x01 (already defined) */
/* Main Path Enabled */
#define CTRL_RX_AGC_MAIN_PATH_ENABLED            0x04  /* -----1-- */
/* Diversity Path Enabled. For WGM2.5 when this bit is enabled main path must
   also be enabled
*/
#define CTRL_RX_AGC_DIVERSITY_PATH_ENABLED       0x08  /* ----1--- */

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_TX_POWER_UNIT - Valid from version 000.093         */
/* ----------------------------------------------------------------------- */
/* Tx power use PCL level */
#define CTRL_TX_PCL                              0x00
/* Tx power use dBm level */
#define CTRL_TX_DBM                              0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: C_HAL_RF_TUNING_VALUE_LOCATION - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
typedef uint16 C_HAL_RF_TUNING_VALUE_LOCATION_CONST;

/* Get/set tuning data from/to RAM */
#define C_HAL_RF_TUNING_VALUE_RAM                0x0000
/* Get/set tuning data from/to permanent memory */
#define C_HAL_RF_TUNING_VALUE_PERM               0x0001

/* ----------------------------------------------------------------------- */
/* Constant Table: C_HAL_COMPENSATION_SETTING - Valid from version 000.118 */
/* ----------------------------------------------------------------------- */
typedef uint16 C_HAL_COMPENSATION_SETTING_CONST;

/* Disable compensation */
#define C_HAL_COMPENSATION_OFF                   0x0000
/* Enable compensation */
#define C_HAL_COMPENSATION_ON                    0x0001

/* ----------------------------------------------------------------------- */
/* Bitmask Table: CTRL_RF_PATH - Valid from version 000.119                */
/* ----------------------------------------------------------------------- */
/* Path #1 enabled (main) */
#define CTRL_RF_PATH1                            0x01  /* -------1 */
/* Path #2 enabled (diversity) */
#define CTRL_RF_PATH2                            0x02  /* ------1- */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_HAL_TEST_INFO_TYPE - Valid from version 000.093       */
/* ----------------------------------------------------------------------- */
typedef uint16 C_HAL_TEST_INFO_TYPE_CONST;

/* Rx path 1 RSSI */
#define C_HAL_RX_PATH1_RSSI_INFO                 0x0000
/* Rx path 2 RSSI */
#define C_HAL_RX_PATH2_RSSI_INFO                 0x0001

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_TRUE_FALSE - Valid from version 000.144          */
/* ----------------------------------------------------------------------- */
#define C_TEST_FALSE                             0x00  /* FALSE */
#define C_TEST_TRUE                              0x01  /* TRUE */

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_TESTER_TOOL - Valid from version 000.148         */
/* ----------------------------------------------------------------------- */
/* Tester Tool */
typedef uint16 C_TEST_TESTER_TOOL_CONST;

/* CMW500 tester */
#define C_TEST_CMW500                            0x0000
/* CMU200 tester */
#define C_TEST_CMU200                            0x0001
/* AGILENT8960 tester */
#define C_TEST_AGILENT8960                       0x0002
/* ANRITSU tester */
#define C_TEST_ANRITSU                           0x0003

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_CHANNEL_TYPE - Valid from version 000.148          */
/* ----------------------------------------------------------------------- */
/* channel type */
#define CTRL_CHANNEL_TYPE_TCH                    0x00  /* GSM */
#define CTRL_CHANNEL_TYPE_PDTCH                  0x01  /* GPRS */
#define CTRL_CHANNEL_TYPE_EPDTCH                 0x02  /* EDGE */

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_TCH_CODEC - Valid from version 000.148             */
/* ----------------------------------------------------------------------- */
/* Codec */
#define CTRL_TCH_FR                              0x00  /* Full Rate */
/* Enhanced Full Rate */
#define CTRL_TCH_EFR                             0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: CTRL_TPC_PATTERN - Valid from version 000.148           */
/* ----------------------------------------------------------------------- */
/* TPC Pattern */
#define CTRL_TPC_OFF                             0x00  /* Tx off */
#define CTRL_TPC_CONTINUOUS                      0x01  /* Tx continuous */
/* -1dBm offset  / slot */
#define CTRL_TPC_STEP_E                          0x02
/* +1dBm offset  / slot */
#define CTRL_TPC_STEP_F                          0x03
/* -2dBm offset  / slot */
#define CTRL_TPC_STEP_G                          0x04
/* +2dBm offset  / slot */
#define CTRL_TPC_STEP_H                          0x05
/* Power of each slot is defined by the user */
#define CTRL_TPC_MANUAL                          0x06

/* ----------------------------------------------------------------------- */
/* Constant Table: C_TEST_OPERATION_STATUS - Valid from version 000.148    */
/* ----------------------------------------------------------------------- */
/* States of the Sequencer */
/* DUT is in OFF state */
#define C_TEST_OFF                               0x00
/* DUT is in READY state */
#define C_TEST_READY                             0x01
/* DUT is in RUN state */
#define C_TEST_RUN                               0x02

/* ----------------------------------------------------------------------- */
/* Message ID's                                                            */
/* ----------------------------------------------------------------------- */

#define C_TEST_PA_INFO_REQ                       0x01
#define C_TEST_PA_INFO_RESP                      0x02
#define C_TEST_IQ_SELF_TUNING_REQ                0x03
#define C_TEST_IQ_SELF_TUNING_RESP               0x04
#define C_TEST_MEASUREMENT_REQ                   0x07
#define C_TEST_MEASUREMENT_RESP                  0x08
#define C_TEST_RFIC_READ_REQ                     0x0B
#define C_TEST_RFIC_READ_RESP                    0x0C
#define C_TEST_RFIC_WRITE_REQ                    0x0D
#define C_TEST_RFIC_WRITE_RESP                   0x0E
#define C_TEST_CDSP_INFO_QUERY_REQ               0x0F
#define C_TEST_CDSP_INFO_QUERY_RESP              0x10
#define C_TEST_ACTIVE_BAND_SET_REQ               0x11
#define C_TEST_ACTIVE_BAND_SET_RESP              0x12
#define C_TEST_ACTIVE_BAND_GET_REQ               0x13
#define C_TEST_ACTIVE_BAND_GET_RESP              0x14
#define C_TEST_ANTENNA_CONTROL_REQ               0x15
#define C_TEST_ANTENNA_CONTROL_RESP              0x16
#define C_TEST_DSP_CONFIG_DATA_WRITE_REQ         0x19
#define C_TEST_DSP_CONFIG_DATA_WRITE_RESP        0x1A
#define C_TEST_DSP_CONFIG_DATA_READ_REQ          0x1B
#define C_TEST_DSP_CONFIG_DATA_READ_RESP         0x1C
#define C_TEST_TUNING_REQ                        0x1D
#define C_TEST_TUNING_RESP                       0x1E
#define C_TEST_TUNING_VALUES_WRITE_REQ           0x1F
#define C_TEST_TUNING_VALUES_WRITE_RESP          0x20
#define C_TEST_TUNING_VALUES_READ_REQ            0x21
#define C_TEST_TUNING_VALUES_READ_RESP           0x22
#define C_HAL_RF_TEST_CONTROL_REQ                0x27
#define C_HAL_RF_TEST_CONTROL_RESP               0x28
#define C_HAL_RF_TEST_CONTROL_STOP_REQ           0x29
#define C_HAL_RF_TEST_CONTROL_STOP_RESP          0x2A
#define C_HAL_RF_TEST_INFO_REQ                   0x2B
#define C_HAL_RF_TEST_INFO_RESP                  0x2C
#define C_HAL_RF_TUNING_VALUES_SET_REQ           0x2F
#define C_HAL_RF_TUNING_VALUES_SET_RESP          0x30
#define C_HAL_RF_TUNING_VALUES_GET_REQ           0x31
#define C_HAL_RF_TUNING_VALUES_GET_RESP          0x32
#define STORE_COMMAND_LIST_REQ                   0x33
#define STORE_COMMAND_LIST_RESP                  0x34
#define START_COMMAND_LIST_REQ                   0x35
#define START_COMMAND_LIST_RESP                  0x36
#define GET_STATUS_REQ                           0x37
#define GET_STATUS_RESP                          0x38
#define SEQUENCER_RESET_REQ                      0x39
#define SEQUENCER_RESET_RESP                     0x3A
#define STOP_COMMAND_LIST_REQ                    0x3B
#define STOP_COMMAND_LIST_RESP                   0x3C
#define GET_RESULTS_REQ                          0x3D
#define GET_RESULTS_RESP                         0x3E

/* ----------------------------------------------------------------------- */
/* Subblock ID's                                                           */
/* ----------------------------------------------------------------------- */

#define C_TEST_SB_PA_INFO                        0x0000
#define C_TEST_SB_PA_BIAS_INFO                   0x0001
#define C_TEST_SB_GSM_TX_IQ_SETUP                0x0002
#define C_TEST_SB_WCDMA_LO_LEAK_SETUP            0x0003
#define C_TEST_SB_DC_OFFSET_RESULT               0x0004
#define C_TEST_SB_AMPLITUDE_RESULT               0x0005
#define C_TEST_SB_PHASE_RESULT                   0x0006
#define C_TEST_SB_GSM_BAND_RECORD_INFO           0x000A
#define C_TEST_SB_GSM_COMM_RECORD_INFO           0x000B
#define C_TEST_SB_WCDMA_BAND_RECORD_INFO         0x000C
#define C_TEST_SB_WCDMA_BAND_RECORD_INFO_II      0x001A
#define C_TEST_SB_RITSA_COMMON_RECORD_INFO       0x000D
#define C_TEST_SB_GSM_SYSTEM_BANDS               0x000E
#define C_TEST_SB_WCDMA_SYSTEM_BANDS_II          0x001B
#define C_TEST_SB_WCDMA_SUPPORTED_BANDS          0x001E
#define C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II       0x001D
#define C_TEST_SB_GSM_FEATURE_INFO               0x0016
#define C_TEST_SB_WCDMA_TXPOWER_TUNING           0x0039
#define C_TEST_SB_WCDMA_TXPOWER_TUNING_RESULTS   0x003A
#define C_TEST_SB_AFC_MEAS_AND_ADJUST            0x005B
#define C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS    0x005C
#define C_TEST_SB_LINKO_AFC_TUNING               0x001F
#define C_TEST_SB_LINKO_AFC_TUNING_RESULTS       0x0020
#define C_TEST_SB_GSM_RX_CONTROL                 0x0021
#define C_TEST_SB_GSM_RX_CONTROL_RESP            0x0022
#define C_TEST_SB_WCDMA_TXPOWER_VALUES           0x003D
#define C_TEST_SB_WCDMA_POWERDETECTOR_VALUES     0x003E
#define C_TEST_SB_TUNING_ERROR                   0x0023
#define C_TEST_SB_PWR_SEQ_MEASURE                0x0026
#define C_TEST_SB_PWR_SEQ_MEAS_RESULTS           0x0028
#define C_TEST_SB_CLOSED_MODE_PWR_LIMIT          0x002B
#define C_TEST_SB_ANTENNA_TEST                   0x0037
#define C_TEST_SB_ANTENNA_TEST_RESULT            0x0038
#define C_TEST_SB_WCDMA_TX_TUNING                0x0031
#define C_TEST_SB_TX_TUNING_RESULTS              0x0032
#define C_TEST_SB_GSM_TX_PWR_TUNING              0x0033
#define C_TEST_SB_GSM_PA_COMPRESSION_TUNING      0x00B3
#define C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS 0x00B4
#define C_TEST_SB_FREQ_RESP_CALIBRATE            0x003B
#define C_TEST_SB_GSM_PWR_REDUCTION_VALUES       0x004D
#define C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS 0x004E
#define C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES     0x006F
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ1     0x0085
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP1    0x0099
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ2     0x0086
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP2    0x009A
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ3     0x0087
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP3    0x009B
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ4     0x0088
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP4    0x009C
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ5     0x0089
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP5    0x009D
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ6     0x008A
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP6    0x009E
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ7     0x008B
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP7    0x009F
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ8     0x008C
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP8    0x00A0
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ9     0x008D
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP9    0x00A1
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ10    0x008E
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP10   0x00A2
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ11    0x008F
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP11   0x00A3
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ12    0x0090
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP12   0x00A4
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ13    0x0091
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP13   0x00A5
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ14    0x0092
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP14   0x00A6
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ15    0x0093
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP15   0x00A7
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ16    0x0094
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP16   0x00A8
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ17    0x0095
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP17   0x00A9
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ18    0x0096
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP18   0x00AA
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ19    0x0097
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP19   0x00AB
#define C_TEST_SB_RESERVED_FOR_LICENSEE_REQ20    0x0098
#define C_TEST_SB_RESERVED_FOR_LICENSEE_RESP20   0x00AC
#define C_HAL_SB_GSM_RX_CONTROL                  0x0071
#define C_HAL_SB_GSM_TX_CONTROL                  0x0072
#define C_HAL_SB_WCDMA_RX_CONTROL                0x0073
#define C_HAL_SB_WCDMA_TX_CONTROL                0x0074
#define C_HAL_SB_RF_INFORM                       0x0076
#define C_TEST_SB_RF_API_VALUES_WRITE_REQ        0x007A
#define C_TEST_SB_RF_API_VALUES_WRITE_RESP       0x007B
#define C_TEST_SB_RF_API_VALUES_READ_REQ         0x0078
#define C_TEST_SB_RF_API_VALUES_READ_RESP        0x0079
#define C_HAL_SB_GSM_RXTX_CONTROL                0x00AE
#define C_HAL_SB_COMPENSATION_MODE_SET           0x00AF
#define C_HAL_RF_SB_TUNING_VALUES_SET_REQ        0x0081
#define C_HAL_RF_SB_TUNING_VALUES_SET_RESP       0x0082
#define C_HAL_RF_SB_TUNING_VALUES_GET_REQ        0x0083
#define C_HAL_RF_SB_TUNING_VALUES_GET_RESP       0x0084
#define C_TEST_SB_HSPA_MAX_PWR_RED_VALUES        0x0075
#define C_TEST_SB_LINKO2_FREQ_RESP_CAL_RESULTS   0x0080
#define C_TEST_SB_RSSI_TUNING                    0x00B5
#define C_TEST_SB_RSSI_TUNING_RESULT             0x00B6
#define C_TEST_SB_READ_RX_IQ_SAMPLES             0x00B8
#define C_TEST_SB_RECEIVED_RX_IQ_SAMPLES         0x00B9
#define C_TEST_SB_GSM_SINGLE_BER_SYNC            0x00C4
#define C_TEST_SB_GSM_CAL_SYNC                   0x00C5
#define C_TEST_SB_WCDMA_SINGLE_BER_SYNC          0x00C6
#define C_TEST_SB_GSM_SINGLE_BER                 0x00C7
#define C_TEST_SB_WCDMA_SINGLE_BER               0x00C8
#define C_TEST_SB_GSM_CAL                        0x00C9
#define C_TEST_SB_WCDMA_CAL                      0x00CA
#define C_TEST_SB_GSM_SINGLE_BER_RESULTS         0x00CB
#define C_TEST_SB_WCDMA_SINGLE_BER_RESULTS       0x00CC
#define C_TEST_SB_GSM_CAL_RESULTS                0x00CD
#define C_TEST_SB_WCDMA_CAL_RESULTS              0x00CE

/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_TX_PWR_SEQ_GSM - Versions 000.034 - 000.038            */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  pwr_level_nbr; /* GSM Power level number */
    } C_TEST_TX_PWR_SEQ_GSM_STR;

#define SIZE_C_TEST_TX_PWR_SEQ_GSM_STR   sizeof(C_TEST_TX_PWR_SEQ_GSM_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_TX_PWR_SEQ_WCDMA - Versions 000.034 - 000.038          */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  fill1;
    } C_TEST_TX_PWR_SEQ_WCDMA_STR;

#define SIZE_C_TEST_TX_PWR_SEQ_WCDMA_STR   \
        sizeof(C_TEST_TX_PWR_SEQ_WCDMA_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_TX_PWR_SEQ_GSM - Valid from version 000.038            */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  pwr_level_nbr; /* GSM Power level number */
    uint16  fill1;
    } C_TEST_TX_PWR_SEQ_GSM_STR;

#define SIZE_C_TEST_TX_PWR_SEQ_GSM_STR   sizeof(C_TEST_TX_PWR_SEQ_GSM_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_TX_PWR_SEQ_WCDMA - Valid from version 000.038          */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  fill1;
    uint16  fill2;
    } C_TEST_TX_PWR_SEQ_WCDMA_STR;

#define SIZE_C_TEST_TX_PWR_SEQ_WCDMA_STR   \
        sizeof(C_TEST_TX_PWR_SEQ_WCDMA_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_WCDMA_CLOSED_MODE_PWR_SEQ - Valid from version 000.035 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    /* Closed mode Tx max power limit value. Tx power is limited to this
       value in closed mode
    */
    uint16  closed_mode_max_pwr_limit;
    uint16  fill1;
    } C_TEST_WCDMA_CLOSED_MODE_PWR_SEQ_STR;

#define SIZE_C_TEST_WCDMA_CLOSED_MODE_PWR_SEQ_STR   \
        sizeof(C_TEST_WCDMA_CLOSED_MODE_PWR_SEQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: TX_PWR_TUNING_DATA - Valid from version 000.043               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   measured_pwr; /* Measured power value */
    int16   pwr_ctrl;     /* Power control DAC value */
    } TX_PWR_TUNING_DATA_STR;

#define SIZE_TX_PWR_TUNING_DATA_STR   sizeof(TX_PWR_TUNING_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: WCDMA_TX_PWR_CTRL_DATA - Valid from version 000.043           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   pa_voltage_ctrl;
    int16   pa_ictrl;
    } WCDMA_TX_PWR_CTRL_DATA_STR;

#define SIZE_WCDMA_TX_PWR_CTRL_DATA_STR   sizeof(WCDMA_TX_PWR_CTRL_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_TX_PWR_CTRL_DATA - Valid from version 000.044             */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  pa_voltage_ctrl;
    uint16  pa_ictrl;
    } GSM_TX_PWR_CTRL_DATA_STR;

#define SIZE_GSM_TX_PWR_CTRL_DATA_STR   sizeof(GSM_TX_PWR_CTRL_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_TX_PWR_SELFTUNING_CTRL_DATA - Valid from version 000.044  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Power level number 0...19. Power levels are either numbered 0-15 for
       low bands or 5-19 for high bands.
    */
    uint16  gsm_pwr_level;
    int16   target_dbm;
    uint16  fill1;
    uint16  pa_data_valid;
    GSM_TX_PWR_CTRL_DATA_STR pa_ctrl_data;
    } GSM_TX_PWR_SELFTUNING_CTRL_DATA_STR;

#define SIZE_GSM_TX_PWR_SELFTUNING_CTRL_DATA_STR   \
        sizeof(GSM_TX_PWR_SELFTUNING_CTRL_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_FREQ_RESP_DATA - Valid from version 000.052            */
/* ----------------------------------------------------------------------- */
/* Band response data for delivering external and internal measurement data
   or calculated external and internal calibration values.
*/

typedef struct
    {
    uint16  channel_nbr;
    int16   ext_data;
    int16   int_data;
    uint16  fill1;
    } C_TEST_FREQ_RESP_DATA_STR;

#define SIZE_C_TEST_FREQ_RESP_DATA_STR   sizeof(C_TEST_FREQ_RESP_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_TX_PWR_REDUCTION_DATA - Valid from version 000.072        */
/* ----------------------------------------------------------------------- */
/* Contains power reduction parameters. */

typedef struct
    {
    uint16  pwr_target_dB; /* Power reduction target */
    uint16  pwrred_tx_gain;
    GSM_TX_PWR_CTRL_DATA_STR pwrred_pa_ctrl_data;
    } GSM_TX_PWR_REDUCTION_DATA_STR;

#define SIZE_GSM_TX_PWR_REDUCTION_DATA_STR   \
        sizeof(GSM_TX_PWR_REDUCTION_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: C_HAL_RX_RSSI_INFO - Valid from version 000.121               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   rx_level;
    } C_HAL_RX_RSSI_INFO_STR;

#define SIZE_C_HAL_RX_RSSI_INFO_STR   sizeof(C_HAL_RX_RSSI_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: C_TEST_IQ_PAIR_DATA - Valid from version 000.132              */
/* ----------------------------------------------------------------------- */
/* Sequence for I and Q pair.  */

typedef struct
    {
    int16   i_data;       /* I data sample */
    int16   q_data;       /* Q data sample */
    } C_TEST_IQ_PAIR_DATA_STR;

#define SIZE_C_TEST_IQ_PAIR_DATA_STR   sizeof(C_TEST_IQ_PAIR_DATA_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: TX_LEV_PCL - Valid from version 000.148                       */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  tx_level;
    } TX_LEV_PCL_STR;

#define SIZE_TX_LEV_PCL_STR   sizeof(TX_LEV_PCL_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: RX_LEVEL - Valid from version 000.148                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   rx_pwr_level;
    } RX_LEVEL_STR;

#define SIZE_RX_LEVEL_STR   sizeof(RX_LEVEL_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: TX_POWER_LEVEL - Valid from version 000.148                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   tx_pwr_level;
    } TX_POWER_LEVEL_STR;

#define SIZE_TX_POWER_LEVEL_STR   sizeof(TX_POWER_LEVEL_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: TX_OR_RX_LEVEL - Valid from version 000.148                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   tx_or_rx_level;
    } TX_OR_RX_LEVEL_STR;

#define SIZE_TX_OR_RX_LEVEL_STR   sizeof(TX_OR_RX_LEVEL_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_SBER_INFO_PER_FREQ - Valid from version 000.148           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* List of 8 values - one for each slot. First one is for slot 0, last
       one is for slot 7 (in PCL , Q0 format)
    */
    TX_LEV_PCL_STR tx_level_pcl[8];
    /* List of 8 values - one for each slot. First one is for slot 0, last
       one is for slot 7.
       For automatic AGC the values have no effect.
       Unit for Rx: [dBm], Q8 encoded format
    */
    RX_LEVEL_STR init_rx_level[8];
    uint16  arfcn;        /* For TCH and PDTCH channels */
    uint16  fill1;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    } GSM_SBER_INFO_PER_FREQ_STR;

#define SIZE_GSM_SBER_INFO_PER_FREQ_STR   sizeof(GSM_SBER_INFO_PER_FREQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: WCDMA_SBER_INFO_PER_FREQ - Valid from version 000.148         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    int16   tx_level;
    uint16  dl_uarfcn;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    } WCDMA_SBER_INFO_PER_FREQ_STR;

#define SIZE_WCDMA_SBER_INFO_PER_FREQ_STR   \
        sizeof(WCDMA_SBER_INFO_PER_FREQ_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: INT_PWR_MEAS - Valid from version 000.148                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  int_pwr_meas;
    } INT_PWR_MEAS_STR;

#define SIZE_INT_PWR_MEAS_STR   sizeof(INT_PWR_MEAS_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: WCDMA_SBER_RES_INFO - Valid from version 000.148              */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  num_bits_meas;
    uint16  num_err_bits;
    /* Average received power at antenna in dBm (RSSI) during the BER
       measurement period
    */
    int16   avg_rcvd_pwr;
    /* Average RSCP results for measured cell CPICH path. The measures are
       only performed during the BER measurement period
    */
    int16   avg_rscp_res;
    } WCDMA_SBER_RES_INFO_STR;

#define SIZE_WCDMA_SBER_RES_INFO_STR   sizeof(WCDMA_SBER_RES_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_BER_RES_INFO - Versions 000.148 - 000.151                 */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* Total number of bits RBER Class Ib that have been measured for Coded
       mode
    */
    uint16  num_of_rber_Ib_coded_bits;
    /* Total number of bits RBER Class II that have been measured for Coded
       mode
    */
    uint16  num_of_rber_II_coded_bits;
    /* Total number of bits BER that have been measured for Uncoded mode */
    uint16  num_of_ber_uncoded_bits;
    /* Number of error bits RBER Class Ib that have been measured for Coded
       mode
    */
    uint16  rber_Ib_coded_error_bits;
    /* Number of error bits RBER Class II that have been measured for Coded
       mode
    */
    uint16  rber_II_coded_error_bits;
    /* Number of error bits BER that have been measured for Uncoded mode */
    uint16  ber_uncoded_error_bits;
    uint16  meas_blocks; /* Total number of blocks that have been measured */
    uint16  false_blocks; /* Number of block that are false */
    /* Average SNR during the BER/BLER measurement period for verification
       purpose
    */
    int16   avg_snr;
    /* Average received power in burst during the BER/BLER measurement period
    */
    int16   avg_pwr;
    } GSM_BER_RES_INFO_STR;

#define SIZE_GSM_BER_RES_INFO_STR   sizeof(GSM_BER_RES_INFO_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Sequence: GSM_BER_RES_INFO - Valid from version 000.151                 */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* Total number of bits RBER Class Ib that have been measured for Coded
       mode
    */
    uint16  num_of_rber_Ib_coded_bits;
    /* Total number of bits RBER Class II that have been measured for Coded
       mode
    */
    uint16  num_of_rber_II_coded_bits;
    /* Total number of bits BER that have been measured for Uncoded mode */
    uint16  num_of_ber_uncoded_bits;
    /* Number of error bits RBER Class Ib that have been measured for Coded
       mode
    */
    uint16  rber_Ib_coded_error_bits;
    /* Number of error bits RBER Class II that have been measured for Coded
       mode
    */
    uint16  rber_II_coded_error_bits;
    /* Number of error bits BER that have been measured for Uncoded mode */
    uint16  ber_uncoded_error_bits;
    uint16  meas_blocks; /* Total number of blocks that have been measured */
    uint16  false_blocks; /* Number of block that are false */
    /* Average SNR during the BER/BLER measurement period for verification
       purpose
    */
    int16   avg_snr;
    /* Average received power in burst during the BER/BLER measurement period
    */
    int16   avg_pwr;
    } GSM_BER_RES_INFO_STR;

#define SIZE_GSM_BER_RES_INFO_STR   sizeof(GSM_BER_RES_INFO_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PA_INFO - Valid from version 000.001                */
/* ----------------------------------------------------------------------- */
/* PA version/vendor information sub block. C_TEST_NOT_AVAILABLE is returned
   in Version field if version of PA is not available. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint16  version;      /* Version of PA */
    /* Manufacturer of PA in ASCII string */
    } C_TEST_SB_PA_INFO_STR;

#define SIZE_C_TEST_SB_PA_INFO_STR   (5*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PA_BIAS_INFO - Valid from version 000.001           */
/* ----------------------------------------------------------------------- */
/* Sub block of PA bias information for tuning purposes.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint16  bias1_const;  /* (B1) */
    uint16  bias1_current; /* (IB1) */
    uint16  bias2_default_dac; /* (B21) */
    uint16  target_value; /* (It) */
    } C_TEST_SB_PA_BIAS_INFO_STR;

#define SIZE_C_TEST_SB_PA_BIAS_INFO_STR   sizeof(C_TEST_SB_PA_BIAS_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_TX_IQ_SETUP - Valid from version 000.002        */
/* ----------------------------------------------------------------------- */
/* Sub block for activating GSM Tx IQ self tuning */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  band;         /* Values from the constant table G_TEST_BAND */
    uint16  pa_loop_mode; /* Values from the constant table G_TEST_PA_MODE */
    uint16  power_level;
    uint16  channel_nbr;
    int16   dc_offset_i;  /* Value is used if DC offset tuning is omitted */
    int16   dc_offset_q;  /* Value is used if DC offset tuning is omitted */
    /* Value is used if Amplitude offset tuning is omitted */
    int16   ampl_offset;
    uint16  fill1;
    } C_TEST_SB_GSM_TX_IQ_SETUP_STR;

#define SIZE_C_TEST_SB_GSM_TX_IQ_SETUP_STR   \
        sizeof(C_TEST_SB_GSM_TX_IQ_SETUP_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_LO_LEAK_SETUP - Valid from version 000.002    */
/* ----------------------------------------------------------------------- */
/* Sub block for activating WCDMA LO Leakage self tuning.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  channel_nbr;
    uint16  pwr_lvl;      /* Power level, TxC DAC value */
    int16   dc_offset_i;  /* Value is used if DC offset tuning is omitted */
    int16   dc_offset_q;  /* Value is used if DC offset tuning is omitted */
    /* Value is used if Amplitude offset tuning is omitted */
    int16   ampl_offset;
    uint16  fill1;
    } C_TEST_SB_WCDMA_LO_LEAK_SETUP_STR;

#define SIZE_C_TEST_SB_WCDMA_LO_LEAK_SETUP_STR   \
        sizeof(C_TEST_SB_WCDMA_LO_LEAK_SETUP_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_DC_OFFSET_RESULT - Versions 000.002 - 000.127       */
/* ----------------------------------------------------------------------- */
/* Sub block for DC Offset tuning result. C_TEST_NOT_SUPPORTED status is
   returned if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    /* Tuning/register value that produced the best result for I branch */
    int16   i_tuning_value;
    /*  Difference (in dac's) between I_POS and I_NEG powers measured by
       detector 
    */
    int16   i_result;
    /* Tuning/register value that produced the best result for Q branch */
    int16   q_tuning_value;
    /*  Difference (in dac's) between Q_POS and Q_NEG powers measured by
       detector 
    */
    int16   q_result;
    uint16  fill1;
    } C_TEST_SB_DC_OFFSET_RESULT_STR;

#define SIZE_C_TEST_SB_DC_OFFSET_RESULT_STR   \
        sizeof(C_TEST_SB_DC_OFFSET_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_DC_OFFSET_RESULT - Valid from version 000.128       */
/* ----------------------------------------------------------------------- */
/* Sub block for DC Offset tuning result. C_TEST_NOT_SUPPORTED status is
   returned if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  RF HW path
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    /* Tuning/register value that produced the best result for I branch */
    int16   i_tuning_value;
    /*  Difference (in dac's) between I_POS and I_NEG powers measured by
       detector 
    */
    int16   i_result;
    /* Tuning/register value that produced the best result for Q branch */
    int16   q_tuning_value;
    /*  Difference (in dac's) between Q_POS and Q_NEG powers measured by
       detector 
    */
    int16   q_result;
    uint16  fill1;
    } C_TEST_SB_DC_OFFSET_RESULT_STR;

#define SIZE_C_TEST_SB_DC_OFFSET_RESULT_STR   \
        sizeof(C_TEST_SB_DC_OFFSET_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_AMPLITUDE_RESULT - Versions 000.002 - 000.127       */
/* ----------------------------------------------------------------------- */
/* Sub block for Amplitude tuning result. C_TEST_NOT_SUPPORTED status is
   returned if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    int16   best_tuning_value;
    int16   best_result;
    uint16  vector_length;
    } C_TEST_SB_AMPLITUDE_RESULT_STR;

#define SIZE_C_TEST_SB_AMPLITUDE_RESULT_STR   \
        sizeof(C_TEST_SB_AMPLITUDE_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_AMPLITUDE_RESULT - Valid from version 000.128       */
/* ----------------------------------------------------------------------- */
/* Sub block for Amplitude tuning result. C_TEST_NOT_SUPPORTED status is
   returned if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  RF HW path
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    int16   best_tuning_value;
    int16   best_result;
    uint16  vector_length;
    } C_TEST_SB_AMPLITUDE_RESULT_STR;

#define SIZE_C_TEST_SB_AMPLITUDE_RESULT_STR   \
        sizeof(C_TEST_SB_AMPLITUDE_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PHASE_RESULT - Versions 000.002 - 000.127           */
/* ----------------------------------------------------------------------- */
/* Sub block for Phase tuning result. C_TEST_NOT_SUPPORTED status is returned
   if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    int16   best_tuning_value;
    int16   best_result;
    uint16  vector_length;
    } C_TEST_SB_PHASE_RESULT_STR;

#define SIZE_C_TEST_SB_PHASE_RESULT_STR   sizeof(C_TEST_SB_PHASE_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 2) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PHASE_RESULT - Valid from version 000.128           */
/* ----------------------------------------------------------------------- */
/* Sub block for Phase tuning result. C_TEST_NOT_SUPPORTED status is returned
   if CDSP doesn't support test
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  RF HW path
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    int16   best_tuning_value;
    int16   best_result;
    uint16  vector_length;
    } C_TEST_SB_PHASE_RESULT_STR;

#define SIZE_C_TEST_SB_PHASE_RESULT_STR   sizeof(C_TEST_SB_PHASE_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 128) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_BAND_RECORD_INFO - Valid from version 000.014   */
/* ----------------------------------------------------------------------- */
/* GSM system band dependent PMM record ID's sub block */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  band;         /* Values from the constant table G_TEST_BAND */
    uint16  rx_cal;   /* Rx calibration and band filter response record ID */
    /* Rx calibration and band filter response record length */
    uint16  rx_cal_len;
    /* Rx AM suppression and channel select filter record ID */
    uint16  rx_am;
    /* Rx AM suppression and channel select filter record length */
    uint16  rx_am_len;
    uint16  tx;           /* Tx I/Q and Tx power level tuning record ID */
    uint16  tx_len;      /* Tx I/Q and Tx power level tuning record length */
    uint16  tx_ramp;      /* Tx power ramp record ID */
    uint16  tx_ramp_len;  /* Tx power ramp record length */
    uint16  tx_edge;    /* EDGE Tx I/Q and Tx power level tuning record ID */
    /* EDGE Tx I/Q and Tx power level tuning record length */
    uint16  tx_edge_len;
    uint16  fill1;
    } C_TEST_SB_GSM_BAND_RECORD_INFO_STR;

#define SIZE_C_TEST_SB_GSM_BAND_RECORD_INFO_STR   \
        sizeof(C_TEST_SB_GSM_BAND_RECORD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_COMM_RECORD_INFO - Valid from version 000.014   */
/* ----------------------------------------------------------------------- */
/* GSM system common PMM record ID's sub block */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  rd;           /* Common R&D data record ID */
    uint16  rd_len;       /* Common R&D data record length */
    uint16  comm_tx;      /* Common Tx record ID */
    uint16  comm_tx_len;  /* Common Tx record length */
    uint16  comm_rx;      /* Common Rx record ID */
    uint16  comm_rx_len;  /* Common Rx record length */
    } C_TEST_SB_GSM_COMM_RECORD_INFO_STR;

#define SIZE_C_TEST_SB_GSM_COMM_RECORD_INFO_STR   \
        sizeof(C_TEST_SB_GSM_COMM_RECORD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_BAND_RECORD_INFO - Versions 000.014 - 000.017 */
/* ----------------------------------------------------------------------- */
/* WCDMA system record ID's sub block */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 14) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 17) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  band;         /* Values from the constant table W_TEST_BAND */
    uint16  rx_agc;       /* Rx tunings record ID */
    uint16  rx_agc_len;   /* Rx tunings record length */
    uint16  tx;           /* Tx tunings record ID */
    uint16  tx_len;       /* Tx tunings record length */
    uint16  bb_tx;        /* BB tunings record ID */
    uint16  bb_tx_len;    /* BB tunings record length */
    uint16  rx;           /* RFIC tunings record ID */
    uint16  rx_len;       /* RFIC tunings record length */
    uint16  fill1;
    } C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR;

#define SIZE_C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR   \
        sizeof(C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 14) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 17) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_BAND_RECORD_INFO - Versions 000.017 - 000.028 */
/* ----------------------------------------------------------------------- */
/* WCDMA system record ID's sub block */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 17) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 28) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  band;         /* Values from the constant table W_TEST_BAND */
    uint16  rx_agc;       /* Rx tunings record ID */
    uint16  rx_agc_len;   /* Rx tunings record length */
    uint16  tx;           /* Tx tunings record ID */
    uint16  tx_len;       /* Tx tunings record length */
    uint16  bb_tx;        /* BB tunings record ID */
    uint16  bb_tx_len;    /* BB tunings record length */
    uint16  fill1;
    } C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR;

#define SIZE_C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR   \
        sizeof(C_TEST_SB_WCDMA_BAND_RECORD_INFO_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 17) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 28) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_BAND_RECORD_INFO_II - Valid from version 000.028 */
/* ----------------------------------------------------------------------- */
/* WCDMA system record ID's sub block with new uniform WCDMA Band
   definitions.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band;         /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  rx_agc;       /* Rx tunings record ID */
    uint16  rx_agc_len;   /* Rx tunings record length */
    uint16  tx;           /* Tx tunings record ID */
    uint16  tx_len;       /* Tx tunings record length */
    uint16  bb_tx;        /* BB tunings record ID */
    uint16  bb_tx_len;    /* BB tunings record length */
    } C_TEST_SB_WCDMA_BAND_RECORD_INFO_II_STR;

#define SIZE_C_TEST_SB_WCDMA_BAND_RECORD_INFO_II_STR   \
        sizeof(C_TEST_SB_WCDMA_BAND_RECORD_INFO_II_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RITSA_COMMON_RECORD_INFO - Valid from version 000.017 */
/* ----------------------------------------------------------------------- */
/* Common system independent record ID's sub block */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  rfic;         /* RFIC tunings record ID */
    uint16  rfic_len;     /* RFIC tunings record length */
    } C_TEST_SB_RITSA_COMMON_RECORD_INFO_STR;

#define SIZE_C_TEST_SB_RITSA_COMMON_RECORD_INFO_STR   \
        sizeof(C_TEST_SB_RITSA_COMMON_RECORD_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SYSTEM_BANDS - Valid from version 000.018       */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting/reading GSM Band information  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  gsm_active_band; /* Values from the constant table G_TEST_BAND */
    uint16  fill1;
    } C_TEST_SB_GSM_SYSTEM_BANDS_STR;

#define SIZE_C_TEST_SB_GSM_SYSTEM_BANDS_STR   \
        sizeof(C_TEST_SB_GSM_SYSTEM_BANDS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SYSTEM_BANDS_II - Valid from version 000.028  */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting/reading WCDMA Band information. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint32  wcdma_active_band;
    } C_TEST_SB_WCDMA_SYSTEM_BANDS_II_STR;

#define SIZE_C_TEST_SB_WCDMA_SYSTEM_BANDS_II_STR   \
        sizeof(C_TEST_SB_WCDMA_SYSTEM_BANDS_II_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SUPPORTED_BANDS - Valid from version 000.028  */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting/reading WCDMA bands that are supported.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Sub Block status
    */
    uint16  fill2_sb_status;
    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint32  wcdma_band_bits;
    } C_TEST_SB_WCDMA_SUPPORTED_BANDS_STR;

#define SIZE_C_TEST_SB_WCDMA_SUPPORTED_BANDS_STR   \
        sizeof(C_TEST_SB_WCDMA_SUPPORTED_BANDS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II - Valid from version 000.028 */
/* ----------------------------------------------------------------------- */
/* Sub block for setting/getting WCDMA Tx max. power limitation value. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Sub Block status
    */
    uint16  fill2_sb_status;
    uint32  band;         /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  max_pwr_limit; /* Tx max power limit value */
    uint16  fill3;
    } C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II_STR;

#define SIZE_C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II_STR   \
        sizeof(C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_FEATURE_INFO - Valid from version 000.025       */
/* ----------------------------------------------------------------------- */
/* Sub block for getting status of different GSM DSP features. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gsm_feat;  /* Values from the bitmask table G_DSP_FEATURE_INFO */
    } C_TEST_SB_GSM_FEATURE_INFO_STR;

#define SIZE_C_TEST_SB_GSM_FEATURE_INFO_STR   \
        sizeof(C_TEST_SB_GSM_FEATURE_INFO_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_TXPOWER_TUNING - Valid from version 000.056   */
/* ----------------------------------------------------------------------- */
/* Sub block contains parameters for Tx power tuning burst */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Send mode
    */
    uint16  fill1_send_mode;
    uint16  duration;     /* Scale: value of 150 takes 1ms */
    uint16  ul_uarfcn;    /* Valid channel number for selected band */
    uint16  txc_start_value;
    int16   txc_step_size;
    uint16  txc_step_count;
    uint16  gain_offset;
    uint16  weights;      /* Upper byte for DPCCH, lower for DPDCH */
    uint16  fill2;
    uint16  pa_ctrl_data_size;
    /* PA control value data 1...PA_CTRL_DATA_SIZE */
    uint16  pa_ctrl[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_WCDMA_TXPOWER_TUNING_STR;

#define SIZE_C_TEST_SB_WCDMA_TXPOWER_TUNING_STR   (11*sizeof(uint16) + \
        sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_TXPOWER_TUNING_RESULTS - Valid from version 000.051 */
/* ----------------------------------------------------------------------- */
/* Sub block for Tx tuning burst results. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Status of the operation, 0 if ok, otherwise test specific error code
    */
    int16   status;
    uint16  nbr_of_detector_readings;
    int16   detector_readings[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_WCDMA_TXPOWER_TUNING_RESULTS_STR;

#define SIZE_C_TEST_SB_WCDMA_TXPOWER_TUNING_RESULTS_STR   (\
        3*sizeof(uint16) + sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_AFC_MEAS_AND_ADJUST - Valid from version 000.076    */
/* ----------------------------------------------------------------------- */
/* Sub block contains setup values for frequency error measurement and
   adjustment
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Select either frequency error measurement or adjustment
       Values from the constant table C_TEST_FREQ_MEAS_MODE
    */
    uint16  measurementMode;
    uint16  afcValue;   /* Valid afc value or 0 (use current tuning value) */
    /* Valid coarse value or 0 (use current tuning value) */
    uint16  coarseValue;
    /* Timeout counter used in adjustment, 0 means use default value */
    uint16  adjustTimeout;
    /* Accuracy for adjustment (+-(1/2048):th of radians, 0 means use default
       value
    */
    uint16  adjustAccuracy;
    uint16  filler;
    } C_TEST_SB_AFC_MEAS_AND_ADJUST_STR;

#define SIZE_C_TEST_SB_AFC_MEAS_AND_ADJUST_STR   \
        sizeof(C_TEST_SB_AFC_MEAS_AND_ADJUST_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS - Valid from version 000.076 */
/* ----------------------------------------------------------------------- */
/* Sub block contains results of frequency error measurement and adjustment
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Status of the operation, 0 if ok, otherwise test specific error code
    */
    uint16  status;
    /* Measured or adjusted frequency error in radians */
    int16   freqErrorRad;
    uint16  usedAfc;  /* Final afc value used in measurement or adjustment */
    uint16  usedCoarse;  /* Coarse value used in measurement or adjustment */
    /* Timeout left in counter, if 0, timeout occured */
    uint16  remainingTimeout;
    uint16  filler;
    } C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS_STR;

#define SIZE_C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS_STR   \
        sizeof(C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_LINKO_AFC_TUNING - Valid from version 000.031       */
/* ----------------------------------------------------------------------- */
/* Sub block contains setup values for Linko Afc tuning */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Default freq compensation value during tuning, 16 bits, if default
       value given, dsp default value will be used 
    */
    int16   defaultAfc;
    /* Default coarse compensation value during tuning, 7 bits, if default
       value given, dsp default value will be used
    */
    uint16  defaultCoarse;
    } C_TEST_SB_LINKO_AFC_TUNING_STR;

#define SIZE_C_TEST_SB_LINKO_AFC_TUNING_STR   \
        sizeof(C_TEST_SB_LINKO_AFC_TUNING_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_LINKO_AFC_TUNING_RESULTS - Valid from version 000.031 */
/* ----------------------------------------------------------------------- */
/* Sub block for Linko AFC tuning results. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Status of the operation, 0 if ok, otherwise test specific error code
    */
    uint16  status;
    uint16  c_coarse;     /* C_coarse tuning value */
    uint16  i_bias_core;  /* I_Core tuning value */
    int16   afc0_value;   /* Afc0, initial afc tuning value */
    uint16  temperature;  /* Calibration temperature, DAC value */
    int16   c_temp_k;     /* C_temp k factor */
    int16   c_temp_b;     /* C_temp b factor */
    int16   afc1_reading; /* Afc1 phase/freq error */
    int16   afc2_reading; /* Afc2 phase/freq error */
    int16   afc3_reading; /* Afc3 phase/freq error */
    int16   afc4_reading; /* Afc4 phase/freq error */
    int16   afc5_reading; /* Afc5 phase/freq error */
    uint16  afc1_value;   /* Afc1 tuning value */
    uint16  afc2_value;   /* Afc2 tuning value */
    uint16  afc3_value;   /* Afc3 tuning value */
    uint16  afc4_value;   /* Afc4 tuning value */
    uint16  afc5_value;   /* Afc5 tuning value */
    uint16  fill1;
    } C_TEST_SB_LINKO_AFC_TUNING_RESULTS_STR;

#define SIZE_C_TEST_SB_LINKO_AFC_TUNING_RESULTS_STR   \
        sizeof(C_TEST_SB_LINKO_AFC_TUNING_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_RX_CONTROL - Valid from version 000.031         */
/* ----------------------------------------------------------------------- */
/* Sub block contains setup for Gsm rx control */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* If Rx is disabled, the rest of the parameters are not used
       Values from the constant table C_TEST_RF_CTRL_MODE
    */
    uint16  mode;
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 0 */
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  channel;      /* Any valid channel for selected GSM band */
    uint16  mon_ch;       /* Any valid channel for selected GSM band */
    int16   afc;          /* Any valid frequency compensation value */
    /* Any valid gain value, max value depends on rf-asic type */
    uint16  agc;
    /* Values from the constant table C_TEST_RF_CTRL_OPER_MODE */
    uint16  operationMode;
    /* Filler to align sub block size to 4 bytes boundary, set to 0 */
    uint16  fill2;
    } C_TEST_SB_GSM_RX_CONTROL_STR;

#define SIZE_C_TEST_SB_GSM_RX_CONTROL_STR   \
        sizeof(C_TEST_SB_GSM_RX_CONTROL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_RX_CONTROL_RESP - Valid from version 000.030    */
/* ----------------------------------------------------------------------- */
/* Sub block contains status for Gsm rx control */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Status of the operation, 0 if ok, otherwise test specific error code
    */
    uint16  status;
    /* Filler to align sub block size to 4 bytes boundary, set to 0 */
    uint16  fill1;
    } C_TEST_SB_GSM_RX_CONTROL_RESP_STR;

#define SIZE_C_TEST_SB_GSM_RX_CONTROL_RESP_STR   \
        sizeof(C_TEST_SB_GSM_RX_CONTROL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_TXPOWER_VALUES - Valid from version 000.055   */
/* ----------------------------------------------------------------------- */
/* Sub block contains Wcdma tx power compensation table */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  gain_offset;
    uint16  gain_start;
    int16   gain_step;
    int16   gain_step_count;
    int16   powerTable[32];
    int16   paTable[32];
    uint16  biasTable[32]; /* Values from the bitmask table PA_BIAS */
    } C_TEST_SB_WCDMA_TXPOWER_VALUES_STR;

#define SIZE_C_TEST_SB_WCDMA_TXPOWER_VALUES_STR   \
        sizeof(C_TEST_SB_WCDMA_TXPOWER_VALUES_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_POWERDETECTOR_VALUES - Valid from version 000.057 */
/* ----------------------------------------------------------------------- */
/* Sub block contains Wcdma tx power detector compensation values */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int16   detector_coeff_k;
    int16   detector_coeff_b;
    } C_TEST_SB_WCDMA_POWERDETECTOR_VALUES_STR;

#define SIZE_C_TEST_SB_WCDMA_POWERDETECTOR_VALUES_STR   \
        sizeof(C_TEST_SB_WCDMA_POWERDETECTOR_VALUES_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_TUNING_ERROR - Valid from version 000.031           */
/* ----------------------------------------------------------------------- */
/* Sub block contains an error id and message */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int16   errorCode;
    /* Error message in ASCII string */
    /* Variable filler to align sub block size to 4 bytes boundary */
    /* xxxxxxxx--------  Id of failed operation
       --------xxxxxxxx  Filler
    */
    uint16  status_fill1;
    } C_TEST_SB_TUNING_ERROR_STR;

#define SIZE_C_TEST_SB_TUNING_ERROR_STR   (3*sizeof(uint16) + sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEASURE - Versions 000.034 - 000.038        */
/* ----------------------------------------------------------------------- */
/* Sub block for sending Tx burst according to the given parameters and
   parameters for receiver in order to measure the own Tx power. Tx Power
   sequence can be generated by using several Sub Blocks. Attenuation and LNA
   values are used for setting internal receiver(s) for measuring Tx power.
   These values may vary according to the Band.
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 0 */
    C_TEST_TX_PWR_SEQ_WCDMA_STR system_dep_data;
    uint16  channel_nbr;  /* Channel number */
    uint16  pwr_ctrl_value; /* Power control value */
    /* Rx attenuation value in dB for setting receiver(s) that are used to
       measure the own Tx power.
    */
    uint16  rf_rx_attenuation_value;
    /* Parameter for setting LNA state
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    uint16  rf_lna_step_size; /* LNA step size in dB.  */
    } C_TEST_SB_PWR_SEQ_MEASURE_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEASURE_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEASURE_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEASURE - Versions 000.038 - 000.068        */
/* ----------------------------------------------------------------------- */
/* Sub block for sending Tx burst according to the given parameters and
   parameters for receiver in order to measure the own Tx power. Tx Power
   sequence can be generated by using several Sub Blocks. Attenuation and LNA
   values are used for setting internal receiver(s) for measuring Tx power.
   These values may vary according to the Band.
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 0 */
    C_TEST_TX_PWR_SEQ_WCDMA_STR system_dep_data;
    uint16  channel_nbr;  /* Channel number */
    uint16  pwr_ctrl_value; /* Power control value */
    /* Rx attenuation value in dB for setting receiver(s) that are used to
       measure the own Tx power.
    */
    uint16  rf_rx_attenuation_value;
    /* Parameter for setting LNA state
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    uint16  rf_lna_step_size; /* LNA step size in dB.  */
    uint16  fill2;  /* Filler to align sub block data to 4 bytes, set to 0 */
    } C_TEST_SB_PWR_SEQ_MEASURE_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEASURE_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEASURE_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 38) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEASURE - Versions 000.068 - 000.086        */
/* ----------------------------------------------------------------------- */
/* Sub block for sending Tx burst according to the given parameters and
   parameters for receiver in order to measure the own Tx power. Tx Power
   sequence can be generated by using several Sub Blocks. Attenuation and LNA
   values are used for setting internal receiver(s) for measuring Tx power.
   These values may vary according to the Band. Measurement can be performed
   according to coarse or fine attenuation setting. For coarse attenuator
   calibration use the parameter values mentioned in the corresponding
   specification.
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 86) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* xxxxxxxx--------  Receiver attenuator setting
       --------xxxxxxxx  Filler
    */
    uint16  rx_attenuation_mode_and_fill1;
    C_TEST_TX_PWR_SEQ_WCDMA_STR system_dep_data;
    uint16  channel_nbr;  /* Channel number */
    uint16  pwr_ctrl_value; /* Power control value */
    /* Rx attenuation value in dB for setting receiver(s) that is used to
       measure the own Tx power.
    */
    uint16  rf_rx_attenuation_value;
    /* Parameter for setting LNA state
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    uint16  rf_lna_step_size; /* LNA step size in dB.  */
    uint16  fill2;  /* Filler to align sub block data to 4 bytes, set to 2 */
    } C_TEST_SB_PWR_SEQ_MEASURE_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEASURE_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEASURE_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 86) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEASURE - Valid from version 000.086        */
/* ----------------------------------------------------------------------- */
/* Sub block for sending Tx burst according to the given parameters and
   parameters for receiver in order to measure the own Tx power. Tx Power
   sequence can be generated by using several Sub Blocks. An option is
   provided to have 'n' number of empty slots between sub blocks'n' is
   specified in the input messageAttenuation and LNA values are used for
   setting internal receiver(s) for measuring Tx power. These values may vary
   according to the Band. Measurement can be performed according to coarse or
   fine attenuation setting. For coarse attenuator calibration use the
   parameter values mentioned in the corresponding specification.
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 86) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* xxxxxxxx--------  Receiver attenuator setting
       --------xxxxxxxx  Filler
    */
    uint16  rx_attenuation_mode_and_fill1;
    C_TEST_TX_PWR_SEQ_WCDMA_STR system_dep_data;
    uint16  channel_nbr;  /* Channel number */
    uint16  pwr_ctrl_value; /* Power control value */
    /* Rx attenuation value in dB for setting receiver(s) that is used to
       measure the own Tx power.
    */
    uint16  rf_rx_attenuation_value;
    /* Parameter for setting LNA state
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    uint16  rf_lna_step_size; /* LNA step size in dB.  */
    /* Number of empty slots before next sub block.
       -  0 and 1 =  1 empty slot
       -  2 = 2 empty slots 
       -  3 = 3 empty slots 
    */
    uint16  nbr_empty_slots;
    } C_TEST_SB_PWR_SEQ_MEASURE_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEASURE_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEASURE_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 86) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEAS_RESULTS - Versions 000.034 - 000.068   */
/* ----------------------------------------------------------------------- */
/* Sub block for returning internally measured Tx burst power values.  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  channel_nbr;  /* Tx Channel number */
    int16   int_measured_pwr1; /* Internally measured power from route 1 */
    int16   int_measured_pwr2; /* Internally measured power from route 2 */
    /* LNA state information
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    } C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 34) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_PWR_SEQ_MEAS_RESULTS - Valid from version 000.068   */
/* ----------------------------------------------------------------------- */
/* Sub block for returning internally measured Tx burst power values.
   Measurement can be performed according to coarse or fine attenuation
   setting.
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Receiver attenuator setting
       --------xxxxxxxx  Status of operation
    */
    uint16  rx_attenuation_mode_and_status;
    /* NOTE: Own Sub Block for each band!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  channel_nbr;  /* Tx Channel number */
    int16   int_measured_pwr1; /* Internally measured power from route 1 */
    int16   int_measured_pwr2; /* Internally measured power from route 2 */
    /* LNA state information
       Values from the constant table C_TEST_RF_LNA_MODE
    */
    uint16  lna_state;
    } C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR;

#define SIZE_C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR   \
        sizeof(C_TEST_SB_PWR_SEQ_MEAS_RESULTS_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 68) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_CLOSED_MODE_PWR_LIMIT - Valid from version 000.035  */
/* ----------------------------------------------------------------------- */
/* Sub block for configuring Closed mode power limitation. Makes possible to
   limit Tx maximum power depending on the slide or flip position of the
   product. Product specific configurations are not allowed to exeed the
   limits defined in system specifications!
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Sub Block status
    */
    uint16  status;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    C_TEST_WCDMA_CLOSED_MODE_PWR_SEQ_STR IF;
    } C_TEST_SB_CLOSED_MODE_PWR_LIMIT_STR;

#define SIZE_C_TEST_SB_CLOSED_MODE_PWR_LIMIT_STR   \
        sizeof(C_TEST_SB_CLOSED_MODE_PWR_LIMIT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_ANTENNA_TEST - Valid from version 000.049           */
/* ----------------------------------------------------------------------- */
/* Sub block for for testing the Antenna. Based on power control word and
   attenuation value VSWR is meaured for a specific band and channel. This
   value tells how well the antenna works (working/not working).
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 2 */
    /* NOTE: Own Sub-block for each measurement point!
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint32  system_dep_data;
    uint16  channel_nbr;  /* Tx channel number */
    int16   pwr_level;    /* Tx signal power level [dBm] */
    uint16  att_value;    /* Attenuation value (on Rx path) for VESA meter */
    uint16  fill2;  /* Filler to align sub block data to 4 bytes, set to 2 */
    } C_TEST_SB_ANTENNA_TEST_STR;

#define SIZE_C_TEST_SB_ANTENNA_TEST_STR   sizeof(C_TEST_SB_ANTENNA_TEST_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_ANTENNA_TEST_RESULT - Valid from version 000.049    */
/* ----------------------------------------------------------------------- */
/* Response message for the antenna test (C_TEST_SB_ANTENNA_TEST). VSWR value
   returned here.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_substatus;
    uint16  vswr_value;   /* VSWR value */
    } C_TEST_SB_ANTENNA_TEST_RESULT_STR;

#define SIZE_C_TEST_SB_ANTENNA_TEST_RESULT_STR   \
        sizeof(C_TEST_SB_ANTENNA_TEST_RESULT_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_TX_TUNING - Valid from version 000.043        */
/* ----------------------------------------------------------------------- */
/* Sub block for controlling WCDMA Tx tuning sweep.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  step_length;  /* Duration of one step (1=10us) */
    /* Options for controlling sweep
       Values from the bitmask table TUNING_CTRL_OPT
    */
    uint16  tuning_ctrl_opt;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  channel_nbr;  /* Channel number */
    uint16  tuning_target;
    /* Internal Power Meter attenuation/gain start value */
    uint16  pwr_meter_att;
    uint16  pwr_ctrl_value; /* Power control start value */
    int16   pwr_ctrl_step; /* Power control step size */
    uint16  dpdch_weight; /* DPDCH Channel weight */
    uint16  dpcch_weight; /* DPCCH Channel weight */
    uint16  pa_ctrl_data_size;
    /* PA control value data 1...PA_CTRL_DATA_SIZE */
    uint16  pa_ctrl[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_WCDMA_TX_TUNING_STR;

#define SIZE_C_TEST_SB_WCDMA_TX_TUNING_STR   (11*sizeof(uint16) + \
        sizeof(uint32) + sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_TX_TUNING_RESULTS - Valid from version 000.043      */
/* ----------------------------------------------------------------------- */
/* Sub block for returning Tx tuning results. Sub block is common for GSM and
   WCDMA systems.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status
    */
    uint16  status;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint32  system_dep_data;
    int16   max_pwr;      /* Measured maximum power value */
    /* The amount of measured Power values and corresponding power control
       DAC values
    */
    uint16  amount_of_values;
    /* Power and DAC values 0...N */
    uint16  measured_pwr[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_TX_TUNING_RESULTS_STR;

#define SIZE_C_TEST_SB_TX_TUNING_RESULTS_STR   (5*sizeof(uint16) + \
        sizeof(uint32) + sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_TX_PWR_TUNING - Valid from version 000.045      */
/* ----------------------------------------------------------------------- */
/* Sub block for controlling GSM Tx power level tuning.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  channel_nbr;  /* Channel number */
    uint16  fill1;
    uint16  edge_on;      /* EDGE mode */
    /* Tuning control value data: 18 (GSM850/900) or 19 (GSM1800/1900) for
       selftuning, 1 for R&D manual tuning
    */
    uint16  nbr_of_ctrl_data;
    uint16  selftun_ctrl[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_GSM_TX_PWR_TUNING_STR;

#define SIZE_C_TEST_SB_GSM_TX_PWR_TUNING_STR   (6*sizeof(uint16) + \
        sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_PA_COMPRESSION_TUNING - Valid from version 000.126 */
/* ----------------------------------------------------------------------- */
/* Sub block for controlling GSM PA compression tuning.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  channel_nbr;  /* Channel number */
    /* Mode
       A subset of values from the bitmask table
       C_TEST_PA_COMPRESSION_TUNING_CTRL_WORD
    */
    uint16  control_word;
    int16   target_power_dBm_q6; /* Target power / dBm */
    int16   compression_level_dB_q6; /* Compression level / dB */
    } C_TEST_SB_GSM_PA_COMPRESSION_TUNING_STR;

#define SIZE_C_TEST_SB_GSM_PA_COMPRESSION_TUNING_STR   \
        sizeof(C_TEST_SB_GSM_PA_COMPRESSION_TUNING_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS - Valid from version 000.126 */
/* ----------------------------------------------------------------------- */
/* Sub block for returning calculated PA compression value */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  fill1;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    int16   pa_compensation_dB_q6; /* Compensation level / dB */
    int16   final_tx_power_dBm_q6; /* Final power level / dBm */
    uint16  iteration_count; /* Iteration count */
    uint16  fill2;
    } C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS_STR;

#define SIZE_C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS_STR   \
        sizeof(C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_FREQ_RESP_CALIBRATE - Valid from version 000.052    */
/* ----------------------------------------------------------------------- */
/* Sub block for giving Tx power value pairs that have been measured both
   with internal Power Meter and external equipment. Values are used for
   calculating Frequency response values and making internal Power Meter
   calibration.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 0 */
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  fill2;
    uint16  nbr_of_data;
    C_TEST_FREQ_RESP_DATA_STR freq_resp_data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_FREQ_RESP_CALIBRATE_STR;

#define SIZE_C_TEST_SB_FREQ_RESP_CALIBRATE_STR   (6*sizeof(uint16) + \
        sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_PWR_REDUCTION_VALUES - Valid from version 000.072 */
/* ----------------------------------------------------------------------- */
/* Sub block for calculating and storing of GSM Tx power reduction values.
   One sub-block for each band - also EDGE. The power reduction values are
   delta values. Positive delta values means a reduction of power. Negative
   delta values means an increase of power. Tx power reduction can be applied
   when sending multislot burst, when the slide is closed (slide phones),
   when cable used instead of antenna (test mode) or in normal mode. In
   normal mode, but also in other modes power reduction is applied for each
   channel of the whole band. The whole-band power reduction is determined by
   the power reduction target for the highest, lowest and the middle channel
   of the band (three points). All values in between are obtained by
   interpolation. It is possible to combine power reduction methods.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Own sub-block for each band
       Values from the bitmask table INFO_GSM_BAND
    */
    uint32  band_info;
    /* TRUE: values are for EDGE, FALSE: values are for GMSK */
    uint16  edge_status;
    int16   pwr_target_2slot; /* Multislot power reduction (2-slot bursts) */
    int16   pwr_target_3slot; /* Multislot power reduction (3-slot bursts) */
    int16   pwr_target_4slot; /* Multislot power reduction (4-slot bursts) */
    /* Normal mode power reduction for lowest channel of band */
    int16   pwr_target_open_low_ch;
    /* Normal mode power reduction for middle channel of band */
    int16   pwr_target_open_mid_ch;
    /* Normal mode power reduction for highest channel of band */
    int16   pwr_target_open_high_ch;
    /* Closed (slide) mode power reduction for lowest channel of band */
    int16   pwr_target_closed_low_ch;
    /* Closed (slide) mode power reduction for middle channel of band */
    int16   pwr_target_closed_mid_ch;
    /* Closed (slide) mode power reduction for highest channel of band */
    int16   pwr_target_closed_high_ch;
    /* Test mode power reduction for lowest channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_low_ch;
    /* Test mode power reduction for middle channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_mid_ch;
    /* Test mode power reduction for highest channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_high_ch;
    uint16  fill1;  /* Filler to align sub block data to 4 bytes, set to 2 */
    } C_TEST_SB_GSM_PWR_REDUCTION_VALUES_STR;

#define SIZE_C_TEST_SB_GSM_PWR_REDUCTION_VALUES_STR   \
        sizeof(C_TEST_SB_GSM_PWR_REDUCTION_VALUES_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS - Valid from version 000.072 */
/* ----------------------------------------------------------------------- */
/* Sub-block for calculating and storing of GSM Tx power reduction values.
   Relevant calculated values returned in this response sub-block. One
   sub-block for each band - also EDGE.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_substatus;
    /* TRUE: values are for EDGE, FALSE: values are for GMSK */
    uint16  edge_status;
    /* Own sub-block for each band
       Values from the bitmask table INFO_GSM_BAND
    */
    uint32  band_info;
    /* Power reduction data related to multislot, 2-slot bursts */
    GSM_TX_PWR_REDUCTION_DATA_STR ms_2slot_rel_data;
    /* Power reduction data related to multislot, 3-slot bursts */
    GSM_TX_PWR_REDUCTION_DATA_STR ms_3slot_rel_data;
    /* Power reduction data related to multislot, 4-slot bursts */
    GSM_TX_PWR_REDUCTION_DATA_STR ms_4slot_rel_data;
    /* Normal mode power reduction for lowest channel of band */
    int16   pwr_target_open_low_ch;
    /* Normal mode power reduction for middle channel of band */
    int16   pwr_target_open_mid_ch;
    /* Normal mode power reduction for highest channel of band */
    int16   pwr_target_open_high_ch;
    /* Closed (slide) mode power reduction for lowest channel of band */
    int16   pwr_target_closed_low_ch;
    /* Closed (slide) mode power reduction for middle channel of band */
    int16   pwr_target_closed_mid_ch;
    /* Closed (slide) mode power reduction for highest channel of band */
    int16   pwr_target_closed_high_ch;
    /* Test mode power reduction for lowest channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_low_ch;
    /* Test mode power reduction for middle channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_mid_ch;
    /* Test mode power reduction for highest channel of band. Cable is used
       instead of antenna.
    */
    int16   pwr_target_cable_high_ch;
    uint16  fill2;  /* Filler to align sub block data to 4 bytes, set to 2 */
    } C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS_STR;

#define SIZE_C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS_STR   \
        sizeof(C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES - Valid from version 000.087 */
/* ----------------------------------------------------------------------- */
/* Sub block for calculating and storing of WCDMA Tx power reduction values.
   One sub-block for each band. The power reduction values are delta values.
   Positive delta values means a reduction of power. Negative delta values
   means an increase of power. Tx power reduction can be applied when the
   slide is closed (slide phones), when a cable used instead of an antenna
   (test mode) or in normal mode. In normal mode, but also in other modes
   power reduction is applied for each channel of the whole band. The
   whole-band power reduction is determined by the power reduction target for
   the highest, lowest and the middle channel of the band (three points). All
   values in between are obtained by interpolation. It is possible to combine
   power reduction methods.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Sub block status
    */
    uint16  status;
    /* Own sub-block for each band
       Values from the bitmask table INFO_WCDMA_BAND
    */
    uint32  band_info;
    /* Normal mode power reduction for lowest channel of band */
    int16   red_target_open_low_ch;
    /* Normal mode power reduction for middle channel of band */
    int16   red_target_open_mid_ch;
    /* Normal mode power reduction for highest channel of band */
    int16   red_target_open_high_ch;
    /* Closed (slide) mode power reduction for lowest channel of band */
    int16   red_target_closed_low_ch;
    /* Closed (slide) mode power reduction for middle channel of band */
    int16   red_target_closed_mid_ch;
    /* Closed (slide) mode power reduction for highest channel of band */
    int16   red_target_closed_high_ch;
    /* Test mode power reduction for lowest channel of band. Cable is used
       instead of antenna.
    */
    int16   red_target_cable_low_ch;
    /* Test mode power reduction for middle channel of band. Cable is used
       instead of antenna.
    */
    int16   red_target_cable_mid_ch;
    /* Test mode power reduction for highest channel of band. Cable is used
       instead of antenna.
    */
    int16   red_target_cable_high_ch;
    uint16  fill2;  /* Filler to align sub block data to 4 bytes, set to 2 */
    } C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES_STR;

#define SIZE_C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES_STR   \
        sizeof(C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ1 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ1_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ1_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP1 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP1_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP1_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ2 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ2_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ2_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP2 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP2_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP2_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ3 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ3_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ3_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP3 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP3_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP3_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ4 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ4_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ4_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP4 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP4_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP4_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ5 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ5_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ5_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP5 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP5_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP5_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ6 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ6_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ6_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP6 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP6_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP6_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ7 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ7_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ7_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP7 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP7_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP7_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ8 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ8_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ8_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP8 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP8_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP8_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ9 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ9_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ9_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP9 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP9_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP9_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ10 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ10_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ10_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP10 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP10_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP10_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ11 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ11_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ11_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP11 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP11_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP11_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ12 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ12_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ12_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP12 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP12_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP12_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ13 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ13_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ13_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP13 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP13_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP13_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ14 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ14_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ14_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP14 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP14_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP14_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ15 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ15_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ15_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP15 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP15_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP15_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ16 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ16_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ16_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP16 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP16_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP16_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ17 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ17_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ17_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP17 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP17_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP17_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ18 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ18_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ18_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP18 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP18_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP18_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ19 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ19_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ19_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP19 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP19_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP19_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_REQ20 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning request subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_REQ20_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_REQ20_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RESERVED_FOR_LICENSEE_RESP20 - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Tuning response subblock reserved for licensee */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  reserved[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RESERVED_FOR_LICENSEE_RESP20_STR;

#define SIZE_C_TEST_SB_RESERVED_FOR_LICENSEE_RESP20_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_GSM_RX_CONTROL - Valid from version 000.093          */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting GSM RX CONTROL  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gsm_band_info; /* Values from the bitmask table INFO_GSM_BAND */
    uint16  rx_channel;
    uint16  mon_channel;
    /* xxxxxxxx--------  Rx slots
       --------xxxxxxxx  AFC table selection
    */
    uint16  rx_slot_mask_afc_table;
    uint16  fill1;
    uint32  manualAfc;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Filler
    */
    uint16  agc_mode_fill2;
    int16   rx_level;
    } C_HAL_SB_GSM_RX_CONTROL_STR;

#define SIZE_C_HAL_SB_GSM_RX_CONTROL_STR   \
        sizeof(C_HAL_SB_GSM_RX_CONTROL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_GSM_TX_CONTROL - Valid from version 000.093          */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting GSM TX CONTROL  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gsm_band_info; /* Values from the bitmask table INFO_GSM_BAND */
    uint16  tx_channel;
    /* xxxxxxxx--------  Tx slots
       --------xxxxxxxx  AFC table selection
    */
    uint16  tx_slot_mask_afc_table;
    uint32  manualAfc;
    /* xxxxxxxx--------  8PSK slots
       --------xxxxxxxx  Data type
    */
    uint16  tx_8psk_mask_data_type;
    /* xxxxxxxx--------  RACH slots
       --------xxxxxxxx  Tx power level unit
    */
    uint16  tx_rach_mask_tx_power_unit;
    uint16  power_level;
    uint16  fill1;
    } C_HAL_SB_GSM_TX_CONTROL_STR;

#define SIZE_C_HAL_SB_GSM_TX_CONTROL_STR   \
        sizeof(C_HAL_SB_GSM_TX_CONTROL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_WCDMA_RX_CONTROL - Versions 000.093 - 000.137        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting WCDMA RX CONTROL  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 137) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band_info;    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  dl_uarfcn;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint32  manualAfc;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Filler
    */
    uint16  agc_mode_fill2;
    int16   rx_level;
    } C_HAL_SB_WCDMA_RX_CONTROL_STR;

#define SIZE_C_HAL_SB_WCDMA_RX_CONTROL_STR   \
        sizeof(C_HAL_SB_WCDMA_RX_CONTROL_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 137) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_WCDMA_RX_CONTROL - Valid from version 000.137        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting WCDMA RX CONTROL  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 137) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band_info;    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  dl_uarfcn;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint32  manualAfc;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Filler
    */
    uint16  agc_mode_fill2;
    int16   rx_level;
    } C_HAL_SB_WCDMA_RX_CONTROL_STR;

#define SIZE_C_HAL_SB_WCDMA_RX_CONTROL_STR   \
        sizeof(C_HAL_SB_WCDMA_RX_CONTROL_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 137) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_WCDMA_TX_CONTROL - Versions 000.093 - 000.120        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting WCDMA TX CONTROL  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 120) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band_info;    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  ul_uarfcn;
    uint16  power_level;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint32  manualAfc;
    uint16  fill2;
    } C_HAL_SB_WCDMA_TX_CONTROL_STR;

#define SIZE_C_HAL_SB_WCDMA_TX_CONTROL_STR   \
        sizeof(C_HAL_SB_WCDMA_TX_CONTROL_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 120) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_WCDMA_TX_CONTROL - Versions 000.120 - 000.139        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting WCDMA TX CONTROL  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 120) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 139) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band_info;    /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  ul_uarfcn;
    uint16  power_level;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint16  fill2;
    uint32  manualAfc;
    } C_HAL_SB_WCDMA_TX_CONTROL_STR;

#define SIZE_C_HAL_SB_WCDMA_TX_CONTROL_STR   \
        sizeof(C_HAL_SB_WCDMA_TX_CONTROL_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 120) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 139) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_WCDMA_TX_CONTROL - Valid from version 000.139        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting WCDMA TX CONTROL  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 139) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  band_info;    /* Values from the bitmask table INFO_WCDMA_BAND */
    /* UARFCN (highest value are 200KHz per step,  lowest values have
       xxxx100KHz offset)
    */
    uint16  ul_uarfcn;
    uint16  power_level;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint16  fill2;
    uint32  manualAfc;
    /* xxxxxxxx--------  DPDCH enabled
       --------xxxxxxxx  ACK or NACK enabled
    */
    uint16  dpdch_enable_acknack_enable;
    /* xxxxxxxx--------  CQI enabled
       --------xxxxxxxx  UL modulation
    */
    uint16  cqi_enable_ul_modulation;
    /* xxxxxxxx--------  EDPDCH number
       --------xxxxxxxx  EDPDCH_TTI
    */
    uint16  num_edpdch_edpdch_tti;
    /* xxxxxxxx--------  Beta c
       --------xxxxxxxx  Beta d
    */
    uint16  beta_c_beta_d;
    /* Gain factor for HS-DPCCH.
       Actual value is beta_hs/225
        beta hs for both Ack/Nack and CQI defined in the same parameter
    */
    uint16  beta_hs;
    /* Gain factor for E-DPCCH.
       Actual value is beta_ec/225.
    */
    uint16  beta_ec;
    /* Gain factor for E-DPDCH1.
       Actual value is beta_ed1/225. 
    */
    uint16  beta_ed1;
    /* Gain factor for E-DPDCH2.
       Actual value is beta_ed2/225. 
    */
    uint16  beta_ed2;
    /* Gain factor for E-DPDCH3.
       Actual value is beta_ed3/225. 
    */
    uint16  beta_ed3;
    /* Gain factor for E-DPDCH4.
       Actual value is beta_ed4/225.
    */
    uint16  beta_ed4;
    uint32  scrambling_code;
    uint16  dpdch_sf;     /* Used spreading factor for DPDCH */
    /* Used spreading factor for E-DPDCH
       When the number of E-DPDCH channels is 2, then the allowed E-DPDCH
       spreading factors are only 2 and 4.
       When the number of E-DPDCH channels is 4, then the allowed E-DPDCH
       spreading factor is 2.
    */
    uint16  edpdch_sf;
    /* xxxxxxxx--------  HSDPA activation delay
       --------xxxxxxxx  Filler
    */
    uint16  hsdpa_delay_fill3;
    uint16  fill4;
    } C_HAL_SB_WCDMA_TX_CONTROL_STR;

#define SIZE_C_HAL_SB_WCDMA_TX_CONTROL_STR   \
        sizeof(C_HAL_SB_WCDMA_TX_CONTROL_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 139) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_RF_INFORM - Valid from version 000.105               */
/* ----------------------------------------------------------------------- */
/* Sub Block for RF INFO INDICATION */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Values from the constant table C_RF_INFORM_VALUE */
    uint32  rf_inform_value;
    } C_HAL_SB_RF_INFORM_STR;

#define SIZE_C_HAL_SB_RF_INFORM_STR   sizeof(C_HAL_SB_RF_INFORM_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RF_API_VALUES_WRITE_REQ - Valid from version 000.138 */
/* ----------------------------------------------------------------------- */
/* This message is used to write data inside 3rd party or licensee engine. ID
   defines the logical group of data, which can be tuning data, product
   settings etc. During R&D the translation between textual handles and ID's
   are defined using an XML file. OFFSET is usually 0 but can be used to
   index individual values inside a logical chunk of data.Please note that
   this OFFSET part is invalid for licensee.
   DATA LENGTH is the length of data in 16bit words. 
   DATA is the array of data. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Logical data identifyer. Values are specified in modem specific XML
       file
       Values from the constant table C_TEST_RFIC_ID
    */
    uint16  rfic_id;
    /* Offset, usually 0 otherwise indexes individual elements. */
    uint16  offset;
    uint16  data_length;  /* Nr of data words. */
    /* Array of data words, Data[0..L] */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RF_API_VALUES_WRITE_REQ_STR;

#define SIZE_C_TEST_SB_RF_API_VALUES_WRITE_REQ_STR   (5*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RF_API_VALUES_WRITE_RESP - Valid from version 000.138 */
/* ----------------------------------------------------------------------- */
/* This message returns the results of write request. In case the access was
   not successful, reason for failure is returned in C_TEST_RFIC_STATUS. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Status
       --------xxxxxxxx  Filler
    */
    uint16  status_fill1;
    } C_TEST_SB_RF_API_VALUES_WRITE_RESP_STR;

#define SIZE_C_TEST_SB_RF_API_VALUES_WRITE_RESP_STR   (3*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RF_API_VALUES_READ_REQ - Valid from version 000.138 */
/* ----------------------------------------------------------------------- */
/* This message is used to read data inside 3rd party or licensee engine. ID
   defines the logical group of data, which can be tuning data, temperature,
   product settings etc. During R&D the translation between textual handles
   and ID's are defined using an XML file. OFFSET is usually 0 but can be
   used to index individual values inside a logical chunk of data.Please note
   that this OFFSET part is invalid for licensee.
   DATA LENGTH is length of data in 16bit words.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Logical data identifyer. Values are specified in modem specific XML
       file
       Values from the constant table C_TEST_RFIC_ID
    */
    uint16  rfic_id;
    /* Offset, usually 0 otherwise indexes individual elements. */
    uint16  offset;
    uint16  data_length;  /* Nr of 16bit data words. */
    } C_TEST_SB_RF_API_VALUES_READ_REQ_STR;

#define SIZE_C_TEST_SB_RF_API_VALUES_READ_REQ_STR   (5*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RF_API_VALUES_READ_RESP - Valid from version 000.138 */
/* ----------------------------------------------------------------------- */
/* This message returns the results of read RF-IC.In case the access was not
   successful, the constant C_TEST_FAILED is returned. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Status
       --------xxxxxxxx  Filler
    */
    uint16  status_fill1;
    /* Logical data identifyer. Values are specified in modem specific XML
       file
       Values from the constant table C_TEST_RFIC_ID
    */
    uint16  rfic_id;
    /* Offset, usually 0 otherwise indexes individual elements. */
    uint16  offset;
    uint16  data_length;  /* Nr of read data words */
    /* Array of data words, Data[0..L] */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RF_API_VALUES_READ_RESP_STR;

#define SIZE_C_TEST_SB_RF_API_VALUES_READ_RESP_STR   (6*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_GSM_RXTX_CONTROL - Valid from version 000.118        */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting GSM Rx and/or Tx control. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  gsm_band_info; /* Values from the bitmask table INFO_GSM_BAND */
    uint16  rf_channel;   /* Channel number for both Rx and Tx. */
    /* xxxxxxxx--------  Rx slots
       --------xxxxxxxx  Tx slots
    */
    uint16  rx_slot_mask_tx_slot_mask;
    /* xxxxxxxx--------  8PSK slots
       --------xxxxxxxx  Mon or RACH slots
    */
    uint16  tx_8psk_mask_mon_rach_mask;
    /* xxxxxxxx--------  Tx data type
       --------xxxxxxxx  AFC selection
    */
    uint16  data_type_afc_type;
    uint32  manualAfc;
    uint16  tx_timing_advance;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Tx power level unit
    */
    uint16  agc_mode_tx_power_unit;
    /* List of 8 values - one for each slot. First one is for slot 0, last
       one is for slot 7. Interpretation of these values depends on the type
       of operation in each slot as well as the Rx AGC mode and Tx power
       level unit selections. For continuous Rx or Tx mode, only the value
       for slot 0 is used.
       - For Rx operations the values are expected input signal levels in dBm
         (Q8 format) if the Rx AGC mode is manual. For automatic AGC the
         values have no effect.
       - For Tx operations the values are either power level numbers (0-19)
         if the Tx power level unit is PCL, or power levels in dBm (Q8
         format) if the Tx power level unit is dBm.
    */
    int16   slot_level[8];
    } C_HAL_SB_GSM_RXTX_CONTROL_STR;

#define SIZE_C_HAL_SB_GSM_RXTX_CONTROL_STR   \
        sizeof(C_HAL_SB_GSM_RXTX_CONTROL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_SB_COMPENSATION_MODE_SET - Valid from version 000.118   */
/* ----------------------------------------------------------------------- */
/* Sub Block for setting compensation mode. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* Identifies compensation to be set. If ID = C_HAL_ALL_COMPENSATIONS,
       then setting will be applied to all compensations.
    */
    uint16  comp_id;
    /* Specifies whether compensation should be enabled or disabled.
       Values from the constant table C_HAL_COMPENSATION_SETTING
    */
    uint16  comp_setting;
    } C_HAL_SB_COMPENSATION_MODE_SET_STR;

#define SIZE_C_HAL_SB_COMPENSATION_MODE_SET_STR   \
        sizeof(C_HAL_SB_COMPENSATION_MODE_SET_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_RF_SB_TUNING_VALUES_SET_REQ - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Sub-block for storing tuning data. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  tuning_id;    /* Identifies tuning data */
    uint16  nbr_of_words;
    /* Data corresponding to specified tuning data ID */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_SB_TUNING_VALUES_SET_REQ_STR;

#define SIZE_C_HAL_RF_SB_TUNING_VALUES_SET_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_RF_SB_TUNING_VALUES_SET_RESP - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Sub-block for returning status of tuning data storing. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  tuning_id;    /* Identifies tuning data */
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status
    */
    uint16  fill1_status;
    } C_HAL_RF_SB_TUNING_VALUES_SET_RESP_STR;

#define SIZE_C_HAL_RF_SB_TUNING_VALUES_SET_RESP_STR   \
        sizeof(C_HAL_RF_SB_TUNING_VALUES_SET_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_RF_SB_TUNING_VALUES_GET_REQ - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Sub-block for retrieving tuning data. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  tuning_id;    /* Identifies tuning data */
    uint16  fill1;
    } C_HAL_RF_SB_TUNING_VALUES_GET_REQ_STR;

#define SIZE_C_HAL_RF_SB_TUNING_VALUES_GET_REQ_STR   \
        sizeof(C_HAL_RF_SB_TUNING_VALUES_GET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_HAL_RF_SB_TUNING_VALUES_GET_RESP - Valid from version 000.116 */
/* ----------------------------------------------------------------------- */
/* Sub-block for returning tuning data. */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  tuning_id;    /* Identifies tuning data */
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status
    */
    uint16  fill1_status;
    uint16  fill2;
    uint16  nbr_of_words;
    /* Data corresponding to specified tuning data ID */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_SB_TUNING_VALUES_GET_RESP_STR;

#define SIZE_C_HAL_RF_SB_TUNING_VALUES_GET_RESP_STR   (6*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_HSPA_MAX_PWR_RED_VALUES - Valid from version 000.100 */
/* ----------------------------------------------------------------------- */
/* Sub-block for configuring WCDMA HSPA max power reduction values. Used to
   define additional Tx power reduction in HSPA transmission. Note that this
   defines reduction value, 1 dB reduction means that Tx power is decreased
   by 1 dB.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Sub Block status
    */
    uint16  fill2_sb_status;
    uint32  band;         /* Values from the bitmask table INFO_WCDMA_BAND */
    int16   hsdpa_max_pwr_red; /* HSDPA max power reduction value */
    /* HSUPA QPSK max power reduction value */
    int16   hsupa_qpsk_max_pwr_red;
    } C_TEST_SB_HSPA_MAX_PWR_RED_VALUES_STR;

#define SIZE_C_TEST_SB_HSPA_MAX_PWR_RED_VALUES_STR   \
        sizeof(C_TEST_SB_HSPA_MAX_PWR_RED_VALUES_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_LINKO2_FREQ_RESP_CAL_RESULTS - Valid from version 000.115 */
/* ----------------------------------------------------------------------- */
/* Sub block for returning calculated Frequency response calibration values
   for both Tx and Internal power Meter. In addition equation parameters are
   returned: Power at dBm = (1/Slope) * (x - Coeff_b) + Coeff_c, where x is
   the power value that is got from internal power meter 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    int16   slope;
    int16   coeff_b;
    int16   coeff_c;
    uint16  nbr_of_data;
    C_TEST_FREQ_RESP_DATA_STR freq_resp_data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_LINKO2_FREQ_RESP_CAL_RESULTS_STR;

#define SIZE_C_TEST_SB_LINKO2_FREQ_RESP_CAL_RESULTS_STR   (\
        5*sizeof(uint16) + sizeof(uint32) + 3*sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RSSI_TUNING - Valid from version 000.129            */
/* ----------------------------------------------------------------------- */
/* Sub Block for RSSI tuning  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    /* Type of info requested.
       Values from the constant table C_HAL_TEST_INFO_TYPE
    */
    uint16  info_type;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  rx_mid_channel;
    uint16  rx_low_channel;
    uint16  rx_high_channel;
    /* 16-bit value, where bit n = 1 if there should be an Rx operation in
       slot n. E.g. a value of 0x11 puts Rx operations in slots 0 and 1.
       Setting 8 lower bits to 1 enables continuous Rx mode in case of GSM
       system.
    */
    uint16  rx_slot_mask;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint16  fill2;
    uint32  manualAfc;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Filler
    */
    uint16  agc_mode_fill3;
    int16   rx_level;
    } C_TEST_SB_RSSI_TUNING_STR;

#define SIZE_C_TEST_SB_RSSI_TUNING_STR   sizeof(C_TEST_SB_RSSI_TUNING_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RSSI_TUNING - Versions 000.127 - 000.129            */
/* ----------------------------------------------------------------------- */
/* Sub Block for RSSI tuning  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    /* Type of info requested.
       Values from the constant table C_HAL_TEST_INFO_TYPE
    */
    uint16  info_type;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  rx_channel;
    /* 16-bit value, where bit n = 1 if there should be an Rx operation in
       slot n. E.g. a value of 0x11 puts Rx operations in slots 0 and 1.
       Setting 8 lower bits to 1 enables continuous Rx mode in case of GSM
       system.
    */
    uint16  rx_slot_mask;
    /* xxxxxxxx--------  AFC table selection
       --------xxxxxxxx  Filler
    */
    uint16  afc_table_fill1;
    uint16  fill2;
    uint32  manualAfc;
    /* xxxxxxxx--------  Rx AGC mode selection
       --------xxxxxxxx  Filler
    */
    uint16  agc_mode_fill3;
    int16   rx_level;
    } C_TEST_SB_RSSI_TUNING_STR;

#define SIZE_C_TEST_SB_RSSI_TUNING_STR   sizeof(C_TEST_SB_RSSI_TUNING_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RSSI_TUNING_RESULT - Valid from version 000.129     */
/* ----------------------------------------------------------------------- */
/* Sub Block for RSSI tuning result  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int16   gain_offset_mid; /* Mid Channel Gain offset from default, dB */
    int16   gain_offset_low; /* Low Channel Gain offset from default, dB */
    int16   gain_offset_high; /* High Channel Gain offset from default, dB */
    int16   rssi_mid;     /* Mid Channel RSSI, dBm */
    int16   rssi_low;     /* Low Channel RSSI, dBm */
    int16   rssi_high;    /* High Channel RSSI, dBm */
    } C_TEST_SB_RSSI_TUNING_RESULT_STR;

#define SIZE_C_TEST_SB_RSSI_TUNING_RESULT_STR   \
        sizeof(C_TEST_SB_RSSI_TUNING_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RSSI_TUNING_RESULT - Versions 000.127 - 000.129     */
/* ----------------------------------------------------------------------- */
/* Sub Block for RSSI tuning result  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    int16   gain_offset;  /* Gain offset from default, dB */
    int16   rssi;         /* RSSI Measured, dBm */
    } C_TEST_SB_RSSI_TUNING_RESULT_STR;

#define SIZE_C_TEST_SB_RSSI_TUNING_RESULT_STR   \
        sizeof(C_TEST_SB_RSSI_TUNING_RESULT_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 127) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 129) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_READ_RX_IQ_SAMPLES - Versions 000.132 - 000.144     */
/* ----------------------------------------------------------------------- */
/* Sub block for reading Rx IQ samples.  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 132) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 144) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* System information
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  RF HW path
    */
    uint16  fill1_rx_path;
    } C_TEST_SB_READ_RX_IQ_SAMPLES_STR;

#define SIZE_C_TEST_SB_READ_RX_IQ_SAMPLES_STR   \
        sizeof(C_TEST_SB_READ_RX_IQ_SAMPLES_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 132) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 144) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_READ_RX_IQ_SAMPLES - Valid from version 000.144     */
/* ----------------------------------------------------------------------- */
/* Sub block for reading Rx IQ samples.  */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 144) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* System information
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* xxxxxxxx--------  Collect new samples
       --------xxxxxxxx  RF HW path
    */
    uint16  is_new_samples_rx_path;
    } C_TEST_SB_READ_RX_IQ_SAMPLES_STR;

#define SIZE_C_TEST_SB_READ_RX_IQ_SAMPLES_STR   \
        sizeof(C_TEST_SB_READ_RX_IQ_SAMPLES_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 144) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_RECEIVED_RX_IQ_SAMPLES - Valid from version 000.132 */
/* ----------------------------------------------------------------------- */
/* Sub block for returning received Rx IQ samples.  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    /* System information
       Values from the bitmask table SYSTEM
    */
    uint16  system_info;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  RF HW path
    */
    uint16  fill2_rx_path;
    uint16  sample_freq;  /* Sampling frequency, kHz */
    uint16  rx_gain;      /* Receiver gain index */
    uint16  reserved1;    /* Recerved for later use */
    uint16  reserved2;    /* Recerved for later use */
    uint16  nbr_of_data;
    C_TEST_IQ_PAIR_DATA_STR rx_iq_data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_RECEIVED_RX_IQ_SAMPLES_STR;

#define SIZE_C_TEST_SB_RECEIVED_RX_IQ_SAMPLES_STR   (10*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SINGLE_BER_SYNC - Versions 000.148 - 000.151    */
/* ----------------------------------------------------------------------- */
/* Sub-block to get the synchronisation with the tester and DUT before the
   SBER measurement 
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* (TCH and BCCH are on the same band)
       Values from the bitmask table INFO_GSM_BAND
    */
    uint32  rf_band;
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  arfcn_bcch;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of generated data
    */
    uint16  fill1_data_type;
    uint16  arfcn_tch;    /* For other tools, BCCH freq = TCH freq */
    /* Frame number provided by the PC application to indicatethe end of the
       synchronization period of the tester. Measurements start next frame if
       the RF HAL sequencer has send the BER measurement command to L1.
    */
    uint16  FN_end_of_sync;
    /* xxxxxxxx--------  Channel Type
       --------xxxxxxxx  Codec
    */
    uint16  chan_type_codec;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Time slot pattern
    */
    uint16  fill2_time_slot_pat;
    uint16  coded_mode;   /* TRUE: coded mode, FALSE: uncoded mode */
    } C_TEST_SB_GSM_SINGLE_BER_SYNC_STR;

#define SIZE_C_TEST_SB_GSM_SINGLE_BER_SYNC_STR   \
        sizeof(C_TEST_SB_GSM_SINGLE_BER_SYNC_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SINGLE_BER_SYNC - Versions 000.151 - 000.152    */
/* ----------------------------------------------------------------------- */
/* Sub-block to get the synchronisation with the tester and DUT before the
   SBER measurement 
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 152) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* (TCH and BCCH are on the same band)
       Values from the bitmask table INFO_GSM_BAND
    */
    uint32  rf_band;
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  arfcn_bcch;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of generated data
    */
    uint16  fill1_data_type;
    uint16  arfcn_tch;    /* For other tools, BCCH freq = TCH freq */
    /* Frame number provided by the PC application to indicatethe end of the
       synchronization period of the tester. Measurements start next frame if
       the RF HAL sequencer has send the BER measurement command to L1.
    */
    uint16  FN_end_of_sync;
    /* xxxxxxxx--------  Channel Type
       --------xxxxxxxx  Codec
    */
    uint16  chan_type_codec;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Time slot pattern
    */
    uint16  fill2_time_slot_pat;
    uint16  coded_mode;   /* TRUE: coded mode, FALSE: uncoded mode */
    /* Initial RX level for TCH channel
       For automatic AGC the values have no effect.
    */
    RX_LEVEL_STR init_rx_level;
    uint16  fill3;
    } C_TEST_SB_GSM_SINGLE_BER_SYNC_STR;

#define SIZE_C_TEST_SB_GSM_SINGLE_BER_SYNC_STR   \
        sizeof(C_TEST_SB_GSM_SINGLE_BER_SYNC_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 152) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SINGLE_BER_SYNC - Valid from version 000.152    */
/* ----------------------------------------------------------------------- */
/* Sub-block to get the synchronisation with the tester and DUT before the
   SBER measurement 
*/

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 152) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* (TCH and BCCH are on the same band)
       Values from the bitmask table INFO_GSM_BAND
    */
    uint32  rf_band;
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  arfcn_bcch;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of generated data
    */
    uint16  fill1_data_type;
    uint16  arfcn_tch;
    /* Frame number provided by the PC application to indicatethe end of the
       synchronization period of the tester. Measurements start next frame if
       the RF HAL sequencer has send the BER measurement command to L1.
    */
    uint16  FN_end_of_sync;
    /* xxxxxxxx--------  Channel Type
       --------xxxxxxxx  Codec
    */
    uint16  chan_type_codec;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Time slot pattern
    */
    uint16  fill2_time_slot_pat;
    uint16  coded_mode;   /* TRUE: coded mode, FALSE: uncoded mode */
    /* Initial RX level for TCH channel
       For automatic AGC the values have no effect.
    */
    RX_LEVEL_STR init_rx_level;
    uint16  fill3;
    } C_TEST_SB_GSM_SINGLE_BER_SYNC_STR;

#define SIZE_C_TEST_SB_GSM_SINGLE_BER_SYNC_STR   \
        sizeof(C_TEST_SB_GSM_SINGLE_BER_SYNC_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 152) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_CAL_SYNC - Valid from version 000.148           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  arfcn;        /* for BCCH channel */
    /* Default value: 25
       Value expected at the end of the synchronization.
        Unit: Frame number
       
       
       Agilent 8960 : if N sync frames needed, then T1 goes from  N-1 to 0.
       R&S CMU 200 and CMW 500 : if N sync frames needed, then T1 goes from 1
       to N.
    */
    uint16  T1_counter;
    uint16  fill1;
    } C_TEST_SB_GSM_CAL_SYNC_STR;

#define SIZE_C_TEST_SB_GSM_CAL_SYNC_STR   sizeof(C_TEST_SB_GSM_CAL_SYNC_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SINGLE_BER_SYNC - Versions 000.148 - 000.153  */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 153) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  dl_uarfcn;
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Channelization code
    */
    uint16  fill1_2_channelization_code;
    uint32  ul_scrambling_code; /*  Value range <= 2^24 */
    uint16  pri_scrambling_code; /* Used for the 3GPP synchronization */
    /* Frame number of end of synchronization phase provided by the Control
       Unit 
    */
    uint16  frame_no;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of generated data
    */
    uint16  fill2_rx_data_type;
    int16   tx_pwr_level;
    } C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR;

#define SIZE_C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR   \
        sizeof(C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 153) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SINGLE_BER_SYNC - Valid from version 000.153  */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 153) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  dl_uarfcn;
    /* Values from the constant table C_TEST_TESTER_TOOL */
    uint16  tester_tool;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Channelization code
    */
    uint16  fill1_2_channelization_code;
    uint32  ul_scrambling_code; /*  Value range <= 2^24 */
    uint16  pri_scrambling_code; /* Used for the 3GPP synchronization */
    /* Frame number of end of synchronization phase provided by the Control
       Unit 
    */
    uint16  frame_no;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of generated data
    */
    uint16  fill2_rx_data_type;
    int16   tx_pwr_level;
    uint16  fill3;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  RF RX path (main, diversity)
    */
    uint16  fill3_2_rf_rx_path;
    } C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR;

#define SIZE_C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR   \
        sizeof(C_TEST_SB_WCDMA_SINGLE_BER_SYNC_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 153) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SINGLE_BER - Valid from version 000.148         */
/* ----------------------------------------------------------------------- */
/* This sub-bloc describes a GSM frame configuration  */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Rx slot pattern
       --------xxxxxxxx  Tx slot pattern
    */
    uint16  rx_slot_pattern_tx_slot_pattern;
    /* xxxxxxxx--------  8PSK slots
       --------xxxxxxxx  Channel Type
    */
    uint16  psk_slots_channel_type;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  codec
    */
    uint16  fill2_codec;
    uint16  ARFCN_val;    /* for BCCH  channels. */
    /* Coded mode can be used in TCH and PDTCH modes
       Uncoded mode is used only in TCH mode
       TRUE: coded mode, FALSE: uncoded mode. 
    */
    uint16  coded_mode;
    uint16  num_of_tested_bits; /* Uncoded mode */
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Type of transmitted data (Tx)
    */
    uint16  fill3_transmit_data_type;
    uint16  num_of_freq;  /* Default = 1 */
    uint16  fill4;
    GSM_SBER_INFO_PER_FREQ_STR array_of_freq_info[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_GSM_SINGLE_BER_STR;

#define SIZE_C_TEST_SB_GSM_SINGLE_BER_STR   (12*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SINGLE_BER - Valid from version 000.148       */
/* ----------------------------------------------------------------------- */
/* This sub-block describe a WCDMA frame configuration. Uplink contain PRBS
   data 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  no_bits_to_be_tested; /* Multiple of 244 bits */
    uint16  num_of_freq;
    WCDMA_SBER_INFO_PER_FREQ_STR array_of_freq_info[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_WCDMA_SINGLE_BER_STR;

#define SIZE_C_TEST_SB_WCDMA_SINGLE_BER_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_CAL - Valid from version 000.148                */
/* ----------------------------------------------------------------------- */
/* This sub-block describes a GSM frame configuration repeated according to
   the repetition counter. 
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_GSM_BAND */
    uint16  rf_channel;
    /* xxxxxxxx--------  Rx slot pattern
       --------xxxxxxxx  Tx slot pattern
    */
    uint16  rx_slot_pattern_tx_slot_pattern;
    /* xxxxxxxx--------  8PSK slots
       --------xxxxxxxx  Enable Internal power measurement
    */
    uint16  psk_slots_internal_power_enable;
    /* xxxxxxxx--------  Type of transmitted data (Tx)
       --------xxxxxxxx  Rx AGC mode selection
    */
    uint16  transmit_data_type_rx_agc_mode;
    /* List of 8 values - one for each slot. First one is for slot 0, last
       one is for slot 7.
       For automatic AGC the values have no effect.
       Unit for Rx: [dBm], Q8 encoded format
       Unit for Tx: [PCL]
    */
    TX_OR_RX_LEVEL_STR tx_or_rx_level[8];
    /* The number of this frame configuration must be executed */
    uint16  repetition_counter;
    uint16  fill1;
    } C_TEST_SB_GSM_CAL_STR;

#define SIZE_C_TEST_SB_GSM_CAL_STR   sizeof(C_TEST_SB_GSM_CAL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_CAL - Valid from version 000.148              */
/* ----------------------------------------------------------------------- */
/* This sub-block describes n frames. The first slot begins at initial
   powerand next slots power is increased/decreased according to a
   pre-defined pattern once minimumor maximum power is reached or no more
   frames to transmit
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  dl_uarfcn;    /* The uplink channel is the duplex channel */
    int16   tx_initial_power;
    /* xxxxxxxx--------  TPC pattern
       --------xxxxxxxx  Number of frames to transmit
    */
    uint16  tpc_pattern_num_of_frame;
    /* xxxxxxxx--------  CW mode
       --------xxxxxxxx  Enable internal power meter measurement
    */
    uint16  cw_mode_enable_int_power_meas;
    uint16  tx_power_level[15];
    uint16  fill1;
    } C_TEST_SB_WCDMA_CAL_STR;

#define SIZE_C_TEST_SB_WCDMA_CAL_STR   sizeof(C_TEST_SB_WCDMA_CAL_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_SINGLE_BER_RESULTS - Valid from version 000.148 */
/* ----------------------------------------------------------------------- */
/* GSM Single BER results */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    /* Num results = Num freq requested in the corresponding request
       sub-block.Num results = 0 if an error occurred during measurement or
       if a Stop command is received.
    */
    uint16  num_of_res;
    GSM_BER_RES_INFO_STR array_of_results[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_GSM_SINGLE_BER_RESULTS_STR;

#define SIZE_C_TEST_SB_GSM_SINGLE_BER_RESULTS_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_SINGLE_BER_RESULTS - Valid from version 000.148 */
/* ----------------------------------------------------------------------- */
/* WCDMA Single BER results */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    /* Num results = Num freq requested in the corresponding request
       sub-block.Num results = 0 if an error occurred during measurement or
       if a Stop command is received.
    */
    uint16  num_of_result;
    WCDMA_SBER_RES_INFO_STR array_of_results[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_SB_WCDMA_SINGLE_BER_RESULTS_STR;

#define SIZE_C_TEST_SB_WCDMA_SINGLE_BER_RESULTS_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_GSM_CAL_RESULTS - Valid from version 000.148        */
/* ----------------------------------------------------------------------- */
/*  This sub-block describes a GSM frame configuration repeated according to
   the repetition counter.
*/

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_2_status;
    /* Average RSSI per slots (according to the repetition counter) */
    RX_LEVEL_STR rx_power_levels[8];
    /* Average DAC value per slots (according to the repetition counter) */
    INT_PWR_MEAS_STR int_power_meas[8];
    } C_TEST_SB_GSM_CAL_RESULTS_STR;

#define SIZE_C_TEST_SB_GSM_CAL_RESULTS_STR   \
        sizeof(C_TEST_SB_GSM_CAL_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Subblock: C_TEST_SB_WCDMA_CAL_RESULTS - Valid from version 000.148      */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint16  sb_id;
    uint16  sb_len;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    int16   rx_pwr_level; /* Average RSSI during measurements */
    INT_PWR_MEAS_STR int_power_meas[15];
    uint16  fill2;
    } C_TEST_SB_WCDMA_CAL_RESULTS_STR;

#define SIZE_C_TEST_SB_WCDMA_CAL_RESULTS_STR   \
        sizeof(C_TEST_SB_WCDMA_CAL_RESULTS_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_PA_INFO_REQ - Valid from version 000.002                */
/* ----------------------------------------------------------------------- */
/* This message is used to get information of PA's in phone. It is also used
   to ask DSP to save PA type to Permanent Memory if needed, usually this
   happens in production or in case PA has been changed. PA information tells
   the vendor of GSM/WCDMA PA's in ASCII format and version of PA if PA
   supports that. It is also possible to get PA Bias parameters used in PA
   Bias tuning in production.
   In production this message must be sent first before any RF tunings with
   parameter Save/Update PA type to PM = TRUE. This way it is ensured that
   correct PA parameters are used in RF tunings and PA type is saved to PM.
   Only PA type(s) is(are) saved by DSP not the information of Sub Blocks
   asked. PA type is saved to PM in order to avoid making the HW detection
   procedure every time phone is booted.
   PA type detection is made by HW and it is not recommended to make PA type
   saving in extreme conditions, i.e. in high/low temperature. It should be
   done only in room temperature to avoid the risk of saving the wrong
   detection results to PM. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Save or Update PA type to Permanent Memory
    */
    uint16  update_pa_type_to_pm;
    uint16  num_sb_id;
    /* ID's of Sub Blocks, Note only id is needed
       Subblock ID's:
       C_TEST_SB_PA_BIAS_INFO
       C_TEST_SB_PA_INFO
    */
    } C_TEST_PA_INFO_REQ_STR;

#define SIZE_C_TEST_PA_INFO_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_PA_INFO_RESP - Valid from version 000.001               */
/* ----------------------------------------------------------------------- */
/* This message returns PA information sub block(s) based on ID's in request
   message. Status field tells the status of PA type saving.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of PA type saving to PM
    */
    uint16  status;
    uint16  num_sb_id;
    /* Subblock list:
       C_TEST_SB_PA_BIAS_INFO
       C_TEST_SB_PA_INFO
    */
    } C_TEST_PA_INFO_RESP_STR;

#define SIZE_C_TEST_PA_INFO_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_IQ_SELF_TUNING_REQ - Valid from version 000.003         */
/* ----------------------------------------------------------------------- */
/* This message is used to activate Amplitude, Phase and DC Offset self
   tuning for GSM or WCDMA. At the moment WCDMA supports only DC Offset
   tuning. There is one sub block to setup GSM tuning and one for WCDMA. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Values from the bitmask table C_TEST_TX_IQ_TUNING_MODE */
    uint16  tx_iq_mode;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Number of sub blocks
    */
    uint16  sub_block_count;
    /* Subblock list:
       C_TEST_SB_GSM_TX_IQ_SETUP
       C_TEST_SB_WCDMA_LO_LEAK_SETUP
    */
    uint16  sub_blocks[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_IQ_SELF_TUNING_REQ_STR;

#define SIZE_C_TEST_IQ_SELF_TUNING_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_IQ_SELF_TUNING_RESP - Valid from version 000.002        */
/* ----------------------------------------------------------------------- */
/* This message returns results of IQ self tuning in sub block(s). DSP
   returns C_TEST_NOT_SUPPORTED in RESULT Sub Blocks in case the result is
   not available. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Number of sub blocks
    */
    uint16  sub_block_count;
    /* Subblock list:
       C_TEST_SB_AMPLITUDE_RESULT
       C_TEST_SB_DC_OFFSET_RESULT
       C_TEST_SB_PHASE_RESULT
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_IQ_SELF_TUNING_RESP_STR;

#define SIZE_C_TEST_IQ_SELF_TUNING_RESP_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_MEASUREMENT_REQ - Valid from version 000.011            */
/* ----------------------------------------------------------------------- */
/* ADC-measurements can be made with this message. Supported measurements may
   vary depending on engine generation. If measurement is not supported
   C_TEST_NOT_SUPPORTED status is returned in response message. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Measurement type
    */
    uint16  meas_type;
    } C_TEST_MEASUREMENT_REQ_STR;

#define SIZE_C_TEST_MEASUREMENT_REQ_STR   sizeof(C_TEST_MEASUREMENT_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_MEASUREMENT_RESP - Valid from version 000.011           */
/* ----------------------------------------------------------------------- */
/* Measurement result is returned in response message. Status field informs
   the status of read operation. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Test status
    */
    uint16  meas_status;
    /* Measurement result.Eg. temperature in degree celsius  */
    uint16  adc_value;
    } C_TEST_MEASUREMENT_RESP_STR;

#define SIZE_C_TEST_MEASUREMENT_RESP_STR   \
        sizeof(C_TEST_MEASUREMENT_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_RFIC_READ_REQ - Valid from version 000.013              */
/* ----------------------------------------------------------------------- */
/* This message is used to read the content of RF-IC registers. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Access Mode
       --------xxxxxxxx  Increment Mode
    */
    uint16  accs_incr;
    uint16  address_msw; /* Indirect access, RAM-block's internal address. */
    /* Register address or RAM-access-register address, fex.ENCTTRAMADDR. */
    uint16  address_lsw;
    uint16  data_length;  /* Nr of data words. */
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Filler
    */
    uint16  fill1_fill1;
    } C_TEST_RFIC_READ_REQ_STR;

#define SIZE_C_TEST_RFIC_READ_REQ_STR   sizeof(C_TEST_RFIC_READ_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_RFIC_READ_RESP - Valid from version 000.013             */
/* ----------------------------------------------------------------------- */
/* This message returns the results of read RF-IC. In case the access was not
   successful, the constant C_TEST_FAILED is returned. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Access Mode
       --------xxxxxxxx  Status
    */
    uint16  mode_status;
    uint16  data_length;  /* Nr of read data words */
    /* Array of data words, Data[0..L] */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_RFIC_READ_RESP_STR;

#define SIZE_C_TEST_RFIC_READ_RESP_STR   (3*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_RFIC_WRITE_REQ - Valid from version 000.013             */
/* ----------------------------------------------------------------------- */
/* This message is used to write the content of RF-IC registers. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Access Mode
       --------xxxxxxxx  Increment Mode
    */
    uint16  accs_incr;
    uint16  address_msw; /* Indirect access, RAM-block's internal address. */
    /* Register address or RAM-access-register address, fex.ENCTTRAMADDR. */
    uint16  address_lsw;
    uint16  data_length;  /* Nr of data words. */
    /* Array of data words, Data[0..L] */
    uint16  data[COMMON_DSP_TEST_ANY_SIZE];
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Filler
    */
    uint16  fill2_fill1;
    } C_TEST_RFIC_WRITE_REQ_STR;

#define SIZE_C_TEST_RFIC_WRITE_REQ_STR   (6*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_RFIC_WRITE_RESP - Valid from version 000.013            */
/* ----------------------------------------------------------------------- */
/* This message returns C_TEST_OK in case the write was successful. In case
   it was not successful, the constant C_TEST_FAILED is returned. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Access Mode
       --------xxxxxxxx  Status
    */
    uint16  mode_status;
    } C_TEST_RFIC_WRITE_RESP_STR;

#define SIZE_C_TEST_RFIC_WRITE_RESP_STR   sizeof(C_TEST_RFIC_WRITE_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_CDSP_INFO_QUERY_REQ - Valid from version 000.014        */
/* ----------------------------------------------------------------------- */
/* This message is used to query different info data from CDSP */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    uint32  target;    /* Values from the bitmask table C_TEST_INFO_TARGET */
    } C_TEST_CDSP_INFO_QUERY_REQ_STR;

#define SIZE_C_TEST_CDSP_INFO_QUERY_REQ_STR   \
        sizeof(C_TEST_CDSP_INFO_QUERY_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_CDSP_INFO_QUERY_RESP - Valid from version 000.014       */
/* ----------------------------------------------------------------------- */
/* This message returns sub blocks which contains requested info data.
   Combination of sub blocks depends on parameters in the request message. If
   desired information is not available status is C_TEST_FAIL and sub block
   is not included.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Info status
    */
    uint16  info_status;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Number of sub blocks
    */
    uint16  sub_block_count;
    /* Subblock list:
       C_TEST_SB_GSM_BAND_RECORD_INFO
       C_TEST_SB_GSM_COMM_RECORD_INFO
       C_TEST_SB_GSM_FEATURE_INFO
       C_TEST_SB_RITSA_COMMON_RECORD_INFO
       C_TEST_SB_WCDMA_BAND_RECORD_INFO
       C_TEST_SB_WCDMA_BAND_RECORD_INFO_II
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_CDSP_INFO_QUERY_RESP_STR;

#define SIZE_C_TEST_CDSP_INFO_QUERY_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ACTIVE_BAND_SET_REQ - Valid from version 000.018        */
/* ----------------------------------------------------------------------- */
/* Active Band can be defined with this message. By sending this message DSP
   sets its Band variables. Supported bands may vary depending on engine
   generation. With C_TEST_SB_WCDMA_SUPPORTED_BANDS Sub Block it is possible
   to set all bands that are supported by HW. This is intented to be used in
   production for setting the bands that will be aligned. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  num_sb_id;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_GSM_SYSTEM_BANDS
       C_TEST_SB_WCDMA_SYSTEM_BANDS_II
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_ACTIVE_BAND_SET_REQ_STR;

#define SIZE_C_TEST_ACTIVE_BAND_SET_REQ_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ACTIVE_BAND_SET_RESP - Valid from version 000.018       */
/* ----------------------------------------------------------------------- */
/* Tells the status of Active Band set operation.  */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Active Band set status
    */
    uint16  status;
    } C_TEST_ACTIVE_BAND_SET_RESP_STR;

#define SIZE_C_TEST_ACTIVE_BAND_SET_RESP_STR   \
        sizeof(C_TEST_ACTIVE_BAND_SET_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ACTIVE_BAND_GET_REQ - Valid from version 000.018        */
/* ----------------------------------------------------------------------- */
/* Active Band or bands can be read with this message. Message is used for
   asking DSP current state of Band variables.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    } C_TEST_ACTIVE_BAND_GET_REQ_STR;

#define SIZE_C_TEST_ACTIVE_BAND_GET_REQ_STR   \
        sizeof(C_TEST_ACTIVE_BAND_GET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ACTIVE_BAND_GET_RESP - Valid from version 000.018       */
/* ----------------------------------------------------------------------- */
/* Tells the Active Band or bands phone is currently operating or if the
   state of band variables is uninitialized.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Active Band get status
    */
    uint16  status;
    uint16  fill2;
    uint16  num_sb_id;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_GSM_SYSTEM_BANDS
       C_TEST_SB_WCDMA_SYSTEM_BANDS_II
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_ACTIVE_BAND_GET_RESP_STR;

#define SIZE_C_TEST_ACTIVE_BAND_GET_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ANTENNA_CONTROL_REQ - Valid from version 000.019        */
/* ----------------------------------------------------------------------- */
/* This message is used to control tunable antenna. RSSI's at different
   states can also be measured.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* Values from the constant table C_TEST_ANTENNA_CONTROL_MODE */
    uint16  ant_ctrl_mode;
    uint16  sub_block_count;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_ANTENNA_TEST
    */
    uint16  sub_blocks[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_ANTENNA_CONTROL_REQ_STR;

#define SIZE_C_TEST_ANTENNA_CONTROL_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_ANTENNA_CONTROL_RESP - Valid from version 000.019       */
/* ----------------------------------------------------------------------- */
/* This message contains status of antenna control operation. One or two
   C_TEST_SB_ANTENNA_MEAS_RESULT sub blocks are attached if RSSI result is
   asked in request message.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill2_status;
    /* Operation mode: FORCE => N = 0, MEAS/FORCE_MEAS/OEM_ANTENNA_TEST => N
       = 1, TOGGLE_MEAS => N = 2, ANTENNA_TABLE_REQ => N = 1 or 2.
    */
    uint16  sub_block_count;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_ANTENNA_TEST_RESULT
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_ANTENNA_CONTROL_RESP_STR;

#define SIZE_C_TEST_ANTENNA_CONTROL_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_DSP_CONFIG_DATA_WRITE_REQ - Valid from version 000.022  */
/* ----------------------------------------------------------------------- */
/* Message is used for different kind of DSP configuration purposes.  */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  num_sb_id;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_CLOSED_MODE_PWR_LIMIT
       C_TEST_SB_GSM_PWR_REDUCTION_VALUES
       C_TEST_SB_HSPA_MAX_PWR_RED_VALUES
       C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II
       C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES
       C_TEST_SB_WCDMA_SUPPORTED_BANDS
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_DSP_CONFIG_DATA_WRITE_REQ_STR;

#define SIZE_C_TEST_DSP_CONFIG_DATA_WRITE_REQ_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_DSP_CONFIG_DATA_WRITE_RESP - Valid from version 000.022 */
/* ----------------------------------------------------------------------- */
/* Tells the status of configuration data write operation. In FAIL case the
   Sub Block(s) that failed are returned. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status
    */
    uint16  status;
    uint16  num_sb_id;    /* Sub Block amount is zero if no fails occured  */
    /* Failed Sub Block(s)
       Subblock list:
       C_TEST_SB_CLOSED_MODE_PWR_LIMIT
       C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS
       C_TEST_SB_HSPA_MAX_PWR_RED_VALUES
       C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II
       C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES
       C_TEST_SB_WCDMA_SUPPORTED_BANDS
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_DSP_CONFIG_DATA_WRITE_RESP_STR;

#define SIZE_C_TEST_DSP_CONFIG_DATA_WRITE_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_DSP_CONFIG_DATA_READ_REQ - Valid from version 000.022   */
/* ----------------------------------------------------------------------- */
/* Message is used for reading DSP configuration data.  */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  num_sb_id;
    /* The ID('s) of Sub Block(s) that tells the SB to be read
       Subblock ID's:
       C_TEST_SB_CLOSED_MODE_PWR_LIMIT
       C_TEST_SB_GSM_PWR_REDUCTION_VALUES
       C_TEST_SB_HSPA_MAX_PWR_RED_VALUES
       C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II
       C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES
       C_TEST_SB_WCDMA_SUPPORTED_BANDS
    */
    uint16  sb_list[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_DSP_CONFIG_DATA_READ_REQ_STR;

#define SIZE_C_TEST_DSP_CONFIG_DATA_READ_REQ_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_DSP_CONFIG_DATA_READ_RESP - Valid from version 000.022  */
/* ----------------------------------------------------------------------- */
/* This message returns DSP configuration data.  */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status
    */
    uint16  fill2_status;
    uint16  num_sb_id;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_CLOSED_MODE_PWR_LIMIT
       C_TEST_SB_GSM_PWR_REDUCTION_VALUES_RESULTS
       C_TEST_SB_HSPA_MAX_PWR_RED_VALUES
       C_TEST_SB_WCDMA_MAX_POWER_LIMIT_II
       C_TEST_SB_WCDMA_PWR_REDUCTION_VALUES
       C_TEST_SB_WCDMA_SUPPORTED_BANDS
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_DSP_CONFIG_DATA_READ_RESP_STR;

#define SIZE_C_TEST_DSP_CONFIG_DATA_READ_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_VALUES_WRITE_REQ - Valid from version 000.031    */
/* ----------------------------------------------------------------------- */
/* Message writes given tuning values to pm and takes values in use. If there
   is failure in writing, the operation will be interrupted and error will be
   returned.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    uint16  fill1;
    uint16  numberOfSubBlocks;
    /* Sub Block(s) to follow. 
       Subblock list:
       C_TEST_SB_RF_API_VALUES_WRITE_REQ
       C_TEST_SB_WCDMA_POWERDETECTOR_VALUES
       C_TEST_SB_WCDMA_TXPOWER_VALUES
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_TUNING_VALUES_WRITE_REQ_STR;

#define SIZE_C_TEST_TUNING_VALUES_WRITE_REQ_STR   (4*sizeof(uint16) + \
        sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_VALUES_WRITE_RESP - Valid from version 000.031   */
/* ----------------------------------------------------------------------- */
/* Message returns status of value writing(s). */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  fill2;
    uint16  numberOfSubBlocks;
    /* Sub Block(s) to follow. 
       Subblock list:
       C_TEST_SB_RF_API_VALUES_WRITE_RESP
       C_TEST_SB_TUNING_ERROR
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_TUNING_VALUES_WRITE_RESP_STR;

#define SIZE_C_TEST_TUNING_VALUES_WRITE_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_VALUES_READ_REQ - Valid from version 000.031     */
/* ----------------------------------------------------------------------- */
/* Message reads given tuning values from pm. In case of failure, an error
   sub block will be returned instead of data.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  system_info;  /* Values from the bitmask table SYSTEM */
    uint32  rf_band;      /* Values from the bitmask table INFO_WCDMA_BAND */
    /* this field is not valid for licensee 
       Values from the constant table C_TEST_VALUE_SOURCE
    */
    uint16  source;
    uint16  numberOfSubBlockIds;
    /* Sub Block id(s) to follow. 
       Subblock ID's:
    */
    uint16  subBlockIds[COMMON_DSP_TEST_ANY_SIZE];
    /* it's kind of virtual and not part of the actual message layout  */
    /* Subblock list:
       C_TEST_SB_RF_API_VALUES_READ_REQ
    */
    } C_TEST_TUNING_VALUES_READ_REQ_STR;

#define SIZE_C_TEST_TUNING_VALUES_READ_REQ_STR   (4*sizeof(uint16) + \
        sizeof(uint32))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_VALUES_READ_RESP - Valid from version 000.031    */
/* ----------------------------------------------------------------------- */
/* Message returns data and statuses of tuning value readings. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  fill2;
    uint16  numberOfSubBlocks;
    /* Sub Block(s) to follow. 
       Subblock list:
       C_TEST_SB_RF_API_VALUES_READ_RESP
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_TUNING_VALUES_READ_RESP_STR;

#define SIZE_C_TEST_TUNING_VALUES_READ_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_REQ - Valid from version 000.031                 */
/* ----------------------------------------------------------------------- */
/* Common tuning and measurement message. Tuning message contains a set of
   subblocks, which DSP will execute in given order. In case of error, the
   sequence will be interrupted
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    uint16  fill2;
    uint16  numberOfSubBlocks;
    /* Sub Block(s) to follow. Sub blocks will be executed in given order.
       Subblock list:
       C_TEST_SB_AFC_MEAS_AND_ADJUST
       C_TEST_SB_FREQ_RESP_CALIBRATE
       C_TEST_SB_GSM_PA_COMPRESSION_TUNING
       C_TEST_SB_GSM_RX_CONTROL
       C_TEST_SB_GSM_TX_PWR_TUNING
       C_TEST_SB_LINKO_AFC_TUNING
       C_TEST_SB_PWR_SEQ_MEASURE
       C_TEST_SB_READ_RX_IQ_SAMPLES
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ1
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ10
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ11
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ12
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ13
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ14
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ15
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ16
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ17
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ18
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ19
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ2
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ20
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ3
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ4
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ5
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ6
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ7
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ8
       C_TEST_SB_RESERVED_FOR_LICENSEE_REQ9
       C_TEST_SB_RSSI_TUNING
       C_TEST_SB_WCDMA_TXPOWER_TUNING
       C_TEST_SB_WCDMA_TX_TUNING
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_TUNING_REQ_STR;

#define SIZE_C_TEST_TUNING_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_TEST_TUNING_RESP - Valid from version 000.031                */
/* ----------------------------------------------------------------------- */
/* Message returns tuning and measurement data. Sub blocks will be returned
   in same order as they were in request. In case of failure, the sequence
   will be interrupted and possibly an error sub-block will be added.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  status;
    uint16  fill2;
    uint16  numerOfSubBlocks;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_AFC_MEAS_AND_ADJUST_RESULTS
       C_TEST_SB_GSM_PA_COMPRESSION_TUNING_RESULTS
       C_TEST_SB_GSM_RX_CONTROL_RESP
       C_TEST_SB_LINKO2_FREQ_RESP_CAL_RESULTS
       C_TEST_SB_LINKO_AFC_TUNING_RESULTS
       C_TEST_SB_PWR_SEQ_MEAS_RESULTS
       C_TEST_SB_RECEIVED_RX_IQ_SAMPLES
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP1
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP10
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP11
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP12
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP13
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP14
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP15
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP16
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP17
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP18
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP19
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP2
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP20
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP3
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP4
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP5
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP6
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP7
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP8
       C_TEST_SB_RESERVED_FOR_LICENSEE_RESP9
       C_TEST_SB_RSSI_TUNING_RESULT
       C_TEST_SB_TX_TUNING_RESULTS
       C_TEST_SB_WCDMA_TXPOWER_TUNING_RESULTS
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_TEST_TUNING_RESP_STR;

#define SIZE_C_TEST_TUNING_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_CONTROL_REQ - Valid from version 000.093         */
/* ----------------------------------------------------------------------- */
/* This message setup the RF accordingto input parameters. Response message
   send with status. 
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  num_sb_id;
    /* Sub Blocks
       Subblock list:
       C_HAL_SB_COMPENSATION_MODE_SET
       C_HAL_SB_GSM_RXTX_CONTROL
       C_HAL_SB_GSM_RX_CONTROL
       C_HAL_SB_GSM_TX_CONTROL
       C_HAL_SB_RF_INFORM
       C_HAL_SB_WCDMA_RX_CONTROL
       C_HAL_SB_WCDMA_TX_CONTROL
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_TEST_CONTROL_REQ_STR;

#define SIZE_C_HAL_RF_TEST_CONTROL_REQ_STR   (2*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_CONTROL_RESP - Valid from version 000.093        */
/* ----------------------------------------------------------------------- */
/* Response with status. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  RF control response with status
    */
    uint16  status;
    } C_HAL_RF_TEST_CONTROL_RESP_STR;

#define SIZE_C_HAL_RF_TEST_CONTROL_RESP_STR   \
        sizeof(C_HAL_RF_TEST_CONTROL_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_CONTROL_STOP_REQ - Valid from version 000.093    */
/* ----------------------------------------------------------------------- */
/* This message stops the RF activity. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } C_HAL_RF_TEST_CONTROL_STOP_REQ_STR;

#define SIZE_C_HAL_RF_TEST_CONTROL_STOP_REQ_STR   \
        sizeof(C_HAL_RF_TEST_CONTROL_STOP_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_CONTROL_STOP_RESP - Valid from version 000.093   */
/* ----------------------------------------------------------------------- */
/* Response  */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } C_HAL_RF_TEST_CONTROL_STOP_RESP_STR;

#define SIZE_C_HAL_RF_TEST_CONTROL_STOP_RESP_STR   \
        sizeof(C_HAL_RF_TEST_CONTROL_STOP_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_INFO_REQ - Valid from version 000.093            */
/* ----------------------------------------------------------------------- */
/* Request for info about ongoing RF activity. */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Type of info requested.
       Values from the constant table C_HAL_TEST_INFO_TYPE
    */
    uint16  info_type;
    } C_HAL_RF_TEST_INFO_REQ_STR;

#define SIZE_C_HAL_RF_TEST_INFO_REQ_STR   sizeof(C_HAL_RF_TEST_INFO_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_INFO_RESP - Versions 000.093 - 000.121           */
/* ----------------------------------------------------------------------- */
/* Response with info about ongoing RF activity. */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 121) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    int16   rx_level;     /* Requested info */
    } C_HAL_RF_TEST_INFO_RESP_STR;

#define SIZE_C_HAL_RF_TEST_INFO_RESP_STR   \
        sizeof(C_HAL_RF_TEST_INFO_RESP_STR)

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 93) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 121) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TEST_INFO_RESP - Valid from version 000.121           */
/* ----------------------------------------------------------------------- */
/* Response with info about ongoing RF activity. */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 121) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Type of info returned.
       Values from the constant table C_HAL_TEST_INFO_TYPE
    */
    uint16  info_type;
    uint16  data;
    } C_HAL_RF_TEST_INFO_RESP_STR;

#define SIZE_C_HAL_RF_TEST_INFO_RESP_STR   (3*sizeof(uint16))

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 121) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TUNING_VALUES_SET_REQ - Valid from version 000.116    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Type of memory to store data to
       Values from the constant table C_HAL_RF_TUNING_VALUE_LOCATION
    */
    uint16  destination;
    uint16  fill1;
    uint16  nbr_of_sb;
    /* Sub-blocks
       Subblock list:
       C_HAL_RF_SB_TUNING_VALUES_SET_REQ
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_TUNING_VALUES_SET_REQ_STR;

#define SIZE_C_HAL_RF_TUNING_VALUES_SET_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TUNING_VALUES_SET_RESP - Valid from version 000.116   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Overall status of operation
    */
    uint16  fill1_status;
    uint16  fill2;
    uint16  nbr_of_sb;
    /* Subblock list:
       C_HAL_RF_SB_TUNING_VALUES_SET_RESP
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_TUNING_VALUES_SET_RESP_STR;

#define SIZE_C_HAL_RF_TUNING_VALUES_SET_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TUNING_VALUES_GET_REQ - Valid from version 000.116    */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Type of memory to get data from
       Values from the constant table C_HAL_RF_TUNING_VALUE_LOCATION
    */
    uint16  source;
    uint16  fill1;
    uint16  nbr_of_sb;
    /* Sub-blocks
       Subblock list:
       C_HAL_RF_SB_TUNING_VALUES_GET_REQ
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_TUNING_VALUES_GET_REQ_STR;

#define SIZE_C_HAL_RF_TUNING_VALUES_GET_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: C_HAL_RF_TUNING_VALUES_GET_RESP - Valid from version 000.116   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Overall status of operation
    */
    uint16  fill1_status;
    uint16  fill2;
    uint16  nbr_of_sb;
    /* Subblock list:
       C_HAL_RF_SB_TUNING_VALUES_GET_RESP
    */
    uint16  sb[COMMON_DSP_TEST_ANY_SIZE];
    } C_HAL_RF_TUNING_VALUES_GET_RESP_STR;

#define SIZE_C_HAL_RF_TUNING_VALUES_GET_RESP_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: STORE_COMMAND_LIST_REQ - Valid from version 000.148            */
/* ----------------------------------------------------------------------- */
/*  The purpose of this message is to storea list of commands to send to the
   RFHAL sequencer.
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* Default is 0 ( 1 message contains all the command list).This number
       should decrease starting fromN-1 to 0 assuming that N sub-blocks must
       be stored.
    */
    uint16  num_rem_sub_blocks;
    uint16  fill1;
    uint16  num_sub_blocks;
    /* Sub Block(s) to follow. Sub blocks will be executed in given order.
       Subblock list:
       C_TEST_SB_GSM_CAL
       C_TEST_SB_GSM_CAL_SYNC
       C_TEST_SB_GSM_SINGLE_BER
       C_TEST_SB_GSM_SINGLE_BER_SYNC
       C_TEST_SB_WCDMA_CAL
       C_TEST_SB_WCDMA_SINGLE_BER
       C_TEST_SB_WCDMA_SINGLE_BER_SYNC
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } STORE_COMMAND_LIST_REQ_STR;

#define SIZE_STORE_COMMAND_LIST_REQ_STR   (4*sizeof(uint16))


/* ----------------------------------------------------------------------- */
/* Message: STORE_COMMAND_LIST_RESP - Valid from version 000.148           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    } STORE_COMMAND_LIST_RESP_STR;

#define SIZE_STORE_COMMAND_LIST_RESP_STR   \
        sizeof(STORE_COMMAND_LIST_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: START_COMMAND_LIST_REQ - Valid from version 000.148            */
/* ----------------------------------------------------------------------- */
/* This message requests to execute the command list stored in the modem */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } START_COMMAND_LIST_REQ_STR;

#define SIZE_START_COMMAND_LIST_REQ_STR   sizeof(START_COMMAND_LIST_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: START_COMMAND_LIST_RESP - Valid from version 000.148           */
/* ----------------------------------------------------------------------- */
/* Message returned by the modem to the control unit to acknowledge the
   request
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    } START_COMMAND_LIST_RESP_STR;

#define SIZE_START_COMMAND_LIST_RESP_STR   \
        sizeof(START_COMMAND_LIST_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GET_STATUS_REQ - Valid from version 000.148                    */
/* ----------------------------------------------------------------------- */
/* This message is sent by the control unit to get the current status of the
   modem regarding the command list processing
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } GET_STATUS_REQ_STR;

#define SIZE_GET_STATUS_REQ_STR   sizeof(GET_STATUS_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GET_STATUS_RESP - Valid from version 000.148                   */
/* ----------------------------------------------------------------------- */
/* Message returned by the modem to the control unit to acknowledge the
   request
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    } GET_STATUS_RESP_STR;

#define SIZE_GET_STATUS_RESP_STR   sizeof(GET_STATUS_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: SEQUENCER_RESET_REQ - Valid from version 000.148               */
/* ----------------------------------------------------------------------- */
/* Reset the sequencer. Depending on the current sequencer state, all
   operations are stopped properly and the allocated memory is free
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } SEQUENCER_RESET_REQ_STR;

#define SIZE_SEQUENCER_RESET_REQ_STR   sizeof(SEQUENCER_RESET_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: SEQUENCER_RESET_RESP - Valid from version 000.148              */
/* ----------------------------------------------------------------------- */
/* Message returned by the modem to the control unit to acknowledge the
   request
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    } SEQUENCER_RESET_RESP_STR;

#define SIZE_SEQUENCER_RESET_RESP_STR   sizeof(SEQUENCER_RESET_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: STOP_COMMAND_LIST_REQ - Valid from version 000.148             */
/* ----------------------------------------------------------------------- */
/* This message is sent to the modem to stop the command list execution */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } STOP_COMMAND_LIST_REQ_STR;

#define SIZE_STOP_COMMAND_LIST_REQ_STR   sizeof(STOP_COMMAND_LIST_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: STOP_COMMAND_LIST_RESP - Valid from version 000.148            */
/* ----------------------------------------------------------------------- */
/* Message returned by the modem to the control unit to acknowledge the
   request
*/

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    } STOP_COMMAND_LIST_RESP_STR;

#define SIZE_STOP_COMMAND_LIST_RESP_STR   sizeof(STOP_COMMAND_LIST_RESP_STR)


/* ----------------------------------------------------------------------- */
/* Message: GET_RESULTS_REQ - Valid from version 000.148                   */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    uint16  fill1;
    } GET_RESULTS_REQ_STR;

#define SIZE_GET_RESULTS_REQ_STR   sizeof(GET_RESULTS_REQ_STR)


/* ----------------------------------------------------------------------- */
/* Message: GET_RESULTS_RESP - Versions 000.148 - 000.151                  */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Is remaining sub blocks
    */
    uint16  fill2_is_remaining_sb;
    uint16  numberOfSubBlocks;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_GSM_CAL_RESULTS
       C_TEST_SB_GSM_SINGLE_BER_RESULTS
       C_TEST_SB_WCDMA_CAL_RESULTS
       C_TEST_SB_WCDMA_SINGLE_BER_RESULTS
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } GET_RESULTS_RESP_STR;

#define SIZE_GET_RESULTS_RESP_STR   (4*sizeof(uint16))

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 148) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) && !((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */


/* ----------------------------------------------------------------------- */
/* Message: GET_RESULTS_RESP - Valid from version 000.151                  */
/* ----------------------------------------------------------------------- */

#if ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0))

typedef struct
    {
    /* xxxxxxxx--------  Transaction ID
       --------xxxxxxxx  Message ID
    */
    uint16  id;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Status of operation
    */
    uint16  fill1_status;
    /* xxxxxxxx--------  Filler
       --------xxxxxxxx  Is remaining sub blocks
    */
    uint16  fill2_is_remaining_sb;
    uint16  numberOfSubBlocks;
    /* Sub Blocks
       Subblock list:
       C_TEST_SB_GSM_CAL_RESULTS
       C_TEST_SB_GSM_SINGLE_BER_RESULTS
       C_TEST_SB_WCDMA_CAL_RESULTS
       C_TEST_SB_WCDMA_SINGLE_BER_RESULTS
    */
    uint16  subBlock[COMMON_DSP_TEST_ANY_SIZE];
    } GET_RESULTS_RESP_STR;

#define SIZE_GET_RESULTS_RESP_STR   (4*sizeof(uint16))

#endif /* ((COMMON_DSP_TEST_ISI_VERSION_Z == 0 && COMMON_DSP_TEST_ISI_VERSION_Y >= 151) || (COMMON_DSP_TEST_ISI_VERSION_Z > 0)) */




#endif /* _COMMON_DSP_TEST_ISI_H */
