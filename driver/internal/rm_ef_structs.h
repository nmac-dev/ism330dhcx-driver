/// @file  internal/rm_ef_structs.h
/// @brief ISM330DHCX Internal Structs for Embedded Functions Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__


#include "c-nstd/types.h"


/// NOTE:  Embedded functions registers are accessible when FUNC_CFG_EN is set to '1' in FUNC_CFG_ACCESS


/* General Configuration Registers */


/// @struct _ism330dhcx_rm_ef__PAGE_SEL
/// @brief  ISM330DHCX Enable advanced features dedicated page [r/w] {0x01}
typedef struct _ism330dhcx_rm_ef__PAGE_SEL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                    {1}
            u8_t RESERVED_1   : 1;    // [1]   Reserved                                    {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved                                    {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                    {0}
            u8_t PAGE_SEL     : 4;    // [7:4] Select the advanced features dedicated page {0000}
        };
    } bf;

} _ism330dhcx_rm_ef__PAGE_SEL_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN_A
/// @brief  ISM330DHCX Embedded functions enable register (A) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_EN_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0     : 1;    // [0]   Reserved                                     {0}
            u8_t RESERVED_1     : 1;    // [1]   Reserved                                     {0}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                     {0}
            u8_t PEDO_EN        : 1;    // [3]   Enable pedometer algorithm                   {0}
            u8_t TILT_EN        : 1;    // [4]   Enable tilt calculation                      {0}
            u8_t SIGN_MOTION_EN : 1;    // [5]   Enable significant motion detection function {0}
            u8_t RESERVED_6     : 1;    // [6]   Reserved                                     {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                     {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_A_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN_B
/// @brief  ISM330DHCX Embedded functions enable register (B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_EN_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register
        struct {
            u8_t FSM_EN        : 1;    // [0]   Enable Finite State Machine (FSM) feature {0}
            u8_t RESERVED_1    : 1;    // [1]   Reserved                                  {0}
            u8_t RESERVED_2    : 1;    // [2]   Reserved                                  {0}
            u8_t FIFO_COMPR_EN : 1;    // [1]   Enable FIFO compression feature           {0}
            u8_t MLC_EN        : 1;    // [2]   Enable Machine Learning Core feature      {0}
            u8_t RESERVED_5    : 1;    // [5]   Reserved                                  {0}
            u8_t RESERVED_6    : 1;    // [6]   Reserved                                  {0}
            u8_t RESERVED_7    : 1;    // [7]   Reserved                                  {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_B_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_EN
/// @brief  ISM330DHCX Embedded functions enable register (A|B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_EN
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                      // [15:0] Full value of the register
        struct {
            u16_t RESERVED_0     : 1;    // [0]    Reserved                                     {0}
            u16_t RESERVED_1     : 1;    // [1]    Reserved                                     {0}
            u16_t RESERVED_2     : 1;    // [2]    Reserved                                     {0}
            u16_t PEDO_EN        : 1;    // [3]    Enable pedometer algorithm                   {0}
            u16_t TILT_EN        : 1;    // [4]    Enable tilt calculation                      {0}
            u16_t SIGN_MOTION_EN : 1;    // [5]    Enable significant motion detection function {0}
            u16_t RESERVED_6     : 1;    // [6]    Reserved                                     {0}
            u16_t RESERVED_7     : 1;    // [7]    Reserved                                     {0}
            u16_t FSM_EN         : 1;    // [8]    Enable Finite State Machine (FSM) feature    {0}
            u16_t RESERVED_9     : 1;    // [9]    Reserved                                     {0}
            u16_t RESERVED_10    : 1;    // [10]   Reserved                                     {0}
            u16_t FIFO_COMPR_EN  : 1;    // [11]   Enable FIFO compression feature              {0}
            u16_t MLC_EN         : 1;    // [12]   Enable Machine Learning Core feature         {0}
            u16_t RESERVED_13    : 1;    // [13]   Reserved                                     {0}
            u16_t RESERVED_14    : 1;    // [14]   Reserved                                     {0}
            u16_t RESERVED_15    : 1;    // [15]   Reserved                                     {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_EN_s;


/// @typedef _ism330dhcx_rm_ef__PAGE_ADDRESS
/// @brief  ISM330DHCX Page address register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_ef__PAGE_ADDRESS_s;


/// @typedef _ism330dhcx_rm_ef__PAGE_VALUE
/// @brief  ISM330DHCX Page value register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_ef__PAGE_VALUE_s;


/* Interrupt Configuration Registers */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INT1
/// @brief  ISM330DHCX EMB FUNC INT1 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_INT1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0         : 1;    // [0]   Reserved                                                    {0}
            u8_t RESERVED_1         : 1;    // [1]   Reserved                                                    {0}
            u8_t RESERVED_2         : 1;    // [2]   Reserved                                                    {0}
            u8_t INT1_STEP_DETECTOR : 1;    // [3]   Routing of pedometer step recognition event on INT1         {0}
            u8_t INT1_TILT          : 1;    // [4]   Routing of tilt event on INT1                               {0}
            u8_t INT1_SIG_MOT       : 1;    // [5]   Routing of significant motion event on INT1                 {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                                    {0}
            u8_t INT1_FSM_LC        : 1;    // [7]   Routing of FSM long counter timeout interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INT1_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1_A
/// @brief  ISM330DHCX FSM INT1 pin control register (A) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_INT1_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t INT1_FSM1 : 1;    // [0]   Routing of FSM1 interrupt event on INT1 {0}
            u8_t INT1_FSM2 : 1;    // [1]   Routing of FSM2 interrupt event on INT1 {0}
            u8_t INT1_FSM3 : 1;    // [2]   Routing of FSM3 interrupt event on INT1 {0}
            u8_t INT1_FSM4 : 1;    // [3]   Routing of FSM4 interrupt event on INT1 {0}
            u8_t INT1_FSM5 : 1;    // [4]   Routing of FSM5 interrupt event on INT1 {0}
            u8_t INT1_FSM6 : 1;    // [5]   Routing of FSM6 interrupt event on INT1 {0}
            u8_t INT1_FSM7 : 1;    // [6]   Routing of FSM7 interrupt event on INT1 {0}
            u8_t INT1_FSM8 : 1;    // [7]   Routing of FSM8 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1_B
/// @brief  ISM330DHCX FSM INT1 pin control register (B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_INT1_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t INT1_FSM9  : 1;    // [0]   Routing of FSM9  interrupt event on INT1 {0}
            u8_t INT1_FSM10 : 1;    // [1]   Routing of FSM10 interrupt event on INT1 {0}
            u8_t INT1_FSM11 : 1;    // [2]   Routing of FSM11 interrupt event on INT1 {0}
            u8_t INT1_FSM12 : 1;    // [3]   Routing of FSM12 interrupt event on INT1 {0}
            u8_t INT1_FSM13 : 1;    // [4]   Routing of FSM13 interrupt event on INT1 {0}
            u8_t INT1_FSM14 : 1;    // [5]   Routing of FSM14 interrupt event on INT1 {0}
            u8_t INT1_FSM15 : 1;    // [6]   Routing of FSM15 interrupt event on INT1 {0}
            u8_t INT1_FSM16 : 1;    // [7]   Routing of FSM16 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT1
/// @brief  ISM330DHCX FSM INT1 pin control register (A|B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_INT1
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                  // [7:0]  Full value of the register
        struct {
            u16_t INT1_FSM1  : 1;    // [0]    Routing of FSM1  interrupt event on INT1 {0}
            u16_t INT1_FSM2  : 1;    // [1]    Routing of FSM2  interrupt event on INT1 {0}
            u16_t INT1_FSM3  : 1;    // [2]    Routing of FSM3  interrupt event on INT1 {0}
            u16_t INT1_FSM4  : 1;    // [3]    Routing of FSM4  interrupt event on INT1 {0}
            u16_t INT1_FSM5  : 1;    // [4]    Routing of FSM5  interrupt event on INT1 {0}
            u16_t INT1_FSM6  : 1;    // [5]    Routing of FSM6  interrupt event on INT1 {0}
            u16_t INT1_FSM7  : 1;    // [6]    Routing of FSM7  interrupt event on INT1 {0}
            u16_t INT1_FSM8  : 1;    // [7]    Routing of FSM8  interrupt event on INT1 {0}
            u16_t INT1_FSM9  : 1;    // [8]    Routing of FSM9  interrupt event on INT1 {0}
            u16_t INT1_FSM10 : 1;    // [9]    Routing of FSM10 interrupt event on INT1 {0}
            u16_t INT1_FSM11 : 1;    // [10]   Routing of FSM11 interrupt event on INT1 {0}
            u16_t INT1_FSM12 : 1;    // [11]   Routing of FSM12 interrupt event on INT1 {0}
            u16_t INT1_FSM13 : 1;    // [12]   Routing of FSM13 interrupt event on INT1 {0}
            u16_t INT1_FSM14 : 1;    // [13]   Routing of FSM14 interrupt event on INT1 {0}
            u16_t INT1_FSM15 : 1;    // [14]   Routing of FSM15 interrupt event on INT1 {0}
            u16_t INT1_FSM16 : 1;    // [15]   Routing of FSM16 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT1_s;


/// @struct _ism330dhcx_rm_ef__MLC_INT1
/// @brief  ISM330DHCX MLC INT1 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__MLC_INT1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t INT1_MLC1 : 1;    // [0]   Routing of MLC1 interrupt event on INT1 {0}
            u8_t INT1_MLC2 : 1;    // [1]   Routing of MLC2 interrupt event on INT1 {0}
            u8_t INT1_MLC3 : 1;    // [2]   Routing of MLC3 interrupt event on INT1 {0}
            u8_t INT1_MLC4 : 1;    // [3]   Routing of MLC4 interrupt event on INT1 {0}
            u8_t INT1_MLC5 : 1;    // [4]   Routing of MLC5 interrupt event on INT1 {0}
            u8_t INT1_MLC6 : 1;    // [5]   Routing of MLC6 interrupt event on INT1 {0}
            u8_t INT1_MLC7 : 1;    // [6]   Routing of MLC7 interrupt event on INT1 {0}
            u8_t INT1_MLC8 : 1;    // [7]   Routing of MLC8 interrupt event on INT1 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__MLC_INT1_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INT2
/// @brief  ISM330DHCX EMB FUNC INT2 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_INT2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0         : 1;    // [0]   Reserved                                                    {0}
            u8_t RESERVED_1         : 1;    // [1]   Reserved                                                    {0}
            u8_t RESERVED_2         : 1;    // [2]   Reserved                                                    {0}
            u8_t INT2_STEP_DETECTOR : 1;    // [3]   Routing of pedometer step recognition event on INT2         {0}
            u8_t INT2_TILT          : 1;    // [4]   Routing of tilt event on INT2                               {0}
            u8_t INT2_SIG_MOT       : 1;    // [5]   Routing of significant motion event on INT2                 {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                                    {0}
            u8_t INT2_FSM_LC        : 1;    // [7]   Routing of FSM long counter timeout interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INT2_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2_A
/// @brief  ISM330DHCX FSM INT2 pin control register (A) [r/w] {0x6B}
/// !FIX-REQUIRED! Datasheet defines '01101011' (0x6B) as default value but register description lists values as '00000000'
typedef struct _ism330dhcx_rm_ef__FSM_INT2_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t INT2_FSM1 : 1;    // [0]   Routing of FSM1 interrupt event on INT2 {0}
            u8_t INT2_FSM2 : 1;    // [1]   Routing of FSM2 interrupt event on INT2 {0}
            u8_t INT2_FSM3 : 1;    // [2]   Routing of FSM3 interrupt event on INT2 {0}
            u8_t INT2_FSM4 : 1;    // [3]   Routing of FSM4 interrupt event on INT2 {0}
            u8_t INT2_FSM5 : 1;    // [4]   Routing of FSM5 interrupt event on INT2 {0}
            u8_t INT2_FSM6 : 1;    // [5]   Routing of FSM6 interrupt event on INT2 {0}
            u8_t INT2_FSM7 : 1;    // [6]   Routing of FSM7 interrupt event on INT2 {0}
            u8_t INT2_FSM8 : 1;    // [7]   Routing of FSM8 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2_B
/// @brief  ISM330DHCX FSM INT2 pin control register (B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_INT2_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t INT2_FSM9  : 1;    // [0]   Routing of FSM9  interrupt event on INT2 {0}
            u8_t INT2_FSM10 : 1;    // [1]   Routing of FSM10 interrupt event on INT2 {0}
            u8_t INT2_FSM11 : 1;    // [2]   Routing of FSM11 interrupt event on INT2 {0}
            u8_t INT2_FSM12 : 1;    // [3]   Routing of FSM12 interrupt event on INT2 {0}
            u8_t INT2_FSM13 : 1;    // [4]   Routing of FSM13 interrupt event on INT2 {0}
            u8_t INT2_FSM14 : 1;    // [5]   Routing of FSM14 interrupt event on INT2 {0}
            u8_t INT2_FSM15 : 1;    // [6]   Routing of FSM15 interrupt event on INT2 {0}
            u8_t INT2_FSM16 : 1;    // [7]   Routing of FSM16 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_INT2
/// @brief  ISM330DHCX FSM INT2 pin control register (A|B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_INT2
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                  // [7:0]  Full value of the register
        struct {
            u16_t INT2_FSM1  : 1;    // [0]    Routing of FSM1  interrupt event on INT2 {0}
            u16_t INT2_FSM2  : 1;    // [1]    Routing of FSM2  interrupt event on INT2 {0}
            u16_t INT2_FSM3  : 1;    // [2]    Routing of FSM3  interrupt event on INT2 {0}
            u16_t INT2_FSM4  : 1;    // [3]    Routing of FSM4  interrupt event on INT2 {0}
            u16_t INT2_FSM5  : 1;    // [4]    Routing of FSM5  interrupt event on INT2 {0}
            u16_t INT2_FSM6  : 1;    // [5]    Routing of FSM6  interrupt event on INT2 {0}
            u16_t INT2_FSM7  : 1;    // [6]    Routing of FSM7  interrupt event on INT2 {0}
            u16_t INT2_FSM8  : 1;    // [7]    Routing of FSM8  interrupt event on INT2 {0}
            u16_t INT2_FSM9  : 1;    // [8]    Routing of FSM9  interrupt event on INT2 {0}
            u16_t INT2_FSM10 : 1;    // [9]    Routing of FSM10 interrupt event on INT2 {0}
            u16_t INT2_FSM11 : 1;    // [10]   Routing of FSM11 interrupt event on INT2 {0}
            u16_t INT2_FSM12 : 1;    // [11]   Routing of FSM12 interrupt event on INT2 {0}
            u16_t INT2_FSM13 : 1;    // [12]   Routing of FSM13 interrupt event on INT2 {0}
            u16_t INT2_FSM14 : 1;    // [13]   Routing of FSM14 interrupt event on INT2 {0}
            u16_t INT2_FSM15 : 1;    // [14]   Routing of FSM15 interrupt event on INT2 {0}
            u16_t INT2_FSM16 : 1;    // [15]   Routing of FSM16 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_INT2_s;


/// @struct _ism330dhcx_rm_ef__MLC_INT2
/// @brief  ISM330DHCX MLC INT2 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__MLC_INT2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t INT2_MLC1 : 1;    // [0]   Routing of MLC1 interrupt event on INT2 {0}
            u8_t INT2_MLC2 : 1;    // [1]   Routing of MLC2 interrupt event on INT2 {0}
            u8_t INT2_MLC3 : 1;    // [2]   Routing of MLC3 interrupt event on INT2 {0}
            u8_t INT2_MLC4 : 1;    // [3]   Routing of MLC4 interrupt event on INT2 {0}
            u8_t INT2_MLC5 : 1;    // [4]   Routing of MLC5 interrupt event on INT2 {0}
            u8_t INT2_MLC6 : 1;    // [5]   Routing of MLC6 interrupt event on INT2 {0}
            u8_t INT2_MLC7 : 1;    // [6]   Routing of MLC7 interrupt event on INT2 {0}
            u8_t INT2_MLC8 : 1;    // [7]   Routing of MLC8 interrupt event on INT2 {0}
        };
    } bf;

} _ism330dhcx_rm_ef__MLC_INT2_s;


/* Status Registers */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_STATUS
/// @brief  ISM330DHCX Embedded function status register [r] {output}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_STATUS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                                          {0}
            u8_t RESERVED_1   : 1;    // [1]   Reserved                                                          {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved                                                          {0}
            u8_t IS_STEP_DET  : 1;    // [3]   Interrupt status bit for step detection                           {output}
            u8_t IS_TILT      : 1;    // [4]   Interrupt status bit for tilt detection                           {output}
            u8_t IS_SIGMOT    : 1;    // [5]   Interrupt status bit for significant motion detection             {output}
            u8_t RESERVED_6   : 1;    // [6]   Reserved                                                          {0}
            u8_t IS_FSM_LC    : 1;    // [7]   Interrupt status bit for FSM long counter timeout interrupt event {output}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_STATUS_s;


/// @struct _ism330dhcx_rm_ef__FSM_STATUS_A
/// @brief  ISM330DHCX Finite State Machine status register (A) [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_STATUS_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;               // [7:0] Full value of the register
        struct {
            u8_t IS_FSM1 : 1;    // [0]   Interrupt status bit for FSM1 interrupt event {output}
            u8_t IS_FSM2 : 1;    // [1]   Interrupt status bit for FSM2 interrupt event {output}
            u8_t IS_FSM3 : 1;    // [2]   Interrupt status bit for FSM3 interrupt event {output}
            u8_t IS_FSM4 : 1;    // [3]   Interrupt status bit for FSM4 interrupt event {output}
            u8_t IS_FSM5 : 1;    // [4]   Interrupt status bit for FSM5 interrupt event {output}
            u8_t IS_FSM6 : 1;    // [5]   Interrupt status bit for FSM6 interrupt event {output}
            u8_t IS_FSM7 : 1;    // [6]   Interrupt status bit for FSM7 interrupt event {output}
            u8_t IS_FSM8 : 1;    // [7]   Interrupt status bit for FSM8 interrupt event {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_STATUS_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_STATUS_B
/// @brief  ISM330DHCX Finite State Machine status register (B) [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_STATUS_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                // [7:0] Full value of the register
        struct {
            u8_t IS_FSM9  : 1;    // [0]   Interrupt status bit for FSM9  interrupt event {output}
            u8_t IS_FSM10 : 1;    // [1]   Interrupt status bit for FSM10 interrupt event {output}
            u8_t IS_FSM11 : 1;    // [2]   Interrupt status bit for FSM11 interrupt event {output}
            u8_t IS_FSM12 : 1;    // [3]   Interrupt status bit for FSM12 interrupt event {output}
            u8_t IS_FSM13 : 1;    // [4]   Interrupt status bit for FSM13 interrupt event {output}
            u8_t IS_FSM14 : 1;    // [5]   Interrupt status bit for FSM14 interrupt event {output}
            u8_t IS_FSM15 : 1;    // [6]   Interrupt status bit for FSM15 interrupt event {output}
            u8_t IS_FSM16 : 1;    // [7]   Interrupt status bit for FSM16 interrupt event {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_STATUS_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_STATUS
/// @brief  ISM330DHCX Finite State Machine status register (A|B) [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_STATUS
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                // [7:0]  Full value of the register
        struct {
            u16_t IS_FSM1  : 1;    // [0]    Interrupt status bit for FSM1  interrupt event {output}
            u16_t IS_FSM2  : 1;    // [1]    Interrupt status bit for FSM2  interrupt event {output}
            u16_t IS_FSM3  : 1;    // [2]    Interrupt status bit for FSM3  interrupt event {output}
            u16_t IS_FSM4  : 1;    // [3]    Interrupt status bit for FSM4  interrupt event {output}
            u16_t IS_FSM5  : 1;    // [4]    Interrupt status bit for FSM5  interrupt event {output}
            u16_t IS_FSM6  : 1;    // [5]    Interrupt status bit for FSM6  interrupt event {output}
            u16_t IS_FSM7  : 1;    // [6]    Interrupt status bit for FSM7  interrupt event {output}
            u16_t IS_FSM8  : 1;    // [7]    Interrupt status bit for FSM8  interrupt event {output}
            u16_t IS_FSM9  : 1;    // [8]    Interrupt status bit for FSM9  interrupt event {output}
            u16_t IS_FSM10 : 1;    // [9]    Interrupt status bit for FSM10 interrupt event {output}
            u16_t IS_FSM11 : 1;    // [10]   Interrupt status bit for FSM11 interrupt event {output}
            u16_t IS_FSM12 : 1;    // [11]   Interrupt status bit for FSM12 interrupt event {output}
            u16_t IS_FSM13 : 1;    // [12]   Interrupt status bit for FSM13 interrupt event {output}
            u16_t IS_FSM14 : 1;    // [13]   Interrupt status bit for FSM14 interrupt event {output}
            u16_t IS_FSM15 : 1;    // [14]   Interrupt status bit for FSM15 interrupt event {output}
            u16_t IS_FSM16 : 1;    // [15]   Interrupt status bit for FSM16 interrupt event {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_STATUS_s;


/// @struct _ism330dhcx_rm_ef__MLC_STATUS
/// @brief  ISM330DHCX Machine Learning Core status register [r] {output}
typedef struct _ism330dhcx_rm_ef__MLC_STATUS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;               // [7:0] Full value of the register
        struct {
            u8_t IS_MLC1 : 1;    // [0]   Interrupt status bit for MLC1 interrupt event {output}
            u8_t IS_MLC2 : 1;    // [1]   Interrupt status bit for MLC2 interrupt event {output}
            u8_t IS_MLC3 : 1;    // [2]   Interrupt status bit for MLC3 interrupt event {output}
            u8_t IS_MLC4 : 1;    // [3]   Interrupt status bit for MLC4 interrupt event {output}
            u8_t IS_MLC5 : 1;    // [4]   Interrupt status bit for MLC5 interrupt event {output}
            u8_t IS_MLC6 : 1;    // [5]   Interrupt status bit for MLC6 interrupt event {output}
            u8_t IS_MLC7 : 1;    // [6]   Interrupt status bit for MLC7 interrupt event {output}
            u8_t IS_MLC8 : 1;    // [7]   Interrupt status bit for MLC8 interrupt event {output}
        };
    } bf;

} _ism330dhcx_rm_ef__MLC_STATUS_s;


/* Page R/W Register */


/// @struct _ism330dhcx_rm_ef__PAGE_RW
/// @brief  ISM330DHCX Enable read and write mode of advanced features dedicated page [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__PAGE_RW
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                                        {0}
            u8_t RESERVED_1   : 1;    // [1]   Reserved                                                        {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved                                                        {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                                        {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                                                        {0}
            u8_t PAGE_READ    : 1;    // [5]   Enable reads from the selected advanced features dedicated page {0}
            u8_t PAGE_WRITE   : 1;    // [6]   Enable writes to  the selected advanced features dedicated page {0}
            u8_t EMB_FUNC_LIR : 1;    // [7]   Latched Interrupt mode for Embedded Functions                   {0}
        };
    } bf;

} _ism330dhcx_rm_ef__PAGE_RW_s;


/* Batching Configuration Register */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG
/// @brief  ISM330DHCX Embedded functions batching configuration register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                    {0}
            u8_t RESERVED_1   : 1;    // [1]   Reserved                                    {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved                                    {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                    {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                                    {0}
            u8_t RESERVED_5   : 1;    // [5]   Reserved                                    {0}
            u8_t PEDO_FIFO_EN : 1;    // [6]   Enable FIFO batching of step counter values {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                                    {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_FIFO_CFG_s;


/* Finite State Machine (FSM) Registers */


/// @struct _ism330dhcx_rm_ef__FSM_ENABLE_A
/// @brief  ISM330DHCX FSM enable register (A) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_ENABLE_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t FSM1_EN   : 1;    // [0]   FSM1 enable {0}
            u8_t FSM2_EN   : 1;    // [1]   FSM2 enable {0}
            u8_t FSM3_EN   : 1;    // [2]   FSM3 enable {0}
            u8_t FSM4_EN   : 1;    // [3]   FSM4 enable {0}
            u8_t FSM5_EN   : 1;    // [4]   FSM5 enable {0}
            u8_t FSM6_EN   : 1;    // [5]   FSM6 enable {0}
            u8_t FSM7_EN   : 1;    // [6]   FSM7 enable {0}
            u8_t FSM8_EN   : 1;    // [7]   FSM8 enable {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_ENABLE_A_s;


/// @struct _ism330dhcx_rm_ef__FSM_ENABLE_B
/// @brief  ISM330DHCX FSM enable register (B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_ENABLE_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                // [7:0] Full value of the register
        struct {
            u8_t FSM9_EN  : 1;    // [0]   FSM9  enable {0}
            u8_t FSM10_EN : 1;    // [1]   FSM10 enable {0}
            u8_t FSM11_EN : 1;    // [2]   FSM11 enable {0}
            u8_t FSM12_EN : 1;    // [3]   FSM12 enable {0}
            u8_t FSM13_EN : 1;    // [4]   FSM13 enable {0}
            u8_t FSM14_EN : 1;    // [5]   FSM14 enable {0}
            u8_t FSM15_EN : 1;    // [6]   FSM15 enable {0}
            u8_t FSM16_EN : 1;    // [7]   FSM16 enable {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_ENABLE_B_s;


/// @struct _ism330dhcx_rm_ef__FSM_ENABLE
/// @brief  ISM330DHCX FSM enable register (A|B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_ENABLE
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                // [7:0] Full value of the register
        struct {
            u16_t FSM1_EN  : 1;    // [0]   FSM1  enable {0}
            u16_t FSM2_EN  : 1;    // [1]   FSM2  enable {0}
            u16_t FSM3_EN  : 1;    // [2]   FSM3  enable {0}
            u16_t FSM4_EN  : 1;    // [3]   FSM4  enable {0}
            u16_t FSM5_EN  : 1;    // [4]   FSM5  enable {0}
            u16_t FSM6_EN  : 1;    // [5]   FSM6  enable {0}
            u16_t FSM7_EN  : 1;    // [6]   FSM7  enable {0}
            u16_t FSM8_EN  : 1;    // [7]   FSM8  enable {0}
            u16_t FSM9_EN  : 1;    // [8]   FSM9  enable {0}
            u16_t FSM10_EN : 1;    // [9]   FSM10 enable {0}
            u16_t FSM11_EN : 1;    // [10]  FSM11 enable {0}
            u16_t FSM12_EN : 1;    // [11]  FSM12 enable {0}
            u16_t FSM13_EN : 1;    // [12]  FSM13 enable {0}
            u16_t FSM14_EN : 1;    // [13]  FSM14 enable {0}
            u16_t FSM15_EN : 1;    // [14]  FSM15 enable {0}
            u16_t FSM16_EN : 1;    // [15]  FSM16 enable {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_ENABLE_s;


/// @typedef _ism330dhcx_rm_ef__FSM_LONG_COUNTER_L
/// @brief  ISM330DHCX FSM long counter status register (LSB) [r/w] {0x00}
/// @note   value can be reset using the LC_CLEAR bit in FSM_LONG_COUNTER_CLEAR register
typedef reg_u8_s _ism330dhcx_rm_ef__FSM_LONG_COUNTER_L_s;


/// @typedef _ism330dhcx_rm_ef__FSM_LONG_COUNTER_H
/// @brief  ISM330DHCX FSM long counter status register (MSB) [r/w] {0x00}
/// @note   value can be reset using the LC_CLEAR bit in FSM_LONG_COUNTER_CLEAR register
typedef reg_u8_s _ism330dhcx_rm_ef__FSM_LONG_COUNTER_H_s;


/// @typedef _ism330dhcx_rm_ef__FSM_LONG_COUNTER
/// @brief  ISM330DHCX FSM long counter status register [r/w] {0x00}
/// @note   value can be reset using the LC_CLEAR bit in FSM_LONG_COUNTER_CLEAR register
typedef reg_u16_s _ism330dhcx_rm_ef__FSM_LONG_COUNTER_s;


/// @struct _ism330dhcx_rm_ef__FSM_LONG_COUNTER_CLEAR
/// @brief  ISM330DHCX FSM long counter reset register [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__FSM_LONG_COUNTER_CLEAR
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t FSM_LC_CLEAR   : 1;    // [0]   Clear FSM long counter value                                                {0}
            u8_t FSM_LC_CLEARED : 1;    // [1]   read-only bit is automatically set to 1 when the long counter reset is done {0}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                                                    {0}
            u8_t RESERVED_3     : 1;    // [3]   Reserved                                                                    {0}
            u8_t RESERVED_4     : 1;    // [4]   Reserved                                                                    {0}
            u8_t RESERVED_5     : 1;    // [5]   Reserved                                                                    {0}
            u8_t RESERVED_6     : 1;    // [6]   Reserved                                                                    {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                                                    {0}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_LONG_COUNTER_CLEAR_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS1
/// @brief  ISM330DHCX FSM1 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM1 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM1 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM1 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM1 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM1 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM1 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM1 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM1 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS1_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS2
/// @brief  ISM330DHCX FSM2 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM2 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM2 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM2 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM2 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM2 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM2 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM2 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM2 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS2_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS3
/// @brief  ISM330DHCX FSM3 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS3
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM3 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM3 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM3 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM3 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM3 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM3 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM3 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM3 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS3_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS4
/// @brief  ISM330DHCX FSM4 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS4
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM4 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM4 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM4 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM4 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM4 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM4 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM4 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM4 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS4_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS5
/// @brief  ISM330DHCX FSM5 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS5
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM5 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM5 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM5 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM5 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM5 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM5 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM5 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM5 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS5_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS6
/// @brief  ISM330DHCX FSM6 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS6
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM6 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM6 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM6 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM6 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM6 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM6 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM6 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM6 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS6_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS7
/// @brief  ISM330DHCX FSM7 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS7
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM7 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM7 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM7 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM7 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM7 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM7 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM7 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM7 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS7_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS8
/// @brief  ISM330DHCX FSM8 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS8
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM8 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM8 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM8 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM8 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM8 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM8 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM8 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM8 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS8_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS9
/// @brief  ISM330DHCX FSM9 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS9
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM9 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM9 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM9 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM9 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM9 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM9 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM9 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM9 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS9_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS10
/// @brief  ISM330DHCX FSM10 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS10
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM10 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM10 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM10 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM10 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM10 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM10 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM10 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM10 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS10_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS11
/// @brief  ISM330DHCX FSM11 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS11
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM11 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM11 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM11 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM11 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM11 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM11 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM11 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM11 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS11_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS12
/// @brief  ISM330DHCX FSM12 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS12
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM12 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM12 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM12 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM12 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM12 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM12 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM12 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM12 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS12_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS13
/// @brief  ISM330DHCX FSM13 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS13
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM13 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM13 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM13 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM13 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM13 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM13 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM13 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM13 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS13_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS14
/// @brief  ISM330DHCX FSM14 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS14
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM14 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM14 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM14 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM14 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM14 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM14 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM14 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM14 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS14_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS15
/// @brief  ISM330DHCX FSM15 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS15
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM15 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM15 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM15 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM15 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM15 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM15 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM15 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM15 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS15_s;


/// @struct _ism330dhcx_rm_ef__FSM_OUTS16
/// @brief  ISM330DHCX FSM16 output register [r] {output}
typedef struct _ism330dhcx_rm_ef__FSM_OUTS16
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;           // [7:0] Full value of the register
        struct {
            u8_t N_V : 1;    // [0]   FSM16 output: negative event detected on the vector {output}
            u8_t P_V : 1;    // [1]   FSM16 output: positive event detected on the vector {output}
            u8_t N_Z : 1;    // [2]   FSM16 output: negative event detected on the Z-axis {output}
            u8_t P_Z : 1;    // [3]   FSM16 output: positive event detected on the Z-axis {output}
            u8_t N_Y : 1;    // [4]   FSM16 output: negative event detected on the Y-axis {output}
            u8_t P_Y : 1;    // [5]   FSM16 output: positive event detected on the Y-axis {output}
            u8_t N_X : 1;    // [6]   FSM16 output: negative event detected on the X-axis {output}
            u8_t P_X : 1;    // [7]   FSM16 output: positive event detected on the X-axis {output}
        };
    } bf;

} _ism330dhcx_rm_ef__FSM_OUTS16_s;


/* ODR Configuration Registers */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_B
/// @brief  ISM330DHCX Finite State Machine output data rate configuration register [r/w] {0x4B}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                               {1}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                               {1}
            u8_t RESERVED_2 : 1;    // [2]   Reserved                               {0}
            u8_t FSM_ODR    : 2;    // [4:3] Finite State Machine ODR configuration {01}
            u8_t RESERVED_5 : 1;    // [5]   Reserved                               {0}
            u8_t RESERVED_6 : 1;    // [6]   Reserved                               {1}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                               {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_B_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_C
/// @brief  ISM330DHCX Machine Learning Core output data rate configuration register [r/w] {0x15}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                                {1}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                                {0}
            u8_t RESERVED_2 : 1;    // [2]   Reserved                                {1}
            u8_t RESERVED_3 : 1;    // [3]   Reserved                                {0}
            u8_t MLC_ODR    : 2;    // [5:4] Machine Learning Core ODR configuration {01}
            u8_t RESERVED_6 : 1;    // [6]   Reserved                                {0}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_ODR_CFG_C_s;


/* Step Counter Registers */


/// @typedef _ism330dhcx_rm_ef__STEP_COUNTER_L
/// @brief  ISM330DHCX Step counter output register (LSB) [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__STEP_COUNTER_L_s;


/// @typedef _ism330dhcx_rm_ef__STEP_COUNTER_H
/// @brief  ISM330DHCX Step counter output register (MSB) [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__STEP_COUNTER_H_s;


/// @typedef _ism330dhcx_rm_ef__STEP_COUNTER
/// @brief  ISM330DHCX Step counter output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm_ef__STEP_COUNTER_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_SRC
/// @brief  ISM330DHCX Embedded function source register [r/w] {output}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_SRC
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0          : 1;    // [0]   Reserved                                                      {0}
            u8_t RESERVED_1          : 1;    // [1]   Reserved                                                      {0}
            u8_t STEPCOUNTER_BIT_SET : 1;    // [2]   This bit is equal to 1 when the step count is increased [r]   {output}
            u8_t STEP_OVERFLOW       : 1;    // [3]   Step counter overflow status                            [r]   {output}
            u8_t STEP_COUNT_DELTA_IA : 1;    // [4]   Pedometer step recognition on delta time status         [r]   {output}
            u8_t STEP_DETECTED       : 1;    // [5]   Step detector event detection status.                   [r]   {output}
            u8_t RESERVED_6          : 1;    // [6]   Reserved                                                      {0}
            u8_t PEDO_RST_STEP       : 1;    // [7]   Reset pedometer step counter                            [r/w] {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_SRC_s;


/* Initialization Registers */


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INIT_A
/// @brief  ISM330DHCX Embedded functions initialization register (A) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_INIT_A
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0    : 1;    // [0]   Reserved                                                         {0}
            u8_t RESERVED_1    : 1;    // [1]   Reserved                                                         {0}
            u8_t RESERVED_2    : 1;    // [2]   Reserved                                                         {0}
            u8_t STEP_DET_INIT : 1;    // [3]   Pedometer Step Counter/Detector algorithm initialization request {0}
            u8_t TILT_INIT     : 1;    // [4]   Tilt algorithm initialization request                            {0}
            u8_t SIG_MOT_INIT  : 1;    // [5]   Significant Motion Detection algorithm initialization request    {0}
            u8_t RESERVED_6    : 1;    // [6]   Reserved                                                         {0}
            u8_t RESERVED_7    : 1;    // [7]   Reserved                                                         {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INIT_A_s;


/// @struct _ism330dhcx_rm_ef__EMB_FUNC_INIT_B
/// @brief  ISM330DHCX Embedded functions initialization register (B) [r/w] {0x00}
typedef struct _ism330dhcx_rm_ef__EMB_FUNC_INIT_B
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                       // [7:0] Full value of the register
        struct {
            u8_t FSM_INIT        : 1;    // [0]   FSM initialization request                      {0}
            u8_t RESERVED_1      : 1;    // [1]   Reserved                                        {0}
            u8_t RESERVED_2      : 1;    // [2]   Reserved                                        {0}
            u8_t FIFO_COMPR_INIT : 1;    // [3]   FIFO compression feature initialization request {0}
            u8_t MLC_INIT        : 1;    // [4]   Machine Learning Core initialization request    {0}
            u8_t RESERVED_5      : 1;    // [5]   Reserved                                        {0}
            u8_t RESERVED_6      : 1;    // [6]   Reserved                                        {0}
            u8_t RESERVED_7      : 1;    // [7]   Reserved                                        {0}
        };
    } bf;

} _ism330dhcx_rm_ef__EMB_FUNC_INIT_B_s;


/* Machine Learning Core (MLC) Registers */


/// @typedef _ism330dhcx_rm_ef__MLC0_SRC
/// @brief  ISM330DHCX Machine Learning Core 0 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC0_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC1_SRC
/// @brief  ISM330DHCX Machine Learning Core 1 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC1_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC2_SRC
/// @brief  ISM330DHCX Machine Learning Core 2 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC2_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC3_SRC
/// @brief  ISM330DHCX Machine Learning Core 3 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC3_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC4_SRC
/// @brief  ISM330DHCX Machine Learning Core 4 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC4_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC5_SRC
/// @brief  ISM330DHCX Machine Learning Core 5 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC5_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC6_SRC
/// @brief  ISM330DHCX Machine Learning Core 6 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC6_SRC_s;


/// @typedef _ism330dhcx_rm_ef__MLC7_SRC
/// @brief  ISM330DHCX Machine Learning Core 7 source register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_ef__MLC7_SRC_s;


#endif /* __ISM330DHCX_INTERNAL__RM_EF_STRUCTS_H__ */
