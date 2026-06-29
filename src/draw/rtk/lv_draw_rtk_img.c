/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: LicenseRef-Realtek-5-Clause
 */

/**
 * @file lv_draw_rtk_img.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../misc/lv_area_private.h"
#include "../lv_image_decoder_private.h"
#include "../lv_draw_image_private.h"
#include "../lv_draw_private.h"
#include "lv_draw_rtk.h"
#if LV_USE_DRAW_RTK

#include "../../display/lv_display.h"
#include "../../misc/lv_log.h"
#include "../../stdlib/lv_mem.h"
#include "../../misc/lv_math.h"
#include "../../misc/lv_color.h"
#include "../../misc/lv_matrix.h"
#include "../../stdlib/lv_string.h"
#if LV_DRAW_TRANSFORM_USE_MATRIX
#include <math.h>
#endif
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct
{
    uint8_t *writebuf;
    uint32_t write_off;
    uint32_t image_base;
    uint32_t image_off;
    lv_color_format_t input_type;
    lv_color_format_t target_type;
    lv_blend_mode_t blend_mode;
    uint8_t opacity_value;

    uint8_t *palette_data;
    uint8_t *palette_index;
} gui_raster_params_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void img_draw_core(lv_draw_task_t * t, const lv_draw_image_dsc_t * draw_dsc,
                          const lv_image_decoder_dsc_t * decoder_dsc, lv_draw_image_sup_t * sup,
                          const lv_area_t * img_coords, const lv_area_t * clipped_img_area);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_draw_rtk_image(lv_draw_task_t * t, const lv_draw_image_dsc_t * draw_dsc,
                       const lv_area_t * coords)
{
    lv_draw_image_normal_helper(t, draw_dsc, coords, img_draw_core);
}

void lv_draw_rtk_layer(lv_draw_task_t * t, const lv_draw_image_dsc_t * draw_dsc,
                      const lv_area_t * coords)
{
    lv_layer_t * layer_to_draw = (lv_layer_t *)draw_dsc->src;

    /*It can happen that nothing was draw on a layer and therefore its buffer is not allocated.
     *In this case just return. */
    if(layer_to_draw->draw_buf == NULL) return;

    /*The source should be a draw_buf, not a layer*/
    lv_draw_image_dsc_t new_draw_dsc = *draw_dsc;
    new_draw_dsc.src = layer_to_draw->draw_buf;

    lv_draw_rtk_image(t, &new_draw_dsc, coords);
}
/**********************
 *   STATIC FUNCTIONS
 **********************/

static void gui_get_source_color(uint8_t *source_red, uint8_t *source_green, uint8_t *source_blue, uint8_t *source_alpha,
                                 uint32_t image_base, uint32_t image_off, lv_color_format_t input_type,
                                 uint8_t *palette_data, uint8_t *palette_index)
{
    switch (input_type)
    {
    case LV_COLOR_FORMAT_RGB565:
        {
            lv_color16_t *pixel = (lv_color16_t *)(uintptr_t)image_base + image_off;
            *source_alpha = 0xff;
            *source_red = pixel->red << 3;
            *source_green = pixel->green << 2;
            *source_blue = pixel->blue << 3;
            break;
        }
    case LV_COLOR_FORMAT_RGB888:
        {
            lv_color_t *pixel = (lv_color_t *)(uintptr_t)image_base + image_off;
            *source_alpha = 0xff;
            *source_red = pixel->red;
            *source_green = pixel->green;
            *source_blue = pixel->blue;
            break;
        }
    case LV_COLOR_FORMAT_ARGB8888:
        {
            lv_color32_t *pixel = (lv_color32_t *)(uintptr_t)image_base + image_off;
            *source_alpha = pixel->alpha;
            *source_red = pixel->red;
            *source_green = pixel->green;
            *source_blue = pixel->blue;
            break;
        }
    default:
        break;
    }
}

static void gui_get_target_color(uint8_t *target_red, uint8_t *target_green, uint8_t *target_blue, uint8_t *target_alpha,
                                 uint8_t *writebuf, uint32_t write_off, lv_color_format_t target_type)
{
    switch (target_type)
    {
    case LV_COLOR_FORMAT_RGB565:
        {
            lv_color16_t *pixel = (lv_color16_t *)(uintptr_t)writebuf + write_off;
            *target_alpha = 0xff;
            *target_red = pixel->red << 3;
            *target_green = pixel->green << 2;
            *target_blue = pixel->blue << 3;
            break;
        }
    case LV_COLOR_FORMAT_RGB888:
        {
            lv_color_t *pixel = (lv_color_t *)(uintptr_t)writebuf + write_off;
            *target_alpha = 0xff;
            *target_red = pixel->red;
            *target_green = pixel->green;
            *target_blue = pixel->blue;
            break;
        }
    case LV_COLOR_FORMAT_ARGB8888:
        {
            lv_color32_t *pixel = (lv_color32_t *)(uintptr_t)writebuf + write_off;
            *target_alpha = pixel->alpha;
            *target_red = pixel->red;
            *target_green = pixel->green;
            *target_blue = pixel->blue;
            break;
        }
    default:
        break;
    }
}

static void blend_colors(uint8_t *target_channel, uint8_t source_channel, uint8_t source_alpha)
{
    *target_channel = LV_UDIV255((255 - source_alpha) * *target_channel + source_alpha * source_channel);
}

static void gui_apply_blend_mode(uint8_t *target_red, uint8_t *target_green, uint8_t *target_blue, uint8_t *target_alpha,
                                 uint8_t source_red, uint8_t source_green, uint8_t source_blue, uint8_t source_alpha,
                                 uint8_t opacity_value, lv_blend_mode_t blend_mode)
{

    switch (blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        {
            source_alpha = LV_UDIV255(source_alpha * opacity_value);
            blend_colors(target_alpha, source_alpha, source_alpha);
            blend_colors(target_red, source_red, source_alpha);
            blend_colors(target_green, source_green, source_alpha);
            blend_colors(target_blue, source_blue, source_alpha);
            break;
        }
    case LV_BLEND_MODE_ADDITIVE:
    case LV_BLEND_MODE_SUBTRACTIVE:
    case LV_BLEND_MODE_MULTIPLY:
    default:
        break;
    }
}

static void gui_set_pixel_color(uint8_t *writebuf, uint32_t write_off, lv_color_format_t target_type,
                                uint8_t target_red, uint8_t target_green, uint8_t target_blue, uint8_t target_alpha)
{
    switch (target_type)
    {
    case LV_COLOR_FORMAT_RGB565:
        {
            lv_color16_t *pixel = (lv_color16_t *)(uintptr_t)writebuf + write_off;
            pixel->red = target_red >> 3;
            pixel->green = target_green >> 2;
            pixel->blue = target_blue >> 3;
            break;
        }
    case LV_COLOR_FORMAT_RGB888:
        {
            lv_color_t *pixel = (lv_color_t *)(uintptr_t)writebuf + write_off;
            pixel->red = target_red;
            pixel->green = target_green;
            pixel->blue = target_blue;
            break;
        }
    case LV_COLOR_FORMAT_ARGB8888:
        {
            lv_color32_t *pixel = (lv_color32_t *)(uintptr_t)writebuf + write_off;
            pixel->alpha = target_alpha;
            pixel->red = target_red;
            pixel->green = target_green;
            pixel->blue = target_blue;
            break;
        }
    default:
        break;
    }
}
static void do_raster_pixel(const gui_raster_params_t *params)
{
    uint8_t source_red, source_green, source_blue, source_alpha;
    uint8_t target_red, target_green, target_blue, target_alpha;

    gui_get_source_color(&source_red, &source_green, &source_blue, &source_alpha,
                         params->image_base, params->image_off, params->input_type,
                         params->palette_data, params->palette_index);

    gui_get_target_color(&target_red, &target_green, &target_blue, &target_alpha,
                         params->writebuf, params->write_off, params->target_type);

    gui_apply_blend_mode(&target_red, &target_green, &target_blue, &target_alpha,
                         source_red, source_green, source_blue, source_alpha,
                         params->opacity_value, params->blend_mode);

    gui_set_pixel_color(params->writebuf, params->write_off, params->target_type,
                        target_red, target_green, target_blue, target_alpha);
}

static void img_draw_core(lv_draw_task_t * t, const lv_draw_image_dsc_t * draw_dsc,
                          const lv_image_decoder_dsc_t * decoder_dsc, lv_draw_image_sup_t * sup,
                          const lv_area_t * img_coords, const lv_area_t * clipped_img_area)
{
    const lv_draw_buf_t * decoded = decoder_dsc->decoded;
    const uint8_t * src_buf = decoded->data;
    const lv_image_header_t * header = &decoded->header;
    lv_color_format_t cf = decoded->header.cf;
    lv_layer_t * layer = t->target_layer;

#if LV_DRAW_TRANSFORM_USE_MATRIX
    lv_matrix_t matrix;
    lv_memcpy(&matrix, &layer->matrix, sizeof(lv_matrix_t));
    if (img_coords->x1 != 0 || img_coords->y1 != 0)
    {
        lv_matrix_translate(&matrix, img_coords->x1, img_coords->y1);
    }
    lv_area_t img_area = {.x1 = 0, .y1 = 0, .x2 = header->w - 1, .y2 = header->h - 1};
    lv_area_t matrix_area = lv_matrix_transform_area(&matrix, &img_area);

    lv_area_t constraint_area;
    if (!lv_area_intersect(&constraint_area, &layer->buf_area, &matrix_area))
    {
        return;
    }
    if (!lv_area_intersect(&constraint_area, &constraint_area, &layer->phy_clip_area))
    {
        return;
    }

    lv_matrix_t inverse;
    lv_matrix_inverse(&inverse, &matrix);

    gui_raster_params_t params;
    params.writebuf = layer->draw_buf->data;
    params.write_off = 0;
    params.image_base = (uint32_t)(uintptr_t)src_buf;
    params.image_off = 0;
    params.input_type = cf;
    params.target_type = lv_display_get_color_format(NULL);
    params.blend_mode = draw_dsc->blend_mode;
    params.opacity_value = draw_dsc->opa;

    int32_t tps = layer->draw_buf->header.stride / lv_color_format_get_size(params.target_type);
    int32_t sps = decoded->header.stride / lv_color_format_get_size(params.input_type);

    for (int32_t i = constraint_area.y1; i < constraint_area.y2; i++)
    {
        for (int32_t j = constraint_area.x1; j < constraint_area.x2; j++)
        {
            float X = inverse.m[0][0] * j + inverse.m[0][1] * i + inverse.m[0][2];
            float Y = inverse.m[1][0] * j + inverse.m[1][1] * i + inverse.m[1][2];
            float Z = inverse.m[2][0] * j + inverse.m[2][1] * i + inverse.m[2][2];
            int x = roundf(X / Z);
            int y = roundf(Y / Z);

            if ((x >= header->w) || (x < 0) || (y < 0) || (y >= header->h)) { continue; }

            params.write_off = i * tps + j;
            params.image_off = y * sps + x;

            do_raster_pixel(&params);
        }
    }
#endif
}

#endif /*LV_USE_DRAW_RTK*/
