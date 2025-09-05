/**
 * @file rtk_demo_card.c
 *
 */
#include "lvgl.h"

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
    lv_coord_t card_height = 200;
    lv_coord_t card_space = 0;
    lv_obj_t *cardview = lv_card_view_create(parent, CARD_STACK, card_height, card_space, 10, 20,
                                             example_card_design, NULL);

    return cardview;
}

void rtk_demo_card(void)
{
    example_card_stack(lv_screen_active());
}

