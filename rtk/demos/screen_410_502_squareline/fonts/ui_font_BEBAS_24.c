/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/BEBAS___.TTF -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_BEBAS_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_BEBAS_24
#define UI_FONT_BEBAS_24 1
#endif

#if UI_FONT_BEBAS_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_BEBAS_24_glyph_bitmap.bin
 *Define UI_FONT_BEBAS_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_BEBAS_24_GLYPH_BITMAP_BIN
#define UI_FONT_BEBAS_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_BEBAS_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_BEBAS_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 35, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 87, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 20},
    {.bitmap_index = 34, .adv_w = 315, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 206, .box_w = 11, .box_h = 26, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 222, .adv_w = 273, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 238, .box_w = 13, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 83, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 20},
    {.bitmap_index = 412, .adv_w = 138, .box_w = 7, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 468, .adv_w = 137, .box_w = 7, .box_h = 27, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 522, .adv_w = 171, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 549, .adv_w = 211, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 585, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 592, .adv_w = 188, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 604, .adv_w = 87, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 220, .box_w = 12, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 680, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 131, .box_w = 7, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 203, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 203, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 211, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 195, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 191, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 190, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 203, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1252, .adv_w = 191, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 87, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 87, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1347, .adv_w = 206, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1386, .adv_w = 211, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1410, .adv_w = 206, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1449, .adv_w = 198, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 384, .box_w = 22, .box_h = 25, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1665, .adv_w = 222, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1731, .adv_w = 209, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1863, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1929, .adv_w = 182, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1995, .adv_w = 182, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2127, .adv_w = 201, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2193, .adv_w = 87, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2215, .adv_w = 149, .box_w = 8, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2259, .adv_w = 217, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2325, .adv_w = 176, .box_w = 9, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2391, .adv_w = 275, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2479, .adv_w = 213, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2545, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2611, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2677, .adv_w = 208, .box_w = 11, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2746, .adv_w = 208, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2812, .adv_w = 206, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2878, .adv_w = 196, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2944, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3010, .adv_w = 230, .box_w = 13, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3098, .adv_w = 301, .box_w = 17, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3208, .adv_w = 226, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3274, .adv_w = 225, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3340, .adv_w = 186, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3406, .adv_w = 122, .box_w = 6, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3454, .adv_w = 220, .box_w = 12, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3526, .adv_w = 122, .box_w = 6, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3574, .adv_w = 146, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 3586, .adv_w = 299, .box_w = 17, .box_h = 3, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3601, .adv_w = 111, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 20},
    {.bitmap_index = 3613, .adv_w = 222, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3679, .adv_w = 209, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3745, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3811, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3877, .adv_w = 182, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3943, .adv_w = 182, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4009, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4075, .adv_w = 201, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4141, .adv_w = 87, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4163, .adv_w = 149, .box_w = 8, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4207, .adv_w = 217, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4273, .adv_w = 176, .box_w = 9, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4339, .adv_w = 275, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4427, .adv_w = 213, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4493, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4559, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4625, .adv_w = 208, .box_w = 11, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4694, .adv_w = 208, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4760, .adv_w = 206, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4826, .adv_w = 196, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4892, .adv_w = 199, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4958, .adv_w = 230, .box_w = 13, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5046, .adv_w = 301, .box_w = 17, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5156, .adv_w = 226, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5222, .adv_w = 225, .box_w = 12, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5288, .adv_w = 186, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5354, .adv_w = 146, .box_w = 8, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5402, .adv_w = 85, .box_w = 4, .box_h = 31, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5433, .adv_w = 146, .box_w = 8, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5481, .adv_w = 202, .box_w = 11, .box_h = 4, .ofs_x = 1, .ofs_y = 22},
    {.bitmap_index = 5493, .adv_w = 140, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 14, 15, 16,
    17, 18, 18, 19, 20, 21, 2, 2,
    1, 22, 23, 24, 25, 26, 19, 27,
    28, 29, 30, 31, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 14, 15, 16,
    17, 18, 18, 19, 20, 21, 2, 2,
    1, 22, 23, 24, 25, 26, 19, 27,
    28, 29, 30, 31, 0, 0, 0, 0,
    0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 12, 12, 12,
    13, 14, 14, 15, 12, 14, 12, 12,
    16, 14, 16, 14, 17, 18, 19, 20,
    21, 22, 23, 24, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 12, 12, 12,
    13, 14, 14, 15, 12, 14, 12, 12,
    16, 14, 16, 14, 17, 18, 19, 20,
    21, 22, 23, 24, 0, 0, 0, 0,
    0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    9, 6, 5, 0, 0, 7, 9, 0,
    8, 8, 0, 10, 9, 10, 0, 9,
    7, 0, 10, 0, 0, -13, -13, 0,
    10, 7, 7, 5, 6, 8, 10, 0,
    10, 9, 8, 11, 10, 11, 0, 10,
    8, 6, 10, 8, 8, 7, 6, 7,
    7, 0, 0, 0, -33, 0, 7, 0,
    0, 6, 0, 8, 7, 8, 0, 7,
    0, 0, 8, -7, -6, 0, -17, 0,
    8, 0, 0, 0, 0, 7, 9, 0,
    8, 7, 0, 9, 8, 10, -6, 8,
    6, 0, 9, -7, -6, -14, -16, 0,
    7, -26, -10, 0, 0, 5, 7, -28,
    7, 6, -6, 8, 7, 8, -27, 7,
    0, -26, 8, -25, -25, -21, -27, 0,
    8, 0, 0, 0, 0, 6, 8, 0,
    7, 7, 0, 9, 8, 8, -7, 8,
    0, 0, 8, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 6, 8, 0,
    7, 7, 0, 9, 8, 9, -6, 8,
    5, 0, 8, 0, 0, -14, -14, 0,
    0, 0, 0, -7, -33, 0, 0, 0,
    0, 0, -39, 8, 0, 8, -55, 0,
    0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 7, 9, 0,
    8, 7, 0, 10, 8, 10, -6, 8,
    6, 0, 9, -7, -6, -14, -16, 0,
    9, 6, 5, 0, 0, 8, 9, 0,
    9, 8, 0, 10, 9, 10, 0, 9,
    7, 0, 10, 0, 0, -13, -12, 0,
    0, -35, 0, -7, -8, 0, 0, -27,
    0, 0, 0, 8, 0, 8, 0, 0,
    -8, -40, 0, -46, -46, 0, -48, 0,
    8, 0, 0, 0, 0, 7, 8, -8,
    8, 7, 0, 9, 8, 9, -9, 8,
    6, -7, 9, -12, -11, -17, -22, 0,
    6, 0, 0, 0, 0, 0, 6, 0,
    5, 0, -6, 7, 6, 7, -8, 6,
    0, 0, 7, -7, -6, -16, -16, 0,
    9, 6, 0, 0, 0, 7, 9, 0,
    8, 8, 0, 10, 9, 10, -7, 9,
    7, 0, 10, 0, 0, -15, -14, 0,
    0, 0, 0, 0, -29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -11, -31, 0, 0, 0,
    0, 0, -43, 0, 0, 0, -58, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 7, 8, 0,
    8, 7, 0, 9, 8, 9, -6, 8,
    6, 0, 9, 0, 0, -14, -14, 0,
    10, 7, 7, 6, 6, 8, 10, 0,
    10, 9, 8, 11, 10, 11, 0, 10,
    8, 6, 10, 8, 8, 7, 6, 7,
    10, 7, 6, 0, 6, 8, 10, 0,
    9, 8, 0, 10, 10, 10, 0, 10,
    7, 6, 10, 7, 8, 7, 5, 7,
    -15, -27, 0, -19, -25, -11, -14, -10,
    -15, -16, 0, 7, -15, 6, 0, -15,
    -21, -9, 0, -7, -7, 0, -9, 0,
    0, -40, 0, 0, -82, 0, 0, -31,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -51, 0, -46, -43, 0, -64, 0,
    0, 0, 0, -6, -22, 0, 0, 0,
    0, 0, -27, 6, 0, 6, -56, 0,
    0, 0, 5, -8, -7, -18, -18, 0,
    0, 0, 6, 0, 0, 0, 0, -7,
    0, 0, 7, 9, 0, 10, 0, 0,
    0, -6, 0, -12, -11, 6, -21, 6,
    0, 0, 0, -10, -13, -8, 0, -9,
    -5, 0, 6, 9, 0, 9, 0, 0,
    -9, -8, 0, -14, -13, 5, -23, 6,
    7, 0, 0, 0, 0, 0, 7, 0,
    6, 0, -6, 7, 7, 7, -8, 7,
    0, 0, 7, -8, -8, -16, -18, 0,
    0, 0, 0, -9, -48, 0, 0, 0,
    0, 0, -41, 6, 0, 6, -48, 0,
    0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, -9, -15, -32, 0, 0, 0,
    -7, 0, -47, 8, 0, 8, -52, 0,
    -11, 0, 7, 0, 0, 0, 0, 0,
    0, 0, -7, -13, -26, 0, 0, 0,
    -5, 0, -42, 8, 0, 8, -44, 0,
    -10, 0, 8, 0, 0, 0, 0, 0,
    -13, -11, 0, -17, -23, 0, -12, 0,
    -14, -14, 0, 7, -13, 7, 0, -13,
    -19, 0, 7, 0, 0, 0, 0, 0,
    -13, -11, -20, -24, -61, 0, -12, 0,
    -16, -14, -49, 6, -13, 6, -56, -13,
    -20, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -54, 0, 0, 0,
    0, 0, 0, 7, 0, 7, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 31,
    .right_class_cnt     = 24,
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
const lv_font_t ui_font_BEBAS_24 = {
#else
lv_font_t ui_font_BEBAS_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 33,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
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



#endif /*#if UI_FONT_BEBAS_24*/
