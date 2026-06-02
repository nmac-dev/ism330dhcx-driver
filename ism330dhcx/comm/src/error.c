/// @file  error.c
/// @brief ISM330DHCX Error Codes

#include "ism330dhcx/comm/error.h"


str8r_t ism330dhcx_err__to_str(ism330dhcx_err_e err)
{
    switch (err)
    {
        case ISM330DHCX_ERR__OK:                return "OK";
        case ISM330DHCX_ERR__NULL_PTR:          return "ERR__NULL_PTR";
        case ISM330DHCX_ERR__OUT_OF_RANGE:      return "ERR__OUT_OF_RANGE";
        case ISM330DHCX_ERR__INVALID_ARG:       return "ERR__INVALID_ARG";
        case ISM330DHCX_ERR__NOT_SUPPORTED:     return "ERR__NOT_SUPPORTED";
        case ISM330DHCX_ERR__NOT_INITIALISED:   return "ERR__NOT_INITIALISED";
        case ISM330DHCX_ERR__COMMS:             return "ERR__COMMS";
        case ISM330DHCX_ERR__COMMS_TIMEOUT:     return "ERR__COMMS_TIMEOUT";
        case ISM330DHCX_ERR__COMMS_ARBITRATION: return "ERR__COMMS_ARBITRATION";
        case ISM330DHCX_ERR__COMMS_NACK:        return "ERR__COMMS_NACK";
        case ISM330DHCX_ERR__COMMS_SHORT_READ:  return "ERR__COMMS_SHORT_READ";
        case ISM330DHCX_ERR__WRONG_DEVICE:      return "ERR__WRONG_DEVICE";
        case ISM330DHCX_ERR__RESET_TIMEOUT:     return "ERR__RESET_TIMEOUT";
        case ISM330DHCX_ERR__BOOT_FAILURE:      return "ERR__BOOT_FAILURE";
        case ISM330DHCX_ERR__DATA_NOT_READY:    return "ERR__DATA_NOT_READY";
        case ISM330DHCX_ERR__DATA_OVERFLOW:     return "ERR__DATA_OVERFLOW";
        case ISM330DHCX_ERR__FIFO_OVERRUN:      return "ERR__FIFO_OVERRUN";
        case ISM330DHCX_ERR__FIFO_EMPTY:        return "ERR__FIFO_EMPTY";
        case ISM330DHCX_ERR__FIFO_INVALID_TAG:  return "ERR__FIFO_INVALID_TAG";
        case ISM330DHCX_ERR__INT_INVALID_SRC:   return "ERR__INT_INVALID_SRC";
        case ISM330DHCX_ERR__SELFTEST_LOW:      return "ERR__SELFTEST_LOW";
        case ISM330DHCX_ERR__SELFTEST_HIGH:     return "ERR__SELFTEST_HIGH";
        case ISM330DHCX_ERR__UNKNOWN:           return "ERR__UNKNOWN";
        default:                                return "ERR__NOT_DEFINED";
    }
}
