/// @file  test_compile_static.c
/// @brief Verifies compilation and function of the static or system ISM330DHCX driver


#include <stdio.h>


#ifdef ISM330DHCX_USE_SYSTEM_INCLUDES

#include <ism330dhcx/register_map.h>

#include <ism330dhcx/accelerometer.h>
#include <ism330dhcx/core.h>
#include <ism330dhcx/emag.h>
#include <ism330dhcx/fifo.h>
#include <ism330dhcx/fsm.h>
#include <ism330dhcx/gyroscope.h>
#include <ism330dhcx/mlc.h>
#include <ism330dhcx/motion.h>
#include <ism330dhcx/ois.h>
#include <ism330dhcx/sensor_hub.h>

#include <ism330dhcx/comm/error.h>

#else

#include "ism330dhcx/register_map.h"

#include "ism330dhcx/accelerometer.h"
#include "ism330dhcx/core.h"
#include "ism330dhcx/emag.h"
#include "ism330dhcx/fifo.h"
#include "ism330dhcx/fsm.h"
#include "ism330dhcx/gyroscope.h"
#include "ism330dhcx/mlc.h"
#include "ism330dhcx/motion.h"
#include "ism330dhcx/ois.h"
#include "ism330dhcx/sensor_hub.h"

#include "ism330dhcx/comm/error.h"

#endif /* ISM330DHCX_USE_SYSTEM_INCLUDES */


/// @brief main
/// @param argc
/// @param argv
/// @return non-zero on failure
int main(int argc, char const *argv[])
{
    ism330dhcx_acc_s    acc    = ism330dhcx_acc__get_default_s();
    ism330dhcx_core_s   core   = ism330dhcx_core__get_default_s();
    ism330dhcx_emag_s   emag   = ism330dhcx_emag__get_default_s();
    ism330dhcx_fifo_s   fifo   = ism330dhcx_fifo__get_default_s();
    ism330dhcx_fsm_s    fsm    = ism330dhcx_fsm__get_default_s();
    ism330dhcx_gyr_s    gyr    = ism330dhcx_gyr__get_default_s();
    ism330dhcx_mlc_s    mlc    = ism330dhcx_mlc__get_default_s();
    ism330dhcx_motion_s motion = ism330dhcx_motion__get_default_s();
    ism330dhcx_ois_s    ois    = ism330dhcx_ois__get_default_s();
    ism330dhcx_sh_s     sh     = ism330dhcx_sh__get_default_s();

    ism330dhcx_err_e err_code = ISM330DHCX_ERR__OK;
    const char      *err_str  = ism330dhcx_err__to_str(err_code);

    printf("Hello, World!" "\n");
    return 0;
}
