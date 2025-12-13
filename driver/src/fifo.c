/// @file  fifo.c
/// @brief ISM330DHCX FIFO Driver

#include "ism330dhcx/fifo.h"


ism330dhcx_fifo_s ism330dhcx_fifo__get_default_s()
{
    return (ism330dhcx_fifo_s){

        /* Device Registers */

        .ctrl1 = {
            .ADR = ISM330DHCX_RM__FIFO_CTRL1,
            .bf  = 0x00u,
        },

        .ctrl2 = {
            .ADR = ISM330DHCX_RM__FIFO_CTRL2,
            .bf  = 0x00u,
        },

        .ctrl3 = {
            .ADR = ISM330DHCX_RM__FIFO_CTRL3,
            .bf  = 0x00u,
        },

        .ctrl4 = {
            .ADR = ISM330DHCX_RM__FIFO_CTRL4,
            .bf  = 0x00u,
        },

        .counter_bdr_reg1 = {
            .ADR = ISM330DHCX_RM__COUNTER_BDR_REG1,
            .bf  = 0x00u,
        },

        .counter_bdr_reg2 = {
            .ADR = ISM330DHCX_RM__COUNTER_BDR_REG2,
            .bf  = 0x00u,
        },

        .status1 = {
            .ADR = ISM330DHCX_RM__FIFO_STATUS1,
            .bf  = 0x00u,
        },

        .status2 = {
            .ADR = ISM330DHCX_RM__FIFO_STATUS2,
            .bf  = 0x00u,
        },

        .data_out_tag = {
            .ADR = ISM330DHCX_RM__FIFO_DATA_OUT_TAG,
            .bf  = 0x00u,
        },

        .data_out_x = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM__FIFO_DATA_OUT_X_L,
                .byte_1 = ISM330DHCX_RM__FIFO_DATA_OUT_X_H,
            },
            .val = 0x0000u,
        },

        .data_out_y = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM__FIFO_DATA_OUT_Y_L,
                .byte_1 = ISM330DHCX_RM__FIFO_DATA_OUT_Y_H,
            },
            .val = 0x0000u,
        },

        .data_out_z = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM__FIFO_DATA_OUT_Z_L,
                .byte_1 = ISM330DHCX_RM__FIFO_DATA_OUT_Z_H,
            },
            .val = 0x0000u,
        },
    };
}
