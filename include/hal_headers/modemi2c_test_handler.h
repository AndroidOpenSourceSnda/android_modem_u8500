/*
 * modemi2c_test_handler.h

  This file is part of STw4500 driver.

  Copyright © 2009 ST Ericsson Corporation and/or its subsidiary(-ies). All rights reserved.

  This software, including documentation, is protected by copyright controlled by ST Ericsson Corporation.
  All rights are reserved. Copying, including reproducing, storing, adapting or translating,
  any or all of this material requires the prior written consent of ST Ericsson Corporation.
  This material also contains confidential information which may not be disclosed to others
  without the prior written consent of ST Ericsson.

-------------------------------------------------------------------------------
*/

#ifndef TEST_HANDLER_H_
#define TEST_HANDLER_H_

#if !defined INTERFACE_PROTOTYPE
#define INTERFACE_PROTOTYPE(x)  x;
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define I2C_HAL_TEST_HANDLER 0
#define I2C_HAL_SELFTEST_HANDLER (MODEM_TEST_ST_LICENSEE_BASE + 0x0000)

enum _test_list
{
    SELF_TEST,					/* 0 */
	WR_RD_REG1_SGR1U,			/* 1 */
	RD_REG1_SGR1U_SYNC,			/* 2 */
	WR_RD_REG2_SCR1,			/* 3 */
	WR_RD_REG2_SCR1_SYNC,		/* 4 */
	MODIFY_RD_REG1_SGR1L,		/* 5 */
	MODIFY_RD_REG1_SGR1L_SYNC,	/* 6 */
    DUMP_ALL_REQ_ASYNC,			/* 7 */
    WRITE = 10,					/* 10 */
    READ,						/* 11 */
};

#endif /* TEST_HANDLER_H_ */
