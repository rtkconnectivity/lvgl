# How to use freetype in LVGL ?

lvgl online doc : <https://docs.lvgl.io/9.3/details/libs/freetype.html>

## Config

### LVGL Config

Enable freetype in LVGL lv_conf.h:

``` C
#define LV_USE_FREETYPE 1
#define LV_FREETYPE_USE_LVGL_PORT 1
```

### Build Config for Simulation

Enable building config in menu_config.h:

``` C
#define CONFIG_REALTEK_BUILD_FREETYPE_SRC 1
#define CONFIG_FREETYPE_USE_LVGL_PORT
```

### Build Config for Zephyr

Enable building config in proj.conf:

``` C
CONFIG_REALTEK_BUILD_FREETYPE_SRC=y
CONFIG_FREETYPE_USE_LVGL_PORT=y
```

## Source File

- Download freetype source code.
- Copy freetype/include to lvgl/libs/freetype/include.
- Copy freetype/src to lvgl/libs/freetype/src.

## Build

Now, build lvgl.

## Test

Test freetype in lvgl.
Make sure file system in lvgl work fine.

``` C
    lv_example_freetype_1();
```
