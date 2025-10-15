/**
 * @file lv_snapshot_widgets.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_snapshot_widgets.h"
#include "../../core/lv_obj_class_private.h"

#if LV_USE_SNAPSHOT
#if defined(LV_USE_SNAPSHOT_WIDGETS) && LV_USE_SNAPSHOT_WIDGETS != 0

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS (&lv_snapshot_widgets_class)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_snapshot_widgets_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_snapshot_widgets_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_snapshot_widgets_event(const lv_obj_class_t * class_p, lv_event_t * e);

static void delete_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);
static void delete_snapshot_cb(lv_event_t *e);

static void update_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);
static void update_snapshot_cb(lv_event_t *e);

static void bubble_up_redraw_cb(lv_event_t *e);

static void create_snapshot_normal(lv_obj_t *widget, lv_obj_t *img_snapshot);

static void hidden_children(lv_obj_t *obj, bool hidden);


/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_snapshot_widgets_class = {
    .constructor_cb = lv_snapshot_widgets_constructor,
    .destructor_cb = lv_snapshot_widgets_destructor,
    .event_cb = lv_snapshot_widgets_event,
    .width_def = LV_DPI_DEF,
    .height_def = LV_DPI_DEF,
    .instance_size = sizeof(lv_snapshot_widgets_t),
    .group_def = LV_OBJ_CLASS_GROUP_DEF_INHERIT,
    .editable = LV_OBJ_CLASS_EDITABLE_INHERIT,
    .base_class = &lv_obj_class,
    .name = "snapshot_widgets",
};

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_snapshot_widgets_create(lv_obj_t * parent)
{

    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(MY_CLASS, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

void lv_snapshot_widgets_update(lv_obj_t *obj)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if(snapshot_widgets->need_redraw == false || snapshot_widgets->snapshot == NULL)
    {
        return;
    }

    hidden_children(obj, false);
    lv_obj_add_flag(snapshot_widgets->snapshot, LV_OBJ_FLAG_HIDDEN);
    update_snapshot(obj, snapshot_widgets->snapshot);
    hidden_children(obj, true);
    lv_obj_remove_flag(snapshot_widgets->snapshot, LV_OBJ_FLAG_HIDDEN);
    snapshot_widgets->need_redraw = false;
}

void lv_snapshot_widgets_need_redraw(lv_obj_t *obj)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if (snapshot_widgets->need_redraw == false)
    {
        snapshot_widgets->need_redraw = true;
        lv_obj_send_event(obj, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

/*======================
 * Add/remove functions
 *=====================*/


/*=====================
 * Setter functions
 *====================*/

void lv_snapshot_widgets_set_snapshot_format(lv_obj_t *obj, lv_color_format_t cf)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if (snapshot_widgets->snapshot_format != cf)
    {
        snapshot_widgets->snapshot_format = cf;
        lv_snapshot_widgets_need_redraw(obj);
    }
}

/*=====================
 * Getter functions
 *====================*/

lv_color_format_t lv_snapshot_widgets_get_snapshot_format(lv_obj_t *obj)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    lv_color_format_t snapshot_cf = snapshot_widgets->snapshot_format;
    if (snapshot_cf != LV_COLOR_FORMAT_UNKNOWN)
    {
        return snapshot_cf;
    }
    snapshot_cf = LV_COLOR_FORMAT_ARGB8888;
    return snapshot_cf;
}


/*=====================
 * Other functions
 *====================*/

/*
 * New object specific "other" functions come here
 */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void lv_snapshot_widgets_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    /*Initialize the widget's data*/
    lv_obj_t *snapshot = lv_image_create(obj);
    lv_obj_align(snapshot, LV_ALIGN_CENTER, 0, 0);
    snapshot_widgets->snapshot = snapshot;
    lv_obj_add_event_cb(snapshot, delete_snapshot_cb, LV_EVENT_DELETE, obj);

    snapshot_widgets->bg_color = lv_color32_make(0, 0, 0, 255);
    snapshot_widgets->snapshot_format = LV_COLOR_FORMAT_UNKNOWN;
    snapshot_widgets->need_redraw = false;

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_snapshot_widgets_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    /*Free the widget specific data*/
}

static void lv_snapshot_widgets_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(MY_CLASS, e);
    if(res != LV_RESULT_OK) return;

    /*Add the widget specific event handling here*/
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_current_target(e);
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;

    if(code == LV_EVENT_VALUE_CHANGED)
    {
        lv_snapshot_widgets_update(obj);
    }
    else if(code == LV_EVENT_CHILD_CREATED)
    {
        lv_obj_t *child = lv_event_get_param(e);
        lv_obj_add_event_cb(child, bubble_up_redraw_cb, LV_EVENT_VALUE_CHANGED, obj);
    }
}

static void bubble_up_redraw_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *snapshot = lv_event_get_user_data(e);
    lv_snapshot_widgets_need_redraw(snapshot);
}
static void delete_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
        lv_image_set_src(img_snapshot, NULL);
    }
}

static void update_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
    }
    snapshot = lv_snapshot_take(widget, lv_snapshot_widgets_get_snapshot_format(widget));
    lv_image_set_src(img_snapshot, snapshot);
}

static void update_snapshot_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *snapshot = lv_event_get_current_target(e);
    lv_obj_t *target = lv_event_get_user_data(e);
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)target;

    lv_snapshot_widgets_update(target);
}

static void delete_snapshot_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *snapshot = lv_event_get_current_target(e);
    lv_obj_t *target = lv_event_get_user_data(e);
    delete_snapshot(target, snapshot);
}

static void hidden_children(lv_obj_t *obj, bool hidden)
{
    if (hidden)
    {
        for (int i = 0; i < lv_obj_get_child_count(obj); i++)
        {
            lv_obj_t *child = lv_obj_get_child(obj, i);
            lv_obj_add_flag(child, LV_OBJ_FLAG_HIDDEN);
        }
    }
    else
    {
        for (int i = 0; i < lv_obj_get_child_count(obj); i++)
        {
            lv_obj_t *child = lv_obj_get_child(obj, i);
            lv_obj_remove_flag(child, LV_OBJ_FLAG_HIDDEN);
        }
    }
}

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
#endif
