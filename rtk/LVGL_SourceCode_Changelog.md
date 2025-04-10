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

#### Date: YYYY-MM-DD

#### Author: [Author's Name]

- **Change Reason**: Briefly describe the reason for the change.
- **Modified Files**:
  - `path/to/another_modified_file.c`
- **Modified APIs**:
  - `int yet_another_function(double arg)`

#### Description

A detailed description of the changes made, potential impacts on the system, and any other relevant information.

---
