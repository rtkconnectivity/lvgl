/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "time.h"

#define LOG_VERSION_NUM                "x.x.x"
#define COMPILE_TIME                    __DATE__", "__TIME__
#define PROJECT_NAME                   "LVGL Simulator"
#define COMPANY_NAME                   "Realtek Semiconductor Corporation"

int main(int argc, char **argv)
{
    printf("\n\n\t************** %s **************\t\n   \t <%s> \t Build Time: %s\n\n", \
           COMPANY_NAME, \
           PROJECT_NAME, \
           COMPILE_TIME);

    extern void rtk_lvgl_demo_init(void);
    rtk_lvgl_demo_init();

    while (1)
    {
        time_t now;
        now = time(NULL);
        printf("World Time: %.*s\n", 25, ctime(&now));
        sleep(1000);
    }

    return 0;
}
