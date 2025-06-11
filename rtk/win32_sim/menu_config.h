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
// <0=> LVGL_SIMPLE_DEMO
// <1=> LVGL_WATCH_DEMO
#define LVGL_DEMO_APP     1

#if (LVGL_DEMO_APP == 0)
#define CONFIG_REALTEK_BUILD_LVGL_SIMPLE_DEMO
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

// <e> Enable Legacy RTK GUI
#define CONFIG_REALTEK_BUILD_LEGACY_RTK_GUI     0

#if (CONFIG_REALTEK_BUILD_LEGACY_RTK_GUI == 1)
#endif
// </e>

// <e> h.264 decoder
#define CONFIG_REALTEK_H264_DECODER     0

#if (CONFIG_REALTEK_H264_DECODER == 1)
#define CONFIG_REALTEK_H264BSD
#endif
// </e>

// <<< end of configuration section >>>
#endif // RTK_GUI_CONFIG_H__