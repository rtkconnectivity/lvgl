/**
 * @file app_rtk_port.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "lvgl.h"
#include "hack_lv_draw_buf.h"
#include "../../../src/stdlib/builtin/lv_tlsf.h"
#include "../../../src/misc/lv_types.h"
#include "../../../src/draw/lv_draw_buf_private.h"







static lv_tlsf_t draw_buf_tlfs;


static void *tlfs_buf_malloc(size_t size_bytes, lv_color_format_t color_format)
{
    return lv_tlsf_malloc(draw_buf_tlfs, size_bytes);
}
static void tlfs_buf_free(void *p)
{
    lv_tlsf_free(draw_buf_tlfs, p);
}

void hack_lv_draw_buf(void *buf, size_t size)
{
    lv_draw_buf_handlers_t *handlers = lv_draw_buf_get_handlers();
    lv_draw_buf_handlers_t *font_handlers = lv_draw_buf_get_font_handlers();
    lv_draw_buf_handlers_t *image_handlers = lv_draw_buf_get_image_handlers();

    draw_buf_tlfs = lv_tlsf_create_with_pool(buf, size);
    handlers->buf_malloc_cb = tlfs_buf_malloc;
    handlers->buf_free_cb = tlfs_buf_free;
    font_handlers->buf_malloc_cb = tlfs_buf_malloc;
    font_handlers->buf_free_cb = tlfs_buf_free;
    image_handlers->buf_malloc_cb = tlfs_buf_malloc;
    image_handlers->buf_free_cb = tlfs_buf_free;
}







