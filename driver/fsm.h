/// ISM330DHCX FSM Driver

#ifndef __ISM330DHCX_FSM_H__
#define __ISM330DHCX_FSM_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"
#include "ism330dhcx/internal/rm_eaf1_structs.h"


/// @struct ism330dhcx_fsm_s
/// @brief  ISM330DHCX FSM Struct
typedef struct ism330dhcx_fsm_s
{
    /* Specs */
    /* Control Registers */

    _ism330dhcx_rm__FSM_STATUS_A_MAINPAGE_t status_a_mainpage;
    _ism330dhcx_rm__FSM_STATUS_B_MAINPAGE_t status_b_mainpage;

    _ism330dhcx_rm_ef__FSM_INT1_A_t ef__int1_a;
    _ism330dhcx_rm_ef__FSM_INT1_B_t ef__int1_b;

    _ism330dhcx_rm_ef__FSM_INT2_A_t ef__int2_a;
    _ism330dhcx_rm_ef__FSM_INT2_B_t ef__int2_b;

    _ism330dhcx_rm_ef__FSM_STATUS_A_t ef__status_a;
    _ism330dhcx_rm_ef__FSM_STATUS_B_t ef__status_b;

    _ism330dhcx_rm_ef__FSM_ENABLE_A_t ef__enable_a;
    _ism330dhcx_rm_ef__FSM_ENABLE_B_t ef__enable_b;

    _ism330dhcx_rm_ef__FSM_OUTS1_t  ef__outs1;
    _ism330dhcx_rm_ef__FSM_OUTS2_t  ef__outs2;
    _ism330dhcx_rm_ef__FSM_OUTS3_t  ef__outs3;
    _ism330dhcx_rm_ef__FSM_OUTS4_t  ef__outs4;
    _ism330dhcx_rm_ef__FSM_OUTS5_t  ef__outs5;
    _ism330dhcx_rm_ef__FSM_OUTS6_t  ef__outs6;
    _ism330dhcx_rm_ef__FSM_OUTS7_t  ef__outs7;
    _ism330dhcx_rm_ef__FSM_OUTS8_t  ef__outs8;
    _ism330dhcx_rm_ef__FSM_OUTS9_t  ef__outs9;
    _ism330dhcx_rm_ef__FSM_OUTS10_t ef__outs10;
    _ism330dhcx_rm_ef__FSM_OUTS11_t ef__outs11;
    _ism330dhcx_rm_ef__FSM_OUTS12_t ef__outs12;
    _ism330dhcx_rm_ef__FSM_OUTS13_t ef__outs13;
    _ism330dhcx_rm_ef__FSM_OUTS14_t ef__outs14;
    _ism330dhcx_rm_ef__FSM_OUTS15_t ef__outs15;
    _ism330dhcx_rm_ef__FSM_OUTS16_t ef__outs16;

    _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_t eaf1__lc_timeout;
    _ism330dhcx_rm_eaf1__FSM_PROGRAMS_t   eaf1__programs;
    _ism330dhcx_rm_eaf1__FSM_START_ADD_t  eaf1__start_add;

    /* Configuration */

} ism330dhcx_fsm_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx FSM struct
/// @return default ism330dhcx FSM struct
ism330dhcx_fsm_t ism330dhcx_fsm__get_default_s();

#endif /* __ISM330DHCX_FSM_H__ */
