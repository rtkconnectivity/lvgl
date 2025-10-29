/**
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file Lite3D_port.c
  * @brief Custom configuration
  * @details Custom configuration
  * @author sienna_shen@realsil.com.cn
  * @date 2025/4/11
  * @version 1.0
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2017 Realtek Semiconductor Corporation</center></h2>
  ***************************************************************************************
  */


#include <stdlib.h>
#include "./include/l3.h"


#include "lvgl.h"
#include "../../misc/lv_types.h"
#include "../../draw/lv_draw_private.h"

void *l3_port_malloc(size_t size)
{
    return lv_malloc(size);
}
void l3_port_free(void *ptr)
{
    lv_free(ptr);
}

#if LV_USE_DRAW_PPE_RTL8773G && LV_DRAW_TRANSFORM_USE_MATRIX
#include "../../draw/ppe/rtl8773g/lv_draw_ppe_rtl8773g.h"
void l3_port_draw_rect_img_to_canvas(l3_draw_rect_img_t *image, l3_canvas_t *dc,
                                     l3_rect_t *rect)
{
    // draw_uint
    lv_image_header_t dc_header =
    {
        .magic = LV_IMAGE_HEADER_MAGIC,
        .w = dc->section.x2 - dc->section.x1 + 1,
        .h = dc->section.y2 - dc->section.y1 + 1,
        .cf = (dc->bit_depth == 16 ? LV_COLOR_FORMAT_RGB565 : LV_COLOR_FORMAT_ARGB8888),
        .stride = (dc->section.x2 - dc->section.x1 + 1) * (dc->bit_depth / 8),
        .flags = 0,
    };

    lv_draw_buf_t draw_buf =
    {
        .header = dc_header,
        .data_size = dc_header.w * dc_header.h * (dc->bit_depth / 8),
        .data = (uint8_t *)dc->frame_buf,
    };

    lv_layer_t layer =
    {
        .draw_buf = &draw_buf,
        .buf_area =
        {
            .x1 = dc->section.x1,
            .y1 = dc->section.y1,
            .x2 = dc->section.x2,
            .y2 = dc->section.y2,
        },
        .color_format = (dc->bit_depth == 16 ? LV_COLOR_FORMAT_RGB565 : LV_COLOR_FORMAT_ARGB8888),
    };

    lv_area_t clip_area =
    {
        .x1 = image->img_target_x,
        .y1 = image->img_target_y,
        .x2 = image->img_target_x + image->img_target_w - 1,
        .y2 = image->img_target_y + image->img_target_h - 1,
    };
    lv_draw_task_t t =
    {
        .target_layer = &layer,
        .clip_area =  clip_area,
    };

    layer.phy_clip_area = clip_area;

    // draw_dsc
    lv_draw_dsc_base_t draw_dsc_base =
    {
        .obj = NULL,
        .part = LV_PART_MAIN,
        .id1 = 0,
        .id2 = 0,
        .layer = &layer,
        .dsc_size = sizeof(lv_draw_image_dsc_t),
        .user_data = NULL,
    };

    l3_img_head_t *image_header = (l3_img_head_t *)image->data;
    lv_image_header_t draw_image_header =
    {
        .magic = LV_IMAGE_HEADER_MAGIC,
        .w = image_header->w,
        .h = image_header->h,
        .cf = (image_header->type == LITE_RGB565 ? LV_COLOR_FORMAT_RGB565 : LV_COLOR_FORMAT_ARGB8888),
        .stride = image_header->w * (image_header->type == LITE_RGB565 ? 2 : 4),
        .flags = 0,
    };
    lv_img_dsc_t img_dsc =
    {
        .header.magic = LV_IMAGE_HEADER_MAGIC,
        .header.w = image_header->w,
        .header.h = image_header->h,
        .header.stride = image_header->w * (image_header->type == LITE_RGB565 ? 2 : 4),
        .data_size = image_header->w * image_header->h * (image_header->type == LITE_RGB565 ? 2 : 4),
        .header.cf = (image_header->type == LITE_RGB565 ? LV_COLOR_FORMAT_RGB565 : LV_COLOR_FORMAT_ARGB8888),
        .header.flags = 0,
        .data = (uint8_t *)image->data + sizeof(l3_img_head_t),
    };

    lv_draw_image_dsc_t draw_dsc =
    {
        .base = draw_dsc_base,
        .src = (uint8_t *) &img_dsc,
        .header = draw_image_header,
        .image_area = (lv_area_t){0, 0, image_header->w - 1, image_header->h - 1},
        .opa = LV_OPA_MAX,
    };

    lv_area_t coords =
    {
        .x1 = 0,
        .y1 = 0,
        .x2 = image_header->w - 1,
        .y2 = image_header->h - 1,
    };

    lv_matrix_t *matrix = (lv_matrix_t *)image->matrix.u.m;

    lv_draw_ppe_image_use_matrix(&t, &draw_dsc, &coords, matrix, image->blend_mode);
}

#endif


