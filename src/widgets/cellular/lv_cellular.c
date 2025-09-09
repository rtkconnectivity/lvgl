/**
 * @file lv_cellular.c
 *
 */


/*********************
 *      INCLUDES
 *********************/
#include "lv_cellular.h"

#if defined(LV_USE_CELLULAR) && LV_USE_CELLULAR != 0  && LV_USE_FLOAT != 0

#include "math.h"
#include "../../core/lv_obj_class_private.h"

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS (&lv_cellular_class)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_cellular_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_cellular_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_cellular_event(const lv_obj_class_t * class_p, lv_event_t * e);

static void cellular_update_speed(int16_t *record, int16_t *speed, int16_t tp_delta);
static void update_icon_transform(lv_obj_t *cellular);
static void timer_cb(lv_timer_t *timer);
static void img_delete_event_cb(lv_event_t *e);


/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_cellular_class = {
    .constructor_cb = lv_cellular_constructor,
    .destructor_cb = lv_cellular_destructor,
    .event_cb = lv_cellular_event,
    .instance_size = sizeof(lv_cellular_t),
    .base_class = &lv_obj_class,
    .name = "cellular",
};

/**********************
 *      MACROS
 **********************/
#define SCREEN_W        lv_display_get_horizontal_resolution(NULL)
#define SCREEN_H        lv_display_get_vertical_resolution(NULL)
#define GUI_MAX_SPEED   50
#define GUI_MIN_SPEED   10

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_cellular_create(lv_obj_t * parent)
{

    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(MY_CLASS, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

lv_obj_t *lv_cellular_create_with_icon(lv_obj_t             *parent,
                                        int                   icon_size,
                                        lv_image_dsc_t const *icon_array[],
                                        int                   array_size,
                                        lv_event_cb_t         cb_array[])
{
    // Create container
    lv_obj_t *cellular = lv_cellular_create(parent);

    // Set user data
    lv_cellular_t *cl = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cl->data;

    int32_t with_gap = icon_size + icon_size / 20;
    int32_t height_gap = icon_size;
    int32_t init_offset_x = icon_size / 2;
    int32_t init_offset_y = 0;

    uint8_t index = 0;
    uint8_t index_offset = 0;
    for (size_t i = 0; i < array_size; i++)
    {
        if (index >= 6) {index_offset += 7;}
        index = i - index_offset;
        lv_obj_t *img = lv_image_create(cellular);
        ImgData *img_data = lv_malloc(sizeof(ImgData));
        lv_memset(img_data, 0, sizeof(ImgData));
        int16_t start_x = 0;
        int16_t start_y = 0;
        if (index < 3)
        {
            start_x = with_gap * index + init_offset_x * 1;
            start_y = init_offset_y + height_gap * (index_offset / 7 * 2);
        }
        else
        {
            start_x = with_gap * (index - 3) + init_offset_x * 0;
            start_y = init_offset_y + height_gap * (index_offset / 7 * 2 + 1);
        }
        lv_obj_set_pos(img, start_x, start_y);
        lv_image_set_src(img, icon_array[i]);
        lv_obj_set_size(img, icon_size, icon_size);
        lv_obj_set_style_transform_pivot_x(img, LV_PCT(50), 0);
        lv_obj_set_style_transform_pivot_y(img, LV_PCT(50), 0);
        lv_obj_remove_flag(img, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_add_flag(img, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_add_flag(img, LV_OBJ_FLAG_EVENT_BUBBLE);
        lv_obj_set_style_bg_opa(img, LV_OPA_TRANSP, 0);
        lv_obj_add_event_cb(img, cb_array[i], LV_EVENT_SHORT_CLICKED, NULL);
        lv_obj_add_event_cb(img, img_delete_event_cb, LV_EVENT_DELETE, NULL);

        cellular_data->ver_offset_min = -(start_y + height_gap - SCREEN_H);
        img_data->start_x = start_x;
        img_data->start_y = start_y;
        lv_obj_set_user_data(img, img_data);
    }
    cellular_data->icon_size = icon_size;

    update_icon_transform(cellular);
    return cellular;
}

void lv_cellular_set_offset(lv_obj_t *cellular, int32_t ver_offset)
{
    lv_cellular_t *cl = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cl->data;
    int32_t offset_min = cellular_data->ver_offset_min;
    int32_t offset_max = cellular_data->icon_size / 10;

    if (ver_offset > offset_max) { ver_offset = offset_max; }
    else if (ver_offset < offset_min) { ver_offset = offset_min; }
    cellular_data->ver_offset = ver_offset;
    update_icon_transform(cellular);
}
/*======================
 * Add/remove functions
 *=====================*/

/*
 * New object specific "add" or "remove" functions come here
 */

/*=====================
 * Setter functions
 *====================*/

/*
 * New object specific "set" functions come here
 */

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

static void lv_cellular_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_cellular_t * cellular = (lv_cellular_t *)obj;
    /*Initialize the widget's data*/
    lv_obj_remove_style_all(obj);
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, SCREEN_W, SCREEN_H);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_cellular_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    lv_cellular_t * cellular = (lv_cellular_t *)obj;
    /*Free the widget specific data*/
    CellularData *cellular_data = &cellular->data;
    if (cellular_data->timer)
    {
        lv_timer_delete(cellular_data->timer);
    }
}

static void lv_cellular_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(MY_CLASS, e);
    if(res != LV_RESULT_OK) return;

    /*Add the widget specific event handling here*/
    lv_obj_t *cellular = lv_event_get_current_target(e);
    lv_cellular_t *cl = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cl->data;
    lv_event_code_t code = lv_event_get_code(e);
    if (!lv_obj_has_flag(cellular, LV_OBJ_FLAG_CLICKABLE))
    {
        return;
    }
    lv_point_t point;
    lv_indev_t *indev = lv_indev_active();
    lv_indev_get_point(indev, &point);
    static int16_t last_x = 0;
    static int16_t last_y = 0;
    if (code == LV_EVENT_PRESSING)
    {
        cellular_data->hor_offset += (point.x - last_x);
        cellular_data->ver_offset += (point.y - last_y);
        last_x = point.x;
        last_y = point.y;
        // LV_LOG("ver_offset = %d\n", cellular_data->ver_offset);
        cellular_update_speed(cellular_data->ver_record, &cellular_data->ver_speed, point.y);
        update_icon_transform(cellular);
    }
    else if (code == LV_EVENT_PRESSED)
    {
        if (cellular_data->timer)
        {
            lv_timer_delete(cellular_data->timer);
            cellular_data->timer = NULL;
        }
        last_x = point.x;
        last_y = point.y;
    }
    else if (code == LV_EVENT_RELEASED)
    {
        lv_memset(cellular_data->ver_record, 0, sizeof(cellular_data->ver_record));
        last_x = 0;
        last_y = 0;
        cellular_data->timer = lv_timer_create(timer_cb, 10, cellular);
    }
}

static void cellular_update_speed(int16_t *record, int16_t *speed, int16_t tp_delta)
{
    int record_num = 4;

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

static void update_icon_transform(lv_obj_t *cellular)
{
    lv_cellular_t *cl = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cl->data;
    int16_t icon_size = cellular_data->icon_size;

    cellular_data->hor_offset = cellular_data->hor_offset > icon_size / 2 ?
                                icon_size / 2 : cellular_data->hor_offset;
    cellular_data->ver_offset = cellular_data->ver_offset > icon_size / 10 ?
                                icon_size / 10 :
                                cellular_data->ver_offset;
    cellular_data->hor_offset = cellular_data->hor_offset < -icon_size / 2 ?
                                -icon_size / 2 :
                                cellular_data->hor_offset;
    cellular_data->ver_offset = cellular_data->ver_offset < cellular_data->ver_offset_min ?
                                cellular_data->ver_offset_min :
                                cellular_data->ver_offset;
    // LV_LOG("cellular_data->hor_offset: %d\n", cellular_data->hor_offset);
    float dis_max = (sqrtf(SCREEN_W * SCREEN_W + SCREEN_H * SCREEN_H) / 2.0f);
    uint32_t child_cnt = lv_obj_get_child_count(cellular);
    for (uint32_t i = 0; i < child_cnt; i++)
    {
        lv_obj_t *img = lv_obj_get_child(cellular, i);
        ImgData *img_data = lv_obj_get_user_data(img);
        float offset_X = (float)(img_data->start_x + cellular_data->hor_offset + icon_size /
                                 2) - SCREEN_W / 2.0f;
        float offset_Y = (float)(img_data->start_y + cellular_data->ver_offset + icon_size /
                                 2) - SCREEN_H / 2.0f;
        float dis = sqrtf(offset_X * offset_X + offset_Y * offset_Y);
        float ratio = dis / dis_max;
        float scale = 0;
        float scale_min = 0.01f; // (1 / icon_size) precisely;
        float radius = (SCREEN_H + SCREEN_W) / 4.0f;

        lv_obj_remove_flag(img, LV_OBJ_FLAG_HIDDEN);
        if (dis >= dis_max)
        {
            lv_obj_add_flag(img, LV_OBJ_FLAG_HIDDEN);
            continue;
        }
        else if (dis > radius)
        {
            // concave  function, f'(x) increase
            scale = 0.7 * pow((1.0f - ratio) / (1.0f - (radius / dis_max)), 0.7f);
        }
        else
        {
            // convex function, f'(x) decrease
            float a = (float)log(0.7) / (radius / dis_max);
            scale = exp(a * ratio);
        }

        if ((SCREEN_W / 2.0f) - fabsf(offset_X) < 20.0f)
        {
            scale /= 1.5f;
        }

        if (scale < scale_min)
        {
            scale = scale_min;
        }
        lv_obj_set_style_transform_scale(img, LV_SCALE_NONE * scale, 0);
        float t_x = (float)cellular_data->hor_offset - (1 - scale) * (offset_X / (SCREEN_W / 2.0f)) *
                    (icon_size / (1.5f * SCREEN_H / SCREEN_W));
        float t_y = (float)cellular_data->ver_offset - (1 - scale) * (offset_Y / (SCREEN_H / 2.0f)) *
                    (icon_size / 1.5f);
        lv_obj_set_pos(img, img_data->start_x + (int16_t)(t_x), img_data->start_y + (int16_t)(t_y));
        // lv_obj_update_layout(img);
    }
}

// Inertial motion
static void timer_cb(lv_timer_t *timer)
{
    lv_obj_t *cellular = lv_timer_get_user_data(timer);
    lv_cellular_t *cl = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cl->data;
    if (cellular_data->ver_speed != 0 || cellular_data->hor_offset != 0)
    {
        cellular_data->ver_offset += cellular_data->ver_speed;
        cellular_data->ver_speed = (int16_t)((1 - 0.05) * cellular_data->ver_speed);

        float factor = 0.4f;
        int16_t distance = - cellular_data->hor_offset;
        int delta = (int16_t)(distance * factor); //exponential decay
        cellular_data->hor_offset += delta;
        update_icon_transform(cellular);
    }
    else
    {
        lv_timer_delete(timer);
        cellular_data->timer = NULL;
    }
}

static void img_delete_event_cb(lv_event_t *e)
{
    lv_obj_t *img = lv_event_get_target(e);
    ImgData *img_data = lv_obj_get_user_data(img);
    if (img_data)
    {
        lv_free(img_data);
        lv_obj_set_user_data(img, NULL);
    }
}
#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
