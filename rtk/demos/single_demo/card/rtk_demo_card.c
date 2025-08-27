#include "lv_card.h"

/**
 * @brief example card design
 *
 * @param card card object
 * @param param card data
 */
static void example_card_design(lv_obj_t *card, void *param)
{
    CardData *card_data = lv_obj_get_user_data(card);
    if (!card_data)
    {
        return;
    }
    uint32_t index = card_data->index;
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
    lv_obj_t *card_view = lv_card_view_create(parent, CARD_STACK, card_height, card_space, 10, 20,
                                              example_card_design, NULL);
    // Add cards
    return card_view;
}

void rtk_demo_card(void)
{
    example_card_stack(lv_screen_active());
}

