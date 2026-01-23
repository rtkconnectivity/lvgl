/*******************************************************************************
 * Size: 54 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 54 --font lvgl_font_src/LEDFont.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_LED_54.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_LED_54
#define UI_FONT_LED_54 1
#endif

#if UI_FONT_LED_54


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_LED_54_glyph_bitmap.bin
 *Define UI_FONT_LED_54_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_LED_54_GLYPH_BITMAP_BIN
#define UI_FONT_LED_54_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_LED_54_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_LED_54_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 432, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 90, .box_w = 4, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 28},
    {.bitmap_index = 64, .adv_w = 389, .box_w = 22, .box_h = 25, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 214, .adv_w = 389, .box_w = 22, .box_h = 51, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 520, .adv_w = 684, .box_w = 41, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 445, .box_w = 26, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 90, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 28},
    {.bitmap_index = 1195, .adv_w = 230, .box_w = 13, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 230, .box_w = 12, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1454, .adv_w = 389, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1592, .adv_w = 389, .box_w = 22, .box_h = 19, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1706, .adv_w = 111, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1722, .adv_w = 422, .box_w = 20, .box_h = 4, .ofs_x = 3, .ofs_y = 18},
    {.bitmap_index = 1742, .adv_w = 111, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1752, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2196, .adv_w = 159, .box_w = 8, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2272, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2494, .adv_w = 389, .box_w = 20, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2679, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2901, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3123, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3345, .adv_w = 389, .box_w = 20, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 3535, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3757, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3979, .adv_w = 111, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 4019, .adv_w = 111, .box_w = 5, .box_h = 23, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4065, .adv_w = 276, .box_w = 16, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4213, .adv_w = 389, .box_w = 22, .box_h = 10, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 4273, .adv_w = 276, .box_w = 16, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4421, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4643, .adv_w = 432, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4643, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4865, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5087, .adv_w = 389, .box_w = 20, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5272, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5494, .adv_w = 389, .box_w = 20, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5679, .adv_w = 389, .box_w = 20, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5864, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6086, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6308, .adv_w = 90, .box_w = 4, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6345, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6573, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6801, .adv_w = 389, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6991, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7213, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7441, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7663, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7885, .adv_w = 389, .box_w = 23, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8107, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8329, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8551, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8773, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9001, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 9229, .adv_w = 389, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9457, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9679, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9901, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10123, .adv_w = 184, .box_w = 10, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10255, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10477, .adv_w = 184, .box_w = 10, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10609, .adv_w = 389, .box_w = 14, .box_h = 8, .ofs_x = 5, .ofs_y = 38},
    {.bitmap_index = 10641, .adv_w = 389, .box_w = 25, .box_h = 4, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 10669, .adv_w = 389, .box_w = 9, .box_h = 8, .ofs_x = 7, .ofs_y = 38},
    {.bitmap_index = 10693, .adv_w = 389, .box_w = 23, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10813, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11035, .adv_w = 349, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11135, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11357, .adv_w = 349, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11457, .adv_w = 294, .box_w = 17, .box_h = 37, .ofs_x = 1, .ofs_y = -17},
    {.bitmap_index = 11642, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = -17},
    {.bitmap_index = 11864, .adv_w = 389, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12086, .adv_w = 90, .box_w = 5, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 12140, .adv_w = 90, .box_w = 16, .box_h = 42, .ofs_x = -11, .ofs_y = -16},
    {.bitmap_index = 12308, .adv_w = 329, .box_w = 19, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12493, .adv_w = 90, .box_w = 4, .box_h = 37, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12530, .adv_w = 389, .box_w = 22, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 12656, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12776, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12896, .adv_w = 389, .box_w = 22, .box_h = 35, .ofs_x = 1, .ofs_y = -15},
    {.bitmap_index = 13106, .adv_w = 389, .box_w = 22, .box_h = 35, .ofs_x = 1, .ofs_y = -15},
    {.bitmap_index = 13316, .adv_w = 349, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13416, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13536, .adv_w = 377, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 13764, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13884, .adv_w = 363, .box_w = 20, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13989, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14109, .adv_w = 362, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14209, .adv_w = 389, .box_w = 22, .box_h = 35, .ofs_x = 1, .ofs_y = -15},
    {.bitmap_index = 14419, .adv_w = 389, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14539, .adv_w = 249, .box_w = 14, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 14715, .adv_w = 90, .box_w = 4, .box_h = 45, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 14760, .adv_w = 249, .box_w = 14, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 14936, .adv_w = 389, .box_w = 16, .box_h = 4, .ofs_x = 4, .ofs_y = 39}
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
    0, 1, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    116, 29, 0, 116, 0, 0, -117, 0,
    0, 96, 0, 0, 0, 0, 46, 41,
    0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 6,
    .right_class_cnt     = 3,
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
    .kern_scale = 35,
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
const lv_font_t ui_font_LED_54 = {
#else
lv_font_t ui_font_LED_54 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 63,          /*The maximum line height required by the font*/
    .base_line = 17,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 3,
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



#endif /*#if UI_FONT_LED_54*/
