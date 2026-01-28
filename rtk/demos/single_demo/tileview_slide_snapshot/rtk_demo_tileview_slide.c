/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file rtk_demo_tileview_slide.c
 *
 */

#include "lvgl.h"

#include "lv_custom_tile_slide.h"
#include "lv_custom_tile_snapshot.h"

#if LV_BUILD_DEMOS

tileview_slide_t slide_info;
SLIDE_EFFECT center_effect = CLASSIC;
SLIDE_EFFECT top_effect = FADE;
SLIDE_EFFECT bottom_effect = SCALE;
SLIDE_EFFECT left_effect = SCALE_FADE;
SLIDE_EFFECT right_effect = SCALE;
#if LV_DRAW_TRANSFORM_USE_MATRIX
SLIDE_EFFECT right2_effect = BOX;
SLIDE_EFFECT right3_effect = CUBE_ROTATION;
SLIDE_EFFECT right4_effect = ROTATION;
#endif

uint32_t event_snapshot_creat;
uint32_t event_snapshot_delete;

typedef struct
{
    uint8_t col;
    uint8_t row;
    uint32_t dir;
    lv_palette_t palette;
    const char *text;
    SLIDE_EFFECT *effect;
} tile_info_t;

static tile_info_t tile_cfg[] =
{
    {1, 1, LV_DIR_ALL,    LV_PALETTE_YELLOW, "Center", &center_effect},
    {1, 0, LV_DIR_BOTTOM, LV_PALETTE_ORANGE, "Top",    &top_effect},
    {1, 2, LV_DIR_TOP,    LV_PALETTE_GREEN,  "Bottom", &bottom_effect},
    {0, 1, LV_DIR_RIGHT,  LV_PALETTE_BLUE,   "Left",   &left_effect},
    {2, 1, LV_DIR_HOR,    LV_PALETTE_PINK,   "Right",  &right_effect}
#if LV_DRAW_TRANSFORM_USE_MATRIX
    , {3, 1, LV_DIR_HOR,   LV_PALETTE_AMBER,  "Right2", &right2_effect}
    , {4, 1, LV_DIR_HOR,   LV_PALETTE_ORANGE, "Right3", &right3_effect}
    , {5, 1, LV_DIR_LEFT,  LV_PALETTE_BROWN,  "Right4", &right4_effect}
#endif
};

/**
 * @brief Create the content for a tile.
 *
 * @details This function adds a full-size colored rectangle and a centered label to the given tile object.
 *          You can use this as a common template for creating simple tile content.
 *          Can be modified to add more items.
 *
 * @param tile      Pointer to the parent tile object.
 * @param palette   Color palette to be used for the background rectangle.
 * @param text      Text to display in the centered label.
 */
static void create_tile_content(lv_obj_t *tile, lv_palette_t palette, const char *text)
{
    // Customizable: Add your own content below.
    lv_obj_t *rect = lv_obj_create(tile);
    lv_obj_set_size(rect, lv_pct(100), lv_pct(100));
    lv_obj_set_style_bg_color(rect, lv_palette_main(palette), 0);
    lv_obj_t *label = lv_label_create(tile);
    lv_label_set_text(label, text);
    lv_obj_center(label);
}

/**
 * @brief Create the base part of a Snapshot tile.
 *
 * @details This function performs the mandatory initialization steps
 *          required for a snapshot tile.
 *          DO NOT modify the contents of this function !!!
 *
 * @param tile           Parent tile object.
 * @param event_create   Event code for create.
 * @param event_delete   Event code for delete.
 * @return Pointer to the created src_tile object.
 */
static lv_obj_t *snapshot_tile_base_create(lv_obj_t *tile, uint32_t event_create,
                                           uint32_t event_delete)
{
    // Mandatory: Create the src_tile object and snapshot
    lv_obj_t *src_tile = lv_obj_create(tile);
    lv_obj_remove_style_all(src_tile);
    lv_obj_set_size(src_tile, LV_PCT(100), LV_PCT(100));
    create_snapshot_obj_with_enent(tile, tile, event_create, event_delete);
    return src_tile;
}

/**
 * @brief Customize the content of a snapshot tile.
 *
 * @details Use this function to add or modify items inside the src_tile,
 *          such as rectangles, labels, icons, etc. You can freely edit this part.
 *
 * @param tile           Parent tile object.
 * @param palette        Color palette for the rectangle.
 * @param text           Text content for the label.
 * @param event_create   Event code for create.
 * @param event_delete   Event code for delete.
 */
static void create_snapshot_tile_content(lv_obj_t *tile, lv_palette_t palette, const char *text,
                                         uint32_t event_create, uint32_t event_delete)
{
    lv_obj_t *src_tile = snapshot_tile_base_create(tile, event_create, event_delete);

    // Customizable: Add your own content below.
    lv_obj_t *rect = lv_obj_create(src_tile);
    lv_obj_set_size(rect, lv_pct(100), lv_pct(100));
    lv_obj_set_style_bg_color(rect, lv_palette_main(palette), 0);
    lv_obj_t *label = lv_label_create(src_tile);
    lv_label_set_text(label, text);
    lv_obj_center(label);
}

/**
 * @brief Create a tile and set required properties.
 * @details This function always binds the effect data to the tile's user data.
 *          You MUST call lv_obj_set_user_data(tile, ...) for each tile,
 *          so that the animation or event processing logic can access effect information correctly.
 *          Do not remove or modify this line unless you fully understand the consequences!
 *
 * @param tile   Pointer to the created tile object.
 * @param effect Pointer to the effect struct to be used for this tile.
 */
static inline void bind_tile_effect(lv_obj_t *tile, SLIDE_EFFECT *effect)
{
    // Mandatory: Always associate effect data with tile user data.
    lv_obj_set_user_data(tile, effect);
}

void rtk_demo_tileview_slide(void)
{
#if LV_DRAW_TRANSFORM_USE_MATRIX
    LV_LOG_WARN("Tileview slide snapshot is not supported. Please disable LV_DRAW_TRANSFORM_USE_MATRIX");
    return;
#endif
    slide_info.scrolling = false;
    slide_info.snapshot = false;

    lv_obj_t *tv = lv_tileview_create(lv_screen_active());
    lv_obj_set_style_bg_color(tv, lv_color_black(), 0);
    lv_obj_set_scrollbar_mode(tv, LV_SCROLLBAR_MODE_OFF);

    for (size_t i = 0; i < sizeof(tile_cfg) / sizeof(tile_cfg[0]); i++)
    {
        lv_obj_t *tile = lv_tileview_add_tile(tv, tile_cfg[i].col, tile_cfg[i].row, tile_cfg[i].dir);
        bind_tile_effect(tile, tile_cfg[i].effect);
        create_tile_content(tile, tile_cfg[i].palette, tile_cfg[i].text);
    }

    lv_tileview_set_tile_by_index(tv, 1, 1, LV_ANIM_OFF);
    lv_obj_add_event_cb(tv, tileview_custom_cb, LV_EVENT_ALL, &slide_info);
}

void rtk_demo_tileview_slide_snapshot(void)
{
    event_snapshot_creat  = lv_event_register_id();
    event_snapshot_delete = lv_event_register_id();

    slide_info.scrolling = false;
    slide_info.snapshot = true;
    slide_info.create_snapshot = event_snapshot_creat;
    slide_info.delete_snapshot = event_snapshot_delete;

    lv_obj_t *tv = lv_tileview_create(lv_screen_active());
    lv_obj_set_style_bg_color(tv, lv_color_black(), 0);
    lv_obj_set_scrollbar_mode(tv, LV_SCROLLBAR_MODE_OFF);

    for (size_t i = 0; i < sizeof(tile_cfg) / sizeof(tile_cfg[0]); i++)
    {
        lv_obj_t *tile = lv_tileview_add_tile(tv, tile_cfg[i].col, tile_cfg[i].row, tile_cfg[i].dir);
        bind_tile_effect(tile, tile_cfg[i].effect);
        create_snapshot_tile_content(tile, tile_cfg[i].palette, tile_cfg[i].text, event_snapshot_creat,
                                     event_snapshot_delete);
    }

    lv_tileview_set_tile_by_index(tv, 1, 1, LV_ANIM_OFF);
    lv_obj_add_event_cb(tv, tileview_custom_cb, LV_EVENT_ALL, &slide_info);

#if !LV_DRAW_TRANSFORM_USE_MATRIX
    LV_LOG_USER("To see the 2.5D transformation effect, ensure the platform supports it and enable LV_DRAW_TRANSFORM_USE_MATRIX.");
#endif

}
#endif /* LV_BUILD_DEMOS */
