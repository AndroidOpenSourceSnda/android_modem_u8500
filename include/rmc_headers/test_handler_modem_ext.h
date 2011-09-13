/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 3.3 
Specifications : MSW-<#>-03.5 Test Service Function Interface Specification, version 3.x
                 supports also version 1.x

Object (this information is substituted by Synergy/CM):
    %name:           test_handler_modem_ext.h %
    %instance:       sa1mexe_1 %
    %version:        3.3 %
    %date_modified:  Wed Sep  9 14:09:17 2009 %
    
Copyright (c) Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

-------------------------------------------------------------------------------
*/

#ifndef TEST_HANDLER_MODEM_EXT_HFILE
#define TEST_HANDLER_MODEM_EXT_HFILE

#include <stdint.h>
#include <stdbool.h>

#if !defined INTERFACE_PROTOTYPE
#define INTERFACE_PROTOTYPE(x) x ;
#endif

/* Test status values
 */
#define MODEM_TEST_PASSED                0x00
#define MODEM_TEST_FAILED                0x01
#define MODEM_TEST_UNDEFINED             0x02
#define MODEM_TEST_CASE_NOT_SUPPORTED    0x03
#define MODEM_TEST_DATA_INVALID          0x04
#define MODEM_TEST_WAITING               0x05
#define MODEM_TEST_BUSY                  0x06
#define MODEM_TEST_TIMEOUT               0x07
#define MODEM_TEST_DONE                  0x08

/* Test groups for licensee use
 */
#define MODEM_TEST_GRP_LICENSEE_L1     0x0000
#define MODEM_TEST_GRP_LICENSEE_L2     0x8000 /* to be deleted */
#define MODEM_TEST_GRP_LICENSEE_L23    0x8000
#define MODEM_TEST_GRP_SELFTEST_L1     0x1000
#define MODEM_TEST_GRP_SELFTEST_L23    0x9000

#define MODEM_TEST_ST_LICENSEE_BASE  0x1000

/* Error codes
 */
#define MODEM_TEST_OK                               0x0
#define MODEM_TEST_ERROR_INCORRECT_FUNC_PTR         0x1
#define MODEM_TEST_ERROR_INCORRECT_GROUP            0x2
#define MODEM_TEST_ERROR_INCORRECT_ENTRY            0x3
#define MODEM_TEST_ERROR_INVALID_HANDLE             0x4
#define MODEM_TEST_WARNING_TIMEOUT                  0x1000
#define MODEM_TEST_WARNING_INCORRECT_TIMEOUT_VALUE  0x1001

/* Values of message processing status
 */
#define MODEM_TEST_MSG_NOT_RECOGNIZED   0 
#define MODEM_TEST_MSG_PROCESSED        1
#define MODEM_TEST_RESP_TO_BE_SENT      2

/* Default message interface codes
 */
#define MODEM_TEST_RUN_REQ         0x80
#define MODEM_TEST_RUN_RESP        0x81

/* Obsolete declarations of test status values
 */
#define TEST_PASSED                MODEM_TEST_PASSED
#define TEST_FAILED                MODEM_TEST_FAILED
#define TEST_UNDEFINED             MODEM_TEST_UNDEFINED
#define TEST_CASE_NOT_SUPPORTED    MODEM_TEST_CASE_NOT_SUPPORTED
#define TEST_DATA_INVALID          MODEM_TEST_DATA_INVALID

/* Obsolete test group declarations
 */
#define LICENSEE_L1_TEST_GROUP     MODEM_TEST_GRP_LICENSEE_L1
#define LICENSEE_L2_TEST_GROUP     MODEM_TEST_GRP_LICENSEE_L2

/* Obsolete capitalized style types definitions
*/
#define MODEM_TEST_GROUP_ID_T    modem_test_group_id_t
#define MODEM_TEST_HANDLER_ID_T  modem_test_handler_id_t
#define MODEM_TEST_STATUS_T      modem_test_status_t
#define MODEM_TEST_RESP_STR_T    modem_test_resp_str_t
#define MODEM_TEST_REQ_STR_T     modem_test_req_str_t
#define MODEM_TEST_HANDLER_PTR_T modem_test_handler_ptr_t

/* Test group ID type
 */
typedef uint16_t modem_test_group_id_t;

/* Test handler ID type
 */
typedef uint16_t modem_test_handler_id_t;

/* Test status type
 */
typedef uint8_t modem_test_status_t;

/* Output data of test handler function execution.
 *
 * Elements:
 *
 * unsigned short int max_out_data_length
 *     Size in bytes of buffer preallocated by test service.
 *     Test handler function can use this preallocated buffer
 *     or allocate a new bigger buffer.
 *
 * unsigned short int out_data_length
 *     Size in bytes of output data.
 *     Zero if no data needs to be returned from test handler.
 *     Test service initialize it by zero, test handler function 
 *     should overwrite it if it is needed to return data.
 *
 * unsigned char* out_data
 * 	   Pointer to output data buffer. 
 *     Small bufer is provided to test handler by the test service. 
 *     If bigger buffer is needed the test handler function can 
 *     allocate a new bigger one and overwrite out_data pointer.
 *     After test handler function return the test service checks 
 *     whether new buffer was allocated and deallocates it.
 *     Pointer is aligned to 32 bit boundary.
 *     Data are to be stored into buffer using BE format.
 */
typedef struct
    {
    uint16_t max_out_data_length;
    uint16_t out_data_length;
    uint8_t* out_data;
    } modem_test_resp_str_t;

/* Input parameters of test handler function
 *
 * Elements:
 *
 * unsigned short int case_ID
 *     ID of test case to be executed
 *
 * unsigned short int inp_data_length
 *     Size in bytes of optional test data.
 *     Zero if no data was supplied in the test request message
 *
 * unsigned char* inp_data
 *     Pointer to test data buffer. Pointer is aligned to 32 bit boundary.
 *     Data are be stored buffer using BE format. Endianness conversion
 *     is needed since native endianness of processor is LE.
 *
 * modem_test_resp_str_t* test_resp
 *     Pointer to structure that test handler function can fill with data 
 *     to be transferred in response message. The pointer is initialized 
 *     by the test server.
 *
 */
typedef struct
    {
    uint16_t case_ID;
    uint16_t inp_data_length;
    uint8_t* inp_data;
    modem_test_resp_str_t* test_resp;
    } modem_test_req_str_t;

/* Test handler function type.
 *
 * Parameters:
 *
 * modem_test_req_str_t *req
 *     Pointer to the input parameters structure
 *
 * Return value
 *     modem_test_status_t
 *     Result of test handler function execution.
 */
typedef modem_test_status_t (*modem_test_handler_ptr_t)( modem_test_req_str_t *req );

/* Error code of test service function calls.
 */
typedef uint32_t  modem_test_error_t;

/* Status of message processing.
 */
typedef uint32_t  modem_test_msg_hdlr_status_t;

/* Message handle type.
 */
typedef uint32_t modem_test_msg_handle_t;

/* Message handler function type.
 * It is to be used for test handler function declaration.
 *
 * Parameters:
 *
 * modem_test_msg_handle_t msg_handle
 *     Message handle
 *
 * uint_8t tr_id
 *     Transaction ID
 *
 * uint8_t msg_id
 *     Message ID
 *
 * uint16_t data_length
 *     Size in bytes of the message data
 *
 * uint8_t* msg_data
 *     Pointer to message data
 *
 * Return value
 *     modem_test_msg_hdlr_status_t
 *     Status of the message processing
 */
typedef modem_test_msg_hdlr_status_t (*modem_test_msg_hdlr_ptr_t)(
    modem_test_msg_handle_t msg_handle,
    uint8_t tr_id,
    uint8_t msg_id,
    uint16_t data_length,
    uint8_t* msg_data );

/* Register callback function to test group ID and test handler ID.
 *
 * Parameters:
 *
 * modem_test_group_id_t group_id
 *     ID of test group where to register test handler function
 *
 * modem_test_handler_id_t test_handler_id
 *     status of asynchronous test case execution
 *
 * modem_test_handler_ptr_t test_func 
 *     pointer to test handler function
 *
 * Return values
 *     bool
 *     Status of registration
 *       true.....registration passed
 *       false....registration failed
 */
INTERFACE_PROTOTYPE(bool modem_test_handler_register (
    modem_test_group_id_t group_id,
    modem_test_handler_id_t test_handler_id,
    modem_test_handler_ptr_t test_func ))

/* Register test handler function to test group ID and test handler ID.
 *
 * Parameters:
 *
 * modem_test_group_id_t group_id
 *     ID of test group where to register test handler function
 *
 * modem_test_handler_id_t test_handler_id
 *     status of asynchronous test case execution
 *
 * modem_test_handler_ptr_t test_func 
 *     pointer to test handler function
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t  modem_test_handler_register_ext (
    modem_test_group_id_t group_id,
    modem_test_handler_id_t test_handler_id,
    modem_test_handler_ptr_t test_func ))

/* Unregister test handler function to test group ID and test handler ID.
 *
 * Parameters:
 *
 * modem_test_group_id_t group_id
 *     ID of test group where to register test handler function
 *
 * modem_test_handler_id_t test_handler_id
 *     status of asynchronous test case execution
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_handler_unregister_ext (
    modem_test_group_id_t group_id,
    modem_test_handler_id_t test_handler_id ))

/* Inform test server about completion of asynchronous test case execution.
 *
 * Parameters:
 *
 * modem_test_req_str_t* req
 *     Pointer to the structure that has been given as an input 
 *     parameter to the test handler function
 *
 * modem_test_status_t test_result
 *     ID of test handler function to be registered
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_complete(
    modem_test_req_str_t* req,
    modem_test_status_t test_result ))

/* Set timeout value for asynchronous test case execution.
 *
 * Parameters:
 *
 * uint32_t timeout
 *     Timeout value in milliseconds
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_set_timeout( uint32_t timeout ))

/* Install message handler function to the test server.
 *
 * Parameters:
 *
 * modem_test_msg_hdlr_ptr_t msg_hdlr
 *     Pointer to the message handler function
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_install_msg_handler( 
    modem_test_msg_hdlr_ptr_t msg_hdlr ))

/* Uninstall message handler function from the test server.
 *
 * Parameters:
 *
 * modem_test_msg_hdlr_ptr_t msg_hdlr
 *     Pointer to the message handler function
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_uninstall_msg_handler(
    modem_test_msg_hdlr_ptr_t msg_hdlr ))

/* Send a responce ISI message.
 *
 * Parameters:
 *
 * modem_test_msg_handle_t req_msg_handle
 *     Message handle of the request message
 *
 * uint8_t msg_id
 *     Message ID
 *
 * uint16_t data_length
 *     Size in bytes of the message data 
 *
 * uint8_t* msg_data
 *     Pointer to the message data 
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_send_resp_msg(
    modem_test_msg_handle_t req_msg_handle,
    uint8_t msg_id,
    uint16_t data_length,
    uint8_t* msg_data ))

/* Send an ISI request message to the test server.
 *
 * Parameters:
 *
 * uint_8t tr_id
 *     Transaction ID
 *
 * uint8_t msg_id
 *     Message ID
 *
 * uint16_t data_length
 *     Size in bytes of the message data
 *
 * uint8_t* msg_data
 *     Pointer to the message data 
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_send_test_server_req_msg(
    uint8_t tr_id,
    uint8_t msg_id,
    uint16_t data_length,
    uint8_t* msg_data ))

/* Sends a MODEM_TEST_RUN_REQ message to the test server 
 * located at the same processor. 
 *
 * Parameters:
 *
 * uint8_t tr_id
 *     Transaction ID
 *
 * modem_test_group_id_t group_id
 *     Test group ID
 *
 * modem_test_handler_id_t handler_id
 *     Test handler ID
 *
 * uint16_t case_id
 *      Test case ID
 *
 * uint16_t inp_data_length
 *     Size in bytes of the test-handler input data
 *
 * uint8_t* inp_data
 *     Pointer to test-handler input data
 *
 * Return values
 *     modem_test_error_t
 *     Error information
 */
INTERFACE_PROTOTYPE(modem_test_error_t modem_test_send_test_server_run_req_msg(
    uint8_t tr_id,
    modem_test_group_id_t group_id,
    modem_test_handler_id_t handler_id,
    uint16_t case_id,
    uint16_t inp_data_length,
    uint8_t* inp_data ))

#endif /* TEST_HANDLER_MODEM_EXT_HFILE */

/* End of File */
