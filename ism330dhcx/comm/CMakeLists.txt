### ISM330DHCX static library communication module

target_sources(ism330dhcx
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/error.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/log.c
)

target_include_directories(ism330dhcx
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

set(ISM330DHCX_PUBLIC_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/error.h
    ${CMAKE_CURRENT_SOURCE_DIR}/log.h
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} DESTINATION include/ism330dhcx)
