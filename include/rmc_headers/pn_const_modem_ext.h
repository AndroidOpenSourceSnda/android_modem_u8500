/*
NOKIA                                                           CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 6.0 
Specifications : -


Object (this information is substituted by Synergy/CM):
    %name:           pn_const_modem_ext.h %
    %instance:       sa1mexe_1 %
    %version:        6.0 %
    %date_modified:  Thu Sep  9 14:27:51 2010 %

Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

-------------------------------------------------------------------------------
*/

#ifndef PN_CONST_MODEM_EXT_HFILE
#define PN_CONST_MODEM_EXT_HFILE


/* === Media === */
#define PN_MEDIA_XTI                    0x10  /* Trace interface                     */
#define PN_MEDIA_MODEM_HOST_IF          0x26  /* Modem-host interface                */
#define PN_MEDIA_MODEM_AUX_HOST_IF      0x29  /* Modem-additional_host interface     */

/* === Devices === */
#define PN_DEV_HOST                     0x00  /* Host                                */
#define PN_DEV_PC                       0x10  /* PC tools, like NTrace               */
#define PN_DEV_AUX_HOST                 0x44  /* Additional host                     */
#define PN_DEV_MODEM                    0x60  /* Modem                               */

/* === Objects === */
#define PN_OBJ_ROUTING_REQ      0x00  /* Resource-based routing                      */
#define PN_OBJ_EVENT_MULTICAST  0x20  /* Indications are sent to this object         */
#define PN_OBJ_PEP_GPDS         0x30  /* Pipe-End-Point, General Packet Data Service */
#define PN_OBJ_PEP_CSD          0x31  /* Pipe-End-Point, Circuit Switched Data       */
#define PN_OBJ_PEP_GAN          0x32  /* Pipe-End-Point, 3GPP GAN Protocol Stack     */

/* === Resources/Servers === */
#define PN_SMS                          0x02  /* Short Message Services              */
#define PN_SS                           0x06  /* Supplementary Services              */
#define PN_COMMGR                       0x10  /* Indication subscription messages    */
#define PN_CSD                          0x16  /* Circuit Switched Data               */
#define PN_GPDS                         0x31  /* General Packet Radio System server  */
#define PN_GSS                          0x32  /* GSM Stack server                    */
#define PN_UICC                         0x8C  /* Universal Integrated Circuit Card   */
#define PN_AT_MODEM                     0x8E  /* Modem AT server                     */
#define PN_MODEM_LCS                    0x90  /* Modem LCS server                    */
#define PN_MODEM_TEST                   0x91  /* Modem Test server                   */
#define PN_MODEM_NVD                    0x92  /* Modem Non Volatile Data server      */
#define PN_RF_HAL                       0xB7  /* RF control and tuning server        */
#define PN_MODEM_MCE                    0xC2  /* Modem MCE server                    */
#define PN_MODEM_MON                    0xC3  /* Modem Monitor server                */
#define PN_MODEM_INFO                   0xC5  /* Modem Info Server                   */
#define PN_MODEM_NETWORK                0xC8  /* Modem NET server                    */
#define PN_MODEM_CALL                   0xC9  /* Modem CALL server                   */
#define PN_MODEM_GAN                    0xCB  /* 3GPP GAN Protocol Stack server      */
#define PN_PIPE                         0xD9  /* Pipe messages                       */
#define PN_COMMON_RF_TEST               0xEC  /* Common RF test server               */
#define PN_WCDMA_RF_TEST                0xEE  /* WCDMA RF test server                */
#define PN_GSM_RF_TEST                  0xF1  /* GSM test server                     */


#endif /* PN_CONST_MODEM_EXT_HFILE */

/* End of File */
