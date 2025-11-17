/**
 * @file rtk_demo_card.c
 *
 */
#include "lvgl.h"

#if LV_BUILD_DEMOS

/**
 * @brief example card design
 *
 * @param card card object
 * @param param card data
 */
static void example_card_design(lv_obj_t *card, void *param)
{
    lv_card_t *cd = (lv_card_t *)card;
    uint32_t index = cd->data.index;

    lv_obj_set_style_bg_color(card, lv_color_make(12 * index, 255 - 12 * index, 128), 0);
    lv_obj_set_style_radius(card, 30, 0);

    lv_obj_t *label = lv_label_create(card);
    lv_label_set_text_fmt(label, "Card %d", index);
    lv_obj_center(label);
}

/**
 * @brief example card stack
 *
 * @param parent parent object
 * @return lv_obj_t* card view object
 */
static lv_obj_t *example_card_stack(lv_obj_t *parent)
{
    lv_obj_t *cardview = lv_card_view_create(parent, CARD_STACK, 200, 6, 100, 20,
                                             example_card_design, NULL);

    return cardview;
}

void rtk_demo_card(void)
{
#if LV_DRAW_TRANSFORM_USE_MATRIX && __WIN32
    LV_LOG_WARN("card demo is not supported. Please disable LV_DRAW_TRANSFORM_USE_MATRIX");
#else
    example_card_stack(lv_screen_active());
#endif
}

#endif /* LV_BUILD_DEMOS */
