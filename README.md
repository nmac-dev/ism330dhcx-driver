# ism330dhcx
ISM330DHCX Driver


## Features


### Structure Representation

 * Core (device controls)
 * Register Mapping
 * Accelerometer
 * Gyroscope
 * External Magnetometer
 * First In / First Out (FIFO)
 * Finite State Machine (FSM)
 * Machine Learning Core (MLC)
 * Optical Image Stabilisation (OIS)
 * Motion Detection
 * Sensor Hub


#### Diagram
![diagram__struct_representation_relationship](.readme/struct_rep.png)


### Types

Defines the types in `types.h`, which follow the convention: `[<prefix>_]<base><size>[<qualifier>]_<construct>`

i.e. `u32c_t` would be `unsigned int const` with the `_t` denoting the entity is a primitive data type

**Segment**     | Description                 | Example
 :------------: | :-------------------------- | :----------------------------------------------
`[<prefix>]`    | simply put, the prefix name | `reg_` register, `adr_` address
`<base>`        | base (core) data type       | `u` unsigned, `s` signed, `f` float
`<size>`        | size of the type in bits    | `8` bits, `16` bits, `32` bits, `64`bits
`[<qualifier>]` | optional variable qualifier | `c` const, `v` volatile
`_<construct>`  | programming construct       | `_t` primitive type, `_s` struct, `_u` union, `_e` enum

**Exceptions**:
 - `void *` is denoted as `v0_t`, since the size cannot be defined until compilation


<details>
<summary>Types List (expand ...)</summary>


The following types are defined in `ism330dhcx/types.h`.

**Primitive type aliases**

| Type     | Description
| :------- | :-------
| `u8_t`   | unsigned 8-bit integer
| `u8c_t`  | `u8_t const`
| `s8_t`   | signed 8-bit integer
| `s8c_t`  | `s8_t const`
| `u16_t`  | unsigned 16-bit integer
| `u16c_t` | `u16_t const`
| `s16_t`  | signed 16-bit integer
| `s16c_t` | `s16_t const`
| `u32_t`  | unsigned 32-bit integer
| `u32c_t` | `u32_t const`
| `s32_t`  | signed 32-bit integer
| `s32c_t` | `s32_t const`
| `u64_t`  | unsigned 64-bit integer
| `u64c_t` | `u64_t const`
| `s64_t`  | signed 64-bit integer
| `s64c_t` | `s64_t const`
| `f32_t`  | 32-bit floating point
| `f32c_t` | `f32_t const`
| `f64_t`  | 64-bit floating point
| `f64c_t` | `f64_t const`
| `v0_t`   | `void` absence of value
| `v0c_t`  | `v0_t` `const`

**Address unions**

| Type         | Description
| :----------- | :-----------
| `adr_u8_u`   | 8-bit address union with `byte_0`
| `adr_u8c_u`  | `adr_u8_u const`
| `adr_u16_u`  | 16-bit address union with `byte_0` and `byte_1`
| `adr_u16c_u` | `adr_u16_u const`
| `adr_u32_u`  | 32-bit address union with `byte_0`..`byte_3`
| `adr_u32c_u` | `adr_u32_u const`
| `adr_u64_u`  | 64-bit address union with `byte_0`..`byte_7`
| `adr_u64c_u` | `adr_u64_u const`

**Register structs**

| Type        | Description
| :---------- | :----------
| `reg_u8_s`  | 8-bit register struct with address and value
| `reg_u16_s` | 16-bit register struct with address and value
| `reg_u32_s` | 32-bit register struct with address and value
| `reg_u64_s` | 64-bit register struct with address and value

**3D axis structs**

| Type          | Description
| :------------ | :------------
| `axe3d_s8_s`  | 3-axis signed 8-bit structure
| `axe3d_s16_s` | 3-axis signed 16-bit structure
| `axe3d_s32_s` | 3-axis signed 32-bit structure
| `axe3d_s64_s` | 3-axis signed 64-bit structure
| `axe3d_f32_s` | 3-axis 32-bit float structure
| `axe3d_f64_s` | 3-axis 64-bit float structure

</details>

## Install

### Prerequisites
- CMake (version 3.16 or higher)
- C compiler (e.g., GCC)

### Build and Install

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd ism330dhcx
   ```

2. Build the library:
   ```bash
   cmake -S . -B build
   cmake --build build
   ```

3. Install the library and headers (requires sudo for system-wide installation):
   ```bash
   sudo cmake --install build --prefix /usr/local
   ```

This installs the static library to `/usr/local/lib/libism330dhcx.a` and headers to `/usr/local/include/ism330dhcx/`.

### Alternative: Install to User Directory (No sudo required)
If you prefer not to use sudo, install to a local directory:
```bash
cmake --install build --prefix ~/local
```
Then, when compiling your application, use:
```bash
gcc <program_name>.c -I ~/local/include -L ~/local/lib -lism330dhcx -o <program_name>
```
