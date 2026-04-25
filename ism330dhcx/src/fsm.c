/// @file  fsm.c
/// @brief ISM330DHCX FSM Driver

#include "fsm.h"


ism330dhcx_fsm_s ism330dhcx_fsm__get_default_s()
{
    return (ism330dhcx_fsm_s){

        /* Device Registers */

        .status_a_mainpage = {
            .ADR = ISM330DHCX_RM__FSM_STATUS_A_MAINPAGE,
            .bf  = 0x00u,
        },

        .status_b_mainpage = {
            .ADR = ISM330DHCX_RM__FSM_STATUS_B_MAINPAGE,
            .bf  = 0x00u,
        },

        .ef__int1_a = {
            .ADR = ISM330DHCX_RM_EF__FSM_INT1_A,
            .bf  = 0x00u,
        },

        .ef__int1_b = {
            .ADR = ISM330DHCX_RM_EF__FSM_INT1_B,
            .bf  = 0x00u,
        },

        .ef__int2_a = {
            .ADR = ISM330DHCX_RM_EF__FSM_INT2_A,
            .bf  = 0x6Bu,
        },

        .ef__int2_b = {
            .ADR = ISM330DHCX_RM_EF__FSM_INT2_B,
            .bf  = 0x00u,
        },

        .ef__status_a = {
            .ADR = ISM330DHCX_RM_EF__FSM_STATUS_A,
            .bf  = 0x00u,
        },

        .ef__status_b = {
            .ADR = ISM330DHCX_RM_EF__FSM_STATUS_B,
            .bf  = 0x00u,
        },

        .ef__enable_a = {
            .ADR = ISM330DHCX_RM_EF__FSM_ENABLE_A,
            .bf  = 0x00u,
        },

        .ef__enable_b = {
            .ADR = ISM330DHCX_RM_EF__FSM_ENABLE_B,
            .bf  = 0x00u,
        },

        .ef__outs1 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS1,
            .bf  = 0x00u,
        },

        .ef__outs2 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS2,
            .bf  = 0x00u,
        },

        .ef__outs3 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS3,
            .bf  = 0x00u,
        },

        .ef__outs4 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS4,
            .bf  = 0x00u,
        },

        .ef__outs5 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS5,
            .bf  = 0x00u,
        },

        .ef__outs6 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS6,
            .bf  = 0x00u,
        },

        .ef__outs7 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS7,
            .bf  = 0x00u,
        },

        .ef__outs8 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS8,
            .bf  = 0x00u,
        },

        .ef__outs9 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS9,
            .bf  = 0x00u,
        },

        .ef__outs10 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS10,
            .bf  = 0x00u,
        },

        .ef__outs11 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS11,
            .bf  = 0x00u,
        },

        .ef__outs12 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS12,
            .bf  = 0x00u,
        },

        .ef__outs13 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS13,
            .bf  = 0x00u,
        },

        .ef__outs14 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS14,
            .bf  = 0x00u,
        },

        .ef__outs15 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS15,
            .bf  = 0x00u,
        },

        .ef__outs16 = {
            .ADR = ISM330DHCX_RM_EF__FSM_OUTS16,
            .bf  = 0x00u,
        },

        .ef__emb_func_odr_cfg_b = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_ODR_CFG_B,
            .bf  = 0x4Bu,
        },

        .eaf1__programs = {
            .ADR = ISM330DHCX_RM_EAF1__FSM_PROGRAMS,
            .val = 0x00u,
        },

        .eaf1__start_add = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM_EAF1__FSM_START_ADD_L,
                .byte_1 = ISM330DHCX_RM_EAF1__FSM_START_ADD_H,
            },
            .val = 0x0000u,
        },
    };
}
