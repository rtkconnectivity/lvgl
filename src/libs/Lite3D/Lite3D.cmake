#
# Copyright (c) 2026, Realtek Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#

message(STATUS "LVGL Lite3D cmake.")
cmake_minimum_required(VERSION 3.10)

if(POLICY CMP0079)
  cmake_policy(SET CMP0079 NEW)
endif()

# Define a variable for the library name
if(CONFIG_REALTEK_BUILD_LVGL_LITE3D) #set to 1 to enable or variable to for depnedency
    message("CONFIG_REALTEK_BUILD_LVGL_LITE3D")
    file(GLOB SOURCES "*.c" "*.cpp")
    file(GLOB HEADERS "*.h" "*.hpp")

    set(LITE3D_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/libs/Lite3D)

    target_include_directories(app PUBLIC ${LITE3D_DIR}/include)

    if(CONFIG_REALTEK_BUILD_LVGL_LITE3D_FOR_WIN32_GCC_LIB)
        target_link_libraries(app PRIVATE ${LITE3D_DIR}/lib/libLite3D_GCC.a)
    endif()
    if(CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773E_ARMCC_LIB)
        target_link_libraries(app PRIVATE ${LITE3D_DIR}/lib/Lite3D_RTL8773E_ARMCC.lib)
    endif()
    if(CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773E_ARMCL_LIB)
        target_link_libraries(app PRIVATE ${LITE3D_DIR}/lib/Lite3D_RTL8773E_ARMCLANG.lib)
    endif()
    if(CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773G_ARMCL_LIB)
        target_link_libraries(app PRIVATE ${LITE3D_DIR}/lib/Lite3D_RTL8773G_ARMCLANG.lib)
    endif()
    if(CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773G_ZEPHYR_LIB)
        message("CONFIG_REALTEK_BUILD_LVGL_LITE3D_8773G_ZEPHYR_LIB")
        target_link_libraries(app PRIVATE ${LITE3D_DIR}/lib/Lite3D_RTL8773G_ZEPHYR.a)
    endif()

endif()
