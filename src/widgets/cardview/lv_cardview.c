/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: MIT
 */

/**
 * @file lv_cardview.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_cardview.h"
#include "../../core/lv_obj_class_private.h"

#if defined(LV_USE_CARDVIEW) && LV_USE_CARDVIEW != 0

/*********************
 *      DEFINES
 *********************/


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_cardview_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_cardview_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_cardview_event(const lv_obj_class_t * class_p, lv_event_t * e);

static void lv_card_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_card_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_card_event(const lv_obj_class_t * class_p, lv_event_t * e);

static void card_view_update_speed(int16_t *record, int16_t *speed, int16_t tp_delta);
static void update_card_transform(lv_obj_t *card, lv_obj_t *parent);
static void lv_card_auto_create(lv_obj_t *cardview);
static void timer_cb(lv_timer_t *timer);

/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_cardview_class = {
    .constructor_cb = lv_cardview_constructor,
    .destructor_cb = lv_cardview_destructor,
    .event_cb = lv_cardview_event,
    .instance_size = sizeof(lv_cardview_t),
    .base_class = &lv_obj_class,
    .name = "cardview",
};

const lv_obj_class_t lv_card_class = {
    .constructor_cb = lv_card_constructor,
    .destructor_cb = lv_card_destructor,
    .event_cb = lv_card_event,
    .instance_size = sizeof(lv_card_t),
    .base_class = &lv_obj_class,
    .name = "card",
};

/**********************
 *      MACROS
 **********************/
#define OUT_SCOPE 0     // Out scope of cardview.
#define SCREEN_W        lv_display_get_horizontal_resolution(NULL)
#define SCREEN_H        lv_display_get_vertical_resolution(NULL)
#define GUI_MAX_SPEED   50
#define GUI_MIN_SPEED   10

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_cardview_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&lv_cardview_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

lv_obj_t * lv_card_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&lv_card_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

lv_obj_t *lv_card_view_create(lv_obj_t *parent,
                              CARDSTYLE style,
                              int16_t card_height,
                              int16_t card_space,
                              int16_t stack_location,
                              int16_t total_num,
                              void (* card_design)(lv_obj_t *obj, void *param),
                              void *design_param)
{
    // Create container
    lv_obj_t *cardview = lv_cardview_create(parent);

    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    view_data->style = style;
    view_data->card_height = card_height;
    view_data->card_space = card_space;
    view_data->total_num = total_num;
    view_data->card_design = card_design;
    view_data->design_param = design_param;
    view_data->total_length = total_num * (card_height + card_space) - card_space;
    view_data->keep_card_num = SCREEN_H / card_height + 1;
    if (style == CARD_STACK)
    {
        view_data->stack_location = stack_location;
        view_data->keep_card_num++; // For CARD_STACK style, keep one more card for the stack location.
    }

    lv_card_auto_create(cardview);

    return cardview;
}

/*======================
 * Add/remove functions
 *=====================*/

lv_obj_t *lv_card_create_with_index(lv_obj_t *parent, int16_t index)
{
    lv_cardview_t *cardview = (lv_cardview_t *)parent;
    CardViewData *view_data = &cardview->data;
    LV_ASSERT(index < view_data->total_num);

    lv_obj_t *card = lv_card_create(parent);
    lv_obj_set_size(card, SCREEN_W, view_data->card_height);

    lv_card_t *cd = (lv_card_t *)card;
    CardData *card_data = &cd->data;
    card_data->index = index;
    card_data->start_y = (view_data->card_height + view_data->card_space) * card_data->index;

    view_data->card_design(card, view_data->design_param);

    if (view_data->created_card_index < index)
    {
        view_data->created_card_index = index;
        lv_obj_move_to_index(card, 0);
    }
    // Initial transform
    // update_card_transform(card, parent);
    // LV_LOG("create card %d\n", index);
    return card;
}

/*=====================
 * Setter functions
 *====================*/

void lv_card_view_set_offset(lv_obj_t *cardview, int16_t offset)
{
    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    int16_t screen_h = SCREEN_H;
    int16_t offset_min = screen_h - view_data->total_length - OUT_SCOPE;
    int16_t offset_max = OUT_SCOPE;
    if (view_data->style == CARD_STACK)
    {
        offset_max = screen_h - view_data->card_height * 1.8f;
        offset_min -= screen_h / 3;
    }
    if (offset > offset_max) { offset = offset_max; }
    else if (offset < offset_min) { offset = offset_min; }
    view_data->offset = offset;
    lv_card_auto_create(cardview);
}

void lv_card_view_set_number(lv_obj_t *cardview, int16_t total_num)
{
    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    view_data->total_num = total_num;
    view_data->total_length = total_num * (view_data->card_height + view_data->card_space) -
                              view_data->card_space;
    view_data->created_card_index = 0;
    lv_card_auto_create(cardview);
}

/*=====================
 * Getter functions
 *====================*/

/*
 * New object specific "get" functions come here
 */

/*=====================
 * Other functions
 *====================*/

/*
 * New object specific "other" functions come here
 */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void lv_cardview_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_cardview_t * cardview = (lv_cardview_t *)obj;
    /*Initialize the widget's data*/
    lv_obj_remove_style_all(obj);
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, SCREEN_W, SCREEN_H);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_cardview_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    lv_cardview_t * cardview = (lv_cardview_t *)obj;
    if (cardview->data.timer)
    {
        lv_timer_delete(cardview->data.timer);
    }
}

static void lv_cardview_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    lv_event_code_t code = lv_event_get_code(e);

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(&lv_cardview_class, e);
    if(res != LV_RESULT_OK) return;

    /*Add the widget specific event handling here*/
    lv_obj_t *cardview = lv_event_get_current_target(e);
    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    if (!lv_obj_has_flag(cardview, LV_OBJ_FLAG_CLICKABLE))
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
        lv_card_auto_create(cardview);
        last_y = point.y;
        card_view_update_speed(view_data->record, &view_data->speed, point.y);
    }
    else if (code == LV_EVENT_PRESSED)
    {
        if (view_data->timer)
        {
            lv_timer_delete(view_data->timer);
            view_data->timer = NULL;
        }
        last_y = point.y;
        for (int32_t i = 0; i < RECORD_NUM - 1; i++)
        {
            view_data->record[i] = last_y;
        }
    }
    else if (code == LV_EVENT_RELEASED)
    {
        lv_memset(view_data->record, 0, sizeof(view_data->record));
        last_y = 0;
        view_data->timer = lv_timer_create(timer_cb, 10, cardview);
    }
}

static void lv_card_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_card_t * card = (lv_card_t *)obj;
    /*Initialize the widget's data*/
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_card_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    lv_card_t * card = (lv_card_t *)obj;
    /*Free the widget specific data*/
}

static void lv_card_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    lv_event_code_t code = lv_event_get_code(e);

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(&lv_card_class, e);
    if(res != LV_RESULT_OK) return;

    /*Add the widget specific event handling here*/
}

static void card_view_update_speed(int16_t *record, int16_t *speed, int16_t tp_delta)
{
    int record_num = RECORD_NUM - 1;
    for (size_t i = 0; i < record_num; i++)
    {
        record[i] = record[i + 1];
    }

    record[record_num] = tp_delta;
    *speed = record[record_num] - record[0];
    int max_speed = GUI_MAX_SPEED;
    int min_speed = GUI_MIN_SPEED;

    if (*speed > max_speed)
    {
        *speed = max_speed;
    }
    else if (*speed < -max_speed)
    {
        *speed = -max_speed;
    }

    if ((*speed > 0) && (*speed < min_speed))
    {
        *speed = min_speed;
    }
    else if ((*speed < 0) && (*speed > -min_speed))
    {
        *speed = -min_speed;
    }
}

static void update_card_transform(lv_obj_t *card, lv_obj_t *parent)
{
    CardData *card_data = &(((lv_card_t *)card)->data);
    lv_cardview_t *cardview = (lv_cardview_t *)parent;
    CardViewData *view_data = &cardview->data;
    int16_t stack_location = view_data->stack_location;

    int16_t screen_h = SCREEN_H;
    int16_t location = card_data->start_y + view_data->offset;
    // LV_LOG("index = %d, location = %d\n", card_data->index, location);
    if (view_data->style == CARD_CLASSIC)
    {
        lv_obj_set_y(card, location);
    }
    else if (view_data->style == CARD_STACK)
    {
        float scale_0 = 1.0f;
        float scale_1 = 0.9f;
        int16_t location_1 = screen_h - stack_location - view_data->card_height * scale_1;
        int16_t location_0 = location_1 - view_data->card_height / 3;

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
        int32_t r = SCREEN_W;
        int32_t diff = screen_h / 2 - location - view_data->card_height / 2;
        int32_t x = diff >= r ? r : r - (int)lv_sqrt32(r * r - diff * diff);

        lv_obj_set_pos(card, x, location);
    }
    else if (view_data->style == CARD_ZOOM)
    {
        float scale_range = 0.5f;
        int32_t scope = screen_h;
        int32_t diff = screen_h / 2 - location - view_data->card_height / 2;
        diff = LV_ABS(diff);
        if (diff > scope / 2) { diff = scope / 2;}
        float scale = 1.0f - scale_range * diff / (scope / 2.0f);
        lv_obj_set_style_transform_pivot_x(card, LV_PCT(50), 0);
        lv_obj_set_style_transform_pivot_y(card, LV_PCT(50), 0);
        lv_obj_set_y(card, location);
        lv_obj_set_style_transform_scale(card, (int)(scale * LV_SCALE_NONE), 0); // 1.0 (256)
    }
}

static void lv_card_auto_create(lv_obj_t *cardview)
{
    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    int16_t screen_h = SCREEN_H;
    int16_t offset_min = screen_h - view_data->total_length - OUT_SCOPE;
    int16_t offset_max = OUT_SCOPE;
    if (view_data->style == CARD_STACK)
    {
        offset_max = screen_h - view_data->card_height * 1.8f;
        offset_min -= screen_h / 3;
    }
    if (view_data->offset > offset_max) { view_data->offset = offset_max; }
    else if (view_data->offset < offset_min) { view_data->offset = offset_min; }

    int32_t child_count = lv_obj_get_child_count(cardview);
    if (child_count != 0)
    {
        // delete cards that are out of scope
        int16_t range = SCREEN_H;
        if (view_data->style == CARD_STACK)
        {
            range += (1.1 * view_data->card_height); // scale_1 = 0.9f;
        }
        for (int32_t i = child_count - 1; i >= 0; i--)
        {
            lv_obj_t *card = lv_obj_get_child(cardview, i);
            CardData *card_data = &(((lv_card_t *)card)->data);
            int16_t pos = view_data->offset + card_data->start_y;
            if (pos + view_data->card_height < 0)
            {
                // LV_LOG("free card %d\n", card_data->index);
                lv_obj_delete(card);
            }
            else if (pos > range)
            {
                // LV_LOG("free card %d\n", card_data->index);
                lv_obj_delete(card);
                view_data->created_card_index -= 1;
            }
            else
            {
                update_card_transform(card, cardview);
            }
        }
    }

    child_count = lv_obj_get_child_count(cardview);
    if (child_count == 0)
    {
        lv_obj_t *card = lv_card_create_with_index(cardview,
                                        LV_ABS(view_data->offset) / (view_data->card_height + view_data->card_space));
        update_card_transform(card, cardview);
    }

    // create card from the last card
    {
        lv_obj_t *card = lv_obj_get_child(cardview, 0);
        CardData *card_data = &(((lv_card_t *)card)->data);
        int16_t index = card_data->index;
        view_data->created_card_index = index;
        int16_t pos = card_data->start_y + view_data->offset + view_data->card_height;
        int16_t range = SCREEN_H;

        if (view_data->style == CARD_STACK)
        {
            range += (1.1 * view_data->card_height); // scale_1 = 0.9f;
        }
        while (pos < range - view_data->card_space)
        {
            if (++index >= view_data->total_num) {break;}
            lv_obj_t *card = lv_card_create_with_index(cardview, index);
            update_card_transform(card, cardview);
            pos += (view_data->card_height + view_data->card_space);
        }
    }
    // create card from the first card
    {
        lv_obj_t *card = lv_obj_get_child(cardview, -1);
        CardData *card_data = &(((lv_card_t *)card)->data);
        int16_t index = card_data->index;
        int16_t pos = card_data->start_y + view_data->offset;
        while (pos > view_data->card_space)
        {
            if (--index < 0) {break;}
            lv_obj_t *card = lv_card_create_with_index(cardview, index);
            update_card_transform(card, cardview);
            pos -= (view_data->card_height + view_data->card_space);
        }
    }
}

// Inertial motion
static void timer_cb(lv_timer_t *timer)
{
    lv_obj_t *cardview = lv_timer_get_user_data(timer);
    lv_cardview_t *cv = (lv_cardview_t *)cardview;
    CardViewData *view_data = &cv->data;
    if (view_data->speed != 0)
    {
        view_data->offset += view_data->speed;
        view_data->speed = (int16_t)((1 - 0.05) * view_data->speed);
        lv_card_auto_create(cardview);
    }
    else
    {
        lv_timer_delete(timer);
        view_data->timer = NULL;
    }
}

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
