/// @file  mlc.c
/// @brief ISM330DHCX MLC Driver

#include "ism330dhcx/mlc.h"


ism330dhcx_mlc_s ism330dhcx_mlc__get_default_s()
{
    return (ism330dhcx_mlc_s){

        /* Device Registers */

        .status_mainpage = {
            .ADR = ISM330DHCX_RM__MLC_STATUS_MAINPAGE,
            .bf  = 0x00u,
        },

        .int1 = {
            .ADR = ISM330DHCX_RM_EF__MLC_INT1,
            .bf  = 0x00u,
        },

        .int2 = {
            .ADR = ISM330DHCX_RM_EF__MLC_INT2,
            .bf  = 0x00u,
        },

        .ef__status = {
            .ADR = ISM330DHCX_RM_EF__MLC_STATUS,
            .bf  = 0x00u,
        },

        .ef__emb_func_odr_cfg_c = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_ODR_CFG_C,
            .bf  = 0x15u,
        },

        .ef__0_src = {
            .ADR = ISM330DHCX_RM_EF__MLC0_SRC,
            .val = 0x00u,
        },

        .ef__1_src = {
            .ADR = ISM330DHCX_RM_EF__MLC1_SRC,
            .val = 0x00u,
        },

        .ef__2_src = {
            .ADR = ISM330DHCX_RM_EF__MLC2_SRC,
            .val = 0x00u,
        },

        .ef__3_src = {
            .ADR = ISM330DHCX_RM_EF__MLC3_SRC,
            .val = 0x00u,
        },

        .ef__4_src = {
            .ADR = ISM330DHCX_RM_EF__MLC4_SRC,
            .val = 0x00u,
        },

        .ef__5_src = {
            .ADR = ISM330DHCX_RM_EF__MLC5_SRC,
            .val = 0x00u,
        },

        .ef__6_src = {
            .ADR = ISM330DHCX_RM_EF__MLC6_SRC,
            .val = 0x00u,
        },

        .ef__7_src = {
            .ADR = ISM330DHCX_RM_EF__MLC7_SRC,
            .val = 0x00u,
        },

        .eaf1__mag_sensitivity = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF1__MLC_MAG_SENSITIVITY_L,
                .byte._1 = ISM330DHCX_RM_EAF1__MLC_MAG_SENSITIVITY_H,
            },
            .val = 0x3C00u,
        },
    };
}
