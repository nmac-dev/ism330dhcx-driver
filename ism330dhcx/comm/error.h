/// @file  error.h
/// @brief ISM330DHCX Error Codes

#ifndef __ISM330DHCX_ERR_H__
#define __ISM330DHCX_ERR_H__


#include "ism330dhcx/types.h"

/// @brief ISM330DHCX error types
typedef enum
{
    ISM330DHCX_ERR__OK                = 0x00,   // operation successful

    /*  General Errors (0x01 – 0x0F)  */

    ISM330DHCX_ERR__NULL_PTR          = 0x01,   // pointer is NULL
    ISM330DHCX_ERR__OUT_OF_RANGE      = 0x02,   // numeric argument outside permitted range
    ISM330DHCX_ERR__INVALID_ARG       = 0x03,   // invalid argument (e.g. enum value not recognized)
    ISM330DHCX_ERR__NOT_SUPPORTED     = 0x04,   // operation is not supported
    ISM330DHCX_ERR__NOT_INITIALISED   = 0x05,   // driver has not been initialised before use

    /*  Communication Errors (0x10 – 0x1F)  */

    ISM330DHCX_ERR__COMMS             = 0x10,   // generic communication failure (I2C/SPI)
    ISM330DHCX_ERR__COMMS_TIMEOUT     = 0x11,   // communication timed out waiting for a response
    ISM330DHCX_ERR__COMMS_ARBITRATION = 0x12,   // bus arbitration lost (I2C multi-master)
    ISM330DHCX_ERR__COMMS_NACK        = 0x13,   // NACK received from device (I2C)
    ISM330DHCX_ERR__COMMS_SHORT_READ  = 0x14,   // register read returned unexpected length

    /*  Device Errors (0x20 – 0x2F)  */

    ISM330DHCX_ERR__WRONG_DEVICE      = 0x20,   // WHO_AM_I register returned an unexpected value
    ISM330DHCX_ERR__RESET_TIMEOUT     = 0x21,   // device failed to reset
    ISM330DHCX_ERR__BOOT_FAILURE      = 0x22,   // device reported a boot error (found in status register)

    /*  Sensor data Errors (0x30 – 0x3F)  */

    ISM330DHCX_ERR__DATA_NOT_READY    = 0x30,   // data-ready flag was not set within the polling timeout
    ISM330DHCX_ERR__DATA_OVERFLOW     = 0x31,   // data produced a value outside expected bounds

    /*  FIFO Errors (0x40 – 0x4F)  */

    ISM330DHCX_ERR__FIFO_OVERRUN      = 0x40,   // FIFO overrun: data was lost before it could be read
    ISM330DHCX_ERR__FIFO_EMPTY        = 0x41,   // FIFO was empty when a read was attempted
    ISM330DHCX_ERR__FIFO_INVALID_TAG  = 0x42,   // unrecognised tag (byte) encountered in FIFO stream

    /*  Interrupt Errors  (0x50 – 0x5F)  */

    ISM330DHCX_ERR__INT_INVALID_SRC   = 0x50,   // requested interrupt source is not valid for the selected INT pin

    /*  Self-test Errors  (0x60 – 0x6F) */

    ISM330DHCX_ERR__SELFTEST_LOW      = 0x60,   // self-test output difference exceeds datasheet minimum
    ISM330DHCX_ERR__SELFTEST_HIGH     = 0x61,   // self-test output difference exceeds datasheet maximum

    /*  Other  */

    ISM330DHCX_ERR__UNKNOWN           = 0xFF,   // unknown error

} ism330dhcx_err_e;


/// @brief Converts the given error code to a human-readable string literal
/// @param err
/// @return string literal describing the error code
const char *ism330dhcx_err__to_str(ism330dhcx_err_e err);

#endif /* __ISM330DHCX_ERR_H__ */
