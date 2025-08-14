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
#include "lv_demos.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"


/*********************
 *      DEFINES
 *********************/
#define APP_TASK_PRIORITY               1   /* Task priorities. */
#define APP_TASK_STACK_SIZE             (512 * 24)

#ifdef CONFIG_SOC_SERIES_RTL87x3E
#define LV_USE_PSRAM         1
#define PSRAM_BUF_SIZE       (3*1024*1024)
#define PSRAM_BUF_ADDR       0x4100000
#define CPU_FREQ             100000000
#elif defined CONFIG_SOC_SERIES_RTL87X3G
#define LV_USE_PSRAM         1
#define PSRAM_BUF_SIZE       (((3 * 1024 + 512) * 1024))
#define PSRAM_BUF_ADDR       0x22000000 + 512 * 1024
// #define PSRAM_BUF_ADDR       0x24000000
#define CPU_FREQ             200000000
#else
#define LV_USE_PSRAM         0
#define PSRAM_BUF_SIZE       0
#define PSRAM_BUF_ADDR       0
#define CPU_FREQ             100000000
#endif

#if LV_USE_PSRAM == 1
#define LV_USE_PSRAM_POOL
#elif LV_USE_PSRAM == 2
#define LV_USE_PSRAM_DRAW_BUF
#endif

#ifdef LV_USE_PSRAM_DRAW_BUF
#include "lv_tlsf.h"
#include "lv_types.h"
#include "lv_draw_buf_private.h"
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
#ifdef LV_USE_PSRAM_DRAW_BUF
static void *tlfs_buf_malloc(size_t size_bytes, lv_color_format_t color_format);
static void tlfs_buf_free(void *p);
static void lv_psram_draw_buf(void *buf, size_t size);
#endif
static void lv_psram_init(void *buf, size_t size);
static void port_log(lv_log_level_t level, const char *buf);
static void lv_tick(void *pxTimer);
static void lvgl_demo_run(void *p);

/*for 8773E*/
static uint32_t sys_tick_get(void);

/**********************
 *  STATIC VARIABLES
 **********************/
uint32_t PSRAM_BUF = PSRAM_BUF_ADDR;

#ifdef LV_USE_PSRAM_DRAW_BUF
lv_tlsf_t draw_buf_tlfs;
#endif

void *lvgl_task_handle;
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void rt_lvgl_demo_init(void)
{
    /* littleGL demo gui thread */
    os_task_create(&lvgl_task_handle, "lvgl", lvgl_demo_run, 0, APP_TASK_STACK_SIZE,
                   APP_TASK_PRIORITY);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
#ifdef LV_USE_PSRAM_DRAW_BUF
static void *tlfs_buf_malloc(size_t size_bytes, lv_color_format_t color_format)
{
    return lv_tlsf_malloc(draw_buf_tlfs, size_bytes);
}
static void tlfs_buf_free(void *p)
{
    lv_tlsf_free(draw_buf_tlfs, p);
}
static void lv_psram_draw_buf(void *buf, size_t size)
{
    lv_draw_buf_handlers_t *handlers = lv_draw_buf_get_handlers();
    lv_draw_buf_handlers_t *font_handlers = lv_draw_buf_get_font_handlers();
    lv_draw_buf_handlers_t *image_handlers = lv_draw_buf_get_image_handlers();

    draw_buf_tlfs = lv_tlsf_create_with_pool(buf, size);
    handlers->buf_malloc_cb = tlfs_buf_malloc;
    handlers->buf_free_cb = tlfs_buf_free;
    font_handlers->buf_malloc_cb = tlfs_buf_malloc;
    font_handlers->buf_free_cb = tlfs_buf_free;
    image_handlers->buf_malloc_cb = tlfs_buf_malloc;
    image_handlers->buf_free_cb = tlfs_buf_free;
}
#endif

#ifdef LV_USE_PSRAM_POOL
static void lv_psram_add_pool(void *buf, size_t size)
{
    lv_mem_add_pool(buf, size);
}
#endif

static void lv_psram_init(void *buf, size_t size)
{
#ifdef LV_USE_PSRAM_POOL
    lv_psram_add_pool(buf, size);
#endif
#ifdef LV_USE_PSRAM_DRAW_BUF
    lv_psram_draw_buf(buf, size);
#endif
}

static void port_log(lv_log_level_t level, const char *buf)
{
    if (level >= LV_LOG_LEVEL)
    {
        DBG_DIRECT("%s", buf);
    }
}

static uint32_t sys_tick_get(void)
{
    return sys_timestamp_get();
}
#if LV_USE_PROFILER == 1
static uint32_t my_get_tick_cb(void)
{
    return read_cpu_counter() / (CPU_FREQ / 1000000);
}
static void my_flush_cb(const char *buf)
{
    DBG_DIRECT("%s", buf);
}
void my_profiler_init(void)
{
    lv_profiler_builtin_config_t config;
    lv_profiler_builtin_config_init(&config);
    config.tick_per_sec = 1000000;
    config.tick_get_cb = my_get_tick_cb;
    config.flush_cb = my_flush_cb;
    lv_profiler_builtin_init(&config);
}
#endif
static void lvgl_demo_run(void *p)
{
    lv_init();
    lv_psram_init((void *)PSRAM_BUF, PSRAM_BUF_SIZE);
    lv_log_register_print_cb((lv_log_print_g_cb_t)port_log);
    lv_tick_set_cb(sys_tick_get);
#if LV_USE_PROFILER == 1
    my_profiler_init();
#endif
    lv_port_disp_init();
    lv_port_indev_init();
    // lv_port_fs_init();

    DBG_DIRECT("LVGL start \n");

    lv_demo_benchmark();
    // lv_demo_widgets();
    while (1)
    {
        // lv_obj_invalidate(lv_screen_active());
        lv_task_handler();
    }
}

