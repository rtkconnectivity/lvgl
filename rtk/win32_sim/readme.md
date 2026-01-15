# Win32 Simulator for LVGL with RTK Extensions

A Windows-based simulator for testing LVGL applications with Realtek (RTK) custom demos and widgets.

## Quick Start

### Build & Run
```bash
scons          # Build the project
gui.exe        # Run the simulator
```

## Demo Selection

### Method 1: Quick Switch (Recommended for Testing)
Edit `../lvgl_v9/rtk/demos/single_demo/ui_init.c` and uncomment the demo you want:

```c
void app_ui_entry(void)
{
    // Official LVGL Demos
    lv_demo_benchmark();
    // lv_demo_widgets();
    // lv_demo_music();
    // lv_demo_stress();

    // RTK Custom Demos
    // rtk_demo_card();
    // rtk_demo_cellular();
    // rtk_demo_tileview_slide();
    // rtk_demo_tileview_slide_snapshot();
    // rtk_demo_lite3d_disc();
}
```

Then rebuild with `scons`.

### Method 2: Kconfig Configuration (Select RTK Demo App)
Use Kconfig to select which RTK demo application to build:

```bash
menuconfig.bat                    # Open configuration menu
# or
python run_menuconfig.py         # Alternative way
```

**Navigation:**
1. Enter `LVGL configuration`
2. Enter `Enable Realtek LVGL`
3. Enable `Enable Realtek LVGL` (press Space)
4. Select one from `LVGL demo app`:
   - **GUI LVGL Simple demo** - Single demo collection (default)
   - **GUI 410_502 LVGL Squareline demo** - Complete SquareLine watch app
   - **GUI 410_502 LVGL demo** - Complete LVGL watch app
5. Save and exit
6. Rebuild: `scons`

**Generated Files (auto-generated, do not edit manually):**
- `.config` - Kconfig format configuration
- `autoconfig.h` - C header (included via `-include` compiler flag)
- `config.cmake` - CMake format configuration

## RTK Demo Applications

The project includes three RTK demo applications:

### 1. Single Demo (Default)
**Path:** `../lvgl_v9/rtk/demos/single_demo/`

A collection of individual demos for testing specific features. Includes:

**Official LVGL Demos:**
- `lv_demo_benchmark()` - Performance testing
- `lv_demo_widgets()` - Widget showcase
- `lv_demo_music()` - Music player UI
- `lv_demo_stress()` - Stress testing

**RTK Extension Demos:**
- `rtk_demo_card()` - Card widget demonstration
- `rtk_demo_cellular()` - Cellular widget UI
- `rtk_demo_tileview_slide()` - Tileview with slide animations
- `rtk_demo_tileview_slide_snapshot()` - 2.5D tileview with snapshot caching
- `rtk_demo_lite3d_disc()` - Lite3D disc rendering demo

Switch demos by editing `ui_init.c` (see Method 1 above).

### 2. 410_502 LVGL Watch App
**Path:** `../lvgl_v9/rtk/demos/screen_410_502_lvgl/`

Complete smartwatch application built with LVGL native code:
- Activity tracking screen
- Calendar view
- Control board
- Heart rate monitor
- Music player
- Weather display
- Custom tile slide effects
- 3D butterfly and face animations

### 3. 410_502 SquareLine Watch App
**Path:** `../lvgl_v9/rtk/demos/screen_410_502_squareline/`

Complete smartwatch application designed with SquareLine Studio:
- Pre-built UI components
- Professional design layout
- Ready-to-use screens
- Optimized for embedded devices

## Build Systems

### SCons (Primary)
```bash
scons                # Build
scons -c             # Clean
```

### CMake
```bash
mkdir build
cd build
cmake ../ -G "MinGW Makefiles"
cmake --build .
```

### VSCode
Open `win32_sim.code-workspace` and use the build tasks.

## Project Structure
```
win32_sim/
|-- main.c                    # Entry point
|-- port/                     # Platform abstraction layer
|   +-- lvgl_port/           # LVGL display/input drivers
|-- menuconfig.bat           # Kconfig configuration tool
|-- Kconfig                  # Kconfig definitions
|-- .config                  # Generated configuration
+-- autoconfig.h             # Generated C header

../lvgl_v9/rtk/
|-- demos/
|   |-- single_demo/         # Individual demo collection
|   |-- screen_410_502_lvgl/ # Watch UI (LVGL)
|   +-- screen_410_502_squareline/ # Watch UI (SquareLine)
+-- widgets/                 # RTK custom widgets
```

## Configuration Tips

- **Fast iteration:** Use Method 1 (edit `ui_init.c`) to quickly switch between demos in Single Demo app
- **Switch app:** Use Method 2 (Kconfig) to select different RTK demo applications
- **Single Demo only:** Method 1 only works when "GUI LVGL Simple demo" is selected in Kconfig

## Requirements

- Windows OS
- MinGW or compatible C compiler
- Python 3.x (for Kconfig tools)
- SCons build tool

## Troubleshooting

**Build errors after config change:**
```bash
scons -c      # Clean build
scons         # Rebuild
```

**Kconfig menu not working:**
- Ensure Python 3.x is installed
- Check `kconfig-mconf.exe` exists in the directory

**Demo not showing:**
- Verify demo is enabled in Kconfig
- Check `ui_init.c` has the correct demo uncommented
- Rebuild after changes