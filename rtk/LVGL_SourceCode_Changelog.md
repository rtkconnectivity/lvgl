# Changelog

#### Date: 2025-04-10

#### Author: [luke_sun]

- **Change Reason**: fix image draw wtih matrix by ppe.
- **Modified Files**:
  - `src\misc\lv_matrix.c`
- **Modified APIs**:
  - `lv_point_precise_t lv_matrix_transform_precise_point(const lv_matrix_t * matrix, const lv_point_precise_t * point)`

#### Description

Use homogeneous coordinates to transform point.
PR: <https://github.com/lvgl/lvgl/pull/7960>

---

#### Date: 2025-04-14

#### Author: [astor_zhang, wenjing_jiang, luke_sun]

- **Change Reason**: add PPE/IDU init into lvgl_init.
- **Modified Files**:
  - `src\lv_init.c`
- **Modified APIs**:
  - `void lv_init(void)`

#### Description

Add PPE initialization and SW IDU decoder initialization during LVGL initialization, depending on the macros in the config file.

---
