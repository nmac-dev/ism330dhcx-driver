/// @file  motion.c
/// @brief ISM330DHCX Motion Driver

#include "motion.h"


ism330dhcx_motion_s ism330dhcx_motion__get_default_s()
{
    return (ism330dhcx_motion_s){

        /* Device Registers */

        .all_int_src = {
            .ADR = ISM330DHCX_RM__ALL_INT_SRC,
            .bf  = 0x00u,
        },

        .wake_up_src = {
            .ADR = ISM330DHCX_RM__WAKE_UP_SRC,
            .bf  = 0x00u,
        },

        .tap_src = {
            .ADR = ISM330DHCX_RM__TAP_SRC,
            .bf  = 0x00u,
        },

        .d6d_src = {
            .ADR = ISM330DHCX_RM__D6D_SRC,
            .bf  = 0x00u,
        },

        .emb_func_status_mainpage = {
            .ADR = ISM330DHCX_RM__EMB_FUNC_STATUS_MAINPAGE,
            .bf  = 0x00u,
        },

        .tap_cfg0 = {
            .ADR = ISM330DHCX_RM__TAP_CFG0,
            .bf  = 0x00u,
        },

        .tap_cfg1 = {
            .ADR = ISM330DHCX_RM__TAP_CFG1,
            .bf  = 0x00u,
        },

        .tap_cfg2 = {
            .ADR = ISM330DHCX_RM__TAP_CFG2,
            .bf  = 0x00u,
        },

        .tap_ths_6d = {
            .ADR = ISM330DHCX_RM__TAP_THS_6D,
            .bf  = 0x00u,
        },

        .int_dur2 = {
            .ADR = ISM330DHCX_RM__INT_DUR2,
            .bf  = 0x00u,
        },

        .wake_up_ths = {
            .ADR = ISM330DHCX_RM__WAKE_UP_THS,
            .bf  = 0x00u,
        },

        .wake_up_dur = {
            .ADR = ISM330DHCX_RM__WAKE_UP_DUR,
            .bf  = 0x00u,
        },

        .free_fall = {
            .ADR = ISM330DHCX_RM__FREE_FALL,
            .bf  = 0x00u,
        },

        .md1_cfg = {
            .ADR = ISM330DHCX_RM__MD1_CFG,
            .bf  = 0x00u,
        },

        .md2_cfg = {
            .ADR = ISM330DHCX_RM__MD2_CFG,
            .bf  = 0x00u,
        },

        .ef__emb_func_en_a = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_EN_A,
            .bf  = 0x00u,
        },

        .ef__emb_func_int1 = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_INT1,
            .bf  = 0x00u,
        },

        .ef__emb_func_int2 = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_INT2,
            .bf  = 0x00u,
        },

        .ef__emb_func_status = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_STATUS,
            .bf  = 0x00u,
        },

        .ef__emb_func_fifo_cfg = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_FIFO_CFG,
            .bf  = 0x00u,
        },

        .ef__long_counter = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM_EF__FSM_LONG_COUNTER_L,
                .byte_1 = ISM330DHCX_RM_EF__FSM_LONG_COUNTER_H,
            },
            .val = 0x0000u,
        },

        .ef__long_counter_clear = {
            .ADR = ISM330DHCX_RM_EF__FSM_LONG_COUNTER_CLEAR,
            .bf  = 0x00u,
        },

        .ef__step_counter = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM_EF__STEP_COUNTER_L,
                .byte_1 = ISM330DHCX_RM_EF__STEP_COUNTER_H,
            },
            .val = 0x0000u,
        },

        .ef__emb_func_src = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_SRC,
            .bf  = 0x00u,
        },

        .ef__emb_func_init_a = {
            .ADR = ISM330DHCX_RM_EF__EMB_FUNC_INIT_A,
            .bf  = 0x00u,
        },

        .eaf1__fsm_lc_timeout = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM_EAF1__FSM_LC_TIMEOUT_L,
                .byte_1 = ISM330DHCX_RM_EAF1__FSM_LC_TIMEOUT_H,
            },
            .val = 0x0000u,
        },

        .eaf1__pedo_cmd_reg = {
            .ADR = ISM330DHCX_RM_EAF1__PEDO_CMD_REG,
            .bf = 0x00u,
        },

        .eaf1__pedo_deb_steps_conf = {
            .ADR = ISM330DHCX_RM_EAF1__PEDO_DEB_STEPS_CONF,
            .val = 0x0Au,
        },

        .eaf1__pedo_sc_deltat = {
            .ADR = {
                .byte_0 = ISM330DHCX_RM_EAF1__PEDO_SC_DELTAT_L,
                .byte_1 = ISM330DHCX_RM_EAF1__PEDO_SC_DELTAT_H,
            },
            .val = 0x0000u,
        },
    };
}
