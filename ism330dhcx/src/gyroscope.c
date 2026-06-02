/// @file  gyroscope.c
/// @brief ISM330DHCX Gyroscope Driver

#include "ism330dhcx/gyroscope.h"


ism330dhcx_gyr_s ism330dhcx_gyr__get_default_s()
{
    return (ism330dhcx_gyr_s){

        /* Device Registers */

        .outx = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTX_L_G,
                .byte._1 = ISM330DHCX_RM__OUTX_H_G,
            },
            .val = 0x0000u,
        },

        .outy = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTY_L_G,
                .byte._1 = ISM330DHCX_RM__OUTY_H_G,
            },
            .val = 0x0000u,
        },

        .outz = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUTZ_L_G,
                .byte._1 = ISM330DHCX_RM__OUTZ_H_G,
            },
            .val = 0x0000u,
        },
    };
}
