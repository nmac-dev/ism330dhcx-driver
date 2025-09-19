/// ISM330DHCX Accelerometer Driver

#ifndef __ISM330DHCX_ACC_H__
#define __ISM330DHCX_ACC_H__

#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"

/**
Axis

    Z+     X-
    ^      ^
    |   ___/__
    |  /   . /
    | /     /--> Y+
    |/_____/

**/

/// @struct ism330dhcx_acc_s
/// @brief ISM330DHCX Accelerometer Struct
typedef struct
{
    /* Specs */
    /* Registers */

    _ism330dhcx_rm__OUTX_A_t outx;
    _ism330dhcx_rm__OUTY_A_t outy;
    _ism330dhcx_rm__OUTZ_A_t outz;

    _ism330dhcx_rm__X_OFS_USR_t x_ofs_usr;
    _ism330dhcx_rm__Y_OFS_USR_t y_ofs_usr;
    _ism330dhcx_rm__Z_OFS_USR_t z_ofs_usr;

    /* Configuration  */

} ism330dhcx_acc_s;


/// @brief  Fetches the default struct configuration for the accelerometer
/// @return default accelerometer struct
ism330dhcx_acc_s ism330dhcx_acc__get_default_s();


#endif /* __ISM330DHCX_ACC_H__ */
