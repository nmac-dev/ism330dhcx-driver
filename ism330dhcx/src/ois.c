/// @file  ois.c
/// @brief ISM330DHCX Optical Image Stabilisation Driver

#include "ois.h"


ism330dhcx_ois_s ism330dhcx_ois__get_default_s()
{
    return (ism330dhcx_ois_s){

        /* Device Registers */

        .int_st = {
            .ADR = ISM330DHCX_RM__INT_OIS,
            .bf  = 0x00u,
        },

        .ctrl1 = {
            .ADR = ISM330DHCX_RM__CTRL1_OIS,
            .bf  = 0x00u,
        },

        .ctrl2 = {
            .ADR = ISM330DHCX_RM__CTRL2_OIS,
            .bf  = 0x00u,
        },

        .ctrl3 = {
            .ADR = ISM330DHCX_RM__CTRL3_OIS,
            .bf  = 0x00u,
        },
    };
}
