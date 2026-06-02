/// @file  core.c
/// @brief ISM330DHCX Core Driver

#include "ism330dhcx/core.h"


ism330dhcx_core_s ism330dhcx_core__get_default_s()
{
    return (ism330dhcx_core_s){

        /* Device Registers */

        .func_cfg_access = {
            .ADR = ISM330DHCX_RM__FUNC_CFG_ACCESS,
            .bf  = 0x00u,
        },

        .pin_ctrl = {
            .ADR = ISM330DHCX_RM__PIN_CTRL,
            .bf  = 0x3Fu,
        },


        .int1_ctrl = {
            .ADR = ISM330DHCX_RM__INT1_CTRL,
            .bf  = 0x00u,
        },

        .int2_ctrl = {
            .ADR = ISM330DHCX_RM__INT2_CTRL,
            .bf  = 0x00u,
        },


        .ctrl1_xl = {
            .ADR = ISM330DHCX_RM__CTRL1_XL,
            .bf  = 0x00u,
        },

        .ctrl2_g = {
            .ADR = ISM330DHCX_RM__CTRL2_G,
            .bf  = 0x00u,
        },

        .ctrl3_c = {
            .ADR = ISM330DHCX_RM__CTRL3_C,
            .bf  = 0x04u,
        },

        .ctrl4_c = {
            .ADR = ISM330DHCX_RM__CTRL4_C,
            .bf  = 0x00u,
        },

        .ctrl5_c = {
            .ADR = ISM330DHCX_RM__CTRL5_C,
            .bf  = 0x00u,
        },

        .ctrl6_c = {
            .ADR = ISM330DHCX_RM__CTRL6_C,
            .bf  = 0x00u,
        },

        .ctrl7_g = {
            .ADR = ISM330DHCX_RM__CTRL7_G,
            .bf  = 0x00u,
        },

        .ctrl8_xl = {
            .ADR = ISM330DHCX_RM__CTRL8_XL,
            .bf  = 0x00u,
        },

        .ctrl9_xl = {
            .ADR = ISM330DHCX_RM__CTRL9_XL,
            .bf  = 0xE0u,
        },

        .ctrl10_c = {
            .ADR = ISM330DHCX_RM__CTRL10_C,
            .bf  = 0x00u,
        },


        .status_reg = {
            .ADR = ISM330DHCX_RM__STATUS_REG,
            .bf  = 0x00u,
        },

        .status_spi_aux = {
            .ADR = ISM330DHCX_RM__STATUS_REG,
            .bf  = 0x00u,
        },


        .out_temp = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__OUT_TEMP_L,
                .byte._1 = ISM330DHCX_RM__OUT_TEMP_H
            },
            .val = 0x00u,
        },


        .timestamp = {
            .ADR = {
                .byte._0 = ISM330DHCX_RM__TIMESTAMP0,
                .byte._1 = ISM330DHCX_RM__TIMESTAMP1,
                .byte._2 = ISM330DHCX_RM__TIMESTAMP2,
                .byte._3 = ISM330DHCX_RM__TIMESTAMP3,
            },
            .bf = 0x00u,
        },

        .internal_freq ={
            .ADR = ISM330DHCX_RM__INTERNAL_FREQ_FINE,
            .val = 0x00u
        },


        .ef__page_sel = {
            .ADR = ISM330DHCX_RM_EF__PAGE_SEL,
            .bf  = 0x01u
        },

        .ef__page_address = {
            .ADR = ISM330DHCX_RM_EF__PAGE_ADDRESS,
            .val  = 0x00u
        },

        .ef__page_value = {
            .ADR = ISM330DHCX_RM_EF__PAGE_VALUE,
            .val  = 0x00u
        },

        .ef__page_rw = {
            .ADR = ISM330DHCX_RM_EF__PAGE_RW,
            .bf  = 0x00u
        },


        .ef__emb_func_en_b= {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_EN_B,
            .bf  = 0x00u
        },

        .ef__emb_func_init_b= {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_INIT_B,
            .bf  = 0x00u
        },
    };
}
