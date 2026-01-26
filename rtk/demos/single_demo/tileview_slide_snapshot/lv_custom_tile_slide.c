/**
 * @file lv_custom_tile_slide.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_custom_tile_slide.h"

#if LV_BUILD_DEMOS

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static bool lv_tile_is_scrolling(lv_obj_t *tile);
static void apply_slide_effect(lv_obj_t *obj, SLIDE_EFFECT effect);
static void reset_slide_effect(lv_obj_t *obj, SLIDE_EFFECT effect);

static void apply_fade_effect(lv_obj_t *obj);
static void reset_fade_effect(lv_obj_t *obj);
static void apply_scale_effect(lv_obj_t *obj);
static void reset_scale_effect(lv_obj_t *obj);
static void apply_scale_fade_effect(lv_obj_t *obj);
static void reset_scale_fade_effect(lv_obj_t *obj);

#if LV_DRAW_TRANSFORM_USE_MATRIX
static void apply_cube_effect(lv_obj_t *obj);
static void reset_cube_effect(lv_obj_t *obj);
static void apply_box_effect(lv_obj_t *obj);
static void reset_box_effect(lv_obj_t *obj);
static void apply_spiral_notebook_effect(lv_obj_t *obj);
static void reset_spiral_notebook_effect(lv_obj_t *obj);
static void apply_rotate_effect(lv_obj_t *obj);
static void reset_rotate_effect(lv_obj_t *obj);
#endif
/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void tileview_custom_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_current_target(e);

    lv_tileview_t *tv = (lv_tileview_t *) obj;

    if (code == LV_EVENT_SCROLL_BEGIN)
    {
        tileview_slide_t *slide_info = lv_event_get_user_data(e);
        if (!slide_info->scrolling)
        {
            slide_info->scrolling = true;
            if (slide_info->snapshot)
            {
                for (int i = 0; i < lv_obj_get_child_count(obj); i++)
                {
                    lv_obj_t *tile_obj = lv_obj_get_child(obj, i);
                    SLIDE_EFFECT *effect = (SLIDE_EFFECT *)lv_obj_get_user_data(tile_obj);
                    if (lv_tile_is_scrolling(tile_obj))
                    {
                        lv_obj_send_event(lv_obj_get_child(tile_obj, 1), slide_info->create_snapshot, effect);
                        lv_obj_add_flag(lv_obj_get_child(tile_obj, 0), LV_OBJ_FLAG_HIDDEN);
                        lv_obj_remove_flag(lv_obj_get_child(tile_obj, 1), LV_OBJ_FLAG_HIDDEN);
                    }
                }
            }
            LV_LOG_INFO("REAL LV_EVENT_SCROLL_BEGIN \n");
        }
        // LV_LOG("tileview_custom_cb LV_EVENT_SCROLL_BEGIN \n");
    }
    else if (code == LV_EVENT_SCROLL)
    {
        tileview_slide_t *slide_info = lv_event_get_user_data(e);
        for (int i = 0; i < lv_obj_get_child_count(obj); i++)
        {
            lv_obj_t *tile_obj = lv_obj_get_child(obj, i);
            if (!lv_tile_is_scrolling(tile_obj))
            {
                continue;
            }
            lv_obj_t *target = tile_obj;
            SLIDE_EFFECT *effect = (SLIDE_EFFECT *)lv_obj_get_user_data(tile_obj);
            if (slide_info->snapshot)
            {
                if (lv_obj_has_flag(lv_obj_get_child(tile_obj, 1), LV_OBJ_FLAG_HIDDEN))
                {
                    lv_obj_send_event(lv_obj_get_child(tile_obj, 1), slide_info->create_snapshot, effect);
                    lv_obj_add_flag(lv_obj_get_child(tile_obj, 0), LV_OBJ_FLAG_HIDDEN);
                    lv_obj_remove_flag(lv_obj_get_child(tile_obj, 1), LV_OBJ_FLAG_HIDDEN);
                }
                target = lv_obj_get_child(tile_obj, 1);
            }
            apply_slide_effect(target, *effect);
        }
        // LV_LOG("tileview_custom_cb LV_EVENT_SCROLL \n");
    }
    else if (code == LV_EVENT_SCROLL_END)
    {
        tileview_slide_t *slide_info = lv_event_get_user_data(e);
        if (!lv_obj_is_scrolling(obj) && slide_info->scrolling)
        {
            slide_info->scrolling = false;
            for (int i = 0; i < lv_obj_get_child_count(obj); i++)
            {
                lv_obj_t *tile_obj = lv_obj_get_child(obj, i);
                SLIDE_EFFECT *effect = (SLIDE_EFFECT *)lv_obj_get_user_data(tile_obj);
                lv_obj_t *target = tile_obj;
                if (slide_info->snapshot)
                {
                    lv_obj_add_flag(lv_obj_get_child(tile_obj, 1), LV_OBJ_FLAG_HIDDEN);
                    lv_obj_remove_flag(lv_obj_get_child(tile_obj, 0), LV_OBJ_FLAG_HIDDEN);
                    lv_obj_send_event(lv_obj_get_child(tile_obj, 1), slide_info->delete_snapshot, effect);
                    target = lv_obj_get_child(tile_obj, 1);
                }
                reset_slide_effect(target, *effect);
            }
            LV_LOG_INFO("REAL LV_EVENT_SCROLL_END \n");
        }
        // LV_LOG("tileview_custom_cb LV_EVENT_SCROLL_END \n");
    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static bool lv_tile_is_scrolling(lv_obj_t *tile)
{
    if (tile == lv_tileview_get_tile_active(lv_obj_get_parent(tile)))
    {
        LV_LOG_TRACE("scrolling cause lv_tileview_get_tile_active");
        return true;
    }

    lv_area_t tile_area;
    lv_obj_get_coords(tile, &tile_area);

    lv_area_t scr_area;
    lv_obj_get_coords(lv_screen_active(), &scr_area);

    if (lv_area_is_on(&tile_area, &scr_area))
    {
        LV_LOG_TRACE("scrolling cause lv_area_is_on");
        return true;
    }
    return false;
}

static void apply_scale_fade_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = LV_MAX(1, lv_display_get_horizontal_resolution(NULL) / 2),
        .y = LV_MAX(1, lv_display_get_vertical_resolution(NULL) / 2)
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    float scale_x = screen_center.x ? (float)(LV_ABS(obj_center.x - screen_center.x)) /
                    screen_center.x : 0.0f;
    float scale_y = screen_center.y ? (float)(LV_ABS(obj_center.y - screen_center.y)) /
                    screen_center.y : 0.0f;

    float scale = 1 - LV_MAX(scale_x, scale_y) / 2;
    int32_t scaleint  = LV_CLAMP(128, scale * 256, 256);

#if LV_DRAW_TRANSFORM_USE_MATRIX
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_matrix_translate(&matrix, screen_center.x, screen_center.y);
    lv_matrix_scale(&matrix, scale, scale);
    lv_matrix_translate(&matrix, -screen_center.x, -screen_center.y);
    lv_obj_set_transform(obj, &matrix);
#else
    lv_obj_set_style_transform_pivot_x(obj, LV_PCT(50), 0);
    lv_obj_set_style_transform_pivot_y(obj, LV_PCT(50), 0);
    lv_obj_set_style_transform_scale(obj, scaleint, 0);
#endif
    lv_obj_set_style_opa(obj, scaleint, 0);
}

static void reset_scale_fade_effect(lv_obj_t *obj)
{
#if LV_DRAW_TRANSFORM_USE_MATRIX
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
#else
    lv_obj_set_style_transform_scale(obj, 256, 0);
#endif
    lv_obj_set_style_opa(obj, 255, 0);
}

static void apply_scale_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = LV_MAX(1, lv_display_get_horizontal_resolution(NULL) / 2),
        .y = LV_MAX(1, lv_display_get_vertical_resolution(NULL) / 2)
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    float scale_x = screen_center.x ? (float)(LV_ABS(obj_center.x - screen_center.x)) /
                    screen_center.x : 0.0f;
    float scale_y = screen_center.y ? (float)(LV_ABS(obj_center.y - screen_center.y)) /
                    screen_center.y : 0.0f;

    float scale = 1 - LV_MAX(scale_x, scale_y) / 2;

#if LV_DRAW_TRANSFORM_USE_MATRIX
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_matrix_translate(&matrix, screen_center.x, screen_center.y);
    lv_matrix_scale(&matrix, scale, scale);
    lv_matrix_translate(&matrix, -screen_center.x, -screen_center.y);
    lv_obj_set_transform(obj, &matrix);
#else
    int32_t scaleint  = LV_CLAMP(128, scale * 256, 256);
    lv_obj_set_style_transform_pivot_x(obj, LV_PCT(50), 0);
    lv_obj_set_style_transform_pivot_y(obj, LV_PCT(50), 0);
    lv_obj_set_style_transform_scale(obj, scaleint, 0);
#endif
}

static void reset_scale_effect(lv_obj_t *obj)
{
#if LV_DRAW_TRANSFORM_USE_MATRIX
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
#else
    lv_obj_set_style_transform_scale(obj, 256, 0);
#endif
}

static void apply_fade_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = LV_MAX(1, lv_display_get_horizontal_resolution(NULL) / 2),
        .y = LV_MAX(1, lv_display_get_vertical_resolution(NULL) / 2)
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    float scale_x = screen_center.x ? (float)(LV_ABS(obj_center.x - screen_center.x)) /
                    screen_center.x : 0.0f;
    float scale_y = screen_center.y ? (float)(LV_ABS(obj_center.y - screen_center.y)) /
                    screen_center.y : 0.0f;

    float scale = 1 - LV_MAX(scale_x, scale_y) / 2;
    int32_t scaleint  = LV_CLAMP(128, scale * 256, 256);

    lv_obj_set_style_opa(obj, scaleint, 0);
}

static void reset_fade_effect(lv_obj_t *obj)
{
    lv_obj_set_style_opa(obj, 255, 0);
}

#if LV_DRAW_TRANSFORM_USE_MATRIX
static void apply_cube_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = lv_display_get_horizontal_resolution(NULL) / 2,
        .y = lv_display_get_vertical_resolution(NULL) / 2
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    /*cube 3d matrix*/
    float w = obj_coords.x2 - obj_coords.x1 + 1;
    float h = obj_coords.y2 - obj_coords.y1 + 1;
    float d = (w + h) / 2;
    float xoff = (float)lv_display_get_horizontal_resolution(NULL) / 2;
    float yoff = (float)lv_display_get_vertical_resolution(NULL) / 2 ;
    float zoff = -(xoff + yoff) * 2;

    lv_vertex_t v0 = {-w, -h, d};
    lv_vertex_t v1 = {w,  -h, d};
    lv_vertex_t v2 = {w,  h,  d};
    lv_vertex_t v3 = {-w, h,  d};

    lv_vertex_t tv0, tv1, tv2, tv3;
    lv_vertex_t rv0, rv1, rv2, rv3;

    lv_matrix_t temp;
    lv_matrix_t rotate_3D;
    lv_matrix_identity(&temp);
    lv_matrix_identity(&rotate_3D);

    float release_x = obj_center.x - screen_center.x;
    float release_y = obj_center.y - screen_center.y;
    float rotate_degree;

    if (LV_ABS(release_x) > LV_ABS(release_y))
    {
        rotate_degree = 90.0 * (release_x) / (screen_center.x * 2);
        lv_matrix_compute_rotate(0, rotate_degree, 0, &rotate_3D);
    }
    else
    {
        rotate_degree = -90.0 * (release_y) / (screen_center.y * 2);
        lv_matrix_compute_rotate(rotate_degree, 0, 0, &rotate_3D);
    }

    lv_matrix_transfrom_rotate(&rotate_3D, &v0, &tv0, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v1, &tv1, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v2, &tv2, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v3, &tv3, 0, 0, 0);

    lv_matrix_compute_rotate(0, 0, 0, &rotate_3D);

    lv_matrix_transfrom_rotate(&rotate_3D, &tv0, &rv0, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv1, &rv1, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv2, &rv2, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv3, &rv3, xoff, yoff, zoff);

    lv_vertex_t p = {screen_center.x, screen_center.y, screen_center.x + screen_center.y};

    lv_matrix_transfrom_blit(w, h, &p, &rv0, &rv1, &rv2, &rv3, &temp);

    if (LV_ABS(rotate_degree) > 70)
    {
        lv_matrix_translate(&temp, 2 * w, 2 * h);
    }
    else
    {
        // Offset tile shift
        lv_matrix_t matrix_trans;
        lv_matrix_identity(&matrix_trans);
        matrix_trans.m[0][2] = - release_x;
        matrix_trans.m[1][2] = - release_y;
        lv_matrix_multiply(&temp, &matrix_trans);

        // Offset matrix transformation center shift
        {
            matrix_trans.m[0][2] = - release_x;
            matrix_trans.m[1][2] = - release_y;
            lv_matrix_t matrix_inv;
            lv_matrix_inverse(&matrix_inv, &matrix_trans);
            lv_matrix_multiply(&temp, &matrix_inv);

            matrix_trans.m[0][2] = release_x;
            matrix_trans.m[1][2] = release_y;
            lv_matrix_inverse(&matrix_inv, &matrix_trans);
            lv_matrix_multiply(&matrix_inv, &temp);

            lv_memcpy(&temp, &matrix_inv, sizeof(lv_matrix_t));
        }
    }

    lv_obj_set_transform(obj, &temp);
}

static void reset_cube_effect(lv_obj_t *obj)
{
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
}
static void apply_box_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = lv_display_get_horizontal_resolution(NULL) / 2,
        .y = lv_display_get_vertical_resolution(NULL) / 2
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    /*box 3d matrix*/
    float w = obj_coords.x2 - obj_coords.x1;
    float h = obj_coords.y2 - obj_coords.y1;
    float d = (w + h) / 2;
    float xoff = (float)lv_display_get_horizontal_resolution(NULL) / 2;
    float yoff = (float)lv_display_get_vertical_resolution(NULL) / 2 ;
    float zoff = -(xoff + yoff) * 2;

    lv_vertex_t v0 = {-w, -h, d};
    lv_vertex_t v1 = {w,  -h, d};
    lv_vertex_t v2 = {w,  h,  d};
    lv_vertex_t v3 = {-w, h,  d};

    lv_vertex_t tv0, tv1, tv2, tv3;
    lv_vertex_t rv0, rv1, rv2, rv3;

    lv_matrix_t temp;
    lv_matrix_t rotate_3D;
    lv_matrix_identity(&temp);
    lv_matrix_identity(&rotate_3D);

    float release_x = (obj_center.x - screen_center.x) / 2;
    float release_y = (obj_center.y - screen_center.y) / 2;
    float rotate_degree;

    if (LV_ABS(release_x) > LV_ABS(release_y))
    {
        rotate_degree = screen_center.x ? -90.0 * (release_x) / screen_center.x : 0.0f;
        lv_matrix_compute_rotate(0, rotate_degree, 0, &rotate_3D);
    }
    else
    {
        rotate_degree = screen_center.y ? 90.0 * (release_y) / screen_center.y : 0.0f;
        lv_matrix_compute_rotate(rotate_degree, 0, 0, &rotate_3D);
    }

    lv_matrix_transfrom_rotate(&rotate_3D, &v0, &tv0, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v1, &tv1, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v2, &tv2, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v3, &tv3, 0, 0, 0);

    lv_matrix_compute_rotate(0, 0, 0, &rotate_3D);

    lv_matrix_transfrom_rotate(&rotate_3D, &tv0, &rv0, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv1, &rv1, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv2, &rv2, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv3, &rv3, xoff, yoff, zoff);

    lv_vertex_t p = {screen_center.x, screen_center.y, screen_center.x + screen_center.y};

    lv_matrix_transfrom_blit(w, h, &p, &rv0, &rv1, &rv2, &rv3, &temp);
    lv_matrix_translate(&temp, - release_x, - release_y);
    lv_obj_set_transform(obj, &temp);
}

static void reset_box_effect(lv_obj_t *obj)
{
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
}

static void apply_spiral_notebook_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = LV_MAX(1, lv_display_get_horizontal_resolution(NULL) / 2),
        .y = LV_MAX(1, lv_display_get_vertical_resolution(NULL) / 2)
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    float scale_x = screen_center.x ? (float)(LV_ABS(obj_center.x - screen_center.x)) /
                    screen_center.x : 0.0f;
    float scale_y = screen_center.y ? (float)(LV_ABS(obj_center.y - screen_center.y)) /
                    screen_center.y : 0.0f;

    float scale = 1 - LV_MAX(scale_x, scale_y) / 2;
    int32_t scaleint  = LV_CLAMP(128, scale * 256, 256);

    float rotate_degree = 90 * (scaleint / 256.0f - 1.0f);

    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);

    lv_matrix_scale(&matrix, scaleint / 256.0f, scaleint / 256.0f);
    lv_matrix_rotate(&matrix, rotate_degree);

    lv_obj_set_transform(obj, &matrix);
}

static void reset_spiral_notebook_effect(lv_obj_t *obj)
{
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
}

static void apply_rotate_effect(lv_obj_t *obj)
{
    lv_point_t screen_center =
    {
        .x = lv_display_get_horizontal_resolution(NULL) / 2,
        .y = lv_display_get_vertical_resolution(NULL) / 2
    };

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);
    lv_point_t obj_center =
    {
        .x = (obj_coords.x1 + obj_coords.x2) / 2,
        .y = (obj_coords.y1 + obj_coords.y2) / 2
    };

    /*box 3d matrix*/
    float w = obj_coords.x2 - obj_coords.x1 + 1;
    float h = obj_coords.y2 - obj_coords.y1 + 1;
    float xoff = (float)lv_display_get_horizontal_resolution(NULL) / 2;
    float yoff = (float)lv_display_get_vertical_resolution(NULL) / 2 ;
    float zoff = -(xoff + yoff);

    lv_vertex_t v0 = {-w, -h, 0};
    lv_vertex_t v1 = {w,  -h, 0};
    lv_vertex_t v2 = {w,  h,  0};
    lv_vertex_t v3 = {-w, h,  0};

    lv_vertex_t tv0, tv1, tv2, tv3;
    lv_vertex_t rv0, rv1, rv2, rv3;

    lv_matrix_t temp;
    lv_matrix_t rotate_3D;

    float release_x = obj_center.x - screen_center.x + 1;
    float release_y = obj_center.y - screen_center.y + 1;
    float rotate_degree_x, rotate_degree_y;

    rotate_degree_y = screen_center.x ? 90.0 * (release_x) / screen_center.x : 0.0f;
    rotate_degree_x = screen_center.y ? -90.0 * (release_y) / screen_center.y : 0.0f;
    lv_matrix_compute_rotate(rotate_degree_x, rotate_degree_y, 0, &rotate_3D);

    // LV_LOG("release_x: %f, release_y: %f\n", release_x, release_y);
    lv_matrix_transfrom_rotate(&rotate_3D, &v0, &tv0, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v1, &tv1, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v2, &tv2, 0, 0, 0);
    lv_matrix_transfrom_rotate(&rotate_3D, &v3, &tv3, 0, 0, 0);

    lv_matrix_compute_rotate(0, 0, 0, &rotate_3D);

    lv_matrix_transfrom_rotate(&rotate_3D, &tv0, &rv0, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv1, &rv1, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv2, &rv2, xoff, yoff, zoff);
    lv_matrix_transfrom_rotate(&rotate_3D, &tv3, &rv3, xoff, yoff, zoff);

    lv_vertex_t p = {screen_center.x, screen_center.y, -zoff};

    lv_matrix_transfrom_blit(w, h, &p, &rv0, &rv1, &rv2, &rv3, &temp);

    if (LV_ABS(release_x) > w / 2 || LV_ABS(release_y) > h / 2)
    {
        lv_matrix_translate(&temp, 2 * w, 2 * h);
    }
    else
    {
        lv_matrix_t matrix_trans;
        lv_matrix_identity(&matrix_trans);
        matrix_trans.m[0][2] = - release_x;
        matrix_trans.m[1][2] = - release_y;
        lv_matrix_multiply(&temp, &matrix_trans);
        // LV_LOG("temp %f %f %f \n%f %f %f \n%f %f %f \n", temp.m[0][0], temp.m[0][1], temp.m[0][2], temp.m[1][0], temp.m[1][1], temp.m[1][2], temp.m[2][0], temp.m[2][1], temp.m[2][2]);

        // Offset matrix transformation center shift
        {
            matrix_trans.m[0][2] = - release_x;
            matrix_trans.m[1][2] = - release_y;
            lv_matrix_t matrix_inv;
            lv_matrix_inverse(&matrix_inv, &matrix_trans);
            lv_matrix_multiply(&temp, &matrix_inv);

            matrix_trans.m[0][2] = release_x;
            matrix_trans.m[1][2] = release_y;
            lv_matrix_inverse(&matrix_inv, &matrix_trans);
            lv_matrix_multiply(&matrix_inv, &temp);

            lv_memcpy(&temp, &matrix_inv, sizeof(lv_matrix_t));
        }
    }
    lv_obj_set_transform(obj, &temp);
}

static void reset_rotate_effect(lv_obj_t *obj)
{
    lv_matrix_t matrix;
    lv_matrix_identity(&matrix);
    lv_obj_set_transform(obj, &matrix);
}
#endif
static void apply_slide_effect(lv_obj_t *obj, SLIDE_EFFECT effect)
{
    switch (effect)
    {
    case CLASSIC:
        break;
    case FADE:
        apply_fade_effect(obj);
        break;
    case SCALE:
        apply_scale_effect(obj);
        break;
    case SCALE_FADE:
        apply_scale_fade_effect(obj);
        break;
#if LV_DRAW_TRANSFORM_USE_MATRIX
    case BOX:
        apply_box_effect(obj);
        break;
    case CUBE_ROTATION:
        apply_cube_effect(obj);
        break;
    case SPIRAL_NOTEBOOK:
        apply_spiral_notebook_effect(obj);
        break;
    case ROTATION:
        apply_rotate_effect(obj);
        break;
#endif
    default:
        break;
    }
}

static void reset_slide_effect(lv_obj_t *obj, SLIDE_EFFECT effect)
{
    switch (effect)
    {
    case CLASSIC:
        break;
    case FADE:
        reset_fade_effect(obj);
        break;
    case SCALE:
        reset_scale_effect(obj);
        break;
    case SCALE_FADE:
        reset_scale_fade_effect(obj);
        break;
#if LV_DRAW_TRANSFORM_USE_MATRIX
    case BOX:
        reset_box_effect(obj);
        break;
    case CUBE_ROTATION:
        reset_cube_effect(obj);
        break;
    case SPIRAL_NOTEBOOK:
        reset_spiral_notebook_effect(obj);
        break;
    case ROTATION:
        reset_rotate_effect(obj);
        break;
#endif
    default:
        break;
    }
}
#endif /* LV_BUILD_DEMOS */
