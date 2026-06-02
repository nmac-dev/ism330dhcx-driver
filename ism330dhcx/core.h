/// @file  core.h
/// @brief ISM330DHCX Core Driver

#ifndef __ISM330DHCX_CORE_H__
#define __ISM330DHCX_CORE_H__


#include "ism330dhcx/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"


/// @struct ism330dhcx_core
/// @brief  ISM330DHCX Core Struct
typedef struct ism330dhcx_core
{
    /* Device Registers */

    _ism330dhcx_rm__FUNC_CFG_ACCESS_s func_cfg_access;
    _ism330dhcx_rm__PIN_CTRL_s        pin_ctrl;

    _ism330dhcx_rm__INT1_CTRL_s int1_ctrl;
    _ism330dhcx_rm__INT2_CTRL_s int2_ctrl;

    _ism330dhcx_rm__CTRL1_XL_s ctrl1_xl;
    _ism330dhcx_rm__CTRL2_G_s  ctrl2_g;
    _ism330dhcx_rm__CTRL3_C_s  ctrl3_c;
    _ism330dhcx_rm__CTRL4_C_s  ctrl4_c;
    _ism330dhcx_rm__CTRL5_C_s  ctrl5_c;
    _ism330dhcx_rm__CTRL6_C_s  ctrl6_c;
    _ism330dhcx_rm__CTRL7_G_s  ctrl7_g;
    _ism330dhcx_rm__CTRL8_XL_s ctrl8_xl;
    _ism330dhcx_rm__CTRL9_XL_s ctrl9_xl;
    _ism330dhcx_rm__CTRL10_C_s ctrl10_c;

    _ism330dhcx_rm__STATUS_REG_s    status_reg;
    _ism330dhcx_rm__STATUS_SPIAux_s status_spi_aux;

    _ism330dhcx_rm__OUT_TEMP_s out_temp;

    _ism330dhcx_rm__TIMESTAMP_s          timestamp;
    _ism330dhcx_rm__INTERNAL_FREQ_FINE_s internal_freq;

    _ism330dhcx_rm_ef__PAGE_SEL_s      ef__page_sel;
    _ism330dhcx_rm_ef__PAGE_ADDRESS_s  ef__page_address;
    _ism330dhcx_rm_ef__PAGE_VALUE_s    ef__page_value;
    _ism330dhcx_rm_ef__PAGE_RW_s       ef__page_rw;

    _ism330dhcx_rm_ef__EMB_FUNC_EN_B_s   ef__emb_func_en_b;
    _ism330dhcx_rm_ef__EMB_FUNC_INIT_B_s ef__emb_func_init_b;

} ism330dhcx_core_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx Core struct
/// @return default ism330dhcx Core struct
ism330dhcx_core_s ism330dhcx_core__get_default_s();


#endif /* __ISM330DHCX_CORE_H__ */
