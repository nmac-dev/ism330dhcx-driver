/// ISM330DHCX FIFO Driver

#ifndef __ISM330DHCX_FIFO_H__
#define __ISM330DHCX_FIFO_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"


/// @struct ism330dhcx_fifo_s
/// @brief  ISM330DHCX FIFO Struct
typedef struct ism330dhcx_fifo_s
{
    /* Specs */
    /* Control Registers */

    _ism330dhcx_rm__FIFO_CTRL1_t ctrl1;
    _ism330dhcx_rm__FIFO_CTRL2_t ctrl2;
    _ism330dhcx_rm__FIFO_CTRL3_t ctrl3;
    _ism330dhcx_rm__FIFO_CTRL4_t ctrl4;

    _ism330dhcx_rm__COUNTER_BDR_REG1_t counter_bdr_reg1;
    _ism330dhcx_rm__COUNTER_BDR_REG2_t counter_bdr_reg2;

    _ism330dhcx_rm__FIFO_STATUS1_s status1;
    _ism330dhcx_rm__FIFO_STATUS2_s status2;

    _ism330dhcx_rm__FIFO_DATA_OUT_TAG_t data_out_tag;
    _ism330dhcx_rm__FIFO_DATA_OUT_X_t   data_out_x;
    _ism330dhcx_rm__FIFO_DATA_OUT_Y_t   data_out_y;
    _ism330dhcx_rm__FIFO_DATA_OUT_Z_t   data_out_z;

    _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG_t ef__emb_func_fifo_cfg;

    /* Configuration */

} ism330dhcx_fifo_t;


/// @brief  Fetches the default struct configuration for the ism330dhcx FIFO struct
/// @return default ism330dhcx FIFO struct
ism330dhcx_fifo_t ism330dhcx_fifo__get_default_s();

#endif /* __ISM330DHCX_FIFO_H__ */
