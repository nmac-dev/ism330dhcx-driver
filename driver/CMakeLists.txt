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
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/c-nstd
        ${CMAKE_CURRENT_SOURCE_DIR}/internal
)

target_compile_features(ism330dhcx
    PUBLIC
        c_std_99
)

set_target_properties(ism330dhcx PROPERTIES
    OUTPUT_NAME ism330dhcx
)
