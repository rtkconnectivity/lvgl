/**
 * @file ui_init.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_init.h"

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void single_demo_ui_init(void)
{
    /* ---------------------------------------------------
     * Official Demos (Choose ONE below)
     * Uncomment the desired demo function:
     *  lv_demo_benchmark()  - Performance testing
     *  lv_demo_widgets()   - Widget collection
     *  lv_demo_music()     - Music player UI
     *  lv_demo_stress()    - Stress test
     * --------------------------------------------------- */

    lv_demo_benchmark();
    // lv_demo_widgets();
    // lv_demo_music();


    /* ---------------------------------------------------
     * RTK Custom Demos (Choose ONE below)
     * Uncomment the desired demo function:
     *  rtk_demo_card()     - Card widfet demo
     *  rtk_demo_cellular() - Cellular widget demo
     *  rtk_demo_tileview_slide() - Tileview slide demo
     *  rtk_demo_tileview_slide_snapshot() - Tileview 2.5D slide demo cache by snapshot
     * --------------------------------------------------- */

    // rtk_demo_card();
    // rtk_demo_cellular();
    // rtk_demo_tileview_slide();
    // rtk_demo_tileview_slide_snapshot();
}

