/*
 * @Author: howie_wang
 * @Date: 2022-03-31 13:33:29
 * @LastEditTime: 2022-04-02 15:50:00
 * @LastEditors: Please set LastEditors
 */
#ifndef RTK_GUI_CONFIG_H__
#define RTK_GUI_CONFIG_H__
// <<< Use Configuration Wizard in Context Menu >>>\n
/* Automatically generated file; DO NOT EDIT. */
/* rtk gui Configuration */

// <h> Framework Config

// <c> Enable RTK Real GUI
#define CONFIG_REALTEK_BUILD_GUI     1
// </c>

// </h>

// <e> Enable LVGL
#define CONFIG_REALTEK_BUILD_LVGL_V9      1

#if CONFIG_REALTEK_BUILD_LVGL_V9 == 1

// <c> Enalbe LVGL APP
// #define CONFIG_REALTEK_BUILD_LVGL_DEMO_APP
// </c>

// <c> Enable LVGL EXAMPLES
// #define CONFIG_REALTEK_BUILD_LVGL_EXAMPLES
// </c>

// <c> Enable LVGL RLOTTIE
// #define CONFIG_REALTEK_BUILD_LVGL_RLOTTIE
// </c>

// <o> LVGL_DEMO_APP
// <0=> LVGL_BENCHMARK
// <1=> LVGL_WATCH_DEMO
// <2=> LVGL_SQUARELINE_DEMO
#define LVGL_DEMO_APP     1

#if (LVGL_DEMO_APP == 0)
#define CONFIG_REALTEK_BUILD_LVGL_SIMPLE_DEMO
#ifndef CONFIG_REALTEK_BUILD_LVGL_DEMO_APP
#define CONFIG_REALTEK_BUILD_LVGL_DEMO_APP
#endif
#elif (LVGL_DEMO_APP == 1)
#define CONFIG_REALTEK_BUILD_GUI_410_502_LVGL_DEMO
#elif (LVGL_DEMO_APP == 2)
#define CONFIG_REALTEK_BUILD_GUI_410_502_SQUARELINE_DEMO
#endif

#endif // CONFIG_REALTEK_BUILD_LVGL_V9
// </e>

// <e> Enable Arm-2D
#define CONFIG_REALTEK_BUILD_ARM_2D     0

#if (CONFIG_REALTEK_BUILD_ARM_2D == 1)
// <c> Enalbe ARM2D APP
#define CONFIG_REALTEK_BUILD_ARM2D_DEMO_APP
// </c>
#endif
// </e>

// <e> RTK GUI Enable Lite3D library
#define CONFIG_REALTEK_BUILD_LVGL_LITE3D  1
#if (CONFIG_REALTEK_BUILD_LVGL_LITE3D == 1)
// <c> Enable Lite3D WIN32 GCC LIB
#define CONFIG_REALTEK_BUILD_LVGL_LITE3D_FOR_WIN32_GCC_LIB
// </c>
#endif
// </e>

// <<< end of configuration section >>>
#endif // RTK_GUI_CONFIG_H__