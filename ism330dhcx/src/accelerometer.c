/// @file  accelerometer.c
/// @brief ISM330DHCX Accelerometer Driver

#include "ism330dhcx/accelerometer.h"


ism330dhcx_acc_s ism330dhcx_acc__get_default_s()
{
    return (ism330dhcx_acc_s){

        /* Device Registers */

        .outx = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTX_L_A,
                .byte._1 = ISM330DHCX_RM__OUTX_H_A,
            },
            .val = 0x0000u,
        },

        .outy = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTY_L_A,
                .byte._1 = ISM330DHCX_RM__OUTY_H_A,
            },
            .val = 0x0000u,
        },

        .outz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTZ_L_A,
                .byte._1 = ISM330DHCX_RM__OUTZ_H_A,
            },
            .val = 0x0000u,
        },

        .x_ofs_usr = {
            .ADR = ISM330DHCX_RM__X_OFS_USR,
            .val = 0x00u,
        },

        .y_ofs_usr = {
            .ADR = ISM330DHCX_RM__Y_OFS_USR,
            .val = 0x00u,
        },

        .z_ofs_usr = {
            .ADR = ISM330DHCX_RM__Z_OFS_USR,
            .val = 0x00u,
        },
    };
}
