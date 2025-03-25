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

static void port_log(lv_log_level_t level, const char *buf)
{
    printf("%s", buf);
}

uint8_t resource_root[1024 * 1024 * 20];
static void load_ui_source(void)
{
    int fd;
    fd = open("../demos/screen_410_502_lvgl/root_image_lvgl/root(0x253E400).bin", 0);
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

static void *lvgl_demo_run(void *arg)
{
    if (lv_is_initialized() == true)
    {
        return 0;
    }
    lv_init();
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

void rtk_lvgl_demo_init(void)
{
    load_ui_source();
    pthread_t thread1;
    pthread_create(&thread1, NULL, lvgl_demo_run, NULL);
    pthread_t thread2;
    pthread_create(&thread2, NULL, lvgl_timer, NULL);
}


