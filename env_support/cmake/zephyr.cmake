if(CONFIG_REALTEK_BUILD_LVGL)
message(STATUS "LVGL module cmake.")
# set(ZEPHYR_CURRENT_LIBRARY lvgl)
set(LVGL_DIR ${ZEPHYR_LVGL_MODULE_DIR})

# zephyr_interface_library_named(LVGL)
# zephyr_library()

target_include_directories(app PUBLIC ${LVGL_DIR}/src/)
# target_include_directories(app PUBLIC ${LVGL_DIR}/src/draw)
# target_include_directories(app PUBLIC ${LVGL_DIR}/src/misc)
# target_include_directories(app PUBLIC ${LVGL_DIR}/src/core)

target_compile_definitions(app PUBLIC LV_CONF_INCLUDE_SIMPLE=1)

target_sources(app PRIVATE

    ${LVGL_DIR}/src/core/lv_group.c
    ${LVGL_DIR}/src/core/lv_obj.c
    ${LVGL_DIR}/src/core/lv_obj_class.c
    ${LVGL_DIR}/src/core/lv_obj_draw.c
    ${LVGL_DIR}/src/core/lv_obj_event.c
    ${LVGL_DIR}/src/core/lv_obj_id_builtin.c
    ${LVGL_DIR}/src/core/lv_obj_pos.c
    ${LVGL_DIR}/src/core/lv_obj_property.c
    ${LVGL_DIR}/src/core/lv_obj_scroll.c
    ${LVGL_DIR}/src/core/lv_obj_style.c
    ${LVGL_DIR}/src/core/lv_obj_style_gen.c
    ${LVGL_DIR}/src/core/lv_obj_tree.c
    ${LVGL_DIR}/src/core/lv_refr.c

    ${LVGL_DIR}/src/display/lv_display.c

    ${LVGL_DIR}/src/draw/lv_draw.c
    ${LVGL_DIR}/src/draw/lv_draw_3d.c
    ${LVGL_DIR}/src/draw/lv_draw_arc.c
    ${LVGL_DIR}/src/draw/lv_draw_buf.c
    ${LVGL_DIR}/src/draw/lv_draw_image.c
    ${LVGL_DIR}/src/draw/lv_draw_label.c
    ${LVGL_DIR}/src/draw/lv_draw_line.c
    ${LVGL_DIR}/src/draw/lv_draw_mask.c
    ${LVGL_DIR}/src/draw/lv_draw_rect.c
    ${LVGL_DIR}/src/draw/lv_draw_triangle.c
    ${LVGL_DIR}/src/draw/lv_draw_vector.c
    ${LVGL_DIR}/src/draw/lv_image_decoder.c

    ${LVGL_DIR}/src/draw/convert/lv_draw_buf_convert.c
    ${LVGL_DIR}/src/draw/convert/helium/lv_draw_buf_convert_helium.c

    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_al88.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_argb8888.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_argb8888_premultiplied.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_i1.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_l8.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_rgb565.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_rgb565_swapped.c
    ${LVGL_DIR}/src/draw/sw/blend/lv_draw_sw_blend_to_rgb888.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_arc.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_border.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_box_shadow.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_fill.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_grad.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_img.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_letter.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_line.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_mask.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_mask_rect.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_transform.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_triangle.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_utils.c
    ${LVGL_DIR}/src/draw/sw/lv_draw_sw_vector.c

    ${LVGL_DIR}/src/font/lv_binfont_loader.c
    ${LVGL_DIR}/src/font/lv_font.c
    ${LVGL_DIR}/src/font/lv_font_dejavu_16_persian_hebrew.c
    ${LVGL_DIR}/src/font/lv_font_fmt_txt.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_8.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_10.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_12.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_14.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_14_aligned.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_16.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_18.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_20.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_22.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_24.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_26.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_28.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_28_compressed.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_30.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_32.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_34.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_36.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_38.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_40.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_42.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_44.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_46.c
    ${LVGL_DIR}/src/font/lv_font_montserrat_48.c
    ${LVGL_DIR}/src/font/lv_font_source_han_sans_sc_14_cjk.c
    ${LVGL_DIR}/src/font/lv_font_source_han_sans_sc_16_cjk.c
    ${LVGL_DIR}/src/font/lv_font_unscii_8.c
    ${LVGL_DIR}/src/font/lv_font_unscii_16.c

    ${LVGL_DIR}/src/indev/lv_indev.c
    ${LVGL_DIR}/src/indev/lv_indev_gesture.c
    ${LVGL_DIR}/src/indev/lv_indev_scroll.c

    ${LVGL_DIR}/src/layouts/flex/lv_flex.c
    ${LVGL_DIR}/src/layouts/grid/lv_grid.c
    ${LVGL_DIR}/src/layouts/lv_layout.c

    ${LVGL_DIR}/src/libs/barcode/code128.c
    ${LVGL_DIR}/src/libs/barcode/lv_barcode.c
    ${LVGL_DIR}/src/libs/bin_decoder/lv_bin_decoder.c
    ${LVGL_DIR}/src/libs/bmp/lv_bmp.c
    ${LVGL_DIR}/src/libs/expat/xmlparse.c
    ${LVGL_DIR}/src/libs/expat/xmlrole.c
    ${LVGL_DIR}/src/libs/expat/xmltok.c
    ${LVGL_DIR}/src/libs/expat/xmltok_impl.c
    ${LVGL_DIR}/src/libs/expat/xmltok_ns.c
    ${LVGL_DIR}/src/libs/ffmpeg/lv_ffmpeg.c
    ${LVGL_DIR}/src/libs/freetype/lv_freetype.c
    ${LVGL_DIR}/src/libs/freetype/lv_freetype_glyph.c
    ${LVGL_DIR}/src/libs/freetype/lv_freetype_image.c
    ${LVGL_DIR}/src/libs/freetype/lv_freetype_outline.c
    ${LVGL_DIR}/src/libs/freetype/lv_ftsystem.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_cbfs.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_fatfs.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_littlefs.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_memfs.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_posix.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_stdio.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_uefi.c
    ${LVGL_DIR}/src/libs/fsdrv/lv_fs_win32.c
    ${LVGL_DIR}/src/libs/gif/lv_gif.c
    ${LVGL_DIR}/src/libs/gif/AnimatedGIF/src/gif.c
    ${LVGL_DIR}/src/libs/libjpeg_turbo/lv_libjpeg_turbo.c
    ${LVGL_DIR}/src/libs/libpng/lv_libpng.c
    ${LVGL_DIR}/src/libs/lodepng/lodepng.c
    ${LVGL_DIR}/src/libs/lodepng/lv_lodepng.c
    ${LVGL_DIR}/src/libs/lz4/lz4.c
    ${LVGL_DIR}/src/libs/qrcode/lv_qrcode.c
    ${LVGL_DIR}/src/libs/qrcode/qrcodegen.c
    ${LVGL_DIR}/src/libs/rle/lv_rle.c
    ${LVGL_DIR}/src/libs/rlottie/lv_rlottie.c
    ${LVGL_DIR}/src/libs/svg/lv_svg.c
    ${LVGL_DIR}/src/libs/svg/lv_svg_decoder.c
    ${LVGL_DIR}/src/libs/svg/lv_svg_parser.c
    ${LVGL_DIR}/src/libs/svg/lv_svg_render.c
    ${LVGL_DIR}/src/libs/svg/lv_svg_token.c
    ${LVGL_DIR}/src/libs/tiny_ttf/lv_tiny_ttf.c
    ${LVGL_DIR}/src/libs/tjpgd/lv_tjpgd.c
    ${LVGL_DIR}/src/libs/tjpgd/tjpgd.c

    ${LVGL_DIR}/src/lv_init.c

    ${LVGL_DIR}/src/misc/cache/lv_cache.c
    ${LVGL_DIR}/src/misc/cache/lv_cache_entry.c
    ${LVGL_DIR}/src/misc/cache/class/lv_cache_lru_rb.c
    ${LVGL_DIR}/src/misc/cache/class/lv_cache_lru_ll.c
    ${LVGL_DIR}/src/misc/cache/instance/lv_image_cache.c
    ${LVGL_DIR}/src/misc/cache/instance/lv_image_header_cache.c
    ${LVGL_DIR}/src/misc/lv_anim.c
    ${LVGL_DIR}/src/misc/lv_anim_timeline.c
    ${LVGL_DIR}/src/misc/lv_area.c
    ${LVGL_DIR}/src/misc/lv_array.c
    ${LVGL_DIR}/src/misc/lv_async.c
    ${LVGL_DIR}/src/misc/lv_bidi.c
    ${LVGL_DIR}/src/misc/lv_color.c
    ${LVGL_DIR}/src/misc/lv_color_op.c
    ${LVGL_DIR}/src/misc/lv_circle_buf.c
    ${LVGL_DIR}/src/misc/lv_event.c
    ${LVGL_DIR}/src/misc/lv_fs.c
    ${LVGL_DIR}/src/misc/lv_grad.c
    ${LVGL_DIR}/src/misc/lv_iter.c
    ${LVGL_DIR}/src/misc/lv_ll.c
    ${LVGL_DIR}/src/misc/lv_log.c
    ${LVGL_DIR}/src/misc/lv_lru.c
    ${LVGL_DIR}/src/misc/lv_math.c
    ${LVGL_DIR}/src/misc/lv_matrix.c
    ${LVGL_DIR}/src/misc/lv_palette.c
    ${LVGL_DIR}/src/misc/lv_profiler_builtin.c
    ${LVGL_DIR}/src/misc/lv_rb.c
    ${LVGL_DIR}/src/misc/lv_style.c
    ${LVGL_DIR}/src/misc/lv_style_gen.c
    ${LVGL_DIR}/src/misc/lv_templ.c
    ${LVGL_DIR}/src/misc/lv_text_ap.c
    ${LVGL_DIR}/src/misc/lv_text.c
    ${LVGL_DIR}/src/misc/lv_timer.c
    ${LVGL_DIR}/src/misc/lv_tree.c
    ${LVGL_DIR}/src/misc/lv_utils.c
    ${LVGL_DIR}/src/osal/lv_os.c
    ${LVGL_DIR}/src/osal/lv_os_none.c

    ${LVGL_DIR}/src/others/file_explorer/lv_file_explorer.c
    ${LVGL_DIR}/src/others/font_manager/lv_font_manager.c
    ${LVGL_DIR}/src/others/font_manager/lv_font_manager_recycle.c
    ${LVGL_DIR}/src/others/fragment/lv_fragment.c
    ${LVGL_DIR}/src/others/fragment/lv_fragment_manager.c
    ${LVGL_DIR}/src/others/gridnav/lv_gridnav.c
    ${LVGL_DIR}/src/others/ime/lv_ime_pinyin.c
    ${LVGL_DIR}/src/others/imgfont/lv_imgfont.c
    ${LVGL_DIR}/src/others/monkey/lv_monkey.c
    ${LVGL_DIR}/src/others/observer/lv_observer.c
    ${LVGL_DIR}/src/others/snapshot/lv_snapshot.c
    ${LVGL_DIR}/src/others/sysmon/lv_sysmon.c
    ${LVGL_DIR}/src/others/vg_lite_tvg/vg_lite_matrix.c
    ${LVGL_DIR}/src/others/xml/lv_xml.c
    ${LVGL_DIR}/src/others/xml/lv_xml_base_types.c
    ${LVGL_DIR}/src/others/xml/lv_xml_component.c
    ${LVGL_DIR}/src/others/xml/lv_xml_load.c
    ${LVGL_DIR}/src/others/xml/lv_xml_parser.c
    ${LVGL_DIR}/src/others/xml/lv_xml_style.c
    ${LVGL_DIR}/src/others/xml/lv_xml_test.c
    ${LVGL_DIR}/src/others/xml/lv_xml_test.c
    ${LVGL_DIR}/src/others/xml/lv_xml_translation.c
    ${LVGL_DIR}/src/others/xml/lv_xml_update.c
    ${LVGL_DIR}/src/others/xml/lv_xml_utils.c
    ${LVGL_DIR}/src/others/xml/lv_xml_widget.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_arc_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_bar_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_button_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_buttonmatrix_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_calendar_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_canvas_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_chart_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_checkbox_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_dropdown_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_image_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_keyboard_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_label_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_obj_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_qrcode_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_roller_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_scale_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_slider_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_spangroup_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_spinbox_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_switch_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_table_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_tabview_parser.c
    ${LVGL_DIR}/src/others/xml/parsers/lv_xml_textarea_parser.c

    ${LVGL_DIR}/src/stdlib/builtin/lv_mem_core_builtin.c
    ${LVGL_DIR}/src/stdlib/builtin/lv_sprintf_builtin.c
    ${LVGL_DIR}/src/stdlib/builtin/lv_string_builtin.c
    ${LVGL_DIR}/src/stdlib/builtin/lv_tlsf.c

    ${LVGL_DIR}/src/stdlib/clib/lv_mem_core_clib.c
    ${LVGL_DIR}/src/stdlib/clib/lv_sprintf_clib.c
    ${LVGL_DIR}/src/stdlib/clib/lv_string_clib.c

    ${LVGL_DIR}/src/stdlib/lv_mem.c

    ${LVGL_DIR}/src/themes/default/lv_theme_default.c

    ${LVGL_DIR}/src/themes/lv_theme.c
    ${LVGL_DIR}/src/themes/mono/lv_theme_mono.c
    ${LVGL_DIR}/src/themes/simple/lv_theme_simple.c

    ${LVGL_DIR}/src/tick/lv_tick.c

    ${LVGL_DIR}/src/widgets/3dtexture/lv_3dtexture.c
    ${LVGL_DIR}/src/widgets/animimage/lv_animimage.c
    ${LVGL_DIR}/src/widgets/arc/lv_arc.c
    ${LVGL_DIR}/src/widgets/arclabel/lv_arclabel.c
    ${LVGL_DIR}/src/widgets/bar/lv_bar.c
    ${LVGL_DIR}/src/widgets/button/lv_button.c
    ${LVGL_DIR}/src/widgets/buttonmatrix/lv_buttonmatrix.c
    ${LVGL_DIR}/src/widgets/calendar/lv_calendar.c
    ${LVGL_DIR}/src/widgets/calendar/lv_calendar_chinese.c
    ${LVGL_DIR}/src/widgets/calendar/lv_calendar_header_arrow.c
    ${LVGL_DIR}/src/widgets/calendar/lv_calendar_header_dropdown.c
    ${LVGL_DIR}/src/widgets/canvas/lv_canvas.c
    ${LVGL_DIR}/src/widgets/chart/lv_chart.c
    ${LVGL_DIR}/src/widgets/checkbox/lv_checkbox.c
    ${LVGL_DIR}/src/widgets/dropdown/lv_dropdown.c
    ${LVGL_DIR}/src/widgets/imagebutton/lv_imagebutton.c
    ${LVGL_DIR}/src/widgets/image/lv_image.c
    ${LVGL_DIR}/src/widgets/keyboard/lv_keyboard.c
    ${LVGL_DIR}/src/widgets/label/lv_label.c
    ${LVGL_DIR}/src/widgets/led/lv_led.c
    ${LVGL_DIR}/src/widgets/line/lv_line.c
    ${LVGL_DIR}/src/widgets/list/lv_list.c
    ${LVGL_DIR}/src/widgets/lottie/lv_lottie.c
    ${LVGL_DIR}/src/widgets/menu/lv_menu.c
    ${LVGL_DIR}/src/widgets/msgbox/lv_msgbox.c
    ${LVGL_DIR}/src/widgets/objx_templ/lv_objx_templ.c
    ${LVGL_DIR}/src/widgets/property/lv_animimage_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_dropdown_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_image_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_keyboard_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_label_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_obj_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_roller_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_slider_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_style_properties.c
    ${LVGL_DIR}/src/widgets/property/lv_textarea_properties.c
    ${LVGL_DIR}/src/widgets/roller/lv_roller.c
    ${LVGL_DIR}/src/widgets/scale/lv_scale.c
    ${LVGL_DIR}/src/widgets/slider/lv_slider.c
    ${LVGL_DIR}/src/widgets/span/lv_span.c
    ${LVGL_DIR}/src/widgets/spinbox/lv_spinbox.c
    ${LVGL_DIR}/src/widgets/spinner/lv_spinner.c
    ${LVGL_DIR}/src/widgets/switch/lv_switch.c
    ${LVGL_DIR}/src/widgets/table/lv_table.c
    ${LVGL_DIR}/src/widgets/tabview/lv_tabview.c
    ${LVGL_DIR}/src/widgets/textarea/lv_textarea.c
    ${LVGL_DIR}/src/widgets/tileview/lv_tileview.c
    ${LVGL_DIR}/src/widgets/win/lv_win.c
    ${LVGL_DIR}/src/widgets/cardview/lv_cardview.c
    ${LVGL_DIR}/src/widgets/cellular/lv_cellular.c
    ${LVGL_DIR}/src/widgets/3d/lv_lite3d.c
    ${LVGL_DIR}/src/widgets/snapshot/lv_snapshot_widgets.c

    ${LVGL_DIR}/src/draw/ppe/rtl87x2g/lv_draw_ppe_rtl87x2g.c
    ${LVGL_DIR}/src/draw/ppe/rtl87x2g/lv_draw_ppe_rtl87x2g_fill.c
    ${LVGL_DIR}/src/draw/ppe/rtl87x2g/lv_draw_ppe_rtl87x2g_img.c
    ${LVGL_DIR}/src/draw/ppe/rtl87x2g/lv_ppe_rtl87x2g_utils.c

    ${LVGL_DIR}/src/draw/ppe/rtl8773e/lv_draw_ppe_rtl8773e.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773e/lv_draw_ppe_rtl8773e_fill.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773e/lv_draw_ppe_rtl8773e_img.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773e/lv_ppe_rtl8773e_utils.c

    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_ppe_rtl8773g_utils.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_fill.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_img.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_letter.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_mask_rect.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_support.c
    ${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_box_shadow.c
	${LVGL_DIR}/src/draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g_blend.c

    ${LVGL_DIR}/src/draw/rtk/lv_draw_rtk.c
    ${LVGL_DIR}/src/draw/rtk/lv_draw_rtk_letter.c
    ${LVGL_DIR}/src/draw/rtk/lv_draw_rtk_img.c
    ${LVGL_DIR}/src/draw/rtk/font_rendering_utils.c

    ${LVGL_DIR}/src/libs/jpu/lv_jpu.c

    ${LVGL_DIR}/src/libs/Lite3D/Lite3D_port_lvgl.c

    ${LVGL_DIR}/src/libs/rle/lv_idu.c
    ${LVGL_DIR}/src/libs/rle/lv_rle.c

    ${LVGL_DIR}/src/libs/avi/avidec.c
    ${LVGL_DIR}/src/libs/avi/lv_avi.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_MUSIC app PRIVATE
    ${LVGL_DIR}/demos/music/lv_demo_music_list.c
    ${LVGL_DIR}/demos/music/lv_demo_music.c
    ${LVGL_DIR}/demos/music/lv_demo_music_main.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_next.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_wave_top_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_4_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_4.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_corner_right.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_1.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_slider_knob_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_3.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_pause.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_pause_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_wave_bottom_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_2_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_list_play_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_wave_top.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_play_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_1_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_wave_bottom.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_corner_left_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_play.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_list_border.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_2.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_next_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_list_play.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_list_border_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_rnd.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_3.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_prev_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_loop.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_1.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_slider_knob.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_corner_right_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_corner_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_corner_left.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_2_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_3_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_icon_1_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_2.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_prev.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_rnd_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_list_pause_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_cover_3_large.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_list_pause.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_logo.c
    ${LVGL_DIR}/demos/music/assets/img_lv_demo_music_btn_loop_large.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_BENCHMARK app PRIVATE
    ${LVGL_DIR}/demos/benchmark/assets/img_benchmark_avatar.c
    ${LVGL_DIR}/demos/benchmark/assets/img_benchmark_lvgl_logo_argb.c
    ${LVGL_DIR}/demos/benchmark/assets/img_benchmark_lvgl_logo_rgb.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_12_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_14_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_16_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_18_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_20_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_24_aligned.c
    ${LVGL_DIR}/demos/benchmark/assets/lv_font_benchmark_montserrat_26_aligned.c
    ${LVGL_DIR}/demos/benchmark/lv_demo_benchmark.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_STRESS app PRIVATE
    ${LVGL_DIR}/demos/stress/lv_demo_stress.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_WIDGETS app PRIVATE
    ${LVGL_DIR}/demos/widgets/assets/img_clothes.c
    ${LVGL_DIR}/demos/widgets/assets/img_demo_widgets_avatar.c
    ${LVGL_DIR}/demos/widgets/assets/img_demo_widgets_needle.c
    ${LVGL_DIR}/demos/widgets/assets/img_lvgl_logo.c
    ${LVGL_DIR}/demos/widgets/lv_demo_widgets.c
    ${LVGL_DIR}/demos/widgets/lv_demo_widgets_analytics.c
    ${LVGL_DIR}/demos/widgets/lv_demo_widgets_components.c
    ${LVGL_DIR}/demos/widgets/lv_demo_widgets_profile.c
    ${LVGL_DIR}/demos/widgets/lv_demo_widgets_shop.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_KEYPAD_AND_ENCODER app PRIVATE
    ${LVGL_DIR}/demos/keypad_encoder/lv_demo_keypad_encoder.c
)

target_sources_ifdef(CONFIG_LV_USE_DEMO_RENDER app PRIVATE
    ${LVGL_DIR}/demos/render/assets/img_render_arc_bg.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_argb8888.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_argb8888_premultiplied.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_i1.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_l8.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_rgb565a8.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_rgb565.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_rgb565_swapped.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_rgb888.c
    ${LVGL_DIR}/demos/render/assets/img_render_lvgl_logo_xrgb8888.c
    ${LVGL_DIR}/demos/render/lv_demo_render.c
)

include(${LVGL_DIR}/src/libs/Lite3D/Lite3D.cmake)
include(${LVGL_DIR}/libs/freetype/freetype.cmake)

# zephyr_library_link_libraries(LVGL)
# target_link_libraries(LVGL INTERFACE zephyr_interface)

endif(CONFIG_REALTEK_BUILD_LVGL)
