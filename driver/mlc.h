/// @file  mlc.h
/// @brief ISM330DHCX MLC Driver

#ifndef __ISM330DHCX_MLC_H__
#define __ISM330DHCX_MLC_H__


#include "c-nstd/types.h"
#include "register_map.h"
#include "internal/rm_structs.h"
#include "internal/rm_ef_structs.h"
#include "internal/rm_eaf1_structs.h"


/// @struct ism330dhcx_mlc
/// @brief  ISM330DHCX MLC Struct
typedef struct ism330dhcx_mlc
{
    /* Device Registers */

    _ism330dhcx_rm__MLC_STATUS_MAINPAGE_s status_mainpage;

    _ism330dhcx_rm_ef__MLC_INT1_s int1;
    _ism330dhcx_rm_ef__MLC_INT2_s int2;

    _ism330dhcx_rm_ef__MLC_STATUS_s ef__status;

    _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_C_s ef__emb_func_odr_cfg_c;

    _ism330dhcx_rm_ef__MLC0_SRC_s ef__0_src;
    _ism330dhcx_rm_ef__MLC1_SRC_s ef__1_src;
    _ism330dhcx_rm_ef__MLC2_SRC_s ef__2_src;
    _ism330dhcx_rm_ef__MLC3_SRC_s ef__3_src;
    _ism330dhcx_rm_ef__MLC4_SRC_s ef__4_src;
    _ism330dhcx_rm_ef__MLC5_SRC_s ef__5_src;
    _ism330dhcx_rm_ef__MLC6_SRC_s ef__6_src;
    _ism330dhcx_rm_ef__MLC7_SRC_s ef__7_src;

    _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_s eaf1__mag_sensitivity;

} ism330dhcx_mlc_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx MLC struct
/// @return default ism330dhcx MLC struct
ism330dhcx_mlc_s ism330dhcx_mlc__get_default_s();


#endif /* __ISM330DHCX_MLC_H__ */
