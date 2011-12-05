/*
* NOKIA D                                                          CONFIDENTIAL
*
*
*
*
*
*
*
*                   rfdd_st_ext.h
*                   Code Module Interface
*
*
*
*
*
*
* Copyright © 2008 Nokia. All rights reserved.
*
*------------------------------------------------------------------------------
*
*
*   CONTENTS
*
*   1 ABSTRACT
*       1.1 Functional Description
*       1.2 Notes
*
*   2 GLOSSARY
*
*   3 REFERENCES
*       3.1 Specification Reference
*       3.2 Design Reference
*       3.3 Module Test Specification Reference
*       3.4 Other References
*
*   4 EXTERNAL RESOURCES
*       4.1 Standard Library Header Files
*       4.2 Public Header Files
*       4.3 Private Header Files
*
*   5 DEFINITIONS
*       5.1 Compilation Flags
*       5.2 Constants
*       5.3 Data Types
*       5.4 Macros
*
*   6 FUNCTION PROTOTYPES
*       6.1 __function_1__
*       6.n __function_n__
*
*   7 INLINE FUNCTIONS
*       7.1 __function_1__
*       7.n __function_n__
*

*------------------------------------------------------------------------------
*
*   1 ABSTRACT
*
*     1.1 Functional Description
*
*       __Short_external_description_of_the_module__
*
//        - overview and purpose (what it contains, how it is supposed to be
//          used and where it is supposed to be included etc.)
//        - type of content (a group of constants, functions, interrupt
//          handlers, hardware drivers, main program, etc.)
//        - etc.
//
*
*     1.2 Notes
*
*       __Open_items_potential_optimizations_and_other_comments__
*

*------------------------------------------------------------------------------
*
*   2 GLOSSARY
*
*       __Term_1__        __Description_1__
*       __Term_n__        __Description_n__
*

*------------------------------------------------------------------------------
*
*   3 REFERENCES
*
*     3.1 Specification Reference
*
*       RF HAL SW Interface Specification
*         DSW02237-EN
*
*       RF Device Driver Interface Specification
*         DSW02240-EN
*
*     3.2 Design Reference
*
*       RF HAL Design Specification
*         DSD06918-EN
*
*       RF Device Driver Adaptation for Linko1
*         DSD06919-EN
*
*
*     3.3 Module Test Specification Reference
*
*	-
*
*
*     3.4 Other References
*
*	-
*
*------------------------------------------------------------------------------
*   4 EXTERNAL RESOURCES
*
*/

#ifndef RFDD_ST_EXT_H
#define RFDD_ST_EXT_H


/*    4.1 Standard Library Header Files    */

/*    4.2 Public Header Files    */

/*    4.3 Private Header Files    */

/*----------------------------------------------------------------------------
*
*   5 DEFINITIONS
*
*     5.1 Compilation Flags    */

/* __Description_of_flag__ */


/*    5.2 Constants    */

/* __Description_of_constant__ */

/**
 * Maximum size of detailed results data block in words.
 */
#define ST_MAX_NUMBER_OF_DETAILED_RESULTS    (248/2)


#define ST_CDSP_NO_TEST                          0x57

#define ST_OK                                    0x00
#define ST_FAIL                                  0x01
#define ST_BUSY                                  0x02
#define ST_NOT_EXECUTED                          0x03
#define ST_FATAL                                 0x0C

#define ST_CDSP_DIV_RF_SUPPLY_TEST               0x44
#define ST_CDSP_DIV_RF_BB_IF_TEST                0x46
#define ST_CDSP_DIV_DIGI_RXTX_IF_TEST            0x49
#define ST_CDSP_RF_BB_IF_TEST                    0x56
#define ST_CDSP_STROBE_TEST                      0x7C
#define ST_CDSP_DIGI_RXTX_IF_TEST                0x7D
#define ST_CDSP_SMPS_TEST                        0x7E
#define ST_CDSP_PA_ID_PIN_TEST                   0x7F
#define ST_CDSP_WCDMA_TX_POWER_TEST              0x4B
#define ST_CDSP_RF_SUPPLY_TEST                   0x53

#define RF_HAL_ST_LICENSEE_BASE 	(MODEM_TEST_ST_LICENSEE_BASE + 0x0100)
#define LICENSEE1_RF_BB_IF_TEST         RF_HAL_ST_LICENSEE_BASE + 0x0
#define LICENSEE1_STROBE_TEST           RF_HAL_ST_LICENSEE_BASE + 0x1
#define LICENSEE1_DIGI_RXTX_IF_TEST     RF_HAL_ST_LICENSEE_BASE + 0x2
#define LICENSEE1_SMPS_TEST             RF_HAL_ST_LICENSEE_BASE + 0x3
#define LICENSEE1_PA_ID_PIN_TEST        RF_HAL_ST_LICENSEE_BASE + 0x4
#define LICENSEE1_WCDMA_TX_POWER_TEST   RF_HAL_ST_LICENSEE_BASE + 0x5
#define LICENSEE1_RF_SUPPLY_TEST        RF_HAL_ST_LICENSEE_BASE + 0x6
/* + CAP_3561_001 : Diversity PART1 */
#define LICENSEE1_DIV_RF_BB_IF_TEST     RF_HAL_ST_LICENSEE_BASE + 0x7
#define LICENSEE1_DIV_DIGI_RXTX_IF_TEST RF_HAL_ST_LICENSEE_BASE + 0x8
#define LICENSEE1_DIV_RF_SUPPLY_TEST    RF_HAL_ST_LICENSEE_BASE + 0x9
/* - CAP_3561_001 : Diversity PART1 */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_RF_BB_IF_TEST_ERR                                */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_BB_IF_TEST_ERR_CONST;

/* RX RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_RX_VERSION            0x0001  /* ---------------1 */
/* RX RFIC general power down register reset value wrong */
#define ST_WRONG_RESET_VAL_RX_GENE_XPD           0x0002  /* --------------1- */
/* RX general power down register read/write failed */
#define ST_WRITE_FAILED_RX_GENE_XPD              0x0004  /* -------------1-- */
/* TX RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_TX_VERSION            0x0008  /* ------------1--- */
/* TX RFIC general power down register reset value wrong */
#define ST_WRONG_RESET_VAL_TX_GENE_XPD           0x0010  /* -----------1---- */
/* TX general power down register read/write failed */
#define ST_WRITE_FAILED_TX_GENE_XPD              0x0020  /* ----------1----- */
/* RFbus write/read test failed */
#define ST_RFBUS_WRITE_READ_FAIL                 0x0040  /* ---------1------ */
/* TX FIFO write/read test failed */
#define ST_TXFIFO_WRITE_READ_FAIL                0x0080  /* --------1------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_RF_BB_IF_TEST_ERR_LINKOE                         */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_BB_IF_TEST_ERR_LINKOE_CONST;

/* Main RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_RFIC_VERSION          0x0001  /* ---------------1 */
/* Main RFIC general power down register reset value wrong */
#define ST_WRONG_RESET_VAL_RFIC_PDRX             0x0002  /* --------------1- */
/* Main RFIC general power down register read/write failed */
#define ST_WRITE_FAILED_RFIC_PDRX                0x0004  /* -------------1-- */
/* Diversity RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_DRFIC_VERSION         0x0008  /* ------------1--- */
/* Diversity RFIC general power down register reset value wrong */
#define ST_WRONG_RESET_VAL_DRFIC_PDRX            0x0010  /* -----------1---- */
/* Diversity RFIC general power down register read/write failed */
#define ST_WRITE_FAILED_DRFIC_PDRX               0x0020  /* ----------1----- */
/* Aura RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_KAURA_VERSION          0x0040  /* ---------1------ */
/* Aura register 14 reset value wrong */
#define ST_WRONG_RESET_VAL_KAURA_REG14            0x0080  /* --------1------- */
/* Aura register 14 read/write failed */
#define ST_WRITE_FAILED_KAURA_REG14               0x0100  /* -------1-------- */
/* Diversity Aura RFIC version register reset value wrong */
#define ST_WRONG_RESET_VAL_DIV_KAURA_VERSION      0x0200  /* ------1--------- */
/* Diversity Aura register 14 reset value wrong */
#define ST_WRONG_RESET_VAL_DIV_KAURA_REG14        0x0400  /* -----1---------- */
/* Diversity Aura register 14 read/write failed */
#define ST_WRITE_FAILED_DIV_KAURA_REG14           0x0800  /* ----1----------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_RF_BB_IF_TEST_ERR_LINKO                          */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_BB_IF_TEST_ERR_LINKO_CONST;

/* #define ST_WRONG_RESET_VAL_RFIC_VERSION       0x0001 (already defined) */
/* #define ST_WRONG_RESET_VAL_RFIC_PDRX          0x0002 (already defined) */
/* #define ST_WRITE_FAILED_RFIC_PDRX             0x0004 (already defined) */
/* #define ST_WRONG_RESET_VAL_DRFIC_VERSION      0x0008 (already defined) */
/* #define ST_WRONG_RESET_VAL_DRFIC_PDRX         0x0010 (already defined) */
/* #define ST_WRITE_FAILED_DRFIC_PDRX            0x0020 (already defined) */
/* #define ST_WRONG_RESET_VAL_KAURA_VERSION 	 0x0040 (already defined) */
/* #define ST_WRONG_RESET_VAL_KAURA_REG14		 0x0080 (already defined) */
/* #define ST_WRITE_FAILED_KAURA_REG14  		 0x0100 (already defined) */
/* Main RFIC PLLDIV1 register reset value wrong */
#define ST_WRONG_RESET_VAL_RFIC_RX_PLLDIV1		0x0200  /* ------1--------- */
/* Main RFIC PLLDIV1 register read/write failed */
#define ST_WRITE_FAILED_RFIC_RX_PLLDIV1          0x0400  /* -----1---------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_RF_SUPPLY_TEST_ERR1_LINKO                        */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_SUPPLY_TEST_ERR1_LINKO_CONST;

/* Aura: VREG50BD regulator */
#define ST_LDO_VREG50BD                          0x0001  /* ---------------1 */
/* Aura: VREG50S regulator */
#define ST_LDO_VREG50S                           0x0002  /* --------------1- */
/* Aura: VHI regulator */
#define ST_LDO_VHI                               0x0004  /* -------------1-- */
/* Aura: VBATT Battery monitoring */
#define ST_LDO_VBATT                             0x0008  /* ------------1--- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_RF_SUPPLY_TEST_ERR2_LINKO                        */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_SUPPLY_TEST_ERR2_LINKO_CONST;

/* Diversity RFIC: VDIG regulator */
#define ST_DIV_VDIG                              0x0001  /* ---------------1 */
/* Diversity RFIC: VLPF_RX regulator */
#define ST_DIV_VLPF_RX                           0x0002  /* --------------1- */
/* Diversity RFIC: VBIAS regulator */
#define ST_DIV_VBIAS                             0x0004  /* -------------1-- */
/* Diversity RFIC: SLICER2V3 regulator */
#define ST_DIV_SLICER                            0x0008  /* ------------1--- */
/* Diversity RFIC: VVCO_RX regulator */
#define ST_DIV_VVCO_RX                           0x0010  /* -----------1---- */
/* Diversity RFIC: VABM regulator */
#define ST_DIV_VABM                              0x0020  /* ----------1----- */
/* Diversity RFIC: VFE regulator */
#define ST_DIV_VFE                               0x0040  /* ---------1------ */
/* Diversity RFIC: VLO_RX regulator */
#define ST_DIV_VLO_RX                            0x0080  /* --------1------- */
/* Diversity RFIC: VXO voltage */
/* + FIDO ER353660: Diversity RF Supply error code issue */
#define ST_DIV_VXO                               0x0100  /* -------1-------- */
/* - FIDO ER353660: Diversity RF Supply error code issue */

/* ----------------------------------------------------------------------- */
/* Bit mask Table: ST_CDSP_RF_SUPPLY_TEST_ERR3_LINKO                       */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_RF_SUPPLY_TEST_ERR3_LINKO_CONST;

/* Main RFIC: RX VDIG regulator */
#define ST_VDIG_RX                               0x0001  /* ---------------1 */
/* Main RFIC: VLPF_RX regulator */
#define ST_VLPF_RX                               0x0002  /* --------------1- */
/* Main RFIC: VVCO_RX regulator */
#define ST_VVCO_RX                               0x0004  /* -------------1-- */
/* Main RFIC: VABM regulator */
#define ST_VABM                                  0x0008  /* ------------1--- */
/* Main RFIC: VFE regulator */
#define ST_VFE                                   0x0010  /* -----------1---- */
/* Main RFIC: VLO_RX regulator */
#define ST_VLO_RX                                0x0020  /* ----------1----- */
/* Main RFIC: VR1 voltage */
#define ST_VXO                                   0x0040  /* ---------1------ */
/* Main RFIC: VLPF_TX regulator */
#define ST_VLPF_TX                               0x0080  /* --------1------- */
/* Main RFIC: VOPA regulator */
#define ST_VOPA                                  0x0100  /* -------1-------- */
/* Main RFIC: VVCO_TX regulator */
#define ST_VVCO_TX                               0x0200  /* ------1--------- */
/* Main RFIC: TX VDIG regulator */
#define ST_VDIG_TX                               0x0400  /* -----1---------- */
/* Main RFIC: VSEL regulator */
#define ST_VSEL                                  0x0800  /* ----1----------- */
/* Main RFIC: VPAP regulator */
#define ST_VPAP                                  0x1000  /* ---1------------ */
/* Main RFIC: VDP_TX regulator */
#define ST_VDP_TX                                0x2000  /* --1------------- */
/* Main RFIC: VLO_TX regulator */
#define ST_VLO_TX                                0x4000  /* -1-------------- */
/* Main RFIC: VFB_TX regulator */
#define ST_VFB_TX                                0x8000  /* 1--------------- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_PA_ID_PIN_TEST_ERR                               */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_PA_ID_PIN_TEST_ERR_CONST;

/* PA ID pin read failed */
#define ST_PA_ID_PIN_READ_FAILED                 0x0001  /* ---------------1 */
/* PA CID voltage value not in limits */
#define ST_PA_CID_VOLTAGE                        0x0002  /* --------------1- */
/* Temperature diode voltage value not in limits */
#define ST_TEMP_DIODE_VOLTAGE                    0x0004  /* -------------1-- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_STROBE_TEST_ERR                                  */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_STROBE_TEST_ERR_CONST;

/* RFBus test not passed before Strobe test */
#define ST_STROBE_TEST_NOT_PERFORMED             0x0001  /* ---------------1 */
/* EPU register read failed */
#define ST_EPU_READ_FAILED                       0x0002  /* --------------1- */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_CDSP_DIGI_RXTX_IF_TEST_ERR                            */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_CDSP_DIGI_RXTX_IF_TEST_ERR_CONST;

/* IQ data loop from Tx to Rx failed */
#define ST_LINKOIF_DATA_LOOP_FAILED              0x0001  /* ---------------1 */
/* Diversity Rx IQ data failed */
#define ST_LINKOIF_DIVERSITY_DATA_FAILED         0x0002  /* --------------1- */
/* Yama LinkoIF errors */
#define ST_YAMA_LINKOIF                          0x0004  /* -------------1-- */
/* Main RFIC's LinkoIF errors */
#define ST_RFIC_LINKOIF                          0x0008  /* ------------1--- */
/* Diversity RFIC's LinkoIF errors */
#define ST_DRFIC_LINKOIF                         0x0010  /* -----------1---- */
/* IQ data error on RX lines */
#define ST_LINKOIF_RX_DATA_FAILED                0x0020  /* ----------1----- */
/* IQ data error on TX lines */
#define ST_LINKOIF_TX_DATA_FAILED                0x0040  /* ---------1------ */

/* ----------------------------------------------------------------------- */
/* Bitmask Table: ST_WCDMA_TX_POWER_TEST_ERR                               */
/* ----------------------------------------------------------------------- */
typedef uint16 ST_WCDMA_TX_POWER_TEST_ERR_CONST;

/* Rx start failed */
#define ST_RX_START_FAILED                       0x0001  /* ---------------1 */
/* Tx start failed */
#define ST_TX_START_FAILED                       0x0002  /* --------------1- */
/* Rx stop failed */
#define ST_RX_STOP_FAILED                        0x0004  /* -------------1-- */
/* Tx stop failed */
#define ST_TX_STOP_FAILED                        0x0008  /* ------------1--- */
/* Measured Tx power under threshold */
#define ST_TX_PWR_UNDER_LIMIT                    0x0010  /* -----------1---- */


/*    5.3 Data Types    */

/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_RF_SUPPLY_TEST_LINKO                                  */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR1_LINKO */
    uint16  error_code1;
	/* + LCH - SelfTests integration : diversity is done separately */
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR2_LINKO */
    uint16  error_code2;
	/* - LCH - SelfTests integration : diversity is done separately */
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR3_LINKO */
    uint16  error_code3;
    uint16  meas1;
    uint16  meas2;
    uint16  meas3;
    uint16  meas4;
    uint16  meas5;
    uint16  meas6;
    uint16  meas7;
    uint16  meas8;
    uint16  meas9;
    uint16  meas10;
    uint16  meas11;
    uint16  meas12;
    uint16  meas13;
    uint16  meas14;
    uint16  meas15;
    uint16  meas16;
    uint16  meas17;
    uint16  meas18;
    uint16  meas19;
    uint16  meas20;
    uint16  meas21;
    uint16  meas22;
    uint16  meas23;
    uint16  meas24;
    uint16  meas25;
    uint16  meas26;
    uint16  meas27;
    uint16  meas28;
    uint16  meas29;
    uint16  meas30;
    } ST_CDSP_RF_SUPPLY_TEST_LINKO_STR;

#define SIZE_ST_CDSP_RF_SUPPLY_TEST_LINKO_STR   \
        (sizeof(ST_CDSP_RF_SUPPLY_TEST_LINKO_STR)/sizeof(int16))

/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_RF_SUPPLY_TEST_LINKOE                                 */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR1_LINKOE */
    uint16  error_code1;
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR2_LINKOE */
    uint16  error_code2;
    /* Values from the bitmask table ST_CDSP_RF_SUPPLY_TEST_ERR3_LINKOE */
    uint16  error_code3;
    uint16  meas1;
    uint16  meas2;
    uint16  meas3;
    uint16  meas4;
    uint16  meas5;
    uint16  meas6;
    uint16  meas7;
    uint16  meas8;
    uint16  meas9;
    uint16  meas10;
    uint16  meas11;
    uint16  meas12;
    uint16  meas13;
    uint16  meas14;
    uint16  meas15;
    uint16  meas16;
    uint16  meas17;
    uint16  meas18;
    uint16  meas19;
    uint16  meas20;
    uint16  meas21;
    uint16  meas22;
    uint16  meas23;
    uint16  meas24;
    uint16  meas25;
    uint16  meas26;
    uint16  meas27;
    uint16  meas28;
    uint16  meas29;
    uint16  meas30;
    uint16  meas31;
    uint16  meas32;
    uint16  meas33;
    uint16  meas34;
    uint16  meas35;
    uint16  meas36;
    uint16  meas37;
    uint16  meas38;
    uint16  meas39;
    uint16  meas40;
    uint16  meas41;
    uint16  meas42;
    } ST_CDSP_RF_SUPPLY_TEST_LINKOE_STR;

#define SIZE_ST_CDSP_RF_SUPPLY_TEST_LINKOE_STR   \
        (sizeof(ST_CDSP_RF_SUPPLY_TEST_LINKOE_STR)/sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_PA_ID_PIN_TEST                                        */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_PA_ID_PIN_TEST_ERR */
    uint16  error_code;
    uint16  adc_meas;
    } ST_CDSP_PA_ID_PIN_TEST_STR;

#define SIZE_ST_CDSP_PA_ID_PIN_TEST_STR   (sizeof(ST_CDSP_PA_ID_PIN_TEST_STR)/sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_STROBE_TEST                                           */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_STROBE_TEST_ERR */
    uint16  error_code;
    } ST_CDSP_STROBE_TEST_STR;

#define SIZE_ST_CDSP_STROBE_TEST_STR   (sizeof(ST_CDSP_STROBE_TEST_STR)/sizeof(int16))


/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_DIGI_RXTX_IF_TEST                                     */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_DIGI_RXTX_IF_TEST_ERR */
    uint16  error_code;
    } ST_CDSP_DIGI_RXTX_IF_TEST_STR;

#define SIZE_ST_CDSP_DIGI_RXTX_IF_TEST_STR   \
        (sizeof(ST_CDSP_DIGI_RXTX_IF_TEST_STR)/sizeof(int16))

/* ----------------------------------------------------------------------- */
/* Sequence: ST_CDSP_RF_BB_IF_TEST                                         */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    /* Values from the bitmask table ST_CDSP_RF_BB_IF_TEST_ERR */
    uint16  error_code;
    } ST_CDSP_RF_BB_IF_TEST_STR;

#define SIZE_ST_CDSP_RF_BB_IF_TEST_STR   (sizeof(ST_CDSP_RF_BB_IF_TEST_STR)/sizeof(int16))

/* ----------------------------------------------------------------------- */
/* Sequence: ST_WCDMA_TX_POWER_TEST                                        */
/* ----------------------------------------------------------------------- */
/* The data amount returned depends on band amount supported by the phone,
   this structure is returned for each supported band.
*/

typedef struct
    {
    uint16  band[2];         /* The WCDMA Band that was tested */
    /* Values from the bitmask table ST_WCDMA_TX_POWER_TEST_ERR */
    uint16  error_code[2];
    uint16  txc_adc[2]; /* Measured power Value */
    /* Values from the bitmask table ST_WCDMA_TX_POWER_TEST_ERR */
    /* uint16  error_code2;*/
    /*uint16  txc_adc2;*/ /* Measured power Value */

    } ST_WCDMA_TX_POWER_TEST_STR;

#define SIZE_ST_WCDMA_TX_POWER_TEST_STR   (sizeof(ST_WCDMA_TX_POWER_TEST_STR)/sizeof(int16))

/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

#define ST_RF_NOT_MEASURED                       0xFFFF
#define ST_RF_BAND_NOT_SUPPORTED                 0xFFFF

/* __Description_of_enum__ */

/* __Description_of_struct__ */

/*    5.4 Macros    */

/*-----------------------------------------------------------------------------
*
*   6 FUNCTION PROTOTYPES
*
*/

/*-----------------------------------------------------------------------------
*
*   7 INLINE FUNCTIONS
*
*/


#endif /* RFDD_ST_EXT_H */

/* End of rfdd_st_ext.h */

