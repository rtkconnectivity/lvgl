/**
 * @file app_sim_port.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include <sys/types.h>
#include <pthread.h>
#include "unistd.h"

#include <time.h>
#include "lvgl.h"
#include "app_main.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"

/*********************
 *      DEFINES
 *********************/
#define LV_USE_PSRAM         1
#define PSRAM_BUF_SIZE       (3*1024*1024)

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
static void *lvgl_demo_run(void *p);
static void load_ui_source(void);
static void *lvgl_timer(void *arg);

/**********************
 *  STATIC VARIABLES
 **********************/
uint8_t resource_root[1024 * 1024 * 20];
uint8_t PSRAM_BUF[PSRAM_BUF_SIZE];

#ifdef LV_USE_PSRAM_DRAW_BUF
lv_tlsf_t draw_buf_tlfs;
#endif
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void rtk_lvgl_demo_init(void)
{
    load_ui_source();
    pthread_t thread1;
    pthread_create(&thread1, NULL, lvgl_demo_run, NULL);
    pthread_t thread2;
    pthread_create(&thread2, NULL, lvgl_timer, NULL);
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
static void port_log(lv_log_level_t level, const char *buf)
{
    printf("%s", buf);
}

static void load_ui_source(void)
{
    int fd;
    fd = open("../demos/screen_410_502_lvgl/root_image_lvgl/root(0x02542400).bin", 0);
    if (fd > 0)
    {
        printf("open root.bin Successful!\n");
        read(fd, resource_root, 1024 * 1024 * 20);
    }
    else
    {
        printf("open root.bin Fail!\n");
    }
}

#ifdef LV_USE_PSRAM_DRAW_BUF
#include "lv_tlsf.h"
#include "lv_types.h"
#include "lv_draw_buf_private.h"
lv_tlsf_t draw_buf_tlfs;
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
void lv_psram_add_pool(void *buf, size_t size)
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

static void *lvgl_demo_run(void *arg)
{
    if (lv_is_initialized() == true)
    {
        return 0;
    }
    lv_init();
    lv_psram_init(PSRAM_BUF, PSRAM_BUF_SIZE);

    lv_log_register_print_cb((lv_log_print_g_cb_t)port_log);
    lv_port_disp_init();
    lv_port_indev_init();
    // lv_port_fs_init();

    watch_demo_init();
    while (true)
    {
        lv_task_handler();
    }
}

static void *lvgl_timer(void *arg)
{
    while (true)
    {
        usleep(1000 * 10);
        lv_tick_inc(10);
    }
}
