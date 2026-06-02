/// @file  log.h
/// @brief ISM330DHCX Logs

#ifndef __ISM330DHCX_LOG_H__
#define __ISM330DHCX_LOG_H__


#include "ism330dhcx/types.h"
#include "ism330dhcx/comm/error.h"


#ifdef ISM330DHCX_LOG__ENABLE
    #define ISM330DHCX_LOG__CTX_LOG_H 0x01 // log context code for log messages originating from this file
#endif /* ISM330DHCX_LOG__ENABLE */


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


/* Functions */


/// @brief Internal logging function used by the driver to output log messages
/// @param lvl log level of the message (e.g. INFO, WARN, ERR)
/// @param ctx log context (e.g. subroutine or feature code)
/// @param format printf-style format string for the log message
/// @param ... variable arguments for the format string
v0_t _ism330dhcx_log(ism330dhcx_log_e lvl, i8_t ctx, const char *format, ...);


/// @brief Converts the given log level to a human-readable string literal
/// @param lvl log level to convert
/// @return string literal describing the log level
str8r_t ism330dhcx_log__lvl_to_str(ism330dhcx_log_e lvl);



#ifdef ISM330DHCX_LOG__ENABLE
    #define ISM330DHCX_LOG(_ctx, _format, ...) _ism330dhcx_log(ISM330DHCX_LOG__ERR, ctx, format, ##__VA_ARGS__)
#else
    #define ISM330DHCX_LOG__ERR(...) ((v0_t)0)
#endif /* ISM330DHCX_LOG__ENABLE */


#endif /* __ISM330DHCX_LOG_H__ */
