#include "lv_card.h"

static void update_card_transform(lv_obj_t *card, lv_obj_t *parent)
{
    CardData *card_data = lv_obj_get_user_data(card);
    CardViewData *view_data = lv_obj_get_user_data(parent);
    lv_coord_t stack_location = view_data->stack_location;

    lv_coord_t screen_height = lv_display_get_vertical_resolution(NULL);
    lv_coord_t start = stack_location - 40 * 2;
    lv_coord_t location = card_data->ay + view_data->offset_y + start;
    // LV_LOG("id = %d, location = %d\n", card_data->id, location);
    if (view_data->style == CLASSIC)
    {
        lv_obj_set_y(card, location);
    }
    else if (view_data->style == REDUCTION)
    {
        lv_coord_t location_0 = stack_location - 40;
        lv_coord_t location_1 = stack_location;
        float scale_0 = 1.0f;
        float scale_1 = 0.9f;

        lv_obj_set_style_transform_pivot_x(card, LV_PCT(50), 0);
        lv_obj_set_style_transform_pivot_y(card, LV_PCT(50), 0);
        if (location < location_0)
        {
            lv_obj_set_y(card, location);
            lv_obj_set_style_transform_scale(card, LV_SCALE_NONE, 0); // 1.0 (256)
        }
        else if (location < location_1)
        {
            float scale = scale_0 - (scale_0 - scale_1) * (location - location_0) / (location_1 - location_0);
            lv_obj_set_y(card, location);
            lv_obj_set_style_transform_scale(card, (int)(scale * LV_SCALE_NONE), 0); // LV_SCALE_NONE = 256
        }
        else
        {
            lv_obj_set_y(card, location_1);
            lv_obj_set_style_transform_scale(card, (int)(scale_1 * LV_SCALE_NONE), 0);
        }
    }
}

static void touch_event_cb(lv_event_t *e)
{
    lv_obj_t *card_view = lv_event_get_current_target(e);
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    lv_event_code_t code = lv_event_get_code(e);
    if (!lv_obj_has_flag(card_view, LV_OBJ_FLAG_CLICKABLE))
    {
        return;
    }
    lv_point_t point;
    lv_indev_t *indev = lv_indev_active();
    lv_indev_get_point(indev, &point);
    static lv_coord_t last_y = 0;
    if (code == LV_EVENT_PRESSING)
    {
        view_data->offset_y += (point.y - last_y);
        // LV_LOG("offset_y = %d\n", view_data->offset_y);
        // Boundary limit
        lv_coord_t min_offset = -(view_data->total_cnt * view_data->card_height);
        if (view_data->offset_y > 0) { view_data->offset_y = 0; }
        if (view_data->offset_y < min_offset) { view_data->offset_y = min_offset; }

        lv_obj_t *child = lv_obj_get_child(card_view, 0);
        while (child)
        {
            update_card_transform(child, card_view);
            child = lv_obj_get_sibling(child, 1);
        }
        last_y = point.y;
    }
    else if (code == LV_EVENT_PRESSED)
    {
        last_y = point.y;
    }
    else if (code == LV_EVENT_PRESS_LOST || code == LV_EVENT_RELEASED)
    {
        last_y = 0;
    }
}

static void card_delete_event_cb(lv_event_t *e)
{
    lv_obj_t *card = lv_event_get_target(e);
    CardData *card_data = lv_obj_get_user_data(card);
    if (card_data)
    {
        lv_free(card_data);
        lv_obj_set_user_data(card, NULL);
    }
}

static void cardview_delete_event_cb(lv_event_t *e)
{
    lv_obj_t *card_view = lv_event_get_target(e);
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    if (view_data)
    {
        lv_free(view_data);
        lv_obj_set_user_data(card_view, NULL);
    }
}

lv_obj_t *lv_create_card(lv_obj_t *parent, uint8_t id, lv_coord_t w, lv_coord_t h)
{
    CardViewData *view_data = lv_obj_get_user_data(parent);

    lv_obj_t *card = lv_obj_create(parent);
    lv_obj_set_size(card, w, h);
    lv_obj_set_pos(card, (lv_display_get_horizontal_resolution(NULL) - w) / 2, 0);
    lv_obj_add_flag(card, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_clear_flag(card, LV_OBJ_FLAG_SCROLLABLE);

    CardData *card_data = lv_malloc(sizeof(CardData));
    card_data->id = id;
    card_data->ay = view_data->card_height * card_data->id;
    lv_obj_set_user_data(card, card_data);
    view_data->total_cnt++;

    lv_obj_add_event_cb(card, card_delete_event_cb, LV_EVENT_DELETE, NULL);

    // Initial transform
    update_card_transform(card, parent);

    return card;
}

lv_obj_t *lv_create_card_view(lv_obj_t *parent, CARDSTYLE style, lv_coord_t stack_location,
                              lv_coord_t card_height)
{
    // Create container
    lv_obj_t *card_view = lv_obj_create(parent);
    lv_obj_remove_style_all(card_view);
    lv_obj_set_pos(card_view, 0, 0);
    lv_obj_set_size(card_view, lv_display_get_horizontal_resolution(NULL),
                    lv_display_get_vertical_resolution(NULL));
    lv_obj_add_flag(card_view, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(card_view, LV_OBJ_FLAG_EVENT_BUBBLE);

    // Set user data
    CardViewData *view_data = lv_malloc(sizeof(CardViewData));
    view_data->style = style;
    view_data->total_cnt = 0;
    view_data->card_height = card_height;
    view_data->offset_y = 0;
    view_data->stack_location = stack_location;
    lv_obj_set_user_data(card_view, view_data);

    lv_obj_add_event_cb(card_view, touch_event_cb, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(card_view, cardview_delete_event_cb, LV_EVENT_DELETE, NULL);

    return card_view;
}

// Example function to create a card stack
lv_obj_t *example_card_stack(lv_obj_t *parent)
{
    lv_coord_t card_height = 200;
    lv_obj_t *card_view = lv_create_card_view(parent, REDUCTION, 300, card_height);
    // Add cards
    for (int8_t i = 5; i >= 0; i--)
    {
        lv_obj_t *card = lv_create_card(card_view, i, 300, card_height);
        lv_obj_t *label = lv_label_create(card);
        lv_label_set_text_fmt(label, "Card %d", i + 1);
        lv_obj_center(label);
    }
    return card_view;
}