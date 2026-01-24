/// @file  ois.h
/// @brief ISM330DHCX Optical Image Stabalisation Driver

#ifndef __ISM330DHCX_OIS_H__
#define __ISM330DHCX_OIS_H__


#include "c-nstd/types.h"
#include "register_map.h"
#include "internal/rm_structs.h"


/// @struct ism330dhcx_ois
/// @brief  ISM330DHCX Optical Image Stabilisation Struct
typedef struct ism330dhcx_ois
{
    /* Device Registers */

    _ism330dhcx_rm__INT_OIS_s   int_st;
    _ism330dhcx_rm__CTRL1_OIS_s ctrl1;
    _ism330dhcx_rm__CTRL2_OIS_s ctrl2;
    _ism330dhcx_rm__CTRL3_OIS_s ctrl3;

} ism330dhcx_ois_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx OIS struct
/// @return default ism330dhcx OIS struct
ism330dhcx_ois_s ism330dhcx_ois__get_default_s();


#endif /* __ISM330DHCX_OIS_H__ */
