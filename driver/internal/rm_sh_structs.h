/// @file  internal/rm_sh_structs.h
/// @brief ISM330DHCX Internal Structs for Sensor Hub Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_SH_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_SH_STRUCTS_H__


#include "c-nstd/types.h"


/// NOTE: Sensor Hub registers are accessible when bit SHUB_REG_ACCESS is set to '1' in FUNC_CFG_ACCESS


/* Sensor Hub Output Registers */


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_1_s
/// @brief  ISM330DHCX Sensor hub output 1 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_1_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_2_s
/// @brief  ISM330DHCX Sensor hub output 2 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_2_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_3_s
/// @brief  ISM330DHCX Sensor hub output 3 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_3_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_4_s
/// @brief  ISM330DHCX Sensor hub output 4 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_4_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_5_s
/// @brief  ISM330DHCX Sensor hub output 5 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_5_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_6_s
/// @brief  ISM330DHCX Sensor hub output 6 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_6_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_7_s
/// @brief  ISM330DHCX Sensor hub output 7 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_7_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_8_s
/// @brief  ISM330DHCX Sensor hub output 8 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_8_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_9_s
/// @brief  ISM330DHCX Sensor hub output 9 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_9_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_10_s
/// @brief  ISM330DHCX Sensor hub output 10 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_10_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_11_s
/// @brief  ISM330DHCX Sensor hub output 11 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_11_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_12_s
/// @brief  ISM330DHCX Sensor hub output 12 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_12_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_13_s
/// @brief  ISM330DHCX Sensor hub output 13 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_13_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_14_s
/// @brief  ISM330DHCX Sensor hub output 14 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_14_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_15_s
/// @brief  ISM330DHCX Sensor hub output 15 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_15_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_16_s
/// @brief  ISM330DHCX Sensor hub output 16 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_16_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_17_s
/// @brief  ISM330DHCX Sensor hub output 17 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_17_s;


/// @struct _ism330dhcx_rm_sh__SENSOR_HUB_18_s
/// @brief  ISM330DHCX Sensor hub output 18 register [r] {output}
typedef reg_u8_s _ism330dhcx_rm_sh__SENSOR_HUB_18_s;


/* Master & Slave Configuration Registers */


/// @struct _ism330dhcx_rm_sh__MASTER_CONFIG_s
/// @brief  ISM330DHCX Master configuration register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t AUX_SENS_ON       : 2;    // [0:1] Number of external sensors to be read by the sensor hub                 {00}
            u8_t MASTER_ON         : 1;    // [2]   Sensor hub I²C master enable                                            {0}
            u8_t SHUB_PU_EN        : 1;    // [3]   Master I²C pull-up enable                                               {0}
            u8_t PASS_THROUGH_MODE : 1;    // [4]   I²C interface pass-through                                              {0}
            u8_t START_CONFIG      : 1;    // [5]   Sensor hub trigger signal selection                                     {0}
            u8_t WRITE_ONCE        : 1;    // [6]   Slave 0 write operation is performed only at the first sensor hub cycle {0}
            u8_t RST_MASTER_REGS   : 1;    // [7]   Reset Master logic and output registers                                 {0}
        };
    } bf;

} _ism330dhcx_rm_sh__MASTER_CONFIG_s;


/// @struct _ism330dhcx_rm_sh__SLV0_ADD_s
/// @brief  ISM330DHCX I²C slave address of the first external sensor (Sensor 1) register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t rw_0       : 1;    // [0]   Read/write operation on Sensor 1                     {0}
            u8_t slave0_add : 7;    // [7:1] I²C slave address of Sensor 1 read by the sensor hub {0000000}
        };
    } bf;

} _ism330dhcx_rm_sh__SLV0_ADD_s;


/// @struct _ism330dhcx_rm_sh__SLV0_SUBADD_s
/// @brief  ISM330DHCX Address of register on the first external sensor (Sensor 1) register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_sh__SLV0_SUBADD_s;


/// @struct _ism330dhcx_rm_sh__SLAVE0_CONFIG_s
/// @brief  ISM330DHCX First external sensor (Sensor1) configuration and sensor hub settings register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t Slave0_numop        : 3;    // [2:0] Number of read operations on Sensor 1    {000}
            u8_t BATCH_EXT_SENS_0_EN : 1;    // [3]   Enable FIFO data batching of first slave {0}
            u8_t RESERVED_4          : 1;    // [4]   Reserved                                 {0}
            u8_t RESERVED_5          : 1;    // [5]   Reserved                                 {0}
            u8_t SHUB_ODR            : 1;    // [7:6] Rate at which the master communicates    {00}
        };
    } bf;

} _ism330dhcx_rm_sh__SLAVE0_CONFIG_s;


/// @struct _ism330dhcx_rm_sh__SLV1_ADD_s
/// @brief  ISM330DHCX I²C slave address of the second external sensor (Sensor 2) register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t rw_1       : 1;    // [0]   Read/write operation on Sensor 2                     {0}
            u8_t slave1_add : 7;    // [7:1] I²C slave address of Sensor 2 read by the sensor hub {0000000}
        };
    } bf;

} _ism330dhcx_rm_sh__SLV1_ADD_s;


/// @struct _ism330dhcx_rm_sh__SLV1_SUBADD_s
/// @brief  ISM330DHCX Address of register on the second external sensor (Sensor 2) register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_sh__SLV1_SUBADD_s;


/// @struct _ism330dhcx_rm_sh__SLAVE1_CONFIG_s
/// @brief  ISM330DHCX second external sensor (Sensor 2) configuration and sensor hub settings register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t Slave1_numop        : 3;    // [2:0] Number of read operations on Sensor 2     {000}
            u8_t BATCH_EXT_SENS_1_EN : 1;    // [3]   Enable FIFO data batching of second slave {0}
            u8_t RESERVED_4          : 1;    // [4]   Reserved                                  {0}
            u8_t RESERVED_5          : 1;    // [5]   Reserved                                  {0}
            u8_t RESERVED_6          : 1;    // [6]   Reserved                                  {0}
            u8_t RESERVED_7          : 1;    // [7]   Reserved                                  {0}
        };
    } bf;

} _ism330dhcx_rm_sh__SLAVE1_CONFIG_s;


/// @struct _ism330dhcx_rm_sh__SLV2_ADD_s
/// @brief  ISM330DHCX I²C slave address of the third external sensor (Sensor 3) register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t rw_2       : 1;    // [0]   Read/write operation on Sensor 3                     {0}
            u8_t slave2_add : 7;    // [7:1] I²C slave address of Sensor 3 read by the sensor hub {0000000}
        };
    } bf;

} _ism330dhcx_rm_sh__SLV2_ADD_s;


/// @struct _ism330dhcx_rm_sh__SLV2_SUBADD_s
/// @brief  ISM330DHCX Address of register on the third external sensor (Sensor 3) register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_sh__SLV2_SUBADD_s;


/// @struct _ism330dhcx_rm_sh__SLAVE2_CONFIG_s
/// @brief  ISM330DHCX third external sensor (Sensor 3) configuration and sensor hub settings register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t Slave2_numop        : 3;    // [2:0] Number of read operations on Sensor 3    {000}
            u8_t BATCH_EXT_SENS_2_EN : 1;    // [3]   Enable FIFO data batching of third slave {0}
            u8_t RESERVED_4          : 1;    // [4]   Reserved                                 {0}
            u8_t RESERVED_5          : 1;    // [5]   Reserved                                 {0}
            u8_t RESERVED_6          : 1;    // [4]   Reserved                                 {0}
            u8_t RESERVED_7          : 1;    // [5]   Reserved                                 {0}
        };
    } bf;

} _ism330dhcx_rm_sh__SLAVE2_CONFIG_s;


/// @struct _ism330dhcx_rm_sh__SLV3_ADD_s
/// @brief  ISM330DHCX I²C slave address of the fourth external sensor (Sensor 4) register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t rw_3       : 1;    // [0]   Read/write operation on Sensor 4                     {0}
            u8_t slave3_add : 7;    // [7:1] I²C slave address of Sensor 4 read by the sensor hub {0000000}
        };
    } bf;

} _ism330dhcx_rm_sh__SLV3_ADD_s;


/// @struct _ism330dhcx_rm_sh__SLV3_SUBADD_s
/// @brief  ISM330DHCX Address of register on the fourth external sensor (Sensor 4) register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_sh__SLV3_SUBADD_s;


/// @struct _ism330dhcx_rm_sh__SLAVE3_CONFIG_s
/// @brief  ISM330DHCX fourth external sensor (Sensor 4) configuration and sensor hub settings register [r/w] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t Slave3_numop        : 3;    // [2:0] Number of read operations on Sensor 4     {000}
            u8_t BATCH_EXT_SENS_3_EN : 1;    // [3]   Enable FIFO data batching of fourth slave {0}
            u8_t RESERVED_4          : 1;    // [4]   Reserved                                  {0}
            u8_t RESERVED_5          : 1;    // [5]   Reserved                                  {0}
            u8_t RESERVED_6          : 1;    // [4]   Reserved                                  {0}
            u8_t RESERVED_7          : 1;    // [5]   Reserved                                  {0}
        };
    } bf;

} _ism330dhcx_rm_sh__SLAVE3_CONFIG_s;


/* Slave Data Write */


/// @struct _ism330dhcx_rm_sh__DATAWRITE_SLV0_s
/// @brief  ISM330DHCX Data to be written into the slave 0 device register [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm_sh__DATAWRITE_SLV0_s;


/* Master Status */


/// @struct _ism330dhcx_rm_sh__STATUS_MASTER_s
/// @brief  ISM330DHCX Sensor hub source register [r] {0x00}
typedef struct
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t SENS_HUB_ENDOP : 1;    // [0]   Sensor hub communication status                                         {0}
            u8_t RESERVED_1     : 1;    // [1]   Reserved                                                                {0}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                                                {0}
            u8_t SLAVE0_NACK    : 1;    // [3]   This bit is set to 1 if Not acknowledge occurs on slave 0 communication {0}
            u8_t SLAVE1_NACK    : 1;    // [4]   This bit is set to 1 if Not acknowledge occurs on slave 1 communication {0}
            u8_t SLAVE2_NACK    : 1;    // [5]   This bit is set to 1 if Not acknowledge occurs on slave 2 communication {0}
            u8_t SLAVE3_NACK    : 1;    // [6]   This bit is set to 1 if Not acknowledge occurs on slave 3 communication {0}
            u8_t WR_ONCE_DONE   : 1;    // [7]   bit is set to 1 when the write operation on slave 0 has been performed  {0}
        };
    } bf;

} _ism330dhcx_rm_sh__STATUS_MASTER_s;


#endif /* __ISM330DHCX_INTERNAL__RM_SH_STRUCTS_H__ */
