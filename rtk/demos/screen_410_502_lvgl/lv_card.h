/**
 * @file lv_card.h
 *
 */

#ifndef LV_CARD_H
#define LV_CARD_H

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
// Card style enumeration
typedef enum
{
    CLASSIC,
    REDUCTION
} CARDSTYLE;

// Card user data structure
typedef struct
{
    uint32_t id;      // Card index
    lv_coord_t ay;    // Initial Y-axis position
} CardData;

// Card container user data structure
typedef struct
{
    CARDSTYLE style;            // Card style
    uint32_t total_cnt;         // Total number of cards
    lv_coord_t card_height;     // Height of a single card
    lv_coord_t offset_y;        // Scroll offset
    lv_coord_t stack_location;   // Pile location
} CardViewData;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
/**
 * @brief Custom card view widget which custom card widget nested in
 * @param parent Parent object
 * @param style Card move style (CLASSIC or REDUCTION)
 * @param stack_location Card stack location
 * @param card_height Height of each card
 * @return Pointer to the created card view object
 */
lv_obj_t *lv_create_card_view(lv_obj_t *parent, CARDSTYLE style, lv_coord_t stack_location,
                              lv_coord_t card_height);

/**
 * @brief Custom card view widget which custom card widget nested in
 * @param parent Parent object
 * @param id Card index
 * @param w Card width
 * @param h Card height
 * @return Pointer to the created card object
 */
lv_obj_t *lv_create_card(lv_obj_t *parent, uint8_t id, lv_coord_t w, lv_coord_t h);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CUSTOM_TILE_SLIDE_H*/
