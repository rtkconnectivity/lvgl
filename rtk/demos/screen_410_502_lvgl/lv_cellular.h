/**
 * @file lv_cellular.h
 *
 */

#ifndef LV_CELLULAR_H
#define LV_CELLULAR_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "app_main.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
// Card container user data structure
typedef struct
{
    int16_t ver_speed;
    int16_t ver_record[5];
    int16_t ver_offset;     //!< Vertical offset.
    int16_t hor_offset;     //!< Horizontal offset.
    int16_t ver_offset_min; //!< Minimum vertical offset.
    int16_t icon_size;
    lv_timer_t *timer;      //!< Timer for inertial motion.
} CellularData;

typedef struct
{
    int16_t start_x;    // Initial X-axis position
    int16_t start_y;    // Initial Y-axis position
} ImgData;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
/**
 * @brief Custom card view widget which custom card widget nested in
 * @param parent Parent object.
 * @param style Card move style (CARD_CLASSIC or CARD_STACK).
 * @param card_height Height of each card.
 * @param card_space Space between two cards.
 * @param stack_location Card stack location.
 * @return Pointer to the created card view object.
 */
lv_obj_t *lv_cellular_create(lv_obj_t             *parent,
                             int                   icon_size,
                             lv_image_dsc_t const *icon_array[],
                             int                   array_size,
                             lv_event_cb_t         cb_array[]);

/**
 * @brief Set card_view offset.
 * @param card_view Card_view.
 * @param offset Offset.
 */
void lv_cellular_set_offset(lv_obj_t *cellular, lv_coord_t ver_offset);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CELLULAR_H*/