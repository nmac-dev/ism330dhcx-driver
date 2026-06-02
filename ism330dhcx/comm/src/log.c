/// @file log.c
/// @brief ISM330DHCX Logging Functions

#include "ism330dhcx/comm/log.h"


str8r_t ism330dhcx_log__lvl_to_str(ism330dhcx_log_e lvl)
{
    switch (lvl)
    {
        case ISM330DHCX_LOG__VERB:  return "VERB";
        case ISM330DHCX_LOG__DEBUG: return "DEBUG";
        case ISM330DHCX_LOG__SP:    return "SP";
        case ISM330DHCX_LOG__INFO:  return "INFO";
        case ISM330DHCX_LOG__STEP:  return "STEP";
        case ISM330DHCX_LOG__SUCC:  return "SUCC";
        case ISM330DHCX_LOG__WARN:  return "WARN";
        case ISM330DHCX_LOG__ERR:   return "ERR";
        case ISM330DHCX_LOG__FATAL: return "FATAL";
        default:                    return "LVL_NOT_DEFINED";
    }
}
