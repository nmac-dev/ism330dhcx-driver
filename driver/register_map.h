/// Registers for ISM330DHCX

#ifndef __ISM330DHCX_REGISTER_MAP_H__
#define __ISM330DHCX_REGISTER_MAP_H__


/**
 *  Register mapping
 *      Template: #define <reg_name> (<reg_adr>) // <reg_desc> [<read>/<write>] {<default_reg_val>}
 */


/* Embedded Configuration & Pin Control */

#define ISM330DHCX_RM__FUNC_CFG_ACCESS     (0x01u)     // Embedded functions control                     [r/w]   {0x00}
#define ISM330DHCX_RM__PIN_CTRL            (0x02u)     // Pins pull-up enable/disable control            [r/w]   {0x3F}

/* FIFO Control */

#define ISM330DHCX_RM__FIFO_CTRL1          (0x07u)     // FIFO control 1                                 [r/w]   {0x00}
#define ISM330DHCX_RM__FIFO_CTRL2          (0x08u)     // FIFO control 2                                 [r/w]   {0x00}
#define ISM330DHCX_RM__FIFO_CTRL3          (0x09u)     // FIFO control 3                                 [r/w]   {0x00}
#define ISM330DHCX_RM__FIFO_CTRL4          (0x0Au)     // FIFO control 4                                 [r/w]   {0x00}

/* Counter Batch Data Rate */

#define ISM330DHCX_RM__COUNTER_BDR_REG1    (0x0Bu)     // Counter batch data rate 1                      [r/w]   {0x00}
#define ISM330DHCX_RM__COUNTER_BDR_REG2    (0x0Cu)     // Counter batch data rate 2                      [r/w]   {0x00}

/* Interupt Control */

#define ISM330DHCX_RM__INT1_CTRL           (0x0Du)     // INT1 control                                   [r/w]   {0x00}
#define ISM330DHCX_RM__INT2_CTRL           (0x0Eu)     // INT2 control                                   [r/w]   {0x00}

/* Device Identification */

#define ISM330DHCX_RM__WHO_AM_I            (0x0Fu)     // Who am I                                       [r]     {0x6B}

/* Sensor Control - Accelerometer & Gyroscope */

#define ISM330DHCX_RM__CTRL1_XL            (0x10u)     // Control 1 (accelerometer)                      [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL2_G             (0x11u)     // Control 2 (gyroscope)                          [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL3_C             (0x12u)     // Control 3                                      [r/w]   {0x04}
#define ISM330DHCX_RM__CTRL4_C             (0x13u)     // Control 4                                      [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL5_C             (0x14u)     // Control 5                                      [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL6_C             (0x15u)     // Control 6                                      [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL7_G             (0x16u)     // Control 7 (gyroscope)                          [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL8_XL            (0x17u)     // Control 8 (accelerometer)                      [r/w]   {0x00}
#define ISM330DHCX_RM__CTRL9_XL            (0x18u)     // Control 9 (accelerometer)                      [r/w]   {0xE0}
#define ISM330DHCX_RM__CTRL10_C            (0x19u)     // Control 10                                     [r/w]   {0x00}

/* Interrupt Sources */

#define ISM330DHCX_RM__ALL_INT_SRC         (0x1Au)     // All interrupts source                          [r]     {output}
#define ISM330DHCX_RM__WAKE_UP_SRC         (0x1Bu)     // Wake-up interrupt source                       [r]     {output}
#define ISM330DHCX_RM__TAP_SRC             (0x1Cu)     // Tap source                                     [r]     {output}
#define ISM330DHCX_RM__D6D_SRC             (0x1Du)     // 6D orientation source                          [r]     {output}
#define ISM330DHCX_RM__STATUS_REG          (0x1Eu)     // Status register                                [r]     {output}

/* Temperature Output */

#define ISM330DHCX_RM__OUT_TEMP_L          (0x20u)     // Temperature output LSB                         [r]     {output}
#define ISM330DHCX_RM__OUT_TEMP_H          (0x21u)     // Temperature output MSB                         [r]     {output}

/* Gyroscope Output */

#define ISM330DHCX_RM__OUTX_L_G            (0x22u)     // Angular rate sensor X-axis (pitch) output LSB  [r]     {output}
#define ISM330DHCX_RM__OUTX_H_G            (0x23u)     // Angular rate sensor X-axis (pitch) output MSB  [r]     {output}
#define ISM330DHCX_RM__OUTY_L_G            (0x24u)     // Angular rate sensor Y-axis (roll)  output LSB  [r]     {output}
#define ISM330DHCX_RM__OUTY_H_G            (0x25u)     // Angular rate sensor Y-axis (roll)  output MSB  [r]     {output}
#define ISM330DHCX_RM__OUTZ_L_G            (0x26u)     // Angular rate sensor Z-axis (yaw)   output LSB  [r]     {output}
#define ISM330DHCX_RM__OUTZ_H_G            (0x27u)     // Angular rate sensor Z-axis (yaw)   output MSB  [r]     {output}

/* Accelerometer Output */

#define ISM330DHCX_RM__OUTX_L_A            (0x28u)     // Linear acceleration sensor X-axis output LSB   [r]     {output}
#define ISM330DHCX_RM__OUTX_H_A            (0x29u)     // Linear acceleration sensor X-axis output MSB   [r]     {output}
#define ISM330DHCX_RM__OUTY_L_A            (0x2Au)     // Linear acceleration sensor Y-axis output LSB   [r]     {output}
#define ISM330DHCX_RM__OUTY_H_A            (0x2Bu)     // Linear acceleration sensor Y-axis output MSB   [r]     {output}
#define ISM330DHCX_RM__OUTZ_L_A            (0x2Cu)     // Linear acceleration sensor Z-axis output LSB   [r]     {output}
#define ISM330DHCX_RM__OUTZ_H_A            (0x2Du)     // Linear acceleration sensor Z-axis output MSB   [r]     {output}

/* Status (Mainpage) */

#define ISM330DHCX_RM__EMB_FUNC_STATUS_MAINPAGE (0x35u)     // Embedded function status                       [r]     {output}
#define ISM330DHCX_RM__FSM_STATUS_A_MAINPAGE    (0x36u)     // Finite state machine status A                  [r]     {output}
#define ISM330DHCX_RM__FSM_STATUS_B_MAINPAGE    (0x37u)     // Finite state machine status B                  [r]     {output}
#define ISM330DHCX_RM__MLC_STATUS_MAINPAGE      (0x38u)     // Machine learning core status                   [r]     {output}
#define ISM330DHCX_RM__STATUS_MASTER_MAINPAGE   (0x39u)     // Sensor hub (master/slave) status               [r]     {output}

/* FIFO Status */

#define ISM330DHCX_RM__FIFO_STATUS1        (0x3Au)     // FIFO status 1                                  [r]     {output}
#define ISM330DHCX_RM__FIFO_STATUS2        (0x3Bu)     // FIFO status 2                                  [r]     {output}

/* Timestamp Output */

#define ISM330DHCX_RM__TIMESTAMP0          (0x40u)     // Timestamp output 0 LSB <0:7>                   [r]     {output}
#define ISM330DHCX_RM__TIMESTAMP1          (0x41u)     // Timestamp output 1     <8:15>                  [r]     {output}
#define ISM330DHCX_RM__TIMESTAMP2          (0x42u)     // Timestamp output 2     <16:23>                 [r]     {output}
#define ISM330DHCX_RM__TIMESTAMP3          (0x43u)     // Timestamp output 3 MSB <24:31>                 [r]     {output}

/* Tap Detection */

#define ISM330DHCX_RM__TAP_CFG0            (0x56u)     // Tap configuration 0                            [r/w]   {0x00}
#define ISM330DHCX_RM__TAP_CFG1            (0x57u)     // Tap configuration 1                            [r/w]   {0x00}
#define ISM330DHCX_RM__TAP_CFG2            (0x58u)     // Tap configuration 2                            [r/w]   {0x00}
#define ISM330DHCX_RM__TAP_THS_6D          (0x59u)     // Tap threshold (6D orientation)                 [r/w]   {0x00}

/* Wake-up & Free-fall */

#define ISM330DHCX_RM__INT_DUR2            (0x5Au)     // Interrupt duration 2 (tap recognition setting) [r/w]   {0x00}
#define ISM330DHCX_RM__WAKE_UP_THS         (0x5Bu)     // Wake-up threshold configuration                [r/w]   {0x00}
#define ISM330DHCX_RM__WAKE_UP_DUR         (0x5Cu)     // Wake-up duration setting                       [r/w]   {0x00}
#define ISM330DHCX_RM__FREE_FALL           (0x5Du)     // Free-fall event setting                        [r/w]   {0x00}

/* Mode Detection Configuration */

#define ISM330DHCX_RM__MD1_CFG             (0x5Eu)     // MD1 configuration (INT1 functions routing)     [r/w]   {0x00}
#define ISM330DHCX_RM__MD2_CFG             (0x5Fu)     // MD2 configuration (INT2 functions routing)     [r/w]   {0x00}

/* Fine Tuning */

#define ISM330DHCX_RM__INTERNAL_FREQ_FINE  (0x63u)     // Internal frequency fine adjustment             [r]     {output}

/* OIS Control */

#define ISM330DHCX_RM__INT_OIS             (0x6Fu)     // OIS interrupt configuration                    [r:r/w] {0x00}
#define ISM330DHCX_RM__CTRL1_OIS           (0x70u)     // OIS control 1 configuration                    [r:r/w] {0x00}
#define ISM330DHCX_RM__CTRL2_OIS           (0x71u)     // OIS control 2 configuration                    [r:r/w] {0x00}
#define ISM330DHCX_RM__CTRL3_OIS           (0x72u)     // OIS control 3 configuration                    [r:r/w] {0x00}

/* User Offset */

#define ISM330DHCX_RM__X_OFS_USR           (0x73u)     // Accelerometer X-axis user offset correction    [r/w]   {0x00}
#define ISM330DHCX_RM__Y_OFS_USR           (0x74u)     // Accelerometer Y-axis user offset correction    [r/w]   {0x00}
#define ISM330DHCX_RM__Z_OFS_USR           (0x75u)     // Accelerometer Z-axis user offset correction    [r/w]   {0x00}

/* FIFO Data Output */

#define ISM330DHCX_RM__FIFO_DATA_OUT_TAG   (0x78u)     // FIFO output tag                                [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_X_L   (0x79u)     // FIFO output X-axis LSB                         [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_X_H   (0x7Au)     // FIFO output X-axis MSB                         [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_Y_L   (0x7Bu)     // FIFO output Y-axis LSB                         [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_Y_H   (0x7Cu)     // FIFO output Y-axis MSB                         [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_Z_L   (0x7Du)     // FIFO output Z-axis LSB                         [r]     {output}
#define ISM330DHCX_RM__FIFO_DATA_OUT_Z_H   (0x7Eu)     // FIFO output Z-axis MSB                         [r]     {output}


/**
 *  Embedded Functions Register Mapping
 *      Embedded functions registers are accessible when FUNC_CFG_EN is set to '1' in FUNC_CFG_ACCESS (register)
 */


/* Page Selection */

#define ISM330DHCX_RM_EF__PAGE_SEL               (0x02u)    // Page select for advanced features       [r/w]   {0x01}

/* Embedded Function Enable */

#define ISM330DHCX_RM_EF__EMB_FUNC_EN_A          (0x04u)    // Embedded function enable A              [r/w]   {0x00}
#define ISM330DHCX_RM_EF__EMB_FUNC_EN_B          (0x05u)    // Embedded function enable B              [r/w]   {0x00}

/* Page Access */

#define ISM330DHCX_RM_EF__PAGE_ADDRESS           (0x08u)    // Page address                            [r/w]   {0x00}
#define ISM330DHCX_RM_EF__PAGE_VALUE             (0x09u)    // Page value                              [r/w]   {0x00}

/* Embedded Function Interrupts */

#define ISM330DHCX_RM_EF__EMB_FUNC_INT1          (0x0Au)    // Embedded function     INT1 control      [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_INT1_A             (0x0Bu)    // Finite State Machine  INT1 control A    [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_INT1_B             (0x0Cu)    // Finite State Machine  INT1 control B    [r/w]   {0x00}
#define ISM330DHCX_RM_EF__MLC_INT1               (0x0Du)    // Machine Learning Core INT1 control      [r/w]   {0x00}
#define ISM330DHCX_RM_EF__EMB_FUNC_INT2          (0x0Eu)    // Embedded function     INT2 control      [r/w]   {0x00}

/// !FIX-REQUIRED! Datasheet defines '01101011' (0x6B) as default value but register description lists values as '00000000'
#define ISM330DHCX_RM_EF__FSM_INT2_A             (0x0Fu)    // Finite State Machine  INT2 control A    [r/w]   {0x6B}

#define ISM330DHCX_RM_EF__FSM_INT2_B             (0x10u)    // Finite State Machine  INT2 control B    [r/w]   {0x00}
#define ISM330DHCX_RM_EF__MLC_INT2               (0x11u)    // Machine Learning Core INT2 control      [r/w]   {0x00}

/* Embedded Function Status */

#define ISM330DHCX_RM_EF__EMB_FUNC_STATUS        (0x12u)    // Embedded function status                [r]     {output}
#define ISM330DHCX_RM_EF__FSM_STATUS_A           (0x13u)    // Finite State Machine status A           [r]     {output}
#define ISM330DHCX_RM_EF__FSM_STATUS_B           (0x14u)    // Finite State Machine status B           [r]     {output}
#define ISM330DHCX_RM_EF__MLC_STATUS             (0x15u)    // Machine Learning Core status            [r]     {output}

/* Page Read/Write */

#define ISM330DHCX_RM_EF__PAGE_RW                (0x17u)    // Enable page r/w (advanced features)     [r/w]   {0x00}

/* Embedded Function FIFO Configuration */

#define ISM330DHCX_RM_EF__EMB_FUNC_FIFO_CFG      (0x44u)    // FIFO batching configuration             [r/w]   {0x00}

/* Finite State Machine Control */

#define ISM330DHCX_RM_EF__FSM_ENABLE_A           (0x46u)    // Finite State Machine enable A           [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_ENABLE_B           (0x47u)    // Finite State Machine enable B           [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_LONG_COUNTER_L     (0x48u)    // Finite State Machine long counter LSB   [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_LONG_COUNTER_H     (0x49u)    // Finite State Machine long counter MSB   [r/w]   {0x00}
#define ISM330DHCX_RM_EF__FSM_LONG_COUNTER_CLEAR (0x4Au)    // Finite State Machine long counter reset [r/w]   {0x00}

/* Finite State Machine Outputs */

#define ISM330DHCX_RM_EF__FSM_OUTS1              (0x4Cu)    // Finite State Machine 1  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS2              (0x4Du)    // Finite State Machine 2  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS3              (0x4Eu)    // Finite State Machine 3  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS4              (0x4Fu)    // Finite State Machine 4  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS5              (0x50u)    // Finite State Machine 5  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS6              (0x51u)    // Finite State Machine 6  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS7              (0x52u)    // Finite State Machine 7  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS8              (0x53u)    // Finite State Machine 8  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS9              (0x54u)    // Finite State Machine 9  output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS10             (0x55u)    // Finite State Machine 10 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS11             (0x56u)    // Finite State Machine 11 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS12             (0x57u)    // Finite State Machine 12 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS13             (0x58u)    // Finite State Machine 13 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS14             (0x59u)    // Finite State Machine 14 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS15             (0x5Au)    // Finite State Machine 15 output          [r]     {output}
#define ISM330DHCX_RM_EF__FSM_OUTS16             (0x5Bu)    // Finite State Machine 16 output          [r]     {output}

/* Machine Learning Core ODR Configuration */

#define ISM330DHCX_RM_EF__EMB_FUNC_ODR_CFG_B     (0x5Fu)    // Machine Learning Core ODR config B      [r/w]   {0x4B}
#define ISM330DHCX_RM_EF__EMB_FUNC_ODR_CFG_C     (0x60u)    // Machine Learning Core ODR config C      [r/w]   {0x15}

/* Step Counter */

#define ISM330DHCX_RM_EF__STEP_COUNTER_L         (0x62u)    // Step counter output LSB                 [r]     {output}
#define ISM330DHCX_RM_EF__STEP_COUNTER_H         (0x63u)    // Step counter output MSB                 [r]     {output}

/* Embedded Function Source */

#define ISM330DHCX_RM_EF__EMB_FUNC_SRC           (0x64u)    // Embedded function source                [r/w]   {output}

/* Embedded Function Initialisation */

#define ISM330DHCX_RM_EF__EMB_FUNC_INIT_A        (0x66u)    // Embedded function initialisation A      [r/w]   {0x00}
#define ISM330DHCX_RM_EF__EMB_FUNC_INIT_B        (0x67u)    // Embedded function initialisation B      [r/w]   {0x00}

/* Machine Learning Core Source */

#define ISM330DHCX_RM_EF__MLC0_SRC               (0x70u)    // Machine Learning Core 0 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC1_SRC               (0x71u)    // Machine Learning Core 1 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC2_SRC               (0x72u)    // Machine Learning Core 2 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC3_SRC               (0x73u)    // Machine Learning Core 3 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC4_SRC               (0x74u)    // Machine Learning Core 4 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC5_SRC               (0x75u)    // Machine Learning Core 5 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC6_SRC               (0x76u)    // Machine Learning Core 6 source          [r]     {output}
#define ISM330DHCX_RM_EF__MLC7_SRC               (0x77u)    // Machine Learning Core 7 source          [r]     {output}


/**
 *  Embedded Advanced Features Page 0 Register Mapping
 *      Embedded advanced features registers are accessible when PAGE_SEL[3:0] is set to '0000' in n PAGE_SEL (register)
 */


/* External Magnetometer Sensitivity */

#define ISM330DHCX_RM_EAF0__MAG_SENSITIVITY_L     (0xBAu)     // External magnetometer sensitivity (FSM) LSB          [r/w]   {0x24}
#define ISM330DHCX_RM_EAF0__MAG_SENSITIVITY_H     (0xBBu)     // External magnetometer sensitivity (FSM) MSB          [r/w]   {0x16}

/* External Magnetometer Hard Iron Offset */

#define ISM330DHCX_RM_EAF0__MAG_OFFX_L            (0xC0u)     // External magnetometer (hard iron) X-axis offset LSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_OFFX_H            (0xC1u)     // External magnetometer (hard iron) X-axis offset MSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_OFFY_L            (0xC2u)     // External magnetometer (hard iron) Y-axis offset LSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_OFFY_H            (0xC3u)     // External magnetometer (hard iron) Y-axis offset MSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_OFFZ_L            (0xC4u)     // External magnetometer (hard iron) Z-axis offset LSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_OFFZ_H            (0xC5u)     // External magnetometer (hard iron) Z-axis offset MSB  [r/w]   {0x00}

/* External Magnetometer Soft Iron Matrix Correction */

#define ISM330DHCX_RM_EAF0__MAG_SI_XX_L           (0xC6u)     // External magnetometer (soft iron) matrix XX LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_XX_H           (0xC7u)     // External magnetometer (soft iron) matrix XX MSB      [r/w]   {0x3C}
#define ISM330DHCX_RM_EAF0__MAG_SI_XY_L           (0xC8u)     // External magnetometer (soft iron) matrix XY LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_XY_H           (0xC9u)     // External magnetometer (soft iron) matrix XY MSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_XZ_L           (0xCAu)     // External magnetometer (soft iron) matrix XZ LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_XZ_H           (0xCBu)     // External magnetometer (soft iron) matrix XZ MSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_YY_L           (0xCCu)     // External magnetometer (soft iron) matrix YY LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_YY_H           (0xCDu)     // External magnetometer (soft iron) matrix YY MSB      [r/w]   {0x3C}
#define ISM330DHCX_RM_EAF0__MAG_SI_YZ_L           (0xCEu)     // External magnetometer (soft iron) matrix YZ LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_YZ_H           (0xCFu)     // External magnetometer (soft iron) matrix YZ MSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_ZZ_L           (0xD0u)     // External magnetometer (soft iron) matrix ZZ LSB      [r/w]   {0x00}
#define ISM330DHCX_RM_EAF0__MAG_SI_ZZ_H           (0xD1u)     // External magnetometer (soft iron) matrix ZZ MSB      [r/w]   {0x3C}

/* External Magnetometer Configuration */

#define ISM330DHCX_RM_EAF0__MAG_CFG_A             (0xD4u)     // External magnetometer configuration A (Y/X-axis)     [r/w]   {0x05}
#define ISM330DHCX_RM_EAF0__MAG_CFG_B             (0xD5u)     // External magnetometer configuration B (X-axis)       [r/w]   {0x02}


/**
 *  Embedded Advanced Features Page 1 Register Mapping
 *      Embedded advanced features registers are accessible when PAGE_SEL[3:0] is set to '0001' in n PAGE_SEL (register)
 */


/* Finite State Machine Settings */

#define ISM330DHCX_RM_EAF1__FSM_LC_TIMEOUT_L      (0x7Au)     // Finite State Machine long counter timeout LSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__FSM_LC_TIMEOUT_H      (0x7Bu)     // Finite State Machine long counter timeout MSB  [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__FSM_PROGRAMS          (0x7Cu)     // Finite State Machine number of programs        [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__FSM_START_ADD_L       (0x7Eu)     // Finite State Machine start address LSB         [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__FSM_START_ADD_H       (0x7Fu)     // Finite State Machine start address MSB         [r/w]   {0x00}

/* Pedometer */

#define ISM330DHCX_RM_EAF1__PEDO_CMD_REG          (0x83u)     // Pedometer configuration (command)              [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__PEDO_DEB_STEPS_CONF   (0x84u)     // Pedometer debounce step configuration          [r/w]   {0x0A}
#define ISM330DHCX_RM_EAF1__PEDO_SC_DELTAT_L      (0xD0u)     // Pedometer step counter delta time LSB          [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__PEDO_SC_DELTAT_H      (0xD1u)     // Pedometer step counter delta time MSB          [r/w]   {0x00}

/* Machine Learning Core External Magnetometer Sensitivity */

#define ISM330DHCX_RM_EAF1__MLC_MAG_SENSITIVITY_L (0xE8u)     // External magnetometer sensitivity (MLC) LSB    [r/w]   {0x00}
#define ISM330DHCX_RM_EAF1__MLC_MAG_SENSITIVITY_H (0xE9u)     // External magnetometer sensitivity (MLC) MSB    [r/w]   {0x3C}


/**
 *  Sensor Hub Register Mapping
 *      Sensor hub registers are accessible when SHUB_REG_ACCESS is set to '1' in FUNC_CFG_ACCESS (register)
 */


/* Sensor Hub Output Registers */

#define ISM330DHCX_RM_SH__SENSOR_HUB_1   (0x02u)     // Sensor Hub 1  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_2   (0x03u)     // Sensor Hub 2  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_3   (0x04u)     // Sensor Hub 3  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_4   (0x05u)     // Sensor Hub 4  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_5   (0x06u)     // Sensor Hub 5  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_6   (0x07u)     // Sensor Hub 6  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_7   (0x08u)     // Sensor Hub 7  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_8   (0x09u)     // Sensor Hub 8  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_9   (0x0Au)     // Sensor Hub 9  output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_10  (0x0Bu)     // Sensor Hub 10 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_11  (0x0Cu)     // Sensor Hub 11 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_12  (0x0Du)     // Sensor Hub 12 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_13  (0x0Eu)     // Sensor Hub 13 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_14  (0x0Fu)     // Sensor Hub 14 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_15  (0x10u)     // Sensor Hub 15 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_16  (0x11u)     // Sensor Hub 16 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_17  (0x12u)     // Sensor Hub 17 output                        [r]     {0x00}
#define ISM330DHCX_RM_SH__SENSOR_HUB_18  (0x13u)     // Sensor Hub 18 output                        [r]     {0x00}

/* Master & Slave Configuration */

#define ISM330DHCX_RM_SH__MASTER_CONFIG  (0x14u)     // Master logic configuration                  [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV0_ADD       (0x15u)     // Slave 0 (external sensor 1) address         [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV0_SUBADD    (0x16u)     // Slave 0 (external sensor 1) subaddress      [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV0_CONFIG    (0x17u)     // Slave 0 (external sensor 1) configuration   [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV1_ADD       (0x18u)     // Slave 1 (external sensor 2) address         [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV1_SUBADD    (0x19u)     // Slave 1 (external sensor 2) subaddress      [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV1_CONFIG    (0x1Au)     // Slave 1 (external sensor 2) configuration   [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV2_ADD       (0x1Bu)     // Slave 2 (external sensor 3) address         [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV2_SUBADD    (0x1Cu)     // Slave 2 (external sensor 3) subaddress      [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV2_CONFIG    (0x1Du)     // Slave 2 (external sensor 3) configuration   [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV3_ADD       (0x1Eu)     // Slave 3 (external sensor 4) address         [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV3_SUBADD    (0x1Fu)     // Slave 3 (external sensor 4) subaddress      [r/w]   {0x00}
#define ISM330DHCX_RM_SH__SLV3_CONFIG    (0x20u)     // Slave 3 (external sensor 4) configuration   [r/w]   {0x00}

/* Slave Data Write */

#define ISM330DHCX_RM_SH__DATAWRITE_SLV0 (0x21u)     // Data write to slave 0                       [r/w]   {0x00}

/* Master Status */

#define ISM330DHCX_RM_SH__STATUS_MASTER  (0x22u)     // Master status                               [r]     {0x00}


#endif /* __ISM330DHCX_REGISTER_MAP_H__ */
