/// @file  log.h
/// @brief ISM330DHCX Logs

#ifndef __ISM330DHCX_LOG_H__
#define __ISM330DHCX_LOG_H__


#include "ism330dhcx/types.h"


/* Log Levels */


/// @brief ISM330DHCX log levels
/// @note  log levels are ordered by increasing severity (i.e. VERB < DEBUG < SP < INFO < STEP < SUCC < WARN < ERR < FATAL)
typedef enum
{
    ISM330DHCX_LOG__VERB  = 01, // verbose log      (explicit details)
    ISM330DHCX_LOG__DEBUG = 10, // debug log        (variable data values)
    ISM330DHCX_LOG__SP    = 15, // subroutine log   (entry/exit of subroutines)
    ISM330DHCX_LOG__INFO  = 20, // info log         (general information)
    ISM330DHCX_LOG__STEP  = 25, // step log         (major steps in device process i.e. initialisation/configuration)
    ISM330DHCX_LOG__SUCC  = 28, // success log      (successful completion of major device process)
    ISM330DHCX_LOG__WARN  = 30, // warning log      (unexpected state that does not prevent operation but may indicate a problem)
    ISM330DHCX_LOG__ERR   = 40, // error log        (error preventing operation of a function but does not cause a system crash)
    ISM330DHCX_LOG__FATAL = 50, // fatal error log  (error causing a system crash or requiring a system restart)

} ism330dhcx_log_e;


#endif /* __ISM330DHCX_LOG_H__ */
