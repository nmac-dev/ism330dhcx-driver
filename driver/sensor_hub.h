/// @file  sensor_hub.h
/// @brief ISM330DHCX Sensor Hub Driver

#ifndef __ISM330DHCX_SENSOR_HUB_H__
#define __ISM330DHCX_SENSOR_HUB_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_sh_structs.h"


/// @struct ism330dhcx_sh_s
/// @brief  ISM330DHCX Sensor Hub Struct
typedef struct ism330dhcx_sh_s
{
    /* Specs */
    /* Control Registers */

    _ism330dhcx_rm__STATUS_MASTER_MAINPAGE_t status_master_mainpage;

    _ism330dhcx_rm_sh__SENSOR_HUB_1_t  sh__output_1;
    _ism330dhcx_rm_sh__SENSOR_HUB_2_t  sh__output_2;
    _ism330dhcx_rm_sh__SENSOR_HUB_3_t  sh__output_3;
    _ism330dhcx_rm_sh__SENSOR_HUB_4_t  sh__output_4;
    _ism330dhcx_rm_sh__SENSOR_HUB_5_t  sh__output_5;
    _ism330dhcx_rm_sh__SENSOR_HUB_6_t  sh__output_6;
    _ism330dhcx_rm_sh__SENSOR_HUB_7_t  sh__output_7;
    _ism330dhcx_rm_sh__SENSOR_HUB_8_t  sh__output_8;
    _ism330dhcx_rm_sh__SENSOR_HUB_9_t  sh__output_9;
    _ism330dhcx_rm_sh__SENSOR_HUB_10_t sh__output_10;
    _ism330dhcx_rm_sh__SENSOR_HUB_11_t sh__output_11;
    _ism330dhcx_rm_sh__SENSOR_HUB_12_t sh__output_12;
    _ism330dhcx_rm_sh__SENSOR_HUB_13_t sh__output_13;
    _ism330dhcx_rm_sh__SENSOR_HUB_14_t sh__output_14;
    _ism330dhcx_rm_sh__SENSOR_HUB_15_t sh__output_15;
    _ism330dhcx_rm_sh__SENSOR_HUB_16_t sh__output_16;
    _ism330dhcx_rm_sh__SENSOR_HUB_17_t sh__output_17;
    _ism330dhcx_rm_sh__SENSOR_HUB_18_t sh__output_18;

    _ism330dhcx_rm_sh__MASTER_CONFIG_t sh__master_config;

    _ism330dhcx_rm_sh__SLV0_ADD_s      sh__slv0_add;
    _ism330dhcx_rm_sh__SLV0_SUBADD_t   sh__slv0_subadd;
    _ism330dhcx_rm_sh__SLAVE0_CONFIG_t sh__slave0_config;

    _ism330dhcx_rm_sh__SLV1_ADD_s      sh__slv1_add;
    _ism330dhcx_rm_sh__SLV1_SUBADD_t   sh__slv1_subadd;
    _ism330dhcx_rm_sh__SLAVE1_CONFIG_t sh__slave1_config;

    _ism330dhcx_rm_sh__SLV2_ADD_s      sh__slv2_add;
    _ism330dhcx_rm_sh__SLV2_SUBADD_t   sh__slv2_subadd;
    _ism330dhcx_rm_sh__SLAVE2_CONFIG_t sh__slave2_config;

    _ism330dhcx_rm_sh__SLV3_ADD_s      sh__slv3_add;
    _ism330dhcx_rm_sh__SLV3_SUBADD_t   sh__slv3_subadd;
    _ism330dhcx_rm_sh__SLAVE3_CONFIG_t sh__slave3_config;

    _ism330dhcx_rm_sh__DATAWRITE_SLV0_t sh__datatwrite_slv0;

    _ism330dhcx_rm_sh__STATUS_MASTER_t  sh__status_master;

    /* Configuration */

} ism330dhcx_sh_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx Sensor Hub struct
/// @return default ism330dhcx Sensor Hub struct
ism330dhcx_sh_t ism330dhcx_sh__get_default_s();


#endif /* __ISM330DHCX_SENSOR_HUB_H__ */
