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
 * @brief Create a cellular object
 *
 * @param parent Parent object
 * @param icon_size Icon size
 * @param icon_array Icon array
 * @param array_size Array size
 * @param cb_array Callback array
 * @return lv_obj_t*
 */
lv_obj_t *lv_cellular_create(lv_obj_t             *parent,
                             int                   icon_size,
                             lv_image_dsc_t const *icon_array[],
                             int                   array_size,
                             lv_event_cb_t         cb_array[]);

/**
 * @brief Set the offset of the cellular object
 *
 * @param cellular Cellular object
 * @param ver_offset Vertical offset
 */
void lv_cellular_set_offset(lv_obj_t *cellular, lv_coord_t ver_offset);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CELLULAR_H*/