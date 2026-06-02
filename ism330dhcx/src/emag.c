/// @file  emag.c
/// @brief ISM330DHCX External Magnetometer Driver

#include "ism330dhcx/emag.h"


ism330dhcx_emag_s ism330dhcx_emag__get_default_s()
{
    return (ism330dhcx_emag_s){

        /* Device Registers */

        .sensitivity = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SENSITIVITY_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SENSITIVITY_H,
            },
            .val = 0x1624u,
        },

        .offx = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_OFFX_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_OFFX_H,
            },
            .val = 0x0000u,
        },

        .offy = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_OFFY_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_OFFY_H,
            },
            .val = 0x0000u,
        },

        .offz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_OFFZ_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_OFFZ_H,
            },
            .val = 0x0000u,
        },

        .si_xx = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_XX_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_XX_H,
            },
            .val = 0x3C00u,
        },

        .si_xy = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_XY_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_XY_H,
            },
            .val = 0x0000u,
        },

        .si_xz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_XZ_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_XZ_H,
            },
            .val = 0x0000u,
        },

        .si_yy = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_YY_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_YY_H,
            },
            .val = 0x3C00u,
        },

        .si_yz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_YZ_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_YZ_H,
            },
            .val = 0x0000u,
        },

        .si_zz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM_EAF0__MAG_SI_ZZ_L,
                .byte._1 = ISM330DHCX_RM_EAF0__MAG_SI_ZZ_H,
            },
            .val = 0x3C00u,
        },

        .cfg_a = {
            .ADR = ISM330DHCX_RM_EAF0__MAG_CFG_A,
            .bf = 0x05u,
        },

        .cfg_b = {
            .ADR = ISM330DHCX_RM_EAF0__MAG_CFG_B,
            .bf =  0x02u,
        },
    };
}
