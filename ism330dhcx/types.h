/// @file  types.h
/// @brief Defines type definitions [primitives, structures, unions, enums, pointers]
/// @note  All types follow the convention: [<prefix>_]<base><size>[<qualifier>]_<construct>

#ifndef __ISM330DHCX_TYPES_H__
#define __ISM330DHCX_TYPES_H__


#define VALIDATE_TYPE(sizeof_type, exp_size) sizeof_type == exp_size

/// NOTE: __SIZEOF_<type>__ is defined by the compiler (typically gcc) but is not a guaranteed standard on all compilers


/* 8-bit Types                                                      */
/* ---------------------------------------------------------------- */


typedef unsigned char bool8_t;              // 8-bit boolean type

typedef signed char i8_t;                   // 8-bit signed integer
typedef i8_t  const i8c_t;                  // 8-bit signed integer constant
#define I8_T__MAX ((i8_t)0x7F)              // 8-bit signed integer maximum value:  127
#define I8_T__MIN ((i8_t)(-I8_T__MAX - 1))  // 8-bit signed integer minimum value: -128

typedef unsigned char u8_t;                 // 8-bit unsigned integer
typedef u8_t    const u8c_t;                // 8-bit unsigned integer constant
#define U8_T__MAX ((u8_t)0xFF)              // 8-bit unsigned integer maximum value: 255


#ifndef char8_t
typedef char char8_t;            // 8-bit character
#endif
typedef char8_t const char8c_t;  // 8-bit character constant
typedef char8_t     * str8p_t;   // 8-bit character string pointer
typedef char8c_t    * str8r_t;   // 8-bit character string read-only pointer


/// @union adr_u8_u
/// @brief 8-bit address ( byte_0 )
typedef union
{
    u8_t full;    // 8-bit register full address
    struct {
        u8_t _0;  // 8-bit register address byte 0
    } byte;       // 8-bit register address bytes
} adr_u8_u;


/// @union adr_u8c_u
/// @brief 8-bit address constant ( byte_0 )
typedef adr_u8_u const adr_u8c_u;


/// @struct reg_u8_s
/// @brief  8-bit register
typedef struct
{
    adr_u8c_u ADR;  // 8-bit register address
    u8_t      val;  // 8-bit register value
} reg_u8_s;


/// @struct axe3d_i8_s
/// @brief  8-bit integer 3D axe
typedef struct
{
    i8_t x;  // 8-bit integer x-axis
    i8_t y;  // 8-bit integer y-axis
    i8_t z;  // 8-bit integer z-axis
} axe3d_i8_s;


/* 16-bit Types                                                     */
/* ---------------------------------------------------------------- */


#if defined(__SIZEOF_SHORT__) && VALIDATE_TYPE(__SIZEOF_SHORT__, 2)

    typedef signed short i16_t;                    // 16-bit signed integer
    typedef i16_t  const i16c_t;                   // 16-bit signed integer constant
    #define I16_T__MAX ((i16_t)0x7FFF)             // 16-bit signed integer maximum value:  32767
    #define I16_T__MIN ((i16_t)(-I16_T__MAX - 1))  // 16-bit signed integer minimum value: -32768

    typedef unsigned short u16_t;                  // 16-bit unsigned integer
    typedef u16_t    const u16c_t;                 // 16-bit unsigned integer constant
    #define U16_T__MAX ((u16_t)0xFFFF)             // 16-bit unsigned integer maximum value: 65535


    #ifndef char16_t
    typedef u16_t char16_t;            // 16-bit character
    #endif
    typedef u16_t          char16_t;
    typedef char16_t const char16c_t;  // 16-bit character constant
    typedef char16_t     * str16p_t;   // 16-bit character string pointer
    typedef char16c_t    * str16r_t;   // 16-bit character string read-only pointer


    /// @union adr_u16_u
    /// @brief 16-bit address ( byte_0 | byte_1 )
    typedef union
    {
        u16_t full;   // 16-bit register full address
        struct {
            u8_t _0;  // 16-bit register address byte 0
            u8_t _1;  // 16-bit register address byte 1
        } byte;       // 16-bit register address bytes
    } adr_u16_u;


    /// @union adr_u16c_u
    /// @brief 16-bit address ( byte_0 | byte_1 )
    typedef adr_u16_u const adr_u16c_u;


    /// @struct reg_u16_s
    /// @brief  16-bit register
    typedef struct
    {
        adr_u16c_u ADR;  // 16-bit register address
        u16_t      val;  // 16-bit register value
    } reg_u16_s;


    /// @struct axe3d_i16_s
    /// @brief  16-bit integer 3D axe
    typedef struct
    {
        i16_t x;  // 16-bit integer x-axis
        i16_t y;  // 16-bit integer y-axis
        i16_t z;  // 16-bit integer z-axis
    } axe3d_i16_s;

#else
    #warning "16-bit integer types are not supported."
#endif


/* 32-bit Types                                                     */
/* ---------------------------------------------------------------- */


#if defined(__SIZEOF_INT__) && VALIDATE_TYPE(__SIZEOF_INT__, 4)

    typedef signed  int i32_t;                     // 32-bit signed integer
    typedef i32_t const i32c_t;                    // 32-bit signed integer constant
    #define I32_T__MAX ((i32_t)0x7FFFFFFF)         // 32-bit signed integer maximum value:  2147483647
    #define I32_T__MIN ((i32_t)(-I32_T__MAX - 1))  // 32-bit signed integer minimum value: -2147483648

    typedef unsigned int u32_t;                    // 32-bit unsigned integer
    typedef u32_t  const u32c_t;                   // 32-bit unsigned integer constant
    #define U32_T__MAX ((u32_t)0xFFFFFFFF)         // 32-bit maximum value: 4294967295


    #ifndef char32_t
    typedef u32_t          char32_t;   // 32-bit character
    #endif
    typedef char32_t const char32c_t;  // 32-bit character constant
    typedef char32_t     * str32p_t;   // 32-bit character string pointer
    typedef char32c_t    * str32r_t;   // 32-bit character string read-only pointer


    /// @union adr_u32_u
    /// @brief 32-bit address ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef union
    {
        u32_t full;   // 32-bit register full address
        struct {
            u8_t _0;  // 32-bit register address byte 0
            u8_t _1;  // 32-bit register address byte 1
            u8_t _2;  // 32-bit register address byte 2
            u8_t _3;  // 32-bit register address byte 3
        } byte;       // 32-bit register address bytes
    } adr_u32_u;


    /// @union adr_u32c_u
    /// @brief 32-bit address ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef adr_u32_u const adr_u32c_u;


    /// @struct reg_u32_s
    /// @brief  32-bit register ( byte_0 | byte_1 | byte_2 | byte_3 )
    typedef struct
    {
        adr_u32c_u ADR;  // 32-bit register address
        u32_t      val;  // 32-bit register value
    } reg_u32_s;


    /// @struct axe3d_i32_s
    /// @brief  32-bit integer 3D axe
    typedef struct
    {
        i32_t x;  // 32-bit integer x-axis
        i32_t y;  // 32-bit integer y-axis
        i32_t z;  // 32-bit integer z-axis
    } axe3d_i32_s;

#else
    #warning "32-bit integer types are not supported."
#endif


#if defined(__SIZEOF_FLOAT__) && VALIDATE_TYPE(__SIZEOF_FLOAT__, 4)

    typedef float       f32_t;            // 32-bit float
    typedef f32_t const f32c_t;           // 32-bit float constant
    #define F32_T__MAX  3.402823466e+38F  // 32-bit float maximum value:  3.402823466e+38F
    #define F32_T__MIN -3.402823466e+38F  // 32-bit float minimum value: -3.402823466e+38F


    /// @struct axe3d_f32_s
    /// @brief  32-bit float 3D axe
    typedef struct
    {
        f32_t x;  // 32-bit float x-axis
        f32_t y;  // 32-bit float y-axis
        f32_t z;  // 32-bit float z-axis
    } axe3d_f32_s;

#else
    #warning "32-bit float types are not supported."
#endif


/* 64-bit Types                                                     */
/* ---------------------------------------------------------------- */


#if defined(__SIZEOF_LONG_LONG__) && VALIDATE_TYPE(__SIZEOF_LONG_LONG__, 8)

    typedef signed long long i64_t;                 // 64-bit signed integer
    typedef i64_t      const i64c_t;                // 64-bit signed integer constant
    #define I64_T__MAX ((i64_t)0x7FFFFFFFFFFFFFFF)  // 64-bit signed integer maximum value:  9223372036854775807
    #define I64_T__MIN ((i64_t)(-I64_T__MAX - 1))   // 64-bit signed integer minimum value: -9223372036854775808

    typedef unsigned long long u64_t;               // 64-bit unsigned integer
    typedef u64_t        const u64c_t;              // 64-bit unsigned integer constant
    #define U64_T__MAX ((u64_t)0xFFFFFFFFFFFFFFFF)  // 64-bit unsigned integer maximum value: 18446744073709551615


    /// @union adr_u64_u
    /// @brief 64-bit address ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef union
    {
        u64_t full;   // 64-bit register full address
        struct {
            u8_t _0;  // 64-bit register address byte 0
            u8_t _1;  // 64-bit register address byte 1
            u8_t _2;  // 64-bit register address byte 2
            u8_t _3;  // 64-bit register address byte 3
            u8_t _4;  // 64-bit register address byte 4
            u8_t _5;  // 64-bit register address byte 5
            u8_t _6;  // 64-bit register address byte 6
            u8_t _7;  // 64-bit register address byte 7
        } byte;       // 64-bit register address bytes
    } adr_u64_u;


    /// @union adr_u64c_u
    /// @brief 64-bit address ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef adr_u64_u const adr_u64c_u;


    /// @struct reg_u64_s
    /// @brief  64-bit register ( byte_0 | byte_1 | byte_2 | byte_3 | byte_4 | byte_5 | byte_6 | byte_7 )
    typedef struct
    {
        adr_u64c_u ADR;  // 64-bit register address
        u64_t      val;  // 64-bit register value
    } reg_u64_s;


    /// @struct axe3d_i64_s
    /// @brief  64-bit integer 3D axe
    typedef struct
    {
        i64_t x;  // 64-bit integer x-axis
        i64_t y;  // 64-bit integer y-axis
        i64_t z;  // 64-bit integer z-axis
    } axe3d_i64_s;

#else
    #warning "64-bit integer types are not supported."
#endif


#if defined(__SIZEOF_DOUBLE__) && VALIDATE_TYPE(__SIZEOF_DOUBLE__, 8)

    typedef double      f64_t;                   // 64-bit float
    typedef f64_t const f64c_t;                  // 64-bit float constant
    #define F64_T__MAX  1.7976931348623157e+308  // 64-bit float maximum value:  1.7976931348623157e+308
    #define F64_T__MIN -1.7976931348623157e+308  // 64-bit float minimum value: -1.7976931348623157e+308

    /// @struct axe3d_f64_s
    /// @brief  64-bit float 3D axe
    typedef struct
    {
        f64_t x;  // 64-bit float x-axis
        f64_t y;  // 64-bit float y-axis
        f64_t z;  // 64-bit float z-axis
    } axe3d_f64_s;

#else
    #warning "64-bit float types are not supported."
#endif


/* (void) */


typedef void        v0_t;   // void type
typedef v0_t  const v0c_t;  // void constant
typedef v0_t      * v0p_t;  // void pointer           (generic pointer)
typedef v0c_t     * v0r_t;  // void read-only pointer (opaque pointer)


#endif /* __ISM330DHCX_TYPES_H__ */
