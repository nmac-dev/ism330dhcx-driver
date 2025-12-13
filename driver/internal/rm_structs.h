/// @file  rm_structs.h
/// @brief ISM330DHCX Internal Structs for Register Mapping

#ifndef __ISM330DHCX_INTERNAL__RM_STRUCTS_H__
#define __ISM330DHCX_INTERNAL__RM_STRUCTS_H__


#include "c-nstd/types.h"


/// NOTE: internal structures are denoted with the prefix "_"


/// @struct _ism330dhcx_rm__TEMPLATE
/// @brief  ISM330DHCX template [r/w] {0x00}
typedef struct _ism330dhcx_rm__TEMPLATE
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved {0}
            u8_t RESERVED_1   : 1;    // [1]   Reserved {0}
            u8_t RESERVED_2   : 1;    // [2]   Reserved {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved {0}
            u8_t RESERVED_5   : 1;    // [5]   Reserved {0}
            u8_t RESERVED_6   : 1;    // [6]   Reserved {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved {0}
        };
    } bf;

} _ism330dhcx_rm__TEMPLATE_s;


/* Embedded Configuration & Pin Control Registers */


/// @struct _ism330dhcx_rm__FUNC_CFG_ACCESS
/// @brief  ISM330DHCX embedded functions control register [r/w] {0x00}
typedef struct _ism330dhcx_rm__FUNC_CFG_ACCESS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                       // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0      : 1;    // [0]   Reserved                                                        {0}
            u8_t RESERVED_1      : 1;    // [1]   Reserved                                                        {0}
            u8_t RESERVED_2      : 1;    // [2]   Reserved                                                        {0}
            u8_t RESERVED_3      : 1;    // [3]   Reserved                                                        {0}
            u8_t RESERVED_4      : 1;    // [4]   Reserved                                                        {0}
            u8_t RESERVED_5      : 1;    // [5]   Reserved                                                        {0}
            u8_t SHUB_REG_ACCESS : 1;    // [6]   Enable access to the sensor hub (I²C master) registers          {0}
            u8_t FUNC_CFG_ACCESS : 1;    // [7]   Enable access to the embedded functions configuration registers {0}
        };
    } bf;

} _ism330dhcx_rm__FUNC_CFG_ACCESS_s;


/// @struct _ism330dhcx_rm__PIN_CTRL
/// @brief  ISM330DHCX pins pull-up enable/disable control register [r/w] {0x3F}
typedef struct _ism330dhcx_rm__PIN_CTRL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                                         {1}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                                         {1}
            u8_t RESERVED_2 : 1;    // [2]   Reserved                                         {1}
            u8_t RESERVED_3 : 1;    // [3]   Reserved                                         {1}
            u8_t RESERVED_4 : 1;    // [4]   Reserved                                         {1}
            u8_t RESERVED_5 : 1;    // [5]   Reserved                                         {1}
            u8_t SDO_PU_EN  : 1;    // [6]   Disable pull-up on both OCS_Aux and SDO_Aux pins {0}
            u8_t OIS_PU_DIS : 1;    // [7]   Enable pull-up on SDO pin                        {0}
        };
    } bf;

} _ism330dhcx_rm__PIN_CTRL_s;


/* FIFO Registers */


/// @struct _ism330dhcx_rm__FIFO_CTRL1
/// @brief  ISM330DHCX FIFO control register 1 [r/w] {0x00}
typedef struct _ism330dhcx_rm__FIFO_CTRL1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;            // [7:0] Full value of the register
        struct {
            u8_t WTM0 : 1;    // [0]   FIFO watermark threshold {0}
            u8_t WTM1 : 1;    // [1]   FIFO watermark threshold {0}
            u8_t WTM2 : 1;    // [2]   FIFO watermark threshold {0}
            u8_t WTM3 : 1;    // [3]   FIFO watermark threshold {0}
            u8_t WTM4 : 1;    // [4]   FIFO watermark threshold {0}
            u8_t WTM5 : 1;    // [5]   FIFO watermark threshold {0}
            u8_t WTM6 : 1;    // [6]   FIFO watermark threshold {0}
            u8_t WTM7 : 1;    // [7]   FIFO watermark threshold {0}
        };
    } bf;

} _ism330dhcx_rm__FIFO_CTRL1_s;


/// @struct _ism330dhcx_rm__FIFO_CTRL2
/// @brief  ISM330DHCX FIFO control register 2 [r/w] {0x00}
typedef struct _ism330dhcx_rm__FIFO_CTRL2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register
        struct {
            u8_t WTM8             : 1;    // [0]   FIFO watermark threshold                       {0}
            u8_t UNCOPTR_RATE     : 2;    // [2:1] Configures compression algorithm               {0}
            u8_t RESERVED_3       : 1;    // [3]   Reserved                                       {0}
            u8_t ODRCHG_EN        : 1;    // [4]   Enables ODR CHANGE virtual sensor batching     {0}
            u8_t RESERVED_5       : 1;    // [5]   Reserved                                       {0}
            u8_t FIFO_COMPR_RT_EN : 1;    // [6]   Enables/Disables compression algorithm runtime {0}
            u8_t STOP_ON_WTM      : 1;    // [7]   Stop values memorization at threshold level    {0}
        };
    } bf;

} _ism330dhcx_rm__FIFO_CTRL2_s;


/// @struct _ism330dhcx_rm__FIFO_CTRL3
/// @brief  ISM330DHCX FIFO control register 3 [r/w] {0x00}
typedef struct _ism330dhcx_rm__FIFO_CTRL3
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;              // [7:0] Full value of the register
        struct {
            u8_t BDR_XL : 4;    // [3:0] Selects Batch Data Rate (accelerometer) {0}
            u8_t BDR_GY : 4;    // [7:4] Selects Batch Data Rate (gyroscope)     {0}
        };
    } bf;

} _ism330dhcx_rm__FIFO_CTRL3_s;


/// @struct _ism330dhcx_rm__FIFO_CTRL4
/// @brief  ISM330DHCX FIFO control register 4 [r/w] {0x00}
typedef struct _ism330dhcx_rm__FIFO_CTRL4
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t FIFO_MODE    : 3;    // [2:0] FIFO mode selection                       {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                  {0}
            u8_t ODR_T_BATCH  : 2;    // [5:4] Selects batch data rate (temperature)     {0}
            u8_t DEC_TS_BATCH : 2;    // [7:6] Selects decimation for timestamp batching {0}
        };
    } bf;

} _ism330dhcx_rm__FIFO_CTRL4_s;


/// @struct _ism330dhcx_rm__FIFO_CTRL
/// @brief  ISM330DHCX FIFO control register (1|2|3|4) [r/w] {0x00000000}
typedef struct _ism330dhcx_rm__FIFO_CTRL
{
    adr_u32c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u32_t full;                        // [31:0] Full value of the register
        struct {
            // FIFO_CTRL1|2
            u32_t WTM              : 9;    // [8:0]  FIFO watermark threshold                        {0 00000000}
            // FIFO_CTRL2
            u32_t UNCOPTR_RATE     : 2;    // [10:9]  Configures compression algorithm               {00}
            u32_t RESERVED_3       : 1;    // [11]    Reserved                                       {0}
            u32_t ODRCHG_EN        : 1;    // [12]    Enables ODR CHANGE virtual sensor batching     {0}
            u32_t RESERVED_5       : 1;    // [13]    Reserved                                       {0}
            u32_t FIFO_COMPR_RT_EN : 1;    // [14]    Enables/Disables compression algorithm runtime {0}
            u32_t STOP_ON_WTM      : 1;    // [15]    Stop values memorization at threshold level    {0}
            // FIFO_CTRL3
            u32_t BDR_XL           : 4;    // [19:16] Selects Batch Data Rate (accelerometer)        {0000}
            u32_t BDR_GY           : 4;    // [23:20] Selects Batch Data Rate (gyroscope)            {0000}
            // FIFO_CTRL4
            u32_t FIFO_MODE        : 3;    // [26:24] FIFO mode selection                            {000}
            u32_t RESERVED_27      : 1;    // [27]    Reserved                                       {0}
            u32_t ODR_T_BATCH      : 2;    // [29:28] Selects batch data rate (temperature)          {00}
            u32_t DEC_TS_BATCH     : 2;    // [31:30] Selects decimation for timestamp batching      {00}
        };
    } bf;

} _ism330dhcx_rm__FIFO_CTRL_s;


/// @struct  _ism330dhcx_rm__COUNTER_BDR_REG1
/// @brief   ISM330DHCX Counter batch data rate register 1 [r/w] {0x00}
typedef struct _ism330dhcx_rm__COUNTER_BDR_REG1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register
        struct {
            u8_t CNT_BDR_TH_8     : 1;    // [0]   Threshold for the internal counter of batch events                               {0}
            u8_t CNT_BDR_TH_9     : 1;    // [1]   Threshold for the internal counter of batch events                               {0}
            u8_t CNT_BDR_TH_10    : 1;    // [2]   Threshold for the internal counter of batch events                               {0}
            u8_t RESERVED_3       : 1;    // [3]   Reserved                                                                         {0}
            u8_t RESERVED_4       : 1;    // [4]   Reserved                                                                         {0}
            u8_t TRIG_COUNTER_BDR : 1;    // [5]   Selects the trigger for the internal counter of batch events between XL and gyro {0}
            u8_t RST_COUNTER_BDR  : 1;    // [6]   Resets the internal counter of batch events for a single sensor                  {0}
            u8_t dataready_pulsed : 1;    // [7]   Enables pulsed data-ready mode                                                   {0}
        };
    } bf;

} _ism330dhcx_rm__COUNTER_BDR_REG1_s;


/// @struct  _ism330dhcx_rm__COUNTER_BDR_REG2
/// @brief   ISM330DHCX Counter batch data rate register 2 [r/w] {0x00}
typedef struct _ism330dhcx_rm__COUNTER_BDR_REG2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t CNT_BDR_TH_0 : 1;    // [0]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_1 : 1;    // [1]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_2 : 1;    // [2]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_3 : 1;    // [3]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_4 : 1;    // [4]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_5 : 1;    // [5]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_6 : 1;    // [6]   Threshold for the internal counter of batch events {0}
            u8_t CNT_BDR_TH_7 : 1;    // [7]   Threshold for the internal counter of batch events {0}
        };
    } bf;

} _ism330dhcx_rm__COUNTER_BDR_REG2_s;


/// @struct  _ism330dhcx_rm__COUNTER_BDR_REG
/// @brief   ISM330DHCX Counter batch data rate register (2|1) [r/w] {0x0000}
/// @warning COUNTER_BDR_REG 1 & 2 have an unconventional bit order and must be send in reverse order (COUNTER_BDR_REG2|COUNTER_BDR_REG1)
typedef struct _ism330dhcx_rm__COUNTER_BDR_REG
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                        // [15:0] Full value of the register
        struct {
            // COUNTER_BDR_REG2|1
            u16_t CNT_BDR_TH       : 11;   // [10:0] Threshold for the internal counter of batch events                               {000 00000000}
            // COUNTER_BDR_REG1
            u16_t RESERVED_3       : 1;    // [11]   Reserved                                                                         {0}
            u16_t RESERVED_4       : 1;    // [12]   Reserved                                                                         {0}
            u16_t TRIG_COUNTER_BDR : 1;    // [13]   Selects the trigger for the internal counter of batch events between XL and gyro {0}
            u16_t RST_COUNTER_BDR  : 1;    // [14]   Resets the internal counter of batch events for a single sensor                  {0}
            u16_t dataready_pulsed : 1;    // [15]   Enables pulsed data-ready mode                                                   {0}

        };
    } bf;

} _ism330dhcx_rm__COUNTER_BDR_REG_s;


/// @struct _ism330dhcx_rm__FIFO_STATUS1
/// @brief  ISM330DHCX FIFO status register 1 [r] {output}
typedef struct _ism330dhcx_rm__FIFO_STATUS1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register
        struct {
            u8_t DIFF_FIFO_0 : 1;    // [0]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_1 : 1;    // [1]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_2 : 1;    // [2]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_3 : 1;    // [3]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_4 : 1;    // [4]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_5 : 1;    // [5]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_6 : 1;    // [6]   Number of unread sensor data stored in FIFO {output}
            u8_t DIFF_FIFO_7 : 1;    // [7]   Number of unread sensor data stored in FIFO {output}
        };
    } bf;

} _ism330dhcx_rm__FIFO_STATUS1_s;


/// @struct _ism330dhcx_rm__FIFO_STATUS2
/// @brief  ISM330DHCX FIFO status register 2 [r] {output}
typedef struct _ism330dhcx_rm__FIFO_STATUS2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                        // [7:0] Full value of the register
        struct {
            u8_t DIFF_FIFO_8      : 1;    // [0]   Number of unread sensor data stored in FIFO         {output}
            u8_t DIFF_FIFO_9      : 1;    // [1]   Number of unread sensor data stored in FIFO         {output}
            u8_t RESERVED_11      : 1;    // [2]   Reserved                                            {output}
            u8_t FIFO_OVR_LATCHED : 1;    // [3]   Latched FIFO overrun status                         {output}
            u8_t COUNTER_BDR_IA   : 1;    // [4]   Counter BDR reaches the CNT_BDR_TH_[10:0] threshold {output}
            u8_t FIFO_FULL_IA     : 1;    // [5]   Smart FIFO full status                              {output}
            u8_t FIFO_OVR_IA      : 1;    // [6]   FIFO overrun status                                 {output}
            u8_t FIFO_WTM_IA      : 1;    // [7]   FIFO watermark status                               {output}
        };
    } bf;

} _ism330dhcx_rm__FIFO_STATUS2_s;


/// @struct _ism330dhcx_rm__FIFO_STATUS
/// @brief  ISM330DHCX FIFO status register (1|2) [r] {output}
typedef struct _ism330dhcx_rm__FIFO_STATUS
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                        // [15:0] Full value of the register
        struct {
            // FIFO_STATUS1|2
            u16_t DIFF_FIFO        : 10;   // [9:0]  Number of unread sensor data stored in FIFO         {output}
            // FIFO_STATUS2
            u16_t RESERVED_11      : 1;    // [10]   Reserved                                            {output}
            u16_t FIFO_OVR_LATCHED : 1;    // [11]   Latched FIFO overrun status                         {output}
            u16_t COUNTER_BDR_IA   : 1;    // [12]   Counter BDR reaches the CNT_BDR_TH_[10:0] threshold {output}
            u16_t FIFO_FULL_IA     : 1;    // [13]   Smart FIFO full status                              {output}
            u16_t FIFO_OVR_IA      : 1;    // [14]   FIFO overrun status                                 {output}
            u16_t FIFO_WTM_IA      : 1;    // [15]   FIFO watermark status                               {output}
        };
    } bf;

} _ism330dhcx_rm__FIFO_STATUS_s;


/// @struct _ism330dhcx_rm__FIFO_DATA_OUT_TAG
/// @brief  ISM330DHCX FIFO tag register [r] {output}
typedef struct _ism330dhcx_rm__FIFO_DATA_OUT_TAG
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t TAG_PARITY   : 1;    // [0]   Identifies the sensor                           {output}
            u8_t TAG_CNT      : 2;    // [2:1] 2-bit counter which identifies sensor time slot {output}
            u8_t TAG_SENSOR   : 5;    // [7:3] Selects batch data rate (temperature)           {output}
        };
    } bf;

} _ism330dhcx_rm__FIFO_DATA_OUT_TAG_s;


/// @typedef _ism330dhcx_rm__FIFO_DATA_OUT_X
/// @brief  ISM330DHCX FIFO data output X [r] {output}
typedef reg_u16_s _ism330dhcx_rm__FIFO_DATA_OUT_X_s;


/// @typedef _ism330dhcx_rm__FIFO_DATA_OUT_Y
/// @brief  ISM330DHCX FIFO data output Y [r] {output}
typedef reg_u16_s _ism330dhcx_rm__FIFO_DATA_OUT_Y_s;


/// @typedef _ism330dhcx_rm__FIFO_DATA_OUT_Z
/// @brief  ISM330DHCX FIFO data output Z [r] {output}
typedef reg_u16_s _ism330dhcx_rm__FIFO_DATA_OUT_Z_s;


/* Interrupt Registers */


/// @struct _ism330dhcx_rm__INT1_CTRL
/// @brief  ISM330DHCX INT1 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm__INT1_CTRL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t INT1_DRDY_XL   : 1;    // [0]   Enables accelerometer data-ready interrupt on INT1 pin {0}
            u8_t INT1_DRDY_G    : 1;    // [1]   Enables gyroscope data-ready interrupt on INT1 pin     {0}
            u8_t INT1_BOOT      : 1;    // [2]   Enables boot status on INT1 pin                        {0}
            u8_t INT1_FIFO_TH   : 1;    // [3]   Enables FIFO threshold interrupt on INT1 pin           {0}
            u8_t INT1_FIFO_OVR  : 1;    // [4]   Enables FIFO overrun interrupt on INT1 pin             {0}
            u8_t INT1_FIFO_FULL : 1;    // [5]   Enables FIFO full flag interrupt on INT1 pin           {0}
            u8_t INT1_CNT_BDR   : 1;    // [6]   Enables COUNTER_BDR_IA interrupt on INT1               {0}
            u8_t DEN_DRDY_flag  : 1;    // [7]   Sends DEN_DRDY to INT1 pin                             {0}
        };
    } bf;

} _ism330dhcx_rm__INT1_CTRL_s;


/// @struct _ism330dhcx_rm__INT2_CTRL
/// @brief  ISM330DHCX INT2 pin control register [r/w] {0x00}
typedef struct _ism330dhcx_rm__INT2_CTRL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t INT2_DRDY_XL   : 1;    // [0]   Enables accelerometer data-ready interrupt on INT2 pin      {0}
            u8_t INT2_DRDY_G    : 1;    // [1]   Enables gyroscope data-ready interrupt on INT2 pin          {0}
            u8_t INT2_DRDY_TEMP : 1;    // [2]   Enables temperature sensor data-ready interrupt on INT2 pin {0}
            u8_t INT_FIFO_TH    : 1;    // [3]   Enables FIFO threshold interrupt on INT2 pin                {0}
            u8_t INT2_FIFO_OVR  : 1;    // [4]   Enables FIFO overrun interrupt on INT2 pin                  {0}
            u8_t INT2_FIFO_FULL : 1;    // [5]   Enables FIFO full flag interrupt on INT2 pin                {0}
            u8_t INT2_CNT_BDR   : 1;    // [6]   Enables COUNTER_BDR_IA interrupt on INT2 pin                {0}
            u8_t RESERVED_7     : 1;    // [7]   Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx_rm__INT2_CTRL_s;


/// @struct _ism330dhcx_rm__INT_CTRL
/// @brief  ISM330DHCX INT pin control register (1|2) [r/w] {0x0000}
typedef struct _ism330dhcx_rm__INT_CTRL
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                      // [15:0] Full value of the register
        struct {
            // INT1
            u16_t INT1_DRDY_XL   : 1;    // [0]    Enables accelerometer data-ready interrupt on INT1 pin      {0}
            u16_t INT1_DRDY_G    : 1;    // [1]    Enables gyroscope data-ready interrupt on INT1 pin          {0}
            u16_t INT1_BOOT      : 1;    // [2]    Enables boot status on INT1 pin                             {0}
            u16_t INT1_FIFO_TH   : 1;    // [3]    Enables FIFO threshold interrupt on INT1 pin                {0}
            u16_t INT1_FIFO_OVR  : 1;    // [4]    Enables FIFO overrun interrupt on INT1 pin                  {0}
            u16_t INT1_FIFO_FULL : 1;    // [5]    Enables FIFO full flag interrupt on INT1 pin                {0}
            u16_t INT1_CNT_BDR   : 1;    // [6]    Enables COUNTER_BDR_IA interrupt on INT1                    {0}
            u16_t DEN_DRDY_flag  : 1;    // [7]    Sends DEN_DRDY to INT1 pin                                  {0}
            // INT2
            u16_t INT2_DRDY_XL   : 1;    // [8]    Enables accelerometer data-ready interrupt on INT2 pin      {0}
            u16_t INT2_DRDY_G    : 1;    // [9]    Enables gyroscope data-ready interrupt on INT2 pin          {0}
            u16_t INT2_DRDY_TEMP : 1;    // [10]   Enables temperature sensor data-ready interrupt on INT2 pin {0}
            u16_t INT_FIFO_TH    : 1;    // [11]   Enables FIFO threshold interrupt on INT2 pin                {0}
            u16_t INT2_FIFO_OVR  : 1;    // [12]   Enables FIFO overrun interrupt on INT2 pin                  {0}
            u16_t INT2_FIFO_FULL : 1;    // [13]   Enables FIFO full flag interrupt on INT2 pin                {0}
            u16_t INT2_CNT_BDR   : 1;    // [14]   Enables COUNTER_BDR_IA interrupt on INT2 pin                {0}
            u16_t RESERVED_7     : 1;    // [15]   Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx_rm__INT_CTRL_s;


/// @struct _ism330dhcx_rm__ALL_INT_SRC
/// @brief  ISM330DHCX Source register for all interrupts [r] {output}
typedef struct _ism330dhcx_rm__ALL_INT_SRC
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register
        struct {
            u8_t FF_IA              : 1;    // [0]   Free-fall event status                             {0}
            u8_t WU_IA              : 1;    // [1]   Wake-up event status                               {0}
            u8_t SINGLE_TAP         : 1;    // [2]   Single-tap event status                            {0}
            u8_t DOUBLE_TAP         : 1;    // [3]   Double-tap event status                            {0}
            u8_t D6D_IA             : 1;    // [4]   Interrupt active for 6-D detection                 {0}
            u8_t SLEEP_CHANGE_IA    : 1;    // [5]   Detects change event in activity/inactivity status {0}
            u8_t RESERVED_6         : 1;    // [6]   Reserved                                           {0}
            u8_t TIMESTAMP_ENDCOUNT : 1;    // [7]   Alerts timestamp overflow within 6.4 ms            {0}
        };
    } bf;

} _ism330dhcx_rm__ALL_INT_SRC_s;


/// @struct _ism330dhcx_rm__WAKE_UP_SRC
/// @brief  ISM330DHCX Wake-up interrupt source register [r] {output}
typedef struct _ism330dhcx_rm__WAKE_UP_SRC
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                       // [7:0] Full value of the register
        struct {
            u8_t Z_WU            : 1;    // [0]   Wakeup event detection status on Z-axis            {0}
            u8_t Y_WU            : 1;    // [1]   Wakeup event detection status on Y-axis            {0}
            u8_t X_WU            : 1;    // [2]   Wakeup event detection status on X-axis            {0}
            u8_t WU_IA           : 1;    // [3]   Wakeup event detection status                      {0}
            u8_t SLEEP_STATE     : 1;    // [4]   Sleep event status                                 {0}
            u8_t FF_IA           : 1;    // [5]   Free-fall event detection status                   {0}
            u8_t SLEEP_CHANGE_IA : 1;    // [6]   Detects change event in activity/inactivity status {0}
            u8_t RESERVED_7      : 1;    // [7]   Reserved                                           {0}
        };
    } bf;

} _ism330dhcx_rm__WAKE_UP_SRC_s;


/// @struct _ism330dhcx_rm__TAP_SRC
/// @brief  ISM330DHCX Tap source register [r] {output}
typedef struct _ism330dhcx_rm__TAP_SRC
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t Z_TAP      : 1;    // [0]   Tap event detection status on Z-axis       {0}
            u8_t Y_TAP      : 1;    // [1]   Tap event detection status on Y-axis       {0}
            u8_t X_TAP      : 1;    // [2]   Tap event detection status on X-axis       {0}
            u8_t TAP_SIGN   : 1;    // [3]   Sign of acceleration detected by tap event {0}
            u8_t DOUBLE_TAP : 1;    // [4]   Double-tap event detection status          {0}
            u8_t SINGLE_TAP : 1;    // [5]   Single-tap event status                    {0}
            u8_t TAP_IA     : 1;    // [6]   Tap event detection status                 {0}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                   {0}
        };
    } bf;

} _ism330dhcx_rm__TAP_SRC_s;


/// @struct _ism330dhcx_rm__D6D_SRC
/// @brief  ISM330DHCX 6-D detection register [r] {output}
typedef struct _ism330dhcx_rm__D6D_SRC
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                // [7:0] Full value of the register
        struct {
            u8_t XL       : 1;    // [0]   X-axis low event  (under threshold) {0}
            u8_t XH       : 1;    // [1]   X-axis high event (over threshold)  {0}
            u8_t YL       : 1;    // [2]   Y-axis low event  (under threshold) {0}
            u8_t YH       : 1;    // [3]   Y-axis high event (over threshold)  {0}
            u8_t ZL       : 1;    // [4]   Z-axis low event  (under threshold) {0}
            u8_t ZH       : 1;    // [5]   Z-axis high event (over threshold)  {0}
            u8_t D6D_IA   : 1;    // [6]   Interrupt active for 6-D Detection  {0}
            u8_t DEN_DRDY : 1;    // [7]   DEN data-ready signal               {0}
        };
    } bf;

} _ism330dhcx_rm__D6D_SRC_s;


/// @struct _ism330dhcx_rm__STATUS_REG
/// @brief  ISM330DHCX STATUS_REG register (read by the primary interface I²C/SPI) [r] {output}
typedef struct _ism330dhcx_rm__STATUS_REG
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t XLDA         : 1;    // [0]   new accelerometer data available {0}
            u8_t GDA          : 1;    // [1]   new gyroscope data available     {0}
            u8_t TDA          : 1;    // [2]   new temperature data available   {0}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                         {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                         {0}
            u8_t RESERVED_5   : 1;    // [5]   Reserved                         {0}
            u8_t RESERVED_6   : 1;    // [6]   Reserved                         {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                         {0}
        };
    } bf;

} _ism330dhcx_rm__STATUS_REG_s;


/// @struct _ism330dhcx_rm__STATUS_SPIAux
/// @brief  ISM330DHCX STATUS_SPIAux register (read by the auxiliary SPI) [r] {output}
typedef struct _ism330dhcx_rm__STATUS_SPIAux
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register
        struct {
            u8_t XLDA          : 1;    // [0]   accelerometer data available                            {0}
            u8_t GDA           : 1;    // [1]   gyroscope data available                                {0}
            u8_t GYRO_SETTLING : 1;    // [2]   High when the gyroscope output is in the settling phase {0}
            u8_t RESERVED_3    : 1;    // [3]   Reserved                                                {0}
            u8_t RESERVED_4    : 1;    // [4]   Reserved                                                {0}
            u8_t RESERVED_5    : 1;    // [5]   Reserved                                                {0}
            u8_t RESERVED_6    : 1;    // [6]   Reserved                                                {0}
            u8_t RESERVED_7    : 1;    // [7]   Reserved                                                {0}
        };
    } bf;

} _ism330dhcx_rm__STATUS_SPIAux_s;


/* Control Registers */


/// @struct _ism330dhcx_rm__CTRL1_XL
/// @brief  ISM330DHCX control register 1 (accelerometer) [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL1_XL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0 : 1;    // [0]   Reserved                                {0}
            u8_t LPF2_XL_EN : 1;    // [1]   Accelerometer high-resolution selection {0}
            u8_t FS_XL      : 2;    // [3:2] Accelerometer full-scale selection      {00}
            u8_t ODR_XL     : 3;    // [7:4] Accelerometer ODR selection             {0000}
        };
    } bf;

} _ism330dhcx_rm__CTRL1_XL_s;


/// @struct _ism330dhcx_rm__CTRL2_G
/// @brief  ISM330DHCX control register 2 (gyroscope) [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL2_G
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t FS_4000    : 1;    // [0]   Selects gyro chain full-scale ±4000 dps {0}
            u8_t FS_125     : 1;    // [1]   Selects gyro chain full-scale ±125  dps {0}
            u8_t FS_G       : 2;    // [3:2] Gyroscope chain full-scale selection    {00}
            u8_t ODR_G      : 3;    // [7:4] Gyroscope output data rate selection    {0000}
        };
    } bf;

} _ism330dhcx_rm__CTRL2_G_s;


/// @struct _ism330dhcx_rm__CTRL3_C
/// @brief  ISM330DHCX control register 3 [r/w] {0x04}
typedef struct _ism330dhcx_rm__CTRL3_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t SW_RESET   : 1;    // [0]   Software reset                                       {0}
            u8_t RESERVED_1 : 1;    // [1]   Reserved                                             {0}
            u8_t IF_INC     : 1;    // [2]   Register address automatically incremented (on read) {1}
            u8_t SIM        : 1;    // [3]   SPI Serial Interface Mode selection                  {0}
            u8_t PP_OD      : 1;    // [4]   Push-pull/open-drain selection on INT1 and INT2 pins {0}
            u8_t H_LACTIVE  : 1;    // [5]   Interrupt activation level                           {0}
            u8_t BDU        : 1;    // [6]   Block Data Update                                    {0}
            u8_t BOOT       : 1;    // [7]   Reboots memory content                               {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL3_C_s;


/// @struct _ism330dhcx_rm__CTRL4_C
/// @brief  ISM330DHCX control register 4 [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL4_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0]   Reserved                                           {0}
            u8_t LPF1_SEL_G   : 1;    // [1]   Enables gyroscope digital LPF1                     {0}
            u8_t I2C_DISABLE  : 1;    // [2]   Disables I2C interface                             {0}
            u8_t DRDY_MASK    : 1;    // [3]   Enables data available                             {0}
            u8_t RESERVED_4   : 1;    // [4]   Reserved                                           {0}
            u8_t INT2_ON_INT1 : 2;    // [5]   All interrupt signals available on INT1 pin enable {0}
            u8_t SLEEP_G      : 1;    // [6]   Enables gyroscope Sleep mode                       {0}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                                           {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL4_C_s;


/// @struct _ism330dhcx_rm__CTRL5_C
/// @brief  ISM330DHCX control register 5 [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL5_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t ST_XL      : 2;    // [1:0] Linear acceleration sensor self-test enable                 {00}
            u8_t ST_G       : 2;    // [3:2] Angular rate sensor self-test enable                        {00}
            u8_t RESERVED_4 : 1;    // [4]   Reserved                                                    {0}
            u8_t ROUNDING   : 2;    // [6:5] Circular burst-mode (rounding) read of the output registers {00}
            u8_t RESERVED_7 : 1;    // [7]   Reserved                                                    {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL5_C_s;


/// @struct _ism330dhcx_rm__CTRL6_C
/// @brief  ISM330DHCX control register 6 [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL6_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t FTYPE      : 3;    // [2:0] Gyroscope low-pass filter (LPF1) bandwidth selection       {000}
            u8_t USR_OFF_W  : 1;    // [3]   Weight of XL user offset bits of register                  {0}
            u8_t XL_HM_MODE : 1;    // [4]   Disables high-performance operating mode for accelerometer {0}
            u8_t LVL2_EN    : 1;    // [5]   Enables DEN level-sensitive latched mode                   {0}
            u8_t LVL1_EN    : 1;    // [6]   Enables DEN data level-sensitive trigger mode              {0}
            u8_t TRIG_EN    : 1;    // [7]   Enables DEN data edge-sensitive  trigger mode              {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL6_C_s;


/// @struct _ism330dhcx_rm__CTRL7_G
/// @brief  ISM330DHCX control register 7 (gyroscope) [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL7_G
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t OIS_ON         : 1;    // [0]   Enables the OIS chain from primary interface when the OIS_ON_EN bit is '1' {0}
            u8_t USR_OFF_ON_OUT : 1;    // [1]   Enables accelerometer user offset correction block                         {0}
            u8_t OIS_ON_EN      : 1;    // [2]   Selects how to enable and disable the OIS chain                            {0}
            u8_t RESERVED_3     : 1;    // [3]   Reserved                                                                   {0}
            u8_t HPM_G          : 2;    // [4:5] Gyroscope digital HP filter cutoff selection                               {00}
            u8_t HP_EN_G        : 1;    // [6]   Enables gyroscope digital high-pass filter                                 {0}
            u8_t G_HM_MODE      : 1;    // [7]   Disables gyroscope high-performance operating mode                         {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL7_G_s;


/// @struct _ism330dhcx_rm__CTRL8_XL
/// @brief  ISM330DHCX control register 8 (accelerometer) [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL8_XL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t LOW_PASS_ON_6D    : 1;    // [0]   LPF2 on 6D function selection                                     {0}
            u8_t RESERVED_1        : 1;    // [1]   Reserved                                                          {0}
            u8_t HP_SLOPE_XL_EN    : 1;    // [2]   Accelerometer slope filter / high-pass filter selection           {0}
            u8_t FASTSETTL_MODE_XL : 1;    // [3]   Enables accelerometer LPF2 and HPF fast-settling mode             {0}
            u8_t HP_REF_MODE_XL    : 1;    // [4]   Enables accelerometer high-pass filter reference mode             {0}
            u8_t HPCF_XL           : 3;    // [5:7] Accelerometer LPF2 and HP filter configuration and cutoff setting {000}
        };
    } bf;

} _ism330dhcx_rm__CTRL8_XL_s;


/// @struct _ism330dhcx_rm__CTRL9_XL
/// @brief  ISM330DHCX control register 9 (accelerometer) [r/w] {0xE0}
typedef struct _ism330dhcx_rm__CTRL9_XL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0  : 1;    // [0] Reserved                                          {0}
            u8_t DEVICE_CONF : 1;    // [1] Enables the proper device configuration           {0}
            u8_t DEN_LH      : 1;    // [2] DEN active level configuration                    {0}
            u8_t DEN_XL_EN   : 1;    // [3] Extends DEN functionality to accelerometer sensor {0}
            u8_t DEN_XL_G    : 1;    // [4] DEN stamping sensor selection                     {0}
            u8_t DEN_Z       : 1;    // [5] DEN value stored in LSB of Z-axis                 {1}
            u8_t DEN_Y       : 1;    // [6] DEN value stored in LSB of Y-axis                 {1}
            u8_t DEN_X       : 1;    // [7] DEN value stored in LSB of X-axis                 {1}
        };
    } bf;

} _ism330dhcx_rm__CTRL9_XL_s;


/// @struct _ism330dhcx_rm__CTRL10_C
/// @brief  ISM330DHCX control register 10 [r/w] {0x00}
typedef struct _ism330dhcx_rm__CTRL10_C
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0   : 1;    // [0] Reserved                  {0}
            u8_t RESERVED_1   : 1;    // [1] Reserved                  {0}
            u8_t RESERVED_2   : 1;    // [2] Reserved                  {0}
            u8_t RESERVED_3   : 1;    // [3] Reserved                  {0}
            u8_t RESERVED_4   : 1;    // [4] Reserved                  {0}
            u8_t TIMESTAMP_EN : 1;    // [5] Enables timestamp counter {0}
            u8_t RESERVED_6   : 1;    // [6] Reserved                  {0}
            u8_t RESERVED_7   : 1;    // [7] Reserved                  {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL10_C_s;


/* Output Registers */


/// @typedef _ism330dhcx_rm__OUT_TEMP
/// @brief  ISM330DHCX Temperature data output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUT_TEMP_s;


/// @typedef _ism330dhcx_rm__OUTX_G
/// @brief  ISM330DHCX Angular rate sensor pitch axis (X) angular rate output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTX_G_s;


/// @typedef _ism330dhcx_rm__OUTY_G
/// @brief  ISM330DHCX Angular rate sensor roll axis (Y) angular rate output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTY_G_s;


/// @typedef _ism330dhcx_rm__OUTZ_G
/// @brief  ISM330DHCX Angular rate sensor yaw axis (Z) angular rate output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTZ_G_s;


/// @typedef _ism330dhcx_rm__OUTX_A
/// @brief  ISM330DHCX Linear acceleration sensor X-axis output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTX_A_s;


/// @typedef _ism330dhcx_rm__OUTY_A
/// @brief  ISM330DHCX Linear acceleration sensor Y-axis output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTY_A_s;


/// @typedef _ism330dhcx_rm__OUTZ_A
/// @brief  ISM330DHCX Linear acceleration sensor Z-axis output register [r] {output}
typedef reg_u16_s _ism330dhcx_rm__OUTZ_A_s;


/* Motion Registers */


/// @struct _ism330dhcx_rm__TAP_CFG0
/// @brief  ISM330DHCX Tap configuration register [r/w] {0x00}
typedef struct _ism330dhcx_rm__TAP_CFG0
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                           // [7:0] Full value of the register
        struct {
            u8_t LIR                 : 1;    // [0]   Latched Interrupt                                         {0}
            u8_t TAP_Z_EN            : 1;    // [1]   Enable Z direction in tap recognition                     {0}
            u8_t TAP_Y_EN            : 1;    // [1]   Enable Y direction in tap recognition                     {0}
            u8_t TAP_X_EN            : 1;    // [1]   Enable X direction in tap recognition                     {0}
            u8_t SLOPE_FDS           : 1;    // [4]   HPF or SLOPE filter selection on wake-up and in/activity  {0}
            u8_t SLEEP_STATUS_ON_INT : 1;    // [5]   Activity/inactivity interrupt mode configuration          {0}
            u8_t INT_CLR_ON_READ     : 1;    // [6]   Clears latched interrupts of an event detection upon read {0}
            u8_t RESERVED_7          : 1;    // [7]   Reserved                                                  {0}
        };
    } bf;

} _ism330dhcx_rm__TAP_CFG0_s;


/// @struct _ism330dhcx_rm__TAP_CFG1
/// @brief  ISM330DHCX Tap configuration register [r/w] {0x00}
typedef struct _ism330dhcx_rm__TAP_CFG1
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t TAP_THS_X    : 5;    // [4:0] X-axis tap recognition threshold             {00000}
            u8_t TAP_PRIORITY : 3;    // [7:5] Selection of axis priority for TAP detection {000}
        };
    } bf;

} _ism330dhcx_rm__TAP_CFG1_s;


/// @struct _ism330dhcx_rm__TAP_CFG2
/// @brief  ISM330DHCX Tap configuration register [r/w] {0x00}
typedef struct _ism330dhcx_rm__TAP_CFG2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t TAP_THS_Y         : 5;    // [4:0] Y-axis tap recognition threshold                                     {00000}
            u8_t INACT_EN          : 2;    // [6:5] Enable in/activity (sleep) function                                  {00}
            u8_t INTERRUPTS_ENABLE : 1;    // [7]   Enable basic interrupts (6D/4D, free-fall, wake-up, tap, inactivity) {0}
        };
    } bf;

} _ism330dhcx_rm__TAP_CFG2_s;


/// @struct _ism330dhcx_rm__TAP_THS_6D
/// @brief  ISM330DHCX Portrait/landscape position and tap function threshold register [r/w] {0x00}
typedef struct _ism330dhcx_rm__TAP_THS_6D
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                 // [7:0] Full value of the register
        struct {
            u8_t TAP_THS_Z : 5;    // [4:0] Z-axis tap recognition threshold                                            {00000}
            u8_t SIXD_THS  : 2;    // [6:5] Threshold for 4D/6D function                                                {00}
            u8_t D4D_EN    : 1;    // [7]   Enables detection of 4D orientation (Z-axis position detection is disabled) {0}
        };
    } bf;

} _ism330dhcx_rm__TAP_THS_6D_s;


/// @struct _ism330dhcx_rm__INT_DUR2
/// @brief  ISM330DHCX Tap recognition function setting register [r/w] {0x00}
typedef struct _ism330dhcx_rm__INT_DUR2
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;             // [7:0] Full value of the register
        struct {
            u8_t SHOCK : 2;    // [1:0] Maximum duration of overthreshold event                 {00}
            u8_t QUIET : 2;    // [3:2] Expected quiet time after a tap detection               {00}
            u8_t DUR   : 4;    // [7:4] Duration of maximum time gap for double-tap recognition {0000}
        };
    } bf;

} _ism330dhcx_rm__INT_DUR2_s;


/// @struct _ism330dhcx_rm__WAKE_UP_THS
/// @brief  ISM330DHCX Single/double-tap selection and wake-up configuration [r/w] {0x00}
typedef struct _ism330dhcx_rm__WAKE_UP_THS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t WK_THS            : 6;    // [5:0] Threshold for wakeup                                         {000000}
            u8_t USR_OFF_ON_WU     : 1;    // [6]   Sends the low-pass filtered data with user offset correction {0}
            u8_t SINGLE_DOUBLE_TAP : 1;    // [7]   Single/double-tap event enable                               {0}
        };
    } bf;

} _ism330dhcx_rm__WAKE_UP_THS_s;


/// @struct _ism330dhcx_rm__WAKE_UP_DUR
/// @brief  ISM330DHCX Free-fall, wakeup and sleep mode functions duration setting register [r/w] {0x00}
typedef struct _ism330dhcx_rm__WAKE_UP_DUR
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                  // [7:0] Full value of the register
        struct {
            u8_t SLEEP_DUR  : 4;    // [3:0] Duration to go in sleep mode        {0000}
            u8_t WAKE_THS_W : 1;    // [4]   Weight of 1 LSB of wakeup threshold {0}
            u8_t WAKE_DUR   : 2;    // [6:5] Wake up duration event              {00}
            u8_t FF_DUR5    : 1;    // [7]   Free fall duration event            {0}
        };
    } bf;

} _ism330dhcx_rm__WAKE_UP_DUR_s;


/// @struct _ism330dhcx_rm__FREE_FALL
/// @brief  ISM330DHCX Free-fall function duration setting register [r/w] {0x00}
typedef struct _ism330dhcx_rm__FREE_FALL
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;              // [7:0] Full value of the register
        struct {
            u8_t FF_THS : 3;    // [2:0] Free-fall threshold setting {000}
            u8_t FF_DUR : 5;    // [7:3] Free-fall duration event    {00000}
        };
    } bf;

} _ism330dhcx_rm__FREE_FALL_s;


/// @struct _ism330dhcx_rm__MD1_CFG
/// @brief  ISM330DHCX Functions routing on INT1 register [r/w] {0x00}
typedef struct _ism330dhcx_rm__MD1_CFG
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t INT1_SHUB         : 1;    // [0]   Routing of sensor hub communication concluded event on INT1 {0}
            u8_t INT1_EMB_FUNC     : 1;    // [1]   Routing of embedded functions event on INT1                 {0}
            u8_t INT1_6D           : 1;    // [2]   Routing of 6D event on INT1                                 {0}
            u8_t INT1_DOUBLE_TAP   : 1;    // [3]   Routing of double-tap event on INT1                         {0}
            u8_t INT1_FF           : 1;    // [4]   Routing of free-fall event on INT1                          {0}
            u8_t INT1_WU           : 1;    // [5]   Routing of wakeup event on INT1                             {0}
            u8_t INT1_SINGLE_TAP   : 1;    // [6]   Routing of single-tap recognition event on INT1             {0}
            u8_t INT1_SLEEP_CHANGE : 1;    // [7]   Routing of activity/inactivity recognition event on INT1    {0}
        };
    } bf;

} _ism330dhcx_rm__MD1_CFG_s;


/// @struct _ism330dhcx_rm__MD2_CFG
/// @brief  ISM330DHCX Functions routing on INT2 register [r/w] {0x00}
typedef struct _ism330dhcx_rm__MD2_CFG
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                         // [7:0] Full value of the register
        struct {
            u8_t INT2_TIMESTAMP    : 1;    // [0]   Enables routing on INT2 pin of the alert for timestamp overflow {0}
            u8_t INT2_EMB_FUNC     : 1;    // [1]   Routing of embedded functions event on INT2                     {0}
            u8_t INT2_6D           : 1;    // [2]   Routing of 6D event on INT2                                     {0}
            u8_t INT2_DOUBLE_TAP   : 1;    // [3]   Routing of double-tap event on INT2                             {0}
            u8_t INT2_FF           : 1;    // [4]   Routing of free-fall event on INT2                              {0}
            u8_t INT2_WU           : 1;    // [5]   Routing of wakeup event on INT2                                 {0}
            u8_t INT2_SINGLE_TAP   : 1;    // [6]   Routing of single-tap recognition event on INT2                 {0}
            u8_t INT2_SLEEP_CHANGE : 1;    // [7]   Routing of activity/inactivity recognition event on INT2        {0}
        };
    } bf;

} _ism330dhcx_rm__MD2_CFG_s;


/* Embedded and Machine Learning Status Registers */


/// @struct _ism330dhcx_rm__EMB_FUNC_STATUS_MAINPAGE
/// @brief  ISM330DHCX Embedded function status register [r] {0x00}
typedef struct _ism330dhcx_rm__EMB_FUNC_STATUS_MAINPAGE
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register
        struct {
            u8_t RESERVED_0  : 1;    // [0]   Reserved                                                          {0}
            u8_t RESERVED_1  : 1;    // [1]   Reserved                                                          {0}
            u8_t RESERVED_2  : 1;    // [2]   Reserved                                                          {0}
            u8_t IS_STEP_DET : 1;    // [3]   Interrupt status bit for step detection                           {0}
            u8_t IS_TILT     : 1;    // [4]   Interrupt status bit for tilt detection                           {0}
            u8_t IS_SIGMOT   : 1;    // [5]   Interrupt status bit for significant motion detection             {0}
            u8_t RESERVED_6  : 1;    // [6]   Reserved                                                          {0}
            u8_t IS_FSM_LC   : 1;    // [7]   Interrupt status bit for FSM long counter timeout interrupt event {0}
        };
    } bf;

} _ism330dhcx_rm__EMB_FUNC_STATUS_MAINPAGE_s;


/// @struct _ism330dhcx_rm__FSM_STATUS_A_MAINPAGE
/// @brief  ISM330DHCX Finite State Machine status register (A) [r] {output}
typedef struct _ism330dhcx_rm__FSM_STATUS_A_MAINPAGE
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

} _ism330dhcx_rm__FSM_STATUS_A_MAINPAGE_s;


/// @struct _ism330dhcx_rm__FSM_STATUS_B_MAINPAGE
/// @brief  ISM330DHCX Finite State Machine status register (B) [r] {output}
typedef struct _ism330dhcx_rm__FSM_STATUS_B_MAINPAGE
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

} _ism330dhcx_rm__FSM_STATUS_B_MAINPAGE_s;


/// @struct _ism330dhcx_rm__FSM_STATUS_MAINPAGE
/// @brief  ISM330DHCX Finite State Machine status register (A|B) [r] {output}
typedef struct _ism330dhcx_rm__FSM_STATUS_MAINPAGE
{
    adr_u16c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u16_t full;                // [15:0] Full value of the register
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

} _ism330dhcx_rm__FSM_STATUS_MAINPAGE_s;


/// @struct _ism330dhcx_rm__MLC_STATUS_MAINPAGE
/// @brief  ISM330DHCX Machine Learning Core status register [r] {output}
typedef struct _ism330dhcx_rm__MLC_STATUS_MAINPAGE
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

} _ism330dhcx_rm__MLC_STATUS_MAINPAGE_s;


/// @struct _ism330dhcx_rm__STATUS_MASTER_MAINPAGE
/// @brief  ISM330DHCX Sensor hub source register [r] {output}
typedef struct _ism330dhcx_rm__STATUS_MASTER_MAINPAGE
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                      // [7:0] Full value of the register
        struct {
            u8_t SENS_HUB_ENDOP : 1;    // [0]   Sensor hub communication status                                         {output}
            u8_t RESERVED_1     : 1;    // [1]   Reserved                                                                {output}
            u8_t RESERVED_2     : 1;    // [2]   Reserved                                                                {output}
            u8_t SLAVE0_NACK    : 1;    // [3]   This bit is set to 1 if Not acknowledge occurs on slave 0 communication {output}
            u8_t SLAVE1_NACK    : 1;    // [4]   This bit is set to 1 if Not acknowledge occurs on slave 1 communication {output}
            u8_t SLAVE2_NACK    : 1;    // [5]   This bit is set to 1 if Not acknowledge occurs on slave 2 communication {output}
            u8_t SLAVE3_NACK    : 1;    // [6]   This bit is set to 1 if Not acknowledge occurs on slave 3 communication {output}
            u8_t WR_ONCE_DONE   : 1;    // [7]   Set to 1 when the write operation on slave 0 is completed               {output}
        };
    } bf;

} _ism330dhcx_rm__STATUS_MASTER_MAINPAGE_s;


/* Optical Image Stabilisation (OIS) and Sensor Offset Registers */


/// @struct _ism330dhcx_rm__INT_OIS
/// @brief  ISM330DHCX OIS interrupt configuration register and accelerometer self-test enable setting [r:r/w] {0x00}
/// @note   Primary interface for read-only [r]; only Aux SPI can write to this register [r/w]
typedef struct _ism330dhcx_rm__INT_OIS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                     // [7:0] Full value of the register
        struct {
            u8_t ST_XL_OIS     : 2;    // [1:0] Selects accelerometer self-test                       {00}
            u8_t RESERVED_2    : 1;    // [2]   Reserved                                              {0}
            u8_t RESERVED_3    : 1;    // [3]   Reserved                                              {-}
            u8_t RESERVED_4    : 1;    // [4]   Reserved                                              {-}
            u8_t DEN_LH_OIS    : 1;    // [5]   Indicates polarity of DEN signal on OIS chain         {0}
            u8_t LVL2_OIS      : 1;    // [6]   Enables level-sensitive latched mode on the OIS chain {0}
            u8_t INT2_DRDY_OIS : 1;    // [7]   Enables OIS chain DRDY on INT2 pin                    {0}
        };
    } bf;

} _ism330dhcx_rm__INT_OIS_s;


/// @struct _ism330dhcx_rm__CTRL1_OIS
/// @brief  ISM330DHCX OIS configuration register [r:r/w] {0x00}
/// @note   Primary interface for read-only [r]; only Aux SPI can write to this register [r/w]
typedef struct _ism330dhcx_rm__CTRL1_OIS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                   // [7:0] Full value of the register
        struct {
            u8_t OIS_EN_SPI2 : 1;    // [0]   Enables OIS chain data processing (gyro &| accelerometer) {0}
            u8_t FS_125_OIS  : 1;    // [1]   Selects gyroscope OIS chain full-scale ±125 dps           {0}
            u8_t FS_G_OIS    : 2;    // [3:2] Selects gyroscope OIS chain full-scale                    {00}
            u8_t Mode4_EN    : 1;    // [4]   Enables accelerometer OIS chain                           {0}
            u8_t SIM_OIS     : 1;    // [5]   SPI2 3- or 4-wire interface                               {0}
            u8_t LVL1_OIS    : 1;    // [6]   Enables level-sensitive trigger mode on OIS chain         {0}
            u8_t RESERVED_7  : 1;    // [7]   Reserved                                                  {0}
        };
    } bf;

} _ism330dhcx_rm__CTRL1_OIS_s;


/// @struct _ism330dhcx_rm__CTRL2_OIS
/// @brief  ISM330DHCX OIS configuration register [r:r/w] {0x00}
/// @note   Primary interface for read-only [r]; only Aux SPI can write to this register [r/w]
typedef struct _ism330dhcx_rm__CTRL2_OIS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                    // [7:0] Full value of the register
        struct {
            u8_t HP_EN_OIS    : 1;    // [0]   Enables gyroscope OIS chain digital high-pass filter        {0}
            u8_t FTYPE_OIS    : 2;    // [2:1] Selects gyroscope digital LPF1 filter bandwidth             {00}
            u8_t RESERVED_3   : 1;    // [3]   Reserved                                                    {0}
            u8_t HPM_OIS      : 2;    // [5:4] Selects gyroscope OIS chain digital high-pass filter cutoff {00}
            u8_t RESERVED_6   : 1;    // [6]   Reserved                                                    {-}
            u8_t RESERVED_7   : 1;    // [7]   Reserved                                                    {-}
        };
    } bf;

} _ism330dhcx_rm__CTRL2_OIS_s;


/// @struct _ism330dhcx_rm__CTRL3_OIS
/// @brief  ISM330DHCX OIS configuration register [r:r/w] {0x00}
/// @note   Primary interface for read-only [r]; only Aux SPI can write to this register [r/w]
typedef struct _ism330dhcx_rm__CTRL3_OIS
{
    adr_u8c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u8_t full;                          // [7:0] Full value of the register
        struct {
            u8_t ST_OIS_CLAMPDIS    : 1;    // [0]   Disables OIS chain clamp                     {0}
            u8_t ST_OIS             : 2;    // [2:1] Selects gyroscope OIS chain self-test        {00}
            u8_t FILTER_XL_CONF_OIS : 3;    // [5:3] Selects accelerometer OIS channel bandwidth  {000}
            u8_t FS_XL_OIS          : 2;    // [7:6] Selects accelerometer OIS channel full-scale {00}
        };
    } bf;

} _ism330dhcx_rm__CTRL3_OIS_s;


/// @typedef _ism330dhcx_rm__X_OFS_USR
/// @brief  ISM330DHCX Accelerometer X-axis user offset correction [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm__X_OFS_USR_s;


/// @typedef _ism330dhcx_rm__Y_OFS_USR
/// @brief  ISM330DHCX Accelerometer Y-axis user offset correction [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm__Y_OFS_USR_s;


/// @typedef _ism330dhcx_rm__Z_OFS_USR
/// @brief  ISM330DHCX Accelerometer Z-axis user offset correction [r/w] {0x00}
typedef reg_u8_s _ism330dhcx_rm__Z_OFS_USR_s;


/* Timestamp Registers */


/// @typedef _ism330dhcx_rm__TIMESTAMP0
/// @brief  ISM330DHCX Timestamp data output register (LSB) [r] {output}
/// @note   value is expressed as a 32-bit word and the bit resolution is 25 μs
typedef reg_u8_s _ism330dhcx_rm__TIMESTAMP0_s;


/// @typedef _ism330dhcx_rm__TIMESTAMP1
/// @brief  ISM330DHCX Timestamp data output register [r] {output}
/// @note   value is expressed as a 32-bit word and the bit resolution is 25 μs
typedef reg_u8_s _ism330dhcx_rm__TIMESTAMP1_s;


/// @typedef _ism330dhcx_rm__TIMESTAMP2
/// @brief  ISM330DHCX Timestamp data output register [r] {output}
/// @note   value is expressed as a 32-bit word and the bit resolution is 25 μs
typedef reg_u8_s _ism330dhcx_rm__TIMESTAMP2_s;


/// @typedef _ism330dhcx_rm__TIMESTAMP3
/// @brief  ISM330DHCX Timestamp data output register (MSB) [r] {output}
/// @note   value is expressed as a 32-bit word and the bit resolution is 25 μs
typedef reg_u8_s _ism330dhcx_rm__TIMESTAMP3_s;


/// @struct _ism330dhcx_rm__TIMESTAMP
/// @brief  ISM330DHCX Timestamp data output register (1|2|3|4) [r] {output}
/// @note   value is expressed as a 32-bit word and the bit resolution is 25 μs
typedef struct _ism330dhcx_rm__TIMESTAMP
{
    adr_u32c_u ADR; // register address

    /// @union <anonymous>
    /// @brief Bit Field Union for register value
    union {
        u32_t full;                  // [31:0]  Full value of the register
        struct {
            u32_t TIMESTAMP0 : 8;    // [7:0]   Timestamp 0 (LSB) {output}
            u32_t TIMESTAMP1 : 8;    // [15:8]  Timestamp 1       {output}
            u32_t TIMESTAMP2 : 8;    // [23:16] Timestamp 2       {output}
            u32_t TIMESTAMP3 : 8;    // [31:24] Timestamp 3 (MSB) {output}
        };
    } bf;

} _ism330dhcx_rm__TIMESTAMP_s;


/// @typedef _ism330dhcx_rm__INTERNAL_FREQ_FINE
/// @brief  ISM330DHCX Internal frequency register [r] {output}
typedef reg_u8_s _ism330dhcx_rm__INTERNAL_FREQ_FINE_s;


#endif /* __ISM330DHCX_INTERNAL__RM_STRUCTS_H__ */
