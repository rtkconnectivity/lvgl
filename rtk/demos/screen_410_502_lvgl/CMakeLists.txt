message(STATUS "CMAKELIST FOLDER: ${CMAKE_CURRENT_SOURCE_DIR}")

if(CONFIG_REALTEK_BUILD_GUI_410_502_LVGL_DEMO)
    file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
    )

    list(REMOVE_ITEM SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/app_sim_port.c")

    target_include_directories(app PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/fonts"
        "${CMAKE_CURRENT_SOURCE_DIR}/images"
        "${CMAKE_CURRENT_SOURCE_DIR}/root_image_lvgl"
    )

    target_compile_definitions(app PUBLIC
        DRV_LCD_WIDTH=410
        DRV_LCD_HIGHT=502
        DRV_PIXEL_BITS=16
    )

    target_sources(app PRIVATE ${SRC_FILES})
    # target_sources(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/app_rtk_port.c)

    # message(STATUS "LVGL UI SRC_FILES: ${SRC_FILES}")
endif()
