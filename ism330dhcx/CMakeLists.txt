### ISM330DHCX Driver static library

add_library(ism330dhcx STATIC)

target_sources(ism330dhcx
    PRIVATE
        src/accelerometer.c
        src/core.c
        src/emag.c
        src/fifo.c
        src/fsm.c
        src/gyroscope.c
        src/mlc.c
        src/motion.c
        src/ois.c
        src/sensor_hub.c
)

target_include_directories(ism330dhcx
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/internal>
        $<INSTALL_INTERFACE:include/ism330dhcx/internal>
)


## Add mini-modules

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/comm)


## Options

target_compile_features(ism330dhcx
    PUBLIC
        c_std_99
)

set_target_properties(ism330dhcx PROPERTIES
    OUTPUT_NAME ism330dhcx
)


## Install

set(ISM330DHCX_PUBLIC_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/accelerometer.h
    ${CMAKE_CURRENT_SOURCE_DIR}/core.h
    ${CMAKE_CURRENT_SOURCE_DIR}/emag.h
    ${CMAKE_CURRENT_SOURCE_DIR}/fifo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/fsm.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gyroscope.h
    ${CMAKE_CURRENT_SOURCE_DIR}/mlc.h
    ${CMAKE_CURRENT_SOURCE_DIR}/motion.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ois.h
    ${CMAKE_CURRENT_SOURCE_DIR}/register_map.h
    ${CMAKE_CURRENT_SOURCE_DIR}/sensor_hub.h
    ${CMAKE_CURRENT_SOURCE_DIR}/types.h
)

install(TARGETS ism330dhcx
    ARCHIVE  DESTINATION lib
    LIBRARY  DESTINATION lib
    RUNTIME  DESTINATION bin
    INCLUDES DESTINATION include/ism330dhcx
)

install(FILES     ${ISM330DHCX_PUBLIC_HEADERS}         DESTINATION include/ism330dhcx)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/internal DESTINATION include/ism330dhcx)
