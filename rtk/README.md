# RTK Extensions for LVGL

Realtek platform extensions, simulators, and demo applications for LVGL v9.

## Directory Structure

| Directory | Description | Status |
|-----------|-------------|--------|
| [win32_sim/](win32_sim/readme.md) | Win32 simulator (MinGW + SDL2) for desktop testing | Available |
| keil_sim/ | Keil MDK simulator (AC5/AC6) | In Development |
| demos/ | RTK demo applications | Available |
| tool/ | Build tools (SCons scripts, etc.) | -- |

## Demos

Located in `demos/`, includes three demo applications:

- **single_demo/** -- A collection of individual demos for quick feature testing (benchmark, widgets, RTK card, tileview, lite3d, etc.)
- **screen_410_502_lvgl/** -- Complete smartwatch UI built with LVGL native code (activity, calendar, heart rate, music, weather, etc.)
- **screen_410_502_squareline/** -- Complete smartwatch UI designed with SquareLine Studio

See [win32_sim/readme.md](win32_sim/readme.md) for how to select and run demos.

## Changelog

[LVGL_SourceCode_Changelog.md](LVGL_SourceCode_Changelog.md) -- Records all RTK modifications to the upstream LVGL source code, including change type, author, reason, and affected APIs.
