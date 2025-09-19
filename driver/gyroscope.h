/// ISM330DHCX Gyroscope Driver

#ifndef __ISM330DHCX_GYR_H__
#define __ISM330DHCX_GYR_H__

#include "c-nstd/types.h"
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

/// @struct ism330dhcx_gyr_s
/// @brief  ISM330DHCX Gyroscope Struct
typedef struct
{
    /* Specs */
    /* Registers */

    _ism330dhcx_rm__OUTX_G_t outx;
    _ism330dhcx_rm__OUTY_G_t outy;
    _ism330dhcx_rm__OUTZ_G_t outz;

    /* Configuration  */

} ism330dhcx_gyr_s;


/// @brief  Fetches the default struct configuration for the gyroscope
/// @return default gyroscope struct
ism330dhcx_gyr_s ism330dhcx_gyr__get_default_s();

#endif /* __ISM330DHCX_GYR_H__ */
