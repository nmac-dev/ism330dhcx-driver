## Build ism330dhcx static library

file(GLOB ISM330DHCX_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)


## Expose headers as <ism330dhcx/<header>.h>

add_library(ism330dhcx STATIC ${ISM330DHCX_SRC})

target_include_directories(ism330dhcx PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/ism330dhcx>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/internal>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/c-nstd>
)

target_compile_features(ism330dhcx PUBLIC c_std_99)
