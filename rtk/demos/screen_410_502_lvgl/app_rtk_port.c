/**
 * @file app_rtk_port.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

#include "os_task.h"
#include "os_timer.h"
#include "trace.h"
#include "platform_utils.h"

#include "lvgl.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"
#include "hack_lv_draw_buf.h"

#include "lvgl_watch.h"

#ifdef CONFIG_SOC_SERIES_RTL87X3G
#include "..\..\..\inc\rtl87x3g\platform\address_map.h"
#endif

#ifdef CONFIG_SOC_SERIES_RTL87x3E
#include "..\..\..\inc\rtl87x3e\platform\address_map.h"
#endif


static void port_log(lv_log_level_t level, const char *buf)
{
    if (level >= LV_LOG_LEVEL)
    {
        DBG_DIRECT("%s", buf);
    }
}


#if LV_USE_PROFILER == 1
static uint32_t my_get_tick_cb(void)
{
    return read_cpu_counter() / 100;
}
static void my_flush_cb(const char *buf)
{
    DBG_DIRECT("%s", buf);
}
void my_profiler_init(void)
{
    lv_profiler_builtin_config_t config;
    lv_profiler_builtin_config_init(&config);
    config.tick_per_sec = 1000000; /* CPU 100MHz */
    config.tick_get_cb = my_get_tick_cb;
    config.flush_cb = my_flush_cb;
    lv_profiler_builtin_init(&config);
}
#endif
static void lvgl_demo_run(void *p)
{
    lv_init();

    lv_mem_add_pool((void *)(SPIC1_MEM_BASE + 512 * 1024), (3 * 1024 + 512) * 1024);


    lv_log_register_print_cb((lv_log_print_g_cb_t)port_log);
    lv_tick_set_cb(sys_timestamp_get);
#if LV_USE_PROFILER == 1
    my_profiler_init();
#endif
    lv_port_disp_init();
    lv_port_indev_init();
    lv_port_fs_init();

    DBG_DIRECT("LVGL start \n");

    watch_demo_init();
    while (1)
    {
        // lv_obj_invalidate(lv_screen_active());
        lv_task_handler();
    }
}

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void rt_lvgl_demo_init(void)
{
    static void *lvgl_task_handle = NULL;
    /* littleGL demo gui thread */
    os_task_create(&lvgl_task_handle, "lvgl", lvgl_demo_run, 0, 512 * 24, 1);
}

