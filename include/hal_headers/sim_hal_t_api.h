/*****************************************************************************/
/**
*  © ST-Ericsson, 2009 - All rights reserved
*  Reproduction and Communication of this document is strictly prohibited
*  unless specifically authorized in writing by ST-Ericsson
*
* \ Manages HATS interface
* \author  ST-Ericsson
*/
/*****************************************************************************/

/*
This handler is used for both SIM_HAL test and debugging purposes, and the HATS
UICC interface.

HATS software on the PC side needs to include both the Mexe test API ISI
interface header, and this file (which is not an ISI one).

A description of the ISI Mexe test API is available in 
"Modem Test Server message Specification" Nokia document.

The ISI messages to be used by HATS are 
MODEM_TEST_RUN_REQ and
MODEM_TEST_RUN_RESP.

For HATS purposes, in a request :
- Resource field must be set to PN_MODEM_TEST
- Message ID field will normally be MODEM_TEST_RUN_REQ (= 0x80)
- Test Group ID will be MODEM_TEST_GRP_LICENSEE_L23
- Test Handler ID will be SIM_HAL_TEST_HANDLER
- Test Case ID will be SIMHALTST_HATS_REQUEST

Input data field will contain a tSIMHALTST_HatsExchange struct, and  
Input data length will be SIMHALTST_HATS_EXCHANGE_LEN. The structure
will specify an action and its parameters.

tSIMHALTST_HatsExchange and the values it can contain are defined in the 
present header file.
The structure size has been adjusted to a 4 bytes multiple.

In return, an ISI message with  Message Id set to MODEM_TEST_RUN_RESP (= 0x81)
will be received. Output data will contain  a tSIMHALTST_HatsExchange structure
with returned data, if any. A global status will be available in Test status
field of the ISI message. 

See "Constant Table: Action" section for possible requests, their parameters,
and returned values.

Use the constants defined below or the hints provided in structure definition
for parameters value.

Some parameters values are set or limited by the contents of the ATR returned by
the card upon successful activation. It is up to the user of the interface
to perform ATR decoding and select approriate values , in order to
obtain correct card operation.
*/

/* ----------------------------------------------------------------------- */
/* Constants                                                               */
/* ----------------------------------------------------------------------- */

/* TEST_MODULE_SIM and SIM_HAL_TEST_HANDLER values should be swapped */
/* when ready to deploy. HATS team should be warned */
#define TEST_MODULE_SIM			0x0001 /* Nokia production testing */
#define SIM_HAL_TEST_HANDLER		0x0002 /* HATS, debug */
/*
* CAP_4866: move SELF_TEST ID into prod_api.h file
*/

/* ----------------------------------------------------------------------- */
/* Constant Table: Selftest result                                         */
/* ----------------------------------------------------------------------- */

/* 
(This part is related to the obsolete first selftest implementation)
When a given error number is received, it implies errors of smaller
value have not occured. Result is analysed by checking the signals
in the following order:
IsoUiccInt, IsoUiccClk, IsoUiccIoCtrl, IsoUiccData.
If an error on IsoUiccIoCtrl is returned, for example, it means
IsoUiccInt and  IsoUiccClk are considered to be OK.
*/

#define ISO_UICC_SUCCESSFUL			0x00
#define ISO_UICC_I2C_ERROR			0x01
#define ISO_UICC_INT_NO_TOGGLE			0x02
#define ISO_UICC_POSSIBLE_INT_IOCTRL_SHORT	0x03
#define ISO_UICC_POSSIBLE_CLK_PROBLEM		0x04
#define ISO_UICC_POSSIBLE_IOCTRL_PROBLEM	0x05
#define ISO_UICC_POSSIBLE_DATA_PROBLEM		0x06


   /* New selftest, this part is the one to use */
#define NBR_OF_LINES				4

/* Signal indexes */
#define SLFTST_CLK				0x00
#define SLFTST_IOCTRL				0x01
#define SLFTST_DATA				0x02
#define SLFTST_INT				0x03

/* Line Ids */
#define ISOUICCNONE				0x00
#define ISOUICCCLK				(1 << SLFTST_CLK)
#define ISOUICCIOCTRL				(1 << SLFTST_IOCTRL)
#define ISOUICCDATA				(1 << SLFTST_DATA)
#define ISOUICCINT				(1 << SLFTST_INT)

/* Line diagnotisc */
#define SLFTST_OK				0x00
#define SLFTST_SHORT_TO_GND			0x10
#define SLFTST_SHORT_TO_SUPPLY			0x20
/*
 * + ER_317377
 * W050.2, GBO : modify initial value from 0x30 to 0x40
 */
#define SLFTST_SHORT_TO_OTHERS			0x40
/*
 * - ER_317377
 */
/* ----------------------------------------------------------------------- */
/* Constant Table: Test Case IDs                                           */
/* ----------------------------------------------------------------------- */

/* This is the only one used by HATS */
#define SIMHALTST_HATS_REQUEST			0x0000 

/* Used for tests of SIM HAL */
#define SIMHALTST_01_DUMP_4500_REGISTERS	0x0001 
#define SIMHALTST_02_INIT_INTERFACE		0x0002
#define SIMHALTST_03_1_8V_CARD_ACTIVATION	0x0003 
#define SIMHALTST_04_3_0V_CARD_ACTIVATION	0x0004 
#define SIMHALTST_05_CARD_DEACTIVATION		0x0005 
#define SIMHALTST_06_CASE3_MANUAL_APDU		0x0006
#define SIMHALTST_07_CASE3_AUTO_APDU		0x0007
#define SIMHALTST_08_CASE2_MANUAL_APDU		0x0008
#define SIMHALTST_09_CASE2_AUTO_APDU		0x0009
#define SIMHALTST_10_CASE4_AUTO_APDU		0x000A
#define SIMHALTST_11_CHECK_WWT			0x000B
#define	SIMHALTST_12_APDU_FOREVER		0x000C
#define	SIMHALTST_13_STOP_APDU_LOOP		0x000D
#define	SIMHALTST_14_WARM_RESET 		0x000E
#define	SIMHALTST_15_MANUAL_T1_APDU		0x000F
#define	SIMHALTST_16_PPS			0x0010
#define	SIMHALTST_17_DESTROY_INTERFACE		0x0011
#define	SIMHALTST_18_SLEEP			0x0012
#define	SIMHALTST_19_WAKEUP			0x0013
#define SIMHALTST_20_1_2V_CARD_ACTIVATION	0x0014 
#define SIMHALTST_21_RUN_TEST_7_3_13_START	0x0015 
#define SIMHALTST_22_FAKE_POWER_OFF 0x0016

/* ... */

/* ----------------------------------------------------------------------- */
/* Constant Table: Action                                                  */
/* ----------------------------------------------------------------------- */

/* Action requests from HATS in  MODEM_TEST_RUN_REQ */
#define   HATS_ACTION_SET_FREQUENCY		0x00
#define   HATS_ACTION_ACTIVATION		0x01
#define   HATS_ACTION_PPS			0x02
#define   HATS_ACTION_SEND_CMD			0x03
#define   HATS_ACTION_DEACTIVATION		0x04
#define   HATS_ACTION_CARD_CLOCK_STOP		0x05
#define   HATS_ACTION_CARD_CLOCK_START		0x06
/*+CAP_2042_001 OHO */
#define   HATS_ACTION_DUMP_LOOP_START		0x07
#define   HATS_ACTION_DUMP_LOOP_STOP		0x08
/*-CAP_2042_001 OHO */
/*
* + CAP_4866
* GBO, W045.3: add HATS action identifier to be able to start SELF-TESTS
*/
#define HATS_ACTION_SELFTEST	0x09
/*
* - CAP_4866
*/


/* Action execution results returned to HATS in MODEM_TEST_RUN_RESP */
#define	  HATS_ACTION_SUCCESSFUL		0x80	
#define	  HATS_ACTION_MODIFIED			0x81
#define	  HATS_ACTION_FAILED			0x82
#define	  HATS_ACTION_UNKNOWN			0x83
#define	  HATS_ACTION_NO_REPLY			0x84
#define	  HATS_ACTION_NO_CARD			0x85
#define	  HATS_ACTION_FRAME_ERROR		0x86

/* 
Action parameters
-----------------
Returned parameters are set to meaningful values only if Action
is HATS_ACTION_SUCCESSFUL or HATS_ACTION_MODIFIED in rsp
message

HATS_ACTION_SET_FREQUENCY:
req: Action, CardClkFreq must be set
rsp: Action contains outcome

HATS_ACTION_ACTIVATION
req: Action, Voltage must be set
     Usually, first activation is done at 1.8V, then 3V if it fails.
     When ATR is received, it confirms which voltages are supported.     
rsp: Action contains outcome,LeMSB and LeLSB contain length of ATR
     Data contains ATR

      +CAP_3427_001 OHO 
HATS_ACTION_PPS
req: Action, FD_Factors, Protocol, WI must be set.
     ATR specifies available protocols, WI, and max values for FD.
     If the parameter is not in ATR it means it takes the default value.
     See ISO 7816-3 for details
rsp: Action contains outcome, FD_Factors, Protocol contains negociated values
     If negociated value is not the one requested Action is set to
     HATS_ACTION_MODIFIED
      -CAP_3427_001 OHO 

HATS_ACTION_SEND_CMD
Req: Action,Class,Inst,P1,P2,Lc,LeLSB,LeMSB. If Lc > 0, Data should contain
     the data to send to the card
Rsp: Action contains outcome. LeMSB and LeLSB contain length of received data
     Data contains data received from card if any. Sw1, Sw2 contains status
     bytes received from card.

     Careful, Lc and le value are not exactly those specified in 102.221

     In request:
     Lc=0 means No data sent and Lc not present. Otherwise it is the length
     of data sent [1..255]

     If we define Le = (256*LeMSB) + LeLSB, 
     Le=0 means no data expected and Le not present.
     Le in [1..255] means Le bytes of data are expected.
     Le=256 means any number of bytes up to 256 can be received

     In response:
     If we define Le = (256*LeMSB) + LeLSB,
     Le=0 means no data was received and Data variable is empty
     Le> 0 gives the length of meaningful data in Data variable

     Le is always related to the data part of the card reply and 
     does not include the Sw1, Sw2 bytes.
     
     Memory is always allocated for the full size of the Data array,
     even if it contains no data.

HATS_ACTION_DEACTIVATION     
Req: Action must be set
Rsp: Action contains the outcome

HATS_ACTION_CARD_CLOCK_STOP
Req: Action,  ClkStopLevel must be set (ATR specifies allowed values)
Rsp: Action contains the outcome

     The clock does not restart automatically if a command is sent
     It must be restarted with HATS_ACTION_CARD_CLOCK_START.
     
HATS_ACTION_CARD_CLOCK_START
Req: Action must be set
Rsp: Action contains the outcome
     
HATS_ACTION_DUMP_LOOP_START
HATS_ACTION_DUMP_LOOP_STOP
Req: Action must be set
Rsp: Action confirms loop has been started

HATS_ACTION_SELFTEST
Req: Action must be set
Rsp: Action contains the outcome

Data contains one status byte for each of the iso interface lines
between DB8500 and AB8500.For each byte, we can extract Result = byte & 0xF0;
Result will be SLFTST_OK if the signal has no problem, otherwise it will be 
a combination of SLFTST_SHORT_TO_GND, SLFTST_SHORT_TO_SUPPLY, SLFTST_SHORT_TO_OTHERS
in the case of a short circuit, it will involve other lines, listed in combination 
in the lower quartet (use ISOUICCNONE, ISOUICCCLK, ISOUICCIOCTRL, ISOUICCDATA, 
ISOUICCINT to decode it)


Action sequencing : it is not possible to call any action at any moment.
A typical valid session would look like this :

HATS_ACTION_ACTIVATION (1.8V) -> success or failed
HATS_ACTION_DEACTIVATION (perhaps not needed in case of failure)
HATS_ACTION_ACTIVATION (3.0V) -> success
HATS_ACTION_PPS must be done immediately after activation
HATS_ACTION_SET_FREQUENCY Optional, default is 3.84 Mhz
HATS_ACTION_SEND_CMD 
...
HATS_ACTION_SEND_CMD
HATS_ACTION_CARD_CLOCK_STOP Optional
-- Card in sleep mode while not used --
HATS_ACTION_CARD_CLOCK_START Mandatory if clock stop was used
HATS_ACTION_SEND_CMD 
...
HATS_ACTION_SEND_CMD
HATS_ACTION_DEACTIVATION

Then another session can be started in the same way.
*/

/* ----------------------------------------------------------------------- */
/* Constant Table: Voltage                                                 */
/* ----------------------------------------------------------------------- */

#define HATS_SUPPLY_1_2V			0x00
#define HATS_SUPPLY_1_8V			0x01
#define HATS_SUPPLY_3_0V			0x02

/* ----------------------------------------------------------------------- */
/* Constant Table: CardClkfreq                                             */
/* ----------------------------------------------------------------------- */

#define HATS_CLKFREQ_1_01MHZ			0x00
#define HATS_CLKFREQ_3_20MHZ			0x01
#define HATS_CLKFREQ_3_84MHZ			0x02
#define HATS_CLKFREQ_4_80MHZ			0x03

/* ----------------------------------------------------------------------- */
/* Constant Table: ClkStopLevel                                            */
/* ----------------------------------------------------------------------- */

#define HATS_CLKSTP_HIGH			0x00
#define HATS_CLKSTP_LOW 			0x01

/* ----------------------------------------------------------------------- */
/* Constant Table: Protocol                                                */
/* ----------------------------------------------------------------------- */

#define HATS_PROTOCOL_T0			0x00
#define HATS_PROTOCOL_T1			0x01


/* ----------------------------------------------------------------------- */
/* Subblock: SIMHALTST_HATS_REQUEST (also used for response)               */
/* ----------------------------------------------------------------------- */

typedef struct
    {
    uint8_t  Action;		/* Action requested / Action result */
    uint8_t  Voltage;		/* Power supply value to be used in card activation (ATR->preferred value) */
    uint8_t  CardClkFreq;	/* frequency of clock supplied on card CLK pin */
    uint8_t  ClkStopLevel;	/* Logical state of stopped clock signal (ATR gives allowed values)*/
    uint8_t  FD_Factors;	/* FI and DI values (4 bits each), format of TA(1) byte of ATR, see ISO 7816-3 */
    uint8_t  Protocol;		/* T=0 or T=1, ATR specifies which are available */
    uint8_t  WI;		/* [1..255] to set WWT, value specified by ATR */
    uint8_t  Class;		/* 0xA0 for 2G, other values for 3G, see 102.221 */
    uint8_t  Ins;		/* Instruction, see 102.221 */ 
    uint8_t  P1;		/* Parameter 1 see 102.221 */
    uint8_t  P2;		/* Parameter 2 see 102.221 */
    uint8_t  Lc;		/* Length of data send to card, see 102.221 */ 
    uint8_t  LeLSB;		/* Expected length of data from card, see 102.221  / length of data received (LSB)*/
    uint8_t  LeMSB;		/* Expected length of data from card, see 102.221  / length of data received (MSB)*/
    uint8_t  Sw1;		/* First status byte in card reply, see 102.221 */
    uint8_t  Sw2;		/* Second status byte in card reply, see 102.221 */
    uint8_t  Data[256];		/* Data to send / Data received, see 102.221, 51.011, 31.102 */
    } tSIMHALTST_HatsExchange;


#define SIMHALTST_HATS_EXCHANGE_LEN   sizeof(tSIMHALTST_HatsExchange)

/*
* + CAP_4866 
* GBO: Remove all production testing interfaces and definition and move them to dedicated file
* - CAP_4866
*/

/* End of File */
