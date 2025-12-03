# Changelog

### Code Base

#### Version: Release v9.4.0

<https://github.com/lvgl/lvgl/releases/tag/v9.4.0>

#### github commit link

<https://github.com/lvgl/lvgl/commit/c016f72d4c125098287be5e83c0f1abed4706ee5>

---

### `src\lv_init.c`

**Change Type**: Code Modification
**Author**: [luke_sun]
**Change Reason**: add PPE/IDU/RTK init into lvgl_init
**Modified APIs**: `void lv_init(void)`
**Description**: Add module initialization during LVGL initialization, depending on the macros in the config file.

### `lvgl.h`

**Change Type**: Code Modification
**Author**: [luke_sun]
**Change Reason**: Add new widget header file into lvgl.h
**Description**:

``` C
  #include "src/widgets/cardview/lv_cardview.h"
  #include "src/widgets/cellular/lv_cellular.h"
  #include "src/widgets/3d/lv_lite3d.h"
  #include "src/widgets/snapshot/lv_snapshot_widgets.h"
```

---

### `libs\freetype`

**Change Type**: New File
**Author**: [luke_sun]
**Change Reason**: Add support for building and compiling freetype.
**Description**: Add cmake support for freetype, and readme file.

### `env_support\cmake\zephyr.cmake`

**Change Type**: Code Modification
**Author**: [luke_sun]
**Change Reason**: Support for RTL series chips in the Zephyr SDK.
**Description**: Adjust the CMake file.

### `env_support\cmake\custom.cmake`

**Change Type**: Code Modification
**Author**: [wenjing_jiang]
**Change Reason**: Adapt to the SDK for RTL series chips.
**Description**: Adjust the CMake file.

---

### `src\draw\ppe`

**Change Type**: New File
**Author**: [astor_zhang]
**Change Reason**: Add HW GPU PPE support.
**Description**: Integrate PPE into the LVGL rendering pipeline.

### `src\draw\rtk`

**Change Type**: New File
**Author**: [luke_sun]
**Change Reason**: Add sw GPU RTK support.
**Description**: Integrate RTK into the LVGL rendering pipeline.

---

### `src\libs\avi`

**Change Type**: New File
**Author**: [roy_xie]
**Change Reason**: New feature.
**Description**: Decode avi file.

### `src\libs\jpu`

**Change Type**: New File
**Author**: [roy_xie]
**Change Reason**: Add HW JPU support.
**Description**: Decode jpeg file.

### `src\libs\Lite3D`

**Change Type**: New File
**Author**: [sienna_shen]
**Change Reason**: New feature.
**Description**: Add Lite3D support.

### `src\libs\rle`

**Change Type**: New File
**Author**: [wenjing_jiang]
**Change Reason**: Add HW IDU support.
**Description**: Decode rle file as a decoder.

---

### `src\widgets\3d`

**Change Type**: New File
**Author**: [sienna_shen]
**Change Reason**: New widget.
**Description**: Add Lite3D widget.

### `src\widgets\cardview`

**Change Type**: New File
**Author**: [luke_sun]
**Change Reason**: New widget.
**Description**: Add cardview widget.

### `src\widgets\cellular`

**Change Type**: New File
**Author**: [luke_sun]
**Change Reason**: New widget.
**Description**: Add cellular widget.

### `src\widgets\snapshot`

**Change Type**: New File
**Author**: [luke_sun]
**Change Reason**: New widget.
**Description**: Add snapshot widget.

