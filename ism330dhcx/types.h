/// @file  types.h
/// @brief Defines type definitions [primitives, structures, unions, enums, pointers]

#ifndef __C_NSTD__TYPES_H__
#define __C_NSTD__TYPES_H__


#define VALIDATE_TYPE(sizeof_type, exp_size) sizeof_type == exp_size

/// NOTE: __SIZEOF_<type>__ is defined by the compiler (typically gcc) but is not a guaranteed standard on all compilers


/* (8-bit) char */


typedef unsigned char u8_t;
typedef u8_t    const u8c_t;
#define U8_T__MAX ((u8_t)0xFF)              //  255

typedef signed char s8_t;
typedef s8_t  const s8c_t;
#define S8_T__MAX ((s8_t)0x7F)              //  127
#define S8_T__MIN ((s8_t)(-S8_T__MAX - 1))  // -128

/// @union adr_u8_u
/// @brief Address 8-bit ( byte_0 )
typedef union
{
    u8_t full;          // 8-bit register full address
    struct {
        u8_t byte_0;    // 8-bit register address byte 0
    };
} adr_u8_u;

/// @union adr_u8c_u
/// @brief Address 8-bit ( byte_0 )
typedef adr_u8_u const adr_u8c_u;

/// @struct reg_u8_s
/// @brief  Register 8-bit
typedef struct
{
    adr_u8c_u ADR;    // 8-bit register address
    u8_t      val;    // 8-bit register value
} reg_u8_s;

/// @struct axe3d_s8_s
/// @brief  3D Axe 8-bit
typedef struct
{
    s8_t x;     // 8-bit x-axis
    s8_t y;     // 8-bit y-axis
    s8_t z;     // 8-bit z-axis
} axe3d_s8_s;


/* (16-bit) short */


#if defined(__SIZEOF_SHORT__) && VALIDATE_TYPE(__SIZEOF_SHORT__, 2)

    typedef unsigned short u16_t;
    typedef u16_t    const u16c_t;
    #define U16_T__MAX ((u16_t)0xFFFF)              //  65535

    typedef signed short s16_t;
    typedef s16_t  const s16c_t;
    #define S16_T__MAX ((s16_t)0x7FFF)              //  32767
    #define S16_T__MIN ((s16_t)(-S16_T__MAX - 1))   // -32768

    /// @union adr_u16_u
    /// @brief Address 16-bit ( byte_0 | byte_1 )
    typedef union
    {
        u16_t full;         // 16-bit register full address
        struct {
            u8_t byte_0;    // 16-bit register address byte 0
            u8_t byte_1;    // 16-bit register address byte 1
        };
    } adr_u16_u;

    /// @union adr_u16c_u
    /// @brief Address 16-bit ( byte_0 | byte_1 )
    typedef adr_u16_u const adr_u16c_u;

    /// @struct reg_u16_s
    /// @brief  Register 16-bit
    typedef struct
    {
        adr_u16c_u ADR;   // 16-bit register address
        u16_t      val;   // 16-bit register value
    } reg_u16_s;

    /// @struct axe3d_s16_s
    /// @brief  3D Axe 16-bit
    typedef struct
    {
        s16_t x;    // 16-bit x-axis
        s16_t y;    // 16-bit y-axis
        s16_t z;    // 16-bit z-axis
    } axe3d_s16_s;

#else
    #warning "16-bit types are not supported."
#endif


/* (32-bit) int */


#if defined(__SIZEOF_INT__) && VALIDATE_TYPE(__SIZEOF_INT__, 4)

    typedef unsigned int u32_t;
    typedef u32_t  const u32c_t;
    #define U32_T__MAX ((u32_t)0xFFFFFFFF)          //  4294967295

    typedef signed  int s32_t;
    typedef s32_t const s32c_t;
    #define S32_T__MAX ((s32_t)0x7FFFFFFF)          //  2147483647
    #define S32_T__MIN ((s32_t)(-S32_T__MAX - 1))   // -2147483648

    /// @union adr_u32_u
    /// @brief Address 32-bit ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef union
    {
        u32_t full;         // 32-bit register full address
        struct {
            u8_t byte_0;    // 32-bit register address byte 0
            u8_t byte_1;    // 32-bit register address byte 1
            u8_t byte_2;    // 32-bit register address byte 2
            u8_t byte_3;    // 32-bit register address byte 3
        };
    } adr_u32_u;

    /// @union adr_u32c_u
    /// @brief Address 32-bit ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef adr_u32_u const adr_u32c_u;

    /// @struct reg_u32_s
    /// @brief  Register 32-bit ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef struct
    {
        adr_u32c_u ADR;   // 32-bit register address
        u32_t      val;   // 32-bit register value
    } reg_u32_s;

    /// @struct axe3d_s32_s
    /// @brief  3D Axe 32-bit
    typedef struct
    {
        s32_t x;    // 32-bit x-axis
        s32_t y;    // 32-bit y-axis
        s32_t z;    // 32-bit z-axis
    } axe3d_s32_s;

#else
    #warning "32-bit types are not supported."
#endif


/* (64-bit) long long */


#if defined(__SIZEOF_LONG_LONG__) && VALIDATE_TYPE(__SIZEOF_LONG_LONG__, 8)

    typedef unsigned long long u64_t;
    typedef u64_t        const u64c_t;
    #define U64_T__MAX ((u64_t)0xFFFFFFFFFFFFFFFF)  //  18446744073709551615

    typedef signed long long s64_t;
    typedef s64_t      const s64c_t;
    #define S64_T__MAX ((s64_t)0x7FFFFFFFFFFFFFFF)  //  9223372036854775807
    #define S64_T__MIN ((s64_t)(-S64_T__MAX - 1))   // -9223372036854775808

    /// @union adr_u64_u
    /// @brief Address 64-bit ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef union
    {
        u64_t full;         // 64-bit register full address
        struct {
            u8_t byte_0;    // 64-bit register address byte 0
            u8_t byte_1;    // 64-bit register address byte 1
            u8_t byte_2;    // 64-bit register address byte 2
            u8_t byte_3;    // 64-bit register address byte 3
            u8_t byte_4;    // 64-bit register address byte 4
            u8_t byte_5;    // 64-bit register address byte 5
            u8_t byte_6;    // 64-bit register address byte 6
            u8_t byte_7;    // 64-bit register address byte 7
        };
    } adr_u64_u;

    /// @union adr_u64c_u
    /// @brief Address 64-bit ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef adr_u64_u const adr_u64c_u;

    /// @struct reg_u64_s
    /// @brief  Register 64-bit ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef struct
    {
        adr_u64c_u ADR;   // 64-bit register address
        u64_t      val;   // 64-bit register value
    } reg_u64_s;

    /// @struct axe3d_s64_s
    /// @brief  3D Axe 64-bit
    typedef struct
    {
        s64_t x;    // 64-bit x-axis
        s64_t y;    // 64-bit y-axis
        s64_t z;    // 64-bit z-axis
    } axe3d_s64_s;

#else
    #warning "64-bit types are not supported."
#endif


/* (32-bit) float */


#if defined(__SIZEOF_FLOAT__) && VALIDATE_TYPE(__SIZEOF_FLOAT__, 4)

    typedef float       f32_t;
    typedef f32_t const f32c_t;
    #define F32_T__MAX  3.402823466e+38F    //  Maximum float
    #define F32_T__MIN -3.402823466e+38F    //  Minimum float

    /// @struct axe3d_f32_s
    /// @brief  3D Axe 32-bit
    typedef struct
    {
        f32_t x;    // 32-bit x-axis (float)
        f32_t y;    // 32-bit y-axis (float)
        f32_t z;    // 32-bit z-axis (float)
    } axe3d_f32_s;

#else
    #warning "32-bit float is not supported."
#endif


/* (64-bit) double */


#if defined(__SIZEOF_DOUBLE__) && VALIDATE_TYPE(__SIZEOF_DOUBLE__, 8)

    typedef double      f64_t;
    typedef f64_t const f64c_t;
    #define F64_T__MAX  1.7976931348623157e+308     //  Maximum double
    #define F64_T__MIN -1.7976931348623157e+308     //  Minimum double

    /// @struct axe3d_f64_s
    /// @brief  3D Axe 64-bit (float)
    typedef struct
    {
        f64_t x;    // 64-bit x-axis (float)
        f64_t y;    // 64-bit y-axis (float)
        f64_t z;    // 64-bit z-axis (float)
    } axe3d_f64_s;

#else
    #warning "64-bit double is not supported."
#endif


/* (void) */


typedef void * v0_p;

#endif /* __C_NSTD__TYPES_H__ */
