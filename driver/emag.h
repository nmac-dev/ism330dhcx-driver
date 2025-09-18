/// ISM330DHCX External Magnetometer Driver

#ifndef __ISM330DHCX_EMAG_H__
#define __ISM330DHCX_EMAG_H__


#include "c-nstd/types.h"
#include "ism330dhcx/internal/rm_eaf0_structs.h"


/// @struct ism330dhcx_emag_s
/// @brief  ISM330DHCX External Magnetometer Struct
/// @note   All External Magnetometer registers are EAF0
typedef struct ism330dhcx_emag_s
{
    /* Specs */
    /* Control Registers */

    _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_t sensitivity;

    _ism330dhcx_rm_eaf0__MAG_OFFX_t offx;
    _ism330dhcx_rm_eaf0__MAG_OFFY_t offy;
    _ism330dhcx_rm_eaf0__MAG_OFFZ_t offz;

    _ism330dhcx_rm_eaf0__MAG_SI_XX_t si_xx;
    _ism330dhcx_rm_eaf0__MAG_SI_XY_t si_xy;
    _ism330dhcx_rm_eaf0__MAG_SI_XZ_t si_xz;
    _ism330dhcx_rm_eaf0__MAG_SI_YY_t si_yy;
    _ism330dhcx_rm_eaf0__MAG_SI_YZ_t si_yz;
    _ism330dhcx_rm_eaf0__MAG_SI_ZZ_t si_zz;

    _ism330dhcx_rm_eaf0__MAG_CFG_A_t cfg_a;
    _ism330dhcx_rm_eaf0__MAG_CFG_B_t cfg_b;

    /* Configuration */

} ism330dhcx_emag_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx External Magnetometer struct
/// @return default ism330dhcx External Magnetometer struct
ism330dhcx_emag_t ism330dhcx_emag__get_default_s();

#endif /* __ISM330DHCX_EMAG_H__ */
