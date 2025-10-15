/**
 * @file lv_snapshot_widgets.h
 *
 */


#ifndef LV_SNAPSHOT_WIDGETS_H
#define LV_SNAPSHOT_WIDGETS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lv_conf_internal.h"

#if LV_USE_SNAPSHOT
#if LV_USE_SNAPSHOT_WIDGETS != 0

#include "../core/lv_obj.h"
#include "../image/lv_image.h"
#include "../../core/lv_obj_private.h"
#include "../others/snapshot/lv_snapshot.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
/*Data of snapshot_widgetsate*/
typedef struct {
    lv_obj_t obj;
    lv_obj_t *snapshot;
    lv_color32_t bg_color;
    lv_color_format_t snapshot_format;
    bool need_redraw;
    bool use_jpeg;
} lv_snapshot_widgets_t;

LV_ATTRIBUTE_EXTERN_DATA extern const lv_obj_class_t lv_snapshot_widgets_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a snapshot_widgets object
 * @param parent    pointer to an object, it will be the parent of the new snapshot_widgets
 * @return          pointer to the created bar
 */
lv_obj_t * lv_snapshot_widgets_create(lv_obj_t * parent);

/**
 * @brief Update the snapshot of the snapshot_widgets
 *
 * @param obj pointer to the snapshot_widgets object
 */
void lv_snapshot_widgets_update(lv_obj_t *obj);

/**
 * @brief Set the need_redraw flag of the snapshot_widgets
 *
 * @param obj pointer to the snapshot_widgets object
 */
void lv_snapshot_widgets_need_redraw(lv_obj_t *obj);

/*======================
 * Add/remove functions
 *=====================*/

/*=====================
 * Setter functions
 *====================*/

/**
 * @brief Set the snapshot format of the snapshot_widgets
 *
 * @param obj pointer to the snapshot_widgets object
 * @param cf the snapshot format to set
 */
void lv_snapshot_widgets_set_snapshot_format(lv_obj_t *obj, lv_color_format_t cf);

/*=====================
 * Getter functions
 *====================*/

/**
 * @brief Get the snapshot format of the snapshot_widgets
 *
 * @param obj pointer to the snapshot_widgets object
 * @return lv_color_format_t the snapshot format of the snapshot_widgets
 */
lv_color_format_t lv_snapshot_widgets_get_snapshot_format(lv_obj_t *obj);

/*=====================
 * Other functions
 *====================*/

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_SNAPSHOT_WIDGETS*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_SNAPSHOT_WIDGETS_H*/
#endif /*LV_USE_SNAPSHOT*/
