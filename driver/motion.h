/// ISM330DHCX Motion Driver

#ifndef __ISM330DHCX_MOTION_H__
#define __ISM330DHCX_MOTION_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"
#include "ism330dhcx/internal/rm_eaf1_structs.h"


/// @struct ism330dhcx_motion_s
/// @brief  ISM330DHCX Motion Struct
typedef struct ism330dhcx_motion_s
{
    /* Specs */
    /* Control Registers */

    _ism330dhcx_rm__ALL_INT_SRC_t all_int_src;
    _ism330dhcx_rm__WAKE_UP_SRC_t wake_up_src;
    _ism330dhcx_rm__TAP_SRC_t     tap_src;
    _ism330dhcx_rm__D6D_SRC_t     d6d_src;

    _ism330dhcx_rm__EMB_FUNC_STATUS_MAINPAGE_t emb_func_status_mainpage;

    _ism330dhcx_rm__TAP_CFG0_t   tap_cfg0;
    _ism330dhcx_rm__TAP_CFG1_t   tap_cfg1;
    _ism330dhcx_rm__TAP_CFG2_t   tap_cfg2;
    _ism330dhcx_rm__TAP_THS_6D_t tap_ths_6d;
    _ism330dhcx_rm__INT_DUR2_t   int_dur2;

    _ism330dhcx_rm__WAKE_UP_THS_t wake_up_ths;
    _ism330dhcx_rm__WAKE_UP_DUR_t wake_up_dur;
    _ism330dhcx_rm__FREE_FALL_t   free_fall;

    _ism330dhcx_rm__MD1_CFG_t md1_cfg;
    _ism330dhcx_rm__MD2_CFG_t md2_cfg;

    _ism330dhcx_rm_ef__EMB_FUNC_EN_A_t   ef__emb_func_en_a;
    _ism330dhcx_rm_ef__EMB_FUNC_INT1_t   ef__emb_func_int1;
    _ism330dhcx_rm_ef__EMB_FUNC_INT2_t   ef__emb_func_int2;
    _ism330dhcx_rm_ef__EMB_FUNC_STATUS_t ef__emb_func_status;

    _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG_t      ef__emb_func_fifo_cfg;
    _ism330dhcx_rm_ef__FSM_LONG_COUNTER_t       ef__long_counter;
    _ism330dhcx_rm_ef__FSM_LONG_COUNTER_CLEAR_t ef__long_counter_clear;
    _ism330dhcx_rm_ef__STEP_COUNTER_t           ef__step_counter;
    _ism330dhcx_rm_ef__EMB_FUNC_SRC_t           ef__emb_func_src;

    _ism330dhcx_rm_ef__EMB_FUNC_INIT_A_t ef__emb_func_init_a;

    _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_t      eaf1__fsm_lc_timeout;
    _ism330dhcx_rm_eaf1__PEDO_CMD_REG_t        eaf1__pedo_cmd_reg;
    _ism330dhcx_rm_eaf1__PEDO_DEB_STEPS_CONF_t eaf1__pedo_deb_steps_conf;
    _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_t      eaf1__pedo_sc_deltat;

    /* Configuration */

} ism330dhcx_motion_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx Motion struct
/// @return default ism330dhcx Motion struct
ism330dhcx_motion_t ism330dhcx_motion__get_default_s();

#endif /* __ISM330DHCX_MOTION_H__ */
