/// @file  fifo.h
/// @brief ISM330DHCX FIFO Driver

#ifndef __ISM330DHCX_FIFO_H__
#define __ISM330DHCX_FIFO_H__


#include "c-nstd/types.h"
#include "ism330dhcx/register_map.h"
#include "ism330dhcx/internal/rm_structs.h"
#include "ism330dhcx/internal/rm_ef_structs.h"


/// @struct ism330dhcx_fifo
/// @brief  ISM330DHCX FIFO Struct
typedef struct ism330dhcx_fifo
{
    /* Device Registers */

    _ism330dhcx_rm__FIFO_CTRL1_s ctrl1;
    _ism330dhcx_rm__FIFO_CTRL2_s ctrl2;
    _ism330dhcx_rm__FIFO_CTRL3_s ctrl3;
    _ism330dhcx_rm__FIFO_CTRL4_s ctrl4;

    _ism330dhcx_rm__COUNTER_BDR_REG1_s counter_bdr_reg1;
    _ism330dhcx_rm__COUNTER_BDR_REG2_s counter_bdr_reg2;

    _ism330dhcx_rm__FIFO_STATUS1_s status1;
    _ism330dhcx_rm__FIFO_STATUS2_s status2;

    _ism330dhcx_rm__FIFO_DATA_OUT_TAG_s data_out_tag;
    _ism330dhcx_rm__FIFO_DATA_OUT_X_s   data_out_x;
    _ism330dhcx_rm__FIFO_DATA_OUT_Y_s   data_out_y;
    _ism330dhcx_rm__FIFO_DATA_OUT_Z_s   data_out_z;

} ism330dhcx_fifo_s;


/// @brief  Fetches the default struct configuration for the ism330dhcx FIFO struct
/// @return default ism330dhcx FIFO struct
ism330dhcx_fifo_s ism330dhcx_fifo__get_default_s();


#endif /* __ISM330DHCX_FIFO_H__ */
