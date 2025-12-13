/// @file  emag.h
/// @brief ISM330DHCX External Magnetometer Driver

#ifndef __ISM330DHCX_EMAG_H__
#define __ISM330DHCX_EMAG_H__


#include "c-nstd/types.h"
#include "ism330dhcx/internal/rm_eaf0_structs.h"


/// @struct ism330dhcx_emag
/// @brief  ISM330DHCX External Magnetometer Struct
/// @note   All External Magnetometer registers are EAF0
typedef struct ism330dhcx_emag
{
    /* Device Registers */

    _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_s sensitivity;

    _ism330dhcx_rm_eaf0__MAG_OFFX_s offx;
    _ism330dhcx_rm_eaf0__MAG_OFFY_s offy;
    _ism330dhcx_rm_eaf0__MAG_OFFZ_s offz;

    _ism330dhcx_rm_eaf0__MAG_SI_XX_s si_xx;
    _ism330dhcx_rm_eaf0__MAG_SI_XY_s si_xy;
    _ism330dhcx_rm_eaf0__MAG_SI_XZ_s si_xz;
    _ism330dhcx_rm_eaf0__MAG_SI_YY_s si_yy;
    _ism330dhcx_rm_eaf0__MAG_SI_YZ_s si_yz;
    _ism330dhcx_rm_eaf0__MAG_SI_ZZ_s si_zz;

    _ism330dhcx_rm_eaf0__MAG_CFG_A_s cfg_a;
    _ism330dhcx_rm_eaf0__MAG_CFG_B_s cfg_b;

} ism330dhcx_emag_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx External Magnetometer struct
/// @return default ism330dhcx External Magnetometer struct
ism330dhcx_emag_s ism330dhcx_emag__get_default_s();


#endif /* __ISM330DHCX_EMAG_H__ */
