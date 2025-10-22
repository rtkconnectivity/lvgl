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
#include "../../src/draw/lv_draw_buf_private.h"
#include "../../src/misc/lv_async.h"

#if LV_USE_RTK_JPU
#include "rtl_hal_jpu.h"
#endif
/*********************
 *      DEFINES
 *********************/
#define MY_CLASS (&lv_snapshot_widgets_class)

#define JPEG_QUALITY 80
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_snapshot_widgets_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_snapshot_widgets_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_snapshot_widgets_event(const lv_obj_class_t * class_p, lv_event_t * e);

static void snapshot_widgets_update(void *obj);

static void delete_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);
static void delete_snapshot_cb(lv_event_t *e);

static void update_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);

static void bubble_up_redraw_cb(lv_event_t *e);

static void hidden_children(lv_obj_t *obj, bool hidden);

#if LV_USE_RTK_JPU
static void jpeg_encode_snapshot(lv_draw_buf_t *draw_buf, uint8_t *img_data, lv_color_format_t cf);
#endif
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

    snapshot_widgets->need_redraw = true;
    if(!snapshot_widgets->update_running)
    {
        lv_obj_send_event(obj, LV_EVENT_REFRESH, NULL);
    }
    else
    {
        snapshot_widgets->reschedule = true;
    }
}

void lv_snapshot_widgets_need_update(lv_obj_t *obj)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;

    if(!snapshot_widgets->need_redraw)
    {
        snapshot_widgets->need_redraw = true;
        if(!snapshot_widgets->update_running)
        {
            lv_async_call(snapshot_widgets_update, obj);
        }
        else
        {
            snapshot_widgets->reschedule = true;
        }
        return;
    }
    if(snapshot_widgets->update_running)
    {
        snapshot_widgets->reschedule = true;
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
        lv_snapshot_widgets_need_update(obj);
    }
}

void lv_snapshot_widgets_use_jpeg(lv_obj_t *obj, bool use_jpeg)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if (snapshot_widgets->use_jpeg != use_jpeg)
    {
        snapshot_widgets->use_jpeg = use_jpeg;
        lv_snapshot_widgets_need_update(obj);
    }
}

void lv_snapshot_widgets_set_bg_color(lv_obj_t *obj, lv_color_t bg_color)
{
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if (!lv_color_eq(snapshot_widgets->bg_color, bg_color))
    {
        snapshot_widgets->bg_color = bg_color;
        lv_snapshot_widgets_need_update(obj);
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
    lv_obj_align(snapshot, LV_ALIGN_TOP_LEFT, 0, 0);
    snapshot_widgets->snapshot = snapshot;
    lv_obj_add_event_cb(snapshot, delete_snapshot_cb, LV_EVENT_DELETE, obj);

    snapshot_widgets->bg_color = lv_color_black();
    snapshot_widgets->snapshot_format = LV_COLOR_FORMAT_UNKNOWN;
    snapshot_widgets->need_redraw = false;
    snapshot_widgets->update_running = false;
    snapshot_widgets->reschedule = false;

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

    if(code == LV_EVENT_REFRESH)
    {
        LV_LOG_INFO("update snapshot widget");
        snapshot_widgets_update(obj);
    }
    else if(code == LV_EVENT_CHILD_CREATED)
    {
        lv_obj_t *child = lv_event_get_param(e);
        if (child)
        {
            lv_obj_add_event_cb(child, bubble_up_redraw_cb, LV_EVENT_VALUE_CHANGED, obj);
        }
    }
}

static void bubble_up_redraw_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *snapshot = lv_event_get_user_data(e);
    lv_snapshot_widgets_need_update(snapshot);
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
    lv_color_format_t snapshot_cf = lv_snapshot_widgets_get_snapshot_format(widget);
    snapshot = lv_snapshot_take(widget, snapshot_cf);
#if LV_USE_RTK_JPU
    lv_snapshot_widgets_t * snapshot_widgets = (lv_snapshot_widgets_t *)widget;
    if (snapshot_widgets->use_jpeg &&
        (snapshot_cf == LV_COLOR_FORMAT_RGB565 || snapshot_cf == LV_COLOR_FORMAT_RGB888))
    {
        jpeg_encode_snapshot(snapshot, snapshot->data, snapshot_cf);
    }
#endif
    lv_image_set_src(img_snapshot, snapshot);
}

static void snapshot_widgets_update(void *obj)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);

    lv_snapshot_widgets_t *snapshot_widgets = (lv_snapshot_widgets_t *)obj;
    if(snapshot_widgets->update_running) return;

    snapshot_widgets->update_running = true;

    if(!snapshot_widgets->need_redraw || snapshot_widgets->snapshot == NULL)
    {
        snapshot_widgets->update_running = false;
        return;
    }

    hidden_children(obj, false);
    lv_obj_add_flag(snapshot_widgets->snapshot, LV_OBJ_FLAG_HIDDEN);
    if (!lv_color_eq(snapshot_widgets->bg_color, lv_color_black()))
    {
        lv_obj_set_style_bg_color(obj, snapshot_widgets->bg_color, 0);
        lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    }
    update_snapshot(obj, snapshot_widgets->snapshot);
    lv_obj_set_style_bg_opa(obj, LV_OPA_TRANSP, 0);
    hidden_children(obj, true);
    lv_obj_remove_flag(snapshot_widgets->snapshot, LV_OBJ_FLAG_HIDDEN);

    snapshot_widgets->need_redraw = false;
    snapshot_widgets->update_running = false;
    if(snapshot_widgets->reschedule)
    {
        snapshot_widgets->reschedule = false;
        snapshot_widgets->need_redraw = true;
        lv_async_call(snapshot_widgets_update, obj);
    }
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
        for (int i = 1; i < lv_obj_get_child_count(obj); i++)
        {
            lv_obj_t *child = lv_obj_get_child(obj, i);
            lv_obj_add_flag(child, LV_OBJ_FLAG_HIDDEN);
        }
    }
    else
    {
        for (int i = 1; i < lv_obj_get_child_count(obj); i++)
        {
            lv_obj_t *child = lv_obj_get_child(obj, i);
            lv_obj_remove_flag(child, LV_OBJ_FLAG_HIDDEN);
        }
    }
}

#if LV_USE_RTK_JPU
static void jpeg_encode_snapshot(lv_draw_buf_t *draw_buf, uint8_t *img_data, lv_color_format_t cf)
{
    JPU_ENC_PARAM enc_param;
    uint8_t *jpg_data = NULL;
    uint32_t jpg_size = 0;
    uint32_t w = 0;
    uint32_t h = 0;
    JPU_ERROR err;

    lv_memset((void *)&enc_param, 0, sizeof(JPU_ENC_PARAM));

    enc_param.data = (uint8_t *)img_data;
    enc_param.size = draw_buf->data_size;
    enc_param.picWidth = draw_buf->header.w;
    enc_param.picHeight = draw_buf->header.h;
    enc_param.jpgFormat = JPU_FORMAT_422;
    enc_param.frameFormat = PACKED_FORMAT_422_YUYV;
    enc_param.quality = JPEG_QUALITY;
    enc_param.useWrapper = 1;
    if (cf == LV_COLOR_FORMAT_RGB565)
    {
        enc_param.rgbType = JPU_RGB565;
    }
    else if (cf == LV_COLOR_FORMAT_RGB888)
    {
        enc_param.rgbType = JPU_RGB888;
    }
    /*JPEG buffer size is 1/4 of the original image size*/
    size_t jpg_buff_sz = draw_buf->data_size / 4;
    enc_param.jpg_buff_sz = jpg_buff_sz;

    err = hal_jpu_encode(&enc_param, &jpg_data, &jpg_size, &w, &h);

    if (err != JPU_SUCCESS)
    {
        LV_LOG_ERROR("enc jpeg file failed, err: %d", err);
    }

    /*WT: Write Through Cache*/
    SCB_InvalidateDCache_by_Addr(jpg_data, jpg_size);
    /*WB: Write Back Cache*/
    // SCB_CleanInvalidateDCache_by_Addr(jpg_data, jpg_size);

    draw_buf->handlers->buf_free_cb(draw_buf->unaligned_data);
    draw_buf->data = jpg_data;
    draw_buf->unaligned_data = hal_jpu_get_raw_buffer(jpg_data);
    draw_buf->data_size = jpg_size;
    draw_buf->header.stride = w * lv_color_format_get_bpp(draw_buf->header.cf) / 8;
    draw_buf->header.cf = LV_COLOR_FORMAT_RAW;

    LV_LOG_INFO("JPG size %d",jpg_size);
    hal_jpu_clean_buffer(jpg_data);
}
#endif

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
#endif
