#
# Copyright (c) 2026, Realtek Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#

message(STATUS "CMAKELIST FOLDER: ${CMAKE_CURRENT_SOURCE_DIR}")


if(CONFIG_REALTEK_BUILD_LVGL_SIMPLE_DEMO)
    file(GLOB SRC_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
    )
    set(LVGL_DIR ${ZEPHYR_LVGL_MODULE_DIR})

        list(REMOVE_ITEM SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/app_sim_port.c")

        target_include_directories(app PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/card"
        "${CMAKE_CURRENT_SOURCE_DIR}/cellular"
        "${CMAKE_CURRENT_SOURCE_DIR}/tileview_slide_snapshot"
        "${CMAKE_CURRENT_SOURCE_DIR}/lite3d"
    )

    if(CONFIG_REALTEK_BUILD_LVGL_RTK_DEMO)
        file(GLOB RTK_SRC_FILES CONFIGURE_DEPENDS
            "${CMAKE_CURRENT_SOURCE_DIR}/card/*.c"
            "${CMAKE_CURRENT_SOURCE_DIR}/cellular/*.c"
            "${CMAKE_CURRENT_SOURCE_DIR}/tileview_slide_snapshot/*.c"
            "${CMAKE_CURRENT_SOURCE_DIR}/lite3d/*.c"
        )
        list(APPEND SRC_FILES ${RTK_SRC_FILES})
    endif()

    target_compile_definitions(app PUBLIC
        DRV_LCD_WIDTH=410
        DRV_LCD_HIGHT=502
        DRV_PIXEL_BITS=16
    )

    target_sources(app PRIVATE ${SRC_FILES})
endif()
