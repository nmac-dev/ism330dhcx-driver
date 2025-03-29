/// @file  internal/rm_eaf1_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Advanced Features (Page 1) Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__


#include "c-nstd/types.h"


/// NOTE: Embedded advanced features page 1 registers are accessible when PAGE_SEL[3:0] are set to 0001 in PAGE_SEL


/* Finite State Machine (FSM) Configuration Registers */


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_L_s
/// @brief  ISM330DHCX FSM long counter timeout register (LSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_L_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_H_s
/// @brief  ISM330DHCX FSM long counter timeout register (MSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_H_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_s
/// @brief  ISM330DHCX FSM long counter timeout register [r/w] {0x0000}
typedef reg_u16_s _ism330dhcx_rm_eaf1__FSM_LC_TIMEOUT_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_PROGRAMS_s
/// @brief  ISM330DHCX FSM number of programs register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_PROGRAMS_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_L_s
/// @brief  ISM330DHCX FSM start address register (LSB) [r/w] {0x00}
/// @note   First available address is 0x033C
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_START_ADD_L_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_H_s
/// @brief  ISM330DHCX FSM start address register (MSB) [r/w] {0x00}
/// @note   First available address is 0x033C
typedef reg_u8_s _ism330dhcx_rm_eaf1__FSM_START_ADD_H_s;


/// @struct _ism330dhcx_rm_eaf1__FSM_START_ADD_s
/// @brief  ISM330DHCX FSM start address register [r/w] {0x0000}
/// @note   First available address is 0x033C
typedef reg_u16_s _ism330dhcx_rm_eaf1__FSM_START_ADD_s;


/* Pedometer Configuration Registers */


/// @struct _ism330dhcx_rm_eaf1__PEDO_CMD_REG_s
/// @brief  ISM330DHCX Pedometer configuration register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0     : 1;    // [0]   Reserved                                                               {0}
            u8_t RESERVED_1     : 1;    // [1]   Reserved                                                               {0}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                                               {0}
            u8_t CARRY_COUNT_EN : 1;    // [3]   Set when user wants to generate interrupt only on count overflow event {0}
            u8_t RESERVED_4     : 1;    // [4]   Reserved                                                               {0}
            u8_t RESERVED_5     : 1;    // [5]   Reserved                                                               {0}
            u8_t RESERVED_6     : 1;    // [6]   Reserved                                                               {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                                               {0}
        };
    } bf;

} _ism330dhcx_rm_eaf1__PEDO_CMD_REG_s;


/// @struct _ism330dhcx_rm_eaf1__PEDO_DEB_STEPS_CONF_s
/// @brief  ISM330DHCX Pedometer debounce configuration register [r/w] {0x0A}
typedef reg_u8_s _ism330dhcx_rm_eaf1__PEDO_DEB_STEPS_CONF_s;


/// @struct _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_L_s
/// @brief  ISM330DHCX Time period register for step detection on delta time (LSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_L_s;


/// @struct _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_H_s
/// @brief  ISM330DHCX Time period register for step detection on delta time (MSB) [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_H_s;


/// @struct _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_s
/// @brief  ISM330DHCX Time period register for step detection on delta time [r/w] {0x0000}
typedef reg_u16_s _ism330dhcx_rm_eaf1__PEDO_SC_DELTAT_s;


/* Machine Learning Core (MLC) Configuration Registers */


/// @struct _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_L_s
/// @brief  ISM330DHCX External magnetometer sensitivity value register for the Machine Learning Core (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_L_s;


/// @struct _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_H_s
/// @brief  ISM330DHCX External magnetometer sensitivity value register for the Machine Learning Core (MSB) [r/w] {0x3C}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_H_s;


/// @struct _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_s
/// @brief  ISM330DHCX External magnetometer sensitivity value register for the Machine Learning Core [r/w] {0x3C00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf1__MLC_MAG_SENSITIVITY_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EAF1_STRUCTS_H__ */
