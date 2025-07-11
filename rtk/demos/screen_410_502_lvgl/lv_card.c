/**
 * @file lv_card.c
 *
 */
/*********************
 *      INCLUDES
 *********************/
#include "lv_card.h"
#include "string.h"

/*********************
 *      MACROS
 *********************/
#define OUT_SCOPE 0 // Out scope of card_view.

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void update_card_transform(lv_obj_t *card, lv_obj_t *parent)
{
    CardData *card_data = lv_obj_get_user_data(card);
    CardViewData *view_data = lv_obj_get_user_data(parent);
    lv_coord_t stack_location = view_data->stack_location;

    lv_coord_t screen_h = lv_display_get_vertical_resolution(NULL);
    lv_coord_t location = card_data->start_y + view_data->offset;
    // LV_LOG("index = %d, location = %d\n", card_data->index, location);
    if (view_data->style == CARD_CLASSIC)
    {
        lv_obj_set_y(card, location);
    }
    else if (view_data->style == CARD_STACK)
    {
        float scale_0 = 1.0f;
        float scale_1 = 0.9f;
        lv_coord_t location_1 = screen_h - stack_location - view_data->card_height * scale_1;
        lv_coord_t location_0 = location_1 - view_data->card_height / 3;

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
    else if (view_data->style == CARD_CIRCLE)
    {
        int32_t r = lv_display_get_horizontal_resolution(NULL);
        int32_t diff = screen_h / 2 - location - view_data->card_height / 2;
        int32_t x = diff >= r ? r : r - (int)sqrt(r * r - diff * diff);

        lv_obj_set_pos(card, x, location);
    }
    else if (view_data->style == CARD_ZOOM)
    {
        float scale_range = 0.5f;
        int32_t scope = screen_h;
        int32_t diff = screen_h / 2 - location - view_data->card_height / 2;
        diff = abs(diff);
        if (diff > scope / 2) { diff = scope / 2;}
        float scale = 1.0f - scale_range * diff / (scope / 2.0f);
        lv_obj_set_style_transform_pivot_x(card, LV_PCT(50), 0);
        lv_obj_set_style_transform_pivot_y(card, LV_PCT(50), 0);
        lv_obj_set_y(card, location);
        lv_obj_set_style_transform_scale(card, (int)(scale * LV_SCALE_NONE), 0); // 1.0 (256)
    }
}

static void lv_card_auto_create(lv_obj_t *card_view)
{
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    int32_t child_count = lv_obj_get_child_count(card_view);
    if (child_count == 0)
    {
        lv_obj_t *card = lv_card_create(card_view,
                                        abs(view_data->offset) / (view_data->card_height + view_data->card_space));
        update_card_transform(card, card_view);
    }
    else
    {
        // delete cards that are out of scope
        int16_t range = lv_display_get_vertical_resolution(NULL);
        if (view_data->style == CARD_STACK)
        {
            range += (1.1 * view_data->card_height); // scale_1 = 0.9f;
        }
        for (int32_t i = child_count - 1; i >= 0; i--)
        {
            lv_obj_t *card = lv_obj_get_child(card_view, i);
            CardData *card_data = lv_obj_get_user_data(card);
            int16_t pos = view_data->offset + card_data->start_y;
            if (pos + view_data->card_height < 0)
            {
                // LV_LOG("free card %d\n", card_data->index);
                lv_obj_del(card);
            }
            else if (pos > range)
            {
                // LV_LOG("free card %d\n", card_data->index);
                lv_obj_del(card);
                view_data->created_card_index -= 1;
            }
            else
            {
                update_card_transform(card, card_view);
            }
        }
    }

    // create card from the last card
    {
        lv_obj_t *card = lv_obj_get_child(card_view, 0);
        CardData *card_data = lv_obj_get_user_data(card);
        int16_t index = card_data->index;
        view_data->created_card_index = index;
        int16_t pos = card_data->start_y + view_data->offset + view_data->card_height;
        int16_t range = lv_display_get_vertical_resolution(NULL);

        if (view_data->style == CARD_STACK)
        {
            range += (1.1 * view_data->card_height); // scale_1 = 0.9f;
        }
        while (pos < range - view_data->card_space)
        {
            if (++index >= view_data->total_num) {break;}
            lv_obj_t *card = lv_card_create(card_view, index);
            update_card_transform(card, card_view);
            pos += (view_data->card_height + view_data->card_space);
        }
    }
    // create card from the first card
    {
        lv_obj_t *card = lv_obj_get_child(card_view, -1);
        CardData *card_data = lv_obj_get_user_data(card);
        int16_t index = card_data->index;
        int16_t pos = card_data->start_y + view_data->offset;
        while (pos > view_data->card_space)
        {
            if (--index < 0) {break;}
            lv_obj_t *card = lv_card_create(card_view, index);
            update_card_transform(card, card_view);
            pos -= (view_data->card_height + view_data->card_space);
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
    static int16_t last_y = 0;
    if (code == LV_EVENT_PRESSING)
    {
        view_data->offset += (point.y - last_y);
        // LV_LOG("offset = %d\n", view_data->offset);
        // Boundary limit
        lv_coord_t screen_h = lv_display_get_vertical_resolution(NULL);
        lv_coord_t offset_min = screen_h - view_data->total_length - OUT_SCOPE;
        lv_coord_t offset_max = OUT_SCOPE;
        if (view_data->style == CARD_STACK)
        {
            offset_max = screen_h - view_data->card_height * 1.8f;
            offset_min -= screen_h / 3;
        }
        if (view_data->offset > offset_max) { view_data->offset = offset_max; }
        else if (view_data->offset < offset_min) { view_data->offset = offset_min; }
        lv_card_auto_create(card_view);
        last_y = point.y;

    }
    else if (code == LV_EVENT_PRESSED)
    {
        last_y = point.y;
    }
    else if (code == LV_EVENT_RELEASED)
    {
        last_y = 0;
    }

    if (code == LV_OBJ_FLAG_SCROLLABLE)
    {
        LV_LOG("!!!\n");
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

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
lv_obj_t *lv_card_view_create(lv_obj_t *parent,
                              CARDSTYLE style,
                              lv_coord_t card_height,
                              lv_coord_t card_space,
                              lv_coord_t stack_location,
                              int16_t total_num,
                              void (* card_design)(lv_obj_t *obj, void *param),
                              void *design_param)
{
    // Create container
    lv_obj_t *card_view = lv_obj_create(parent);
    lv_obj_remove_style_all(card_view);
    lv_obj_set_pos(card_view, 0, 0);
    lv_obj_set_size(card_view, lv_display_get_horizontal_resolution(NULL),
                    lv_display_get_vertical_resolution(NULL));
    lv_obj_add_flag(card_view, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(card_view, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(card_view, LV_OBJ_FLAG_SCROLLABLE);

    // Set user data
    CardViewData *view_data = lv_malloc(sizeof(CardViewData));
    memset(view_data, 0, sizeof(CardViewData));
    view_data->style = style;
    view_data->card_height = card_height;
    view_data->card_space = card_space;
    view_data->total_num = total_num;
    view_data->card_design = card_design;
    view_data->design_param = design_param;
    view_data->total_length = total_num * (card_height + card_space) - card_space;
    view_data->keep_card_num = lv_display_get_vertical_resolution(NULL) / card_height + 1;
    if (style == CARD_STACK)
    {
        view_data->stack_location = stack_location;
        view_data->keep_card_num++; // For CARD_STACK style, keep one more card for the stack location.
    }
    lv_obj_set_user_data(card_view, view_data);

    lv_obj_add_event_cb(card_view, touch_event_cb, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(card_view, cardview_delete_event_cb, LV_EVENT_DELETE, NULL);

    lv_card_auto_create(card_view);

    return card_view;
}

lv_obj_t *lv_card_create(lv_obj_t *parent, int16_t index)
{
    CardViewData *view_data = lv_obj_get_user_data(parent);
    LV_ASSERT(index < view_data->total_num);

    lv_obj_t *card = lv_obj_create(parent);
    lv_obj_set_size(card, lv_display_get_horizontal_resolution(NULL), view_data->card_height);
    lv_obj_set_pos(card, 0, 0);
    lv_obj_add_flag(card, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(card, LV_OBJ_FLAG_SCROLLABLE);

    CardData *card_data = lv_malloc(sizeof(CardData));
    card_data->index = index;
    card_data->start_y = (view_data->card_height + view_data->card_space) * card_data->index;
    lv_obj_set_user_data(card, card_data);

    lv_obj_add_event_cb(card, card_delete_event_cb, LV_EVENT_DELETE, NULL);

    view_data->card_design(card, view_data->design_param);

    if (view_data->created_card_index < index)
    {
        view_data->created_card_index = index;
        lv_obj_move_background(card);
    }
    // Initial transform
    // update_card_transform(card, parent);
    // LV_LOG("create card %d\n", index);
    return card;
}

void lv_card_view_set_offset(lv_obj_t *card_view, lv_coord_t offset)
{
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    lv_coord_t screen_h = lv_display_get_vertical_resolution(NULL);
    lv_coord_t offset_min = screen_h - view_data->total_length - OUT_SCOPE;
    lv_coord_t offset_max = OUT_SCOPE;
    if (view_data->style == CARD_STACK)
    {
        offset_max = screen_h - view_data->card_height * 1.8f;
        offset_min -= screen_h / 3;
    }
    if (offset > offset_max) { offset = offset_max; }
    else if (offset < offset_min) { offset = offset_min; }
    view_data->offset = offset;
    lv_card_auto_create(card_view);
}

void lv_card_view_set_number(lv_obj_t *card_view, int16_t total_num)
{
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    view_data->total_num = total_num;
    view_data->total_length = total_num * (view_data->card_height + view_data->card_space) -
                              view_data->card_space;
    view_data->created_card_index = 0;
    lv_card_auto_create(card_view);
}

// Example function to create a card stack

void example_card_design(lv_obj_t *card, void *param)
{
    CardData *card_data = lv_obj_get_user_data(card);
    lv_obj_set_style_bg_color(card, lv_color_make(100, 100, 100), 0);
    if (card_data)
    {
        lv_obj_t *label = lv_label_create(card);
        lv_label_set_text_fmt(label, "Card %d", card_data->index);
        lv_obj_center(label);
    }

}
lv_obj_t *example_card_stack(lv_obj_t *parent)
{
    lv_coord_t card_height = 100;
    lv_coord_t card_space = 0;
    lv_obj_t *card_view = lv_card_view_create(parent, CARD_ZOOM, card_height, card_space, 10, 20,
                                              example_card_design, NULL);
    // Add cards
    return card_view;
}