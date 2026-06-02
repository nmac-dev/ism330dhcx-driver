/// @file  gyroscope.h
/// @brief ISM330DHCX Gyroscope Driver

#ifndef __ISM330DHCX_GYR_H__
#define __ISM330DHCX_GYR_H__


#include "ism330dhcx/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"


/**
Axis

    Y+     P+
   -->    <--
    |   ___/__
    |  /   . /
    | /     /--| R+
    |/_____/   v

**/


/// @struct ism330dhcx_gyr
/// @brief  ISM330DHCX Gyroscope Struct
typedef struct ism330dhcx_gyr
{
    /* Device Registers */

    _ism330dhcx_rm__OUTX_G_s outx;
    _ism330dhcx_rm__OUTY_G_s outy;
    _ism330dhcx_rm__OUTZ_G_s outz;

} ism330dhcx_gyr_s;


/// @brief  Fetches the default struct configuration for the gyroscope
/// @return default gyroscope struct
ism330dhcx_gyr_s ism330dhcx_gyr__get_default_s();


#endif /* __ISM330DHCX_GYR_H__ */
