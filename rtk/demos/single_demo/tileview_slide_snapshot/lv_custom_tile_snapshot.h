/**
 * @file lv_custom_tile_snapshot.h
 *
 */

#ifndef LV_CUSTOM_TILE_SNAPSHOT_H
#define LV_CUSTOM_TILE_SNAPSHOT_H

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

/**
 * @brief Delete snapshot object directly
 *
 * @param widget Parent container for the snapshot image
 * @param snapshot Snapshot image object to delete. If NULL, find the snapshot linked to the target widget.
 * @note Automatically shows the original widget after deleting snapshot
*/
void delete_snapshot_obj_directly(lv_obj_t *widget, lv_obj_t *snapshot);

/**
 * @brief Update snapshot object directly
 *
 * @param target Target widget to update snapshot from
 * @param snapshot Snapshot image object to update. If NULL, find the snapshot linked to the target widget.
 */
void update_snapshot_obj_directly(lv_obj_t *target, lv_obj_t *snapshot);

/**
 * @brief Create snapshot object without event binding
 *
 * @param target Target widget to capture snapshot from
 * @return lv_obj_t* Pointer to the created snapshot image object
 * @note Automatically hides the original widget after creating snapshot
 */
lv_obj_t *create_snapshot_obj_directly(lv_obj_t *target);

/**
 * @brief Create a snapshot object with event bindings
 *
 * @param parent Parent container for the snapshot image
 * @param target Target widget to capture snapshot from
 * @param create_enent_id Event ID for snapshot creation trigger
 * @param delete_enent_id Event ID for snapshot deletion trigger
 * @return lv_obj_t* Pointer to the created snapshot image object
 */
lv_obj_t *create_snapshot_obj_with_enent(lv_obj_t *parent, lv_obj_t *target,
                                         uint32_t create_enent_id, uint32_t delete_enent_id);

/**********************
 * GLOBAL PROTOTYPES
 **********************/


/**********************
 *      MACROS
 **********************/



#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CUSTOM_TILE_SNAPSHOT_H*/
