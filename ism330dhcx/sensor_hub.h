/// @file  sensor_hub.h
/// @brief ISM330DHCX Sensor Hub Driver

#ifndef __ISM330DHCX_SENSOR_HUB_H__
#define __ISM330DHCX_SENSOR_HUB_H__


#include "ism330dhcx/types.h"
#include "register_map.h"
#include "internal/rm_structs.h"
#include "internal/rm_sh_structs.h"


/// @struct ism330dhcx_sh
/// @brief  ISM330DHCX Sensor Hub Struct
typedef struct ism330dhcx_sh
{
    /* Device Registers */

    _ism330dhcx_rm__STATUS_MASTER_MAINPAGE_s status_master_mainpage;

    _ism330dhcx_rm_sh__SENSOR_HUB_1_s  sh__output_1;
    _ism330dhcx_rm_sh__SENSOR_HUB_2_s  sh__output_2;
    _ism330dhcx_rm_sh__SENSOR_HUB_3_s  sh__output_3;
    _ism330dhcx_rm_sh__SENSOR_HUB_4_s  sh__output_4;
    _ism330dhcx_rm_sh__SENSOR_HUB_5_s  sh__output_5;
    _ism330dhcx_rm_sh__SENSOR_HUB_6_s  sh__output_6;
    _ism330dhcx_rm_sh__SENSOR_HUB_7_s  sh__output_7;
    _ism330dhcx_rm_sh__SENSOR_HUB_8_s  sh__output_8;
    _ism330dhcx_rm_sh__SENSOR_HUB_9_s  sh__output_9;
    _ism330dhcx_rm_sh__SENSOR_HUB_10_s sh__output_10;
    _ism330dhcx_rm_sh__SENSOR_HUB_11_s sh__output_11;
    _ism330dhcx_rm_sh__SENSOR_HUB_12_s sh__output_12;
    _ism330dhcx_rm_sh__SENSOR_HUB_13_s sh__output_13;
    _ism330dhcx_rm_sh__SENSOR_HUB_14_s sh__output_14;
    _ism330dhcx_rm_sh__SENSOR_HUB_15_s sh__output_15;
    _ism330dhcx_rm_sh__SENSOR_HUB_16_s sh__output_16;
    _ism330dhcx_rm_sh__SENSOR_HUB_17_s sh__output_17;
    _ism330dhcx_rm_sh__SENSOR_HUB_18_s sh__output_18;

    _ism330dhcx_rm_sh__MASTER_CONFIG_s sh__master_config;

    _ism330dhcx_rm_sh__SLV0_ADD_s      sh__slv0_add;
    _ism330dhcx_rm_sh__SLV0_SUBADD_s   sh__slv0_subadd;
    _ism330dhcx_rm_sh__SLAVE0_CONFIG_s sh__slave0_config;

    _ism330dhcx_rm_sh__SLV1_ADD_s      sh__slv1_add;
    _ism330dhcx_rm_sh__SLV1_SUBADD_s   sh__slv1_subadd;
    _ism330dhcx_rm_sh__SLAVE1_CONFIG_s sh__slave1_config;

    _ism330dhcx_rm_sh__SLV2_ADD_s      sh__slv2_add;
    _ism330dhcx_rm_sh__SLV2_SUBADD_s   sh__slv2_subadd;
    _ism330dhcx_rm_sh__SLAVE2_CONFIG_s sh__slave2_config;

    _ism330dhcx_rm_sh__SLV3_ADD_s      sh__slv3_add;
    _ism330dhcx_rm_sh__SLV3_SUBADD_s   sh__slv3_subadd;
    _ism330dhcx_rm_sh__SLAVE3_CONFIG_s sh__slave3_config;

    _ism330dhcx_rm_sh__DATAWRITE_SLV0_s sh__datatwrite_slv0;

    _ism330dhcx_rm_sh__STATUS_MASTER_s  sh__status_master;

} ism330dhcx_sh_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx Sensor Hub struct
/// @return default ism330dhcx Sensor Hub struct
ism330dhcx_sh_s ism330dhcx_sh__get_default_s();


#endif /* __ISM330DHCX_SENSOR_HUB_H__ */
