/// @file  internal/rm_eaf0_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Advanced Features (Page 0) Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EAF0_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EAF0_STRUCTS_H__


#include "ism330dhcx/types.h"


/// NOTE: Embedded advanced features page 0 registers are accessible when PAGE_SEL[3:0] are set to 0000 in PAGE_SEL


/* Magnetometer Calibration Registers */


/// @typedef _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_L
/// @brief  ISM330DHCX External magnetometer sensitivity (LSB) [r/w] {0x24}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_H
/// @brief  ISM330DHCX External magnetometer sensitivity (MSB) [r/w] {0x16}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SENSITIVITY
/// @brief  ISM330DHCX External magnetometer sensitivity [r/w] {0x1624}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SENSITIVITY_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFX_L
/// @brief  ISM330DHCX Offset for X-axis hard-iron compensation (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFX_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFX_H
/// @brief  ISM330DHCX Offset for X-axis hard-iron compensation (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFX_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFX
/// @brief  ISM330DHCX Offset for X-axis hard-iron compensation [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_OFFX_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFY_L
/// @brief  ISM330DHCX Offset for Y-axis hard-iron compensation (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFY_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFY_H
/// @brief  ISM330DHCX Offset for Y-axis hard-iron compensation (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFY_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFY
/// @brief  ISM330DHCX Offset for Y-axis hard-iron compensation [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_OFFY_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFZ_L
/// @brief  ISM330DHCX Offset for Z-axis hard-iron compensation (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFZ_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFZ_H
/// @brief  ISM330DHCX Offset for Z-axis hard-iron compensation (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_OFFZ_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_OFFZ
/// @brief  ISM330DHCX Offset for Z-axis hard-iron compensation [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_OFFZ_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XX_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XX_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XX_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x3C}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XX_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XX
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x3C00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_XX_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XY_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XY_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XY_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XY_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XY
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_XY_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_XZ_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XY_L_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_XZ_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_XY_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_XZ
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_XZ_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_YY_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_YY_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_YY_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x3C}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_YY_H_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_YY
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x3C00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_YY_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_YZ_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_YZ_L_s;


/// @typedef _ism330dhcx_rm_eaf0__MAG_SI_YZ_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_YZ_H_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_YY
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x0000}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_YZ_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_YZ_L
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (LSB) [r/w] {0x00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_ZZ_L_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_YZ_H
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register (MSB) [r/w] {0x3C}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u8_s _ism330dhcx_rm_eaf0__MAG_SI_ZZ_H_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_SI_YY
/// @brief  ISM330DHCX Soft-iron (3x3 symmetric) matrix correction register [r/w] {0x3C00}
/// @note   value is expressed as half-precision floating-point format <SEEEEEFFFFFFFFFF>
typedef reg_u16_s _ism330dhcx_rm_eaf0__MAG_SI_ZZ_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_CFG_A
/// @brief  ISM330DHCX External magnetometer coordinates (Z and Y axes) rotation register (A) [r/w] {0x05}
typedef struct _ism330dhcx_rm_eaf0__MAG_CFG_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t MAG_Z_AXIS   : 3;    // [2:0] Magnetometer Z-axis coordinates rotation {101}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                 {0}
            u8_t MAG_Y_AXIS   : 1;    // [6:4] Magnetometer Y-axis coordinates rotation {000}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                                 {0}
        };
    } bf;

} _ism330dhcx_rm_eaf0__MAG_CFG_A_s;


/// @struct _ism330dhcx_rm_eaf0__MAG_CFG_B
/// @brief  ISM330DHCX External magnetometer coordinates (X-axis) rotation register (B) [r/w] {0x02}
typedef struct _ism330dhcx_rm_eaf0__MAG_CFG_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t MAG_X_AXIS : 3;    // [2:0] Magnetometer X-axis coordinates rotation {010}
            u8_t RESERVED_3 : 1;    // [3]   Reserved                                 {0}
            u8_t RESERVED_4 : 1;    // [4]   Reserved                                 {0}
            u8_t RESERVED_5 : 1;    // [5]   Reserved                                 {0}
            u8_t RESERVED_6 : 1;    // [6]   Reserved                                 {0}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                 {0}
        };
    } bf;

} _ism330dhcx_rm_eaf0__MAG_CFG_B_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EAF0_STRUCTS_H__ */
