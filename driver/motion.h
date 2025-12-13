/// @file  motion.h
/// @brief ISM330DHCX Motion Driver

#ifndef __ISM330DHCX_MOTION_H__
#define __ISM330DHCX_MOTION_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"
#include "ism330dhcx/internal/rm_eaf1_structs.h"


/// @struct ism330dhcx_motion
/// @brief  ISM330DHCX Motion Struct
typedef struct ism330dhcx_motion
{
    /* Device Registers */

    _ism330dhcx_rm__ALL_INT_SRC_s all_int_src;
    _ism330dhcx_rm__WAKE_UP_SRC_s wake_up_src;
    _ism330dhcx_rm__TAP_SRC_s     tap_src;
    _ism330dhcx_rm__D6D_SRC_s     d6d_src;

    _ism330dhcx_rm__EMB_FUNC_STATUS_MAINPAGE_s emb_func_status_mainpage;

    _ism330dhcx_rm__TAP_CFG0_s   tap_cfg0;
    _ism330dhcx_rm__TAP_CFG1_s   tap_cfg1;
    _ism330dhcx_rm__TAP_CFG2_s   tap_cfg2;
    _ism330dhcx_rm__TAP_THS_6D_s tap_ths_6d;
    _ism330dhcx_rm__INT_DUR2_s   int_dur2;

    _ism330dhcx_rm__WAKE_UP_THS_s wake_up_ths;
    _ism330dhcx_rm__WAKE_UP_DUR_s wake_up_dur;
    _ism330dhcx_rm__FREE_FALL_s   free_fall;

    _ism330dhcx_rm__MD1_CFG_s md1_cfg;
    _ism330dhcx_rm__MD2_CFG_s md2_cfg;

    _ism330dhcx_rm_ef__EMB_FUNC_EN_A_s   ef__emb_func_en_a;
    _ism330dhcx_rm_ef__EMB_FUNC_INT1_s   ef__emb_func_int1;
    _ism330dhcx_rm_ef__EMB_FUNC_INT2_s   ef__emb_func_int2;
    _ism330dhcx_rm_ef__EMB_FUNC_STATUS_s ef__emb_func_status;

    _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG_s      ef__emb_func_fifo_cfg;
    _ism330dhcx_rm_ef__FSM_LONG_COUNTER_s       ef__long_counter;
    _ism330dhcx_rm_ef__FSM_LONG_COUNTER_CLEAR_s ef__long_counter_clear;
    _ism330dhcx_rm_ef__STEP_COUNTER_s           ef__step_counter;
    _ism330dhcx_rm_ef__EMB_FUNC_SRC_s           ef__emb_func_src;

    _ism330dhcx_rm_ef__EMB_FUNC_INIT_A_s ef__emb_func_init_a;

    _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_s      eaf1__fsm_lc_timeout;
    _ism330dhcx_rm_eaf1__PEDO_CMD_REG_s        eaf1__pedo_cmd_reg;
    _ism330dhcx_rm_eaf1__PEDO_DEB_STEPS_CONF_s eaf1__pedo_deb_steps_conf;
    _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_s      eaf1__pedo_sc_deltat;

} ism330dhcx_motion_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx Motion struct
/// @return default ism330dhcx Motion struct
ism330dhcx_motion_s ism330dhcx_motion__get_default_s();


#endif /* __ISM330DHCX_MOTION_H__ */
