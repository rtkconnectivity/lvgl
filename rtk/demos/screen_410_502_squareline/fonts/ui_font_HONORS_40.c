/*******************************************************************************
 * Size: 40 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 40 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_40.c --no-prefilter --force-fast-kern-format
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#if !LV_VERSION_CHECK(9, 3, 0)
#error "At least LVGL v9.3 is required to use the stride attribute of the fonts"
#endif

#ifndef UI_FONT_HONORS_40
#define UI_FONT_HONORS_40 1
#endif

#if UI_FONT_HONORS_40


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_40_glyph_bitmap.bin
 *Define UI_FONT_HONORS_40_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_40_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_40_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_40_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_40_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 153, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 193, .box_w = 6, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 220, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 93, .adv_w = 403, .box_w = 24, .box_h = 30, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 358, .box_w = 21, .box_h = 37, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 495, .adv_w = 566, .box_w = 33, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 783, .adv_w = 447, .box_w = 28, .box_h = 32, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1007, .adv_w = 111, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 1029, .adv_w = 195, .box_w = 10, .box_h = 38, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1143, .adv_w = 195, .box_w = 10, .box_h = 38, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1257, .adv_w = 301, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 1337, .adv_w = 379, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1469, .adv_w = 159, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 1493, .adv_w = 316, .box_w = 16, .box_h = 4, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 1509, .adv_w = 179, .box_w = 7, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1521, .adv_w = 264, .box_w = 16, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1641, .adv_w = 373, .box_w = 20, .box_h = 32, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1801, .adv_w = 373, .box_w = 10, .box_h = 30, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 373, .box_w = 20, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 373, .box_w = 21, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2238, .adv_w = 373, .box_w = 20, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2388, .adv_w = 373, .box_w = 21, .box_h = 31, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2574, .adv_w = 373, .box_w = 21, .box_h = 31, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2760, .adv_w = 373, .box_w = 19, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2910, .adv_w = 373, .box_w = 21, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3102, .adv_w = 373, .box_w = 21, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3288, .adv_w = 193, .box_w = 6, .box_h = 22, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3332, .adv_w = 191, .box_w = 6, .box_h = 28, .ofs_x = 3, .ofs_y = -6},
    {.bitmap_index = 3388, .adv_w = 415, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 3526, .adv_w = 377, .box_w = 22, .box_h = 11, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 3592, .adv_w = 415, .box_w = 23, .box_h = 23, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3730, .adv_w = 333, .box_w = 18, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3885, .adv_w = 514, .box_w = 31, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4141, .adv_w = 442, .box_w = 28, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4351, .adv_w = 417, .box_w = 22, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4531, .adv_w = 445, .box_w = 26, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4755, .adv_w = 470, .box_w = 25, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4965, .adv_w = 391, .box_w = 21, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5145, .adv_w = 360, .box_w = 19, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5295, .adv_w = 458, .box_w = 27, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5519, .adv_w = 451, .box_w = 24, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5699, .adv_w = 148, .box_w = 5, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5759, .adv_w = 319, .box_w = 18, .box_h = 31, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5914, .adv_w = 408, .box_w = 24, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6094, .adv_w = 348, .box_w = 20, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6244, .adv_w = 555, .box_w = 31, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6484, .adv_w = 455, .box_w = 24, .box_h = 30, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6664, .adv_w = 506, .box_w = 30, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6920, .adv_w = 404, .box_w = 22, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7100, .adv_w = 506, .box_w = 30, .box_h = 34, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 7372, .adv_w = 427, .box_w = 23, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7552, .adv_w = 363, .box_w = 22, .box_h = 32, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 7744, .adv_w = 376, .box_w = 23, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7924, .adv_w = 458, .box_w = 24, .box_h = 31, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8110, .adv_w = 420, .box_w = 27, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8320, .adv_w = 625, .box_w = 39, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8620, .adv_w = 405, .box_w = 26, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8830, .adv_w = 396, .box_w = 25, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9040, .adv_w = 368, .box_w = 23, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9220, .adv_w = 198, .box_w = 9, .box_h = 37, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 9331, .adv_w = 264, .box_w = 16, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9451, .adv_w = 198, .box_w = 8, .box_h = 37, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 9525, .adv_w = 378, .box_w = 22, .box_h = 17, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 9627, .adv_w = 341, .box_w = 22, .box_h = 4, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 9651, .adv_w = 213, .box_w = 9, .box_h = 6, .ofs_x = 2, .ofs_y = 25},
    {.bitmap_index = 9669, .adv_w = 348, .box_w = 19, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9779, .adv_w = 387, .box_w = 21, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9965, .adv_w = 328, .box_w = 20, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10075, .adv_w = 386, .box_w = 21, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10261, .adv_w = 355, .box_w = 21, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10393, .adv_w = 199, .box_w = 14, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10517, .adv_w = 382, .box_w = 21, .box_h = 30, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 10697, .adv_w = 367, .box_w = 19, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10852, .adv_w = 163, .box_w = 6, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10914, .adv_w = 154, .box_w = 11, .box_h = 39, .ofs_x = -3, .ofs_y = -8},
    {.bitmap_index = 11031, .adv_w = 343, .box_w = 20, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 11186, .adv_w = 144, .box_w = 5, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 11248, .adv_w = 584, .box_w = 33, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 11446, .adv_w = 369, .box_w = 19, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 11556, .adv_w = 372, .box_w = 21, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11688, .adv_w = 388, .box_w = 22, .box_h = 30, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 11868, .adv_w = 388, .box_w = 21, .box_h = 30, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 12048, .adv_w = 236, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 12136, .adv_w = 299, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12246, .adv_w = 236, .box_w = 15, .box_h = 28, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12358, .adv_w = 362, .box_w = 18, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 12468, .adv_w = 320, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12578, .adv_w = 494, .box_w = 31, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12754, .adv_w = 355, .box_w = 22, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12886, .adv_w = 326, .box_w = 21, .box_h = 30, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 13066, .adv_w = 310, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13176, .adv_w = 198, .box_w = 13, .box_h = 37, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 13324, .adv_w = 147, .box_w = 5, .box_h = 34, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 13392, .adv_w = 198, .box_w = 12, .box_h = 37, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 13503, .adv_w = 378, .box_w = 22, .box_h = 7, .ofs_x = 1, .ofs_y = 10}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 5, 6, 7, 0, 8,
    0, 0, 0, 0, 9, 10, 0, 0,
    7, 11, 12, 13, 0, 14, 15, 16,
    17, 18, 19, 20, 21, 0, 0, 0,
    0, 0, 22, 23, 24, 0, 25, 26,
    0, 27, 28, 29, 30, 29, 27, 27,
    23, 23, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 0, 2, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0,
    5, 0, 5, 0, 7, 8, 9, 10,
    11, 12, 13, 14, 0, 0, 15, 0,
    0, 0, 16, 17, 18, 18, 18, 19,
    18, 20, 21, 22, 23, 24, 25, 25,
    18, 26, 18, 25, 27, 28, 29, 30,
    31, 32, 33, 34, 0, 0, 35, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -26, 0, -38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -32, 0, 0,
    0, 0, -26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -26, 0, 0, 0, -7, -1, 0,
    -44, -1, -27, -13, 0, -32, 0, 0,
    -1, 0, -3, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -3, -3, -4, -4,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -26, 0, -8, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, -5, 0, 0, 0, -18, 0,
    0, 0, 0, -10, 0, 0, -1, 0,
    0, 0, -2, -2, -3, 0, 0, -1,
    0, -2, 0, 0, -3, -3, -3, -3,
    0, 0, 0, 0, -31, -7, 0, 0,
    0, -32, 0, -8, 0, 0, -26, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -32,
    -15, 0, -51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -24, 0, -24, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    0, -23, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, -3, -6, -6, 0,
    -5, 0, 0, -46, 0, 0, 0, -26,
    0, 0, -58, 0, -50, -32, 0, -51,
    0, 0, 0, 0, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    -29, -36, 0, -29, 0, 0, 0, 0,
    -45, -37, 0, -23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -26, 0, -21,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -24, 0, -9, 0, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -13, 0, -29, 0, -8, -13, 0,
    -19, -10, 0, -3, 0, -20, 0, 0,
    -3, -2, 0, 0, -1, 0, -3, 0,
    -2, -1, 0, 0, -1, 0, 0, 0,
    0, -45, -35, -21, -59, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -33, 0,
    -10, 0, 0, -26, -1, 0, 0, -42,
    0, -51, -31, -42, -23, -24, -24, -23,
    -26, 0, 0, 0, -19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -45,
    -44, -13, -54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -35, 0, -35, 0,
    0, 0, 0, 0, 0, -3, -3, -27,
    0, -26, -2, -2, -3, -2, -3, 0,
    0, 0, -32, -13, 0, -38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    0, -20, 0, 0, 0, 0, 0, 0,
    -3, -3, -3, 0, 0, -2, 0, 0,
    -2, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, -22, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -45, -50, -13, -54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -36, 0, -65,
    0, 0, -13, 0, 0, 0, -47, -4,
    -45, 0, -33, -16, -16, -17, -16, -16,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, -26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, -4, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -12,
    -10, -13, -7, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -6, 0, 0, -1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, -8, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -3, -2, -8,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 22, 0, 15, 22,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -6, -1, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -6, 0, 0, -6, -1,
    -18, 0, -2, -13, -3, 0, 0, -8,
    -2, -8, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -26,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -24, 0, -23, 0,
    0, -3, -3, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, -13, -12, -13,
    -13, 0, 0, 3, 24, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, -1,
    0, 27, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -4, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -32, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, 0, 0,
    -3, 0, -13, 0, 0, 0, -2, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, -26, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, 0, -15, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -4, -5, -5, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -6, 0, 0, -18, 0,
    -13, 0, 0, -1, -1, -1, -1, -2,
    0, -8, -1, -1, -6, -6, 0, 0,
    0, 0, 0, 0, -32, 0, 0, 0,
    0, -3, 0, -2, 0, 0, -4, 0,
    0, -3, 0, -10, 1, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -3, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -4, 0, 0, -6, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 41,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
    .stride = 1
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_HONORS_40 = {
#else
lv_font_t ui_font_HONORS_40 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 42,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif

#if LV_VERSION_CHECK(9, 3, 0)
    .static_bitmap = 1,    /*Bitmaps are stored as const so they are always static if not compressed */
#endif

    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_40*/
