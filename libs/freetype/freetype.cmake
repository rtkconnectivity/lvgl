message(STATUS "LVGL freetype cmake.")
if(CONFIG_REALTEK_BUILD_FREETYPE_SRC)
    message("CONFIG_REALTEK_BUILD_FREETYPE_SRC")

    set(FREETYPE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/freetype)

    target_include_directories(app PUBLIC ${FREETYPE_DIR}/include)

    target_compile_definitions(app PUBLIC FT2_BUILD_LIBRARY)

    target_sources(app PRIVATE
        ${FREETYPE_DIR}/src/autofit/autofit.c
        ${FREETYPE_DIR}/src/bdf/bdf.c
        ${FREETYPE_DIR}/src/cff/cff.c
        ${FREETYPE_DIR}/src/dlg/dlgwrap.c
        ${FREETYPE_DIR}/src/base/ftbase.c
        ${FREETYPE_DIR}/src/cache/ftcache.c
        ${FREETYPE_DIR}/src/base/ftdebug.c
        ${FREETYPE_DIR}/src/gzip/ftgzip.c
        ${FREETYPE_DIR}/src/base/ftinit.c
        ${FREETYPE_DIR}/src/lzw/ftlzw.c
        ${FREETYPE_DIR}/src/pcf/pcf.c
        ${FREETYPE_DIR}/src/pfr/pfr.c
        ${FREETYPE_DIR}/src/psaux/psaux.c
        ${FREETYPE_DIR}/src/pshinter/pshinter.c
        ${FREETYPE_DIR}/src/psnames/psmodule.c
        ${FREETYPE_DIR}/src/raster/raster.c
        ${FREETYPE_DIR}/src/sdf/sdf.c
        ${FREETYPE_DIR}/src/sfnt/sfnt.c
        ${FREETYPE_DIR}/src/smooth/smooth.c
        ${FREETYPE_DIR}/src/base/ftmm.c
        ${FREETYPE_DIR}/src/base/ftglyph.c
        ${FREETYPE_DIR}/src/base/ftbitmap.c
        ${FREETYPE_DIR}/src/truetype/truetype.c
        ${FREETYPE_DIR}/src/type1/type1.c
        ${FREETYPE_DIR}/src/cid/type1cid.c
        ${FREETYPE_DIR}/src/type42/type42.c
        ${FREETYPE_DIR}/src/winfonts/winfnt.c
        ${FREETYPE_DIR}/src/svg/ftsvg.c
    )

    if(!CONFIG_FREETYPE_USE_LVGL_PORT)
        target_sources(app PRIVATE
            ${FREETYPE_DIR}/src/base/ftsystem.c
        )
    endif()

endif()
