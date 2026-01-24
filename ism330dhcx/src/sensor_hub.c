/// @file  sensor_hub.c
/// @brief ISM330DHCX Sensor Hub Driver

#include "sensor_hub.h"


ism330dhcx_sh_s ism330dhcx_sh__get_default_s()
{
    return (ism330dhcx_sh_s){

        /* Device Registers */

        .status_master_mainpage = {
            .ADR = ISM330DHCX_RM__STATUS_MASTER_MAINPAGE,
            .bf  = 0x00u,
        },

        .sh__output_1 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_1,
            .val = 0x00u,
        },

        .sh__output_2 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_2,
            .val = 0x00u,
        },

        .sh__output_3 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_3,
            .val = 0x00u,
        },

        .sh__output_4 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_4,
            .val = 0x00u,
        },

        .sh__output_5 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_5,
            .val = 0x00u,
        },

        .sh__output_6 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_6,
            .val = 0x00u,
        },

        .sh__output_7 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_7,
            .val = 0x00u,
        },

        .sh__output_8 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_8,
            .val = 0x00u,
        },

        .sh__output_9 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_9,
            .val = 0x00u,
        },

        .sh__output_10 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_10,
            .val = 0x00u,
        },

        .sh__output_11 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_11,
            .val = 0x00u,
        },

        .sh__output_12 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_12,
            .val = 0x00u,
        },

        .sh__output_13 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_13,
            .val = 0x00u,
        },

        .sh__output_14 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_14,
            .val = 0x00u,
        },

        .sh__output_15 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_15,
            .val = 0x00u,
        },

        .sh__output_16 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_16,
            .val = 0x00u,
        },

        .sh__output_17 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_17,
            .val = 0x00u,
        },

        .sh__output_18 = {
            .ADR = ISM330DHCX_RM_SH__SENSOR_HUB_18,
            .val = 0x00u,
        },

        .sh__master_config = {
            .ADR = ISM330DHCX_RM_SH__MASTER_CONFIG,
            .bf  = 0x00u,
        },

        .sh__slv0_add = {
            .ADR = ISM330DHCX_RM_SH__SLV0_ADD,
            .bf  = 0x00u,
        },

        .sh__slv0_subadd = {
            .ADR = ISM330DHCX_RM_SH__SLV0_SUBADD,
            .val = 0x00u,
        },

        .sh__slave0_config = {
            .ADR = ISM330DHCX_RM_SH__SLV0_CONFIG,
            .bf  = 0x00u,
        },

        .sh__slv1_add = {
            .ADR = ISM330DHCX_RM_SH__SLV1_ADD,
            .bf  = 0x00u,
        },

        .sh__slv1_subadd = {
            .ADR = ISM330DHCX_RM_SH__SLV1_SUBADD,
            .val = 0x00u,
        },

        .sh__slave1_config = {
            .ADR = ISM330DHCX_RM_SH__SLV1_CONFIG,
            .bf  = 0x00u,
        },

        .sh__slv2_add = {
            .ADR = ISM330DHCX_RM_SH__SLV2_ADD,
            .bf  = 0x00u,
        },

        .sh__slv2_subadd = {
            .ADR = ISM330DHCX_RM_SH__SLV2_SUBADD,
            .val = 0x00u,
        },

        .sh__slave2_config = {
            .ADR = ISM330DHCX_RM_SH__SLV2_CONFIG,
            .bf  = 0x00u,
        },

        .sh__slv3_add = {
            .ADR = ISM330DHCX_RM_SH__SLV3_ADD,
            .bf  = 0x00u,
        },

        .sh__slv3_subadd = {
            .ADR = ISM330DHCX_RM_SH__SLV3_SUBADD,
            .val = 0x00u,
        },

        .sh__slave3_config = {
            .ADR = ISM330DHCX_RM_SH__SLV3_CONFIG,
            .bf  = 0x00u,
        },

        .sh__datatwrite_slv0 = {
            .ADR = ISM330DHCX_RM_SH__DATAWRITE_SLV0,
            .val = 0x00u,
        },

        .sh__status_master = {
            .ADR = ISM330DHCX_RM_SH__STATUS_MASTER,
            .bf  = 0x00u,
        },
    };
}
