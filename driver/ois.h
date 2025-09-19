/// ISM330DHCX Optical Image Stabalisation Driver

#ifndef __ISM330DHCX_OIS_H__
#define __ISM330DHCX_OIS_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"


/// @struct ism330dhcx_ois_s
/// @brief  ISM330DHCX Optical Image Stabilisation Struct
typedef struct ism330dhcx_ois_s
{
    /* Specs */
    /* Registers */

    _ism330dhcx_rm__INT_OIS_t   int_st;
    _ism330dhcx_rm__CTRL1_OIS_t ctrl1;
    _ism330dhcx_rm__CTRL2_OIS_t ctrl2;
    _ism330dhcx_rm__CTRL3_OIS_t ctrl3;

    /* Configuration */

} ism330dhcx_ois_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx OIS struct
/// @return default ism330dhcx OIS struct
ism330dhcx_ois_t ism330dhcx_ois__get_default_s();

#endif /* __ISM330DHCX_OIS_H__ */
