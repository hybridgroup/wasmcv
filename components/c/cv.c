// Generated by `wit-bindgen` 0.32.0. DO NOT EDIT!
#include "cv.h"
#include <stdlib.h>
#include <string.h>

// Imported Functions from `wasm:cv/mat`

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[static]mat.new-mat")))
extern int32_t __wasm_import_wasm_cv_mat_static_mat_new_mat(void);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[static]mat.new-mat-with-size")))
extern int32_t __wasm_import_wasm_cv_mat_static_mat_new_mat_with_size(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.clone")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_clone(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.close")))
extern void __wasm_import_wasm_cv_mat_method_mat_close(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.cols")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_cols(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.rows")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_rows(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.region")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_region(int32_t, int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.copy-to")))
extern void __wasm_import_wasm_cv_mat_method_mat_copy_to(int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.mattype")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_mattype(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.size")))
extern void __wasm_import_wasm_cv_mat_method_mat_size(int32_t, uint8_t *);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.empty")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_empty(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.get-float-at")))
extern float __wasm_import_wasm_cv_mat_method_mat_get_float_at(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.set-float-at")))
extern void __wasm_import_wasm_cv_mat_method_mat_set_float_at(int32_t, int32_t, int32_t, float);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.get-uchar-at")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_get_uchar_at(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.set-uchar-at")))
extern void __wasm_import_wasm_cv_mat_method_mat_set_uchar_at(int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.reshape")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_reshape(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.row-range")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_row_range(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.col-range")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_col_range(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.min-max-loc")))
extern void __wasm_import_wasm_cv_mat_method_mat_min_max_loc(int32_t, uint8_t *);

// Imported Functions from `wasm:cv/net`

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[constructor]layer")))
extern int32_t __wasm_import_wasm_cv_net_constructor_layer(void);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]layer.get-name")))
extern void __wasm_import_wasm_cv_net_method_layer_get_name(int32_t, uint8_t *);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[static]net.read-net")))
extern int32_t __wasm_import_wasm_cv_net_static_net_read_net(uint8_t *, size_t, uint8_t *, size_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[static]net.read-net-from-onnx")))
extern int32_t __wasm_import_wasm_cv_net_static_net_read_net_from_onnx(uint8_t *, size_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.close")))
extern void __wasm_import_wasm_cv_net_method_net_close(int32_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.empty")))
extern int32_t __wasm_import_wasm_cv_net_method_net_empty(int32_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.set-input")))
extern void __wasm_import_wasm_cv_net_method_net_set_input(int32_t, int32_t, uint8_t *, size_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.forward")))
extern int32_t __wasm_import_wasm_cv_net_method_net_forward(int32_t, uint8_t *, size_t);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.get-unconnected-out-layers")))
extern void __wasm_import_wasm_cv_net_method_net_get_unconnected_out_layers(int32_t, uint8_t *);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.get-layer-names")))
extern void __wasm_import_wasm_cv_net_method_net_get_layer_names(int32_t, uint8_t *);

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[method]net.get-layer")))
extern int32_t __wasm_import_wasm_cv_net_method_net_get_layer(int32_t, int32_t);

// Imported Functions from `cv`

__attribute__((__import_module__("$root"), __import_name__("rectangle")))
extern void __wasm_import_cv_rectangle(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("put-text")))
extern void __wasm_import_cv_put_text(int32_t, uint8_t *, size_t, int32_t, int32_t, int32_t, double, int32_t, int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("adaptive-threshold")))
extern int32_t __wasm_import_cv_adaptive_threshold(int32_t, float, int32_t, int32_t, int32_t, float);

__attribute__((__import_module__("$root"), __import_name__("blur")))
extern int32_t __wasm_import_cv_blur(int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("box-filter")))
extern int32_t __wasm_import_cv_box_filter(int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("gaussian-blur")))
extern int32_t __wasm_import_cv_gaussian_blur(int32_t, int32_t, int32_t, float, float, int32_t);

__attribute__((__import_module__("$root"), __import_name__("threshold")))
extern int32_t __wasm_import_cv_threshold(int32_t, float, float, int32_t);

__attribute__((__import_module__("$root"), __import_name__("transpose-nd")))
extern int32_t __wasm_import_cv_transpose_nd(int32_t, uint8_t *, size_t);

__attribute__((__import_module__("$root"), __import_name__("blob-from-image")))
extern int32_t __wasm_import_cv_blob_from_image(int32_t, float, int32_t, int32_t, float, float, float, float, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("blob-from-image-with-params")))
extern int32_t __wasm_import_cv_blob_from_image_with_params(int32_t, float, int32_t, int32_t, float, float, float, float, int32_t, int32_t, int32_t, int32_t, float, float, float, float);

__attribute__((__import_module__("$root"), __import_name__("blob-rects-to-image-rects")))
extern void __wasm_import_cv_blob_rects_to_image_rects(uint8_t *, uint8_t *);

__attribute__((__import_module__("$root"), __import_name__("nms-boxes")))
extern void __wasm_import_cv_nms_boxes(uint8_t *, size_t, uint8_t *, size_t, float, float, uint8_t *);

// Exported Functions from `wasm:cv/request`


// Canonical ABI intrinsics

__attribute__((__weak__, __export_name__("cabi_realloc")))
void *cabi_realloc(void *ptr, size_t old_size, size_t align, size_t new_size) {
  (void) old_size;
  if (new_size == 0) return (void*) align;
  void *ret = realloc(ptr, new_size);
  if (!ret) abort();
  return ret;
}

// Helper Functions

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[resource-drop]mat")))
extern void __wasm_import_wasm_cv_mat_mat_drop(int32_t handle);

void wasm_cv_mat_mat_drop_own(wasm_cv_mat_own_mat_t handle) {
  __wasm_import_wasm_cv_mat_mat_drop(handle.__handle);
}

wasm_cv_mat_borrow_mat_t wasm_cv_mat_borrow_mat(wasm_cv_mat_own_mat_t arg) {
  return (wasm_cv_mat_borrow_mat_t) { arg.__handle };
}

void cv_list_u32_free(cv_list_u32_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    uint32_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
    }
    free(list_ptr);
  }
}

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[resource-drop]layer")))
extern void __wasm_import_wasm_cv_net_layer_drop(int32_t handle);

void wasm_cv_net_layer_drop_own(wasm_cv_net_own_layer_t handle) {
  __wasm_import_wasm_cv_net_layer_drop(handle.__handle);
}

wasm_cv_net_borrow_layer_t wasm_cv_net_borrow_layer(wasm_cv_net_own_layer_t arg) {
  return (wasm_cv_net_borrow_layer_t) { arg.__handle };
}

__attribute__((__import_module__("wasm:cv/net"), __import_name__("[resource-drop]net")))
extern void __wasm_import_wasm_cv_net_net_drop(int32_t handle);

void wasm_cv_net_net_drop_own(wasm_cv_net_own_net_t handle) {
  __wasm_import_wasm_cv_net_net_drop(handle.__handle);
}

wasm_cv_net_borrow_net_t wasm_cv_net_borrow_net(wasm_cv_net_own_net_t arg) {
  return (wasm_cv_net_borrow_net_t) { arg.__handle };
}

void cv_list_string_free(cv_list_string_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    cv_string_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
      cv_string_free(&list_ptr[i]);
    }
    free(list_ptr);
  }
}

void cv_list_s32_free(cv_list_s32_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    int32_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
    }
    free(list_ptr);
  }
}

void cv_list_rect_free(cv_list_rect_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    cv_rect_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
    }
    free(list_ptr);
  }
}

void cv_list_f32_free(cv_list_f32_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    float *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
    }
    free(list_ptr);
  }
}

void cv_string_set(cv_string_t *ret, const char*s) {
  ret->ptr = (uint8_t*) s;
  ret->len = strlen(s);
}

void cv_string_dup(cv_string_t *ret, const char*s) {
  ret->len = strlen(s);
  ret->ptr = (uint8_t*) cabi_realloc(NULL, 0, 1, ret->len * 1);
  memcpy(ret->ptr, s, ret->len * 1);
}

void cv_string_free(cv_string_t *ret) {
  if (ret->len > 0) {
    free(ret->ptr);
  }
  ret->ptr = NULL;
  ret->len = 0;
}

// Component Adapters

wasm_cv_mat_own_mat_t wasm_cv_mat_static_mat_new_mat(void) {
  int32_t ret = __wasm_import_wasm_cv_mat_static_mat_new_mat();
  return (wasm_cv_mat_own_mat_t) { ret };
}

wasm_cv_mat_own_mat_t wasm_cv_mat_static_mat_new_mat_with_size(uint32_t cols, uint32_t rows, wasm_cv_mat_mattype_t mattype) {
  int32_t ret = __wasm_import_wasm_cv_mat_static_mat_new_mat_with_size((int32_t) (cols), (int32_t) (rows), (int32_t) mattype);
  return (wasm_cv_mat_own_mat_t) { ret };
}

wasm_cv_mat_own_mat_t wasm_cv_mat_method_mat_clone(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_clone((self).__handle);
  return (wasm_cv_mat_own_mat_t) { ret };
}

void wasm_cv_mat_method_mat_close(wasm_cv_mat_borrow_mat_t self) {
  __wasm_import_wasm_cv_mat_method_mat_close((self).__handle);
}

uint32_t wasm_cv_mat_method_mat_cols(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_cols((self).__handle);
  return (uint32_t) (ret);
}

uint32_t wasm_cv_mat_method_mat_rows(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_rows((self).__handle);
  return (uint32_t) (ret);
}

wasm_cv_mat_own_mat_t wasm_cv_mat_method_mat_region(wasm_cv_mat_borrow_mat_t self, wasm_cv_mat_rect_t *rect) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_region((self).__handle, ((*rect).min).x, ((*rect).min).y, ((*rect).max).x, ((*rect).max).y);
  return (wasm_cv_mat_own_mat_t) { ret };
}

void wasm_cv_mat_method_mat_copy_to(wasm_cv_mat_borrow_mat_t self, wasm_cv_mat_own_mat_t dst) {
  __wasm_import_wasm_cv_mat_method_mat_copy_to((self).__handle, (dst).__handle);
}

wasm_cv_mat_mattype_t wasm_cv_mat_method_mat_mattype(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_mattype((self).__handle);
  return ret;
}

void wasm_cv_mat_method_mat_size(wasm_cv_mat_borrow_mat_t self, cv_list_u32_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasm_cv_mat_method_mat_size((self).__handle, ptr);
  *ret = (cv_list_u32_t) { (uint32_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

bool wasm_cv_mat_method_mat_empty(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_empty((self).__handle);
  return ret;
}

float wasm_cv_mat_method_mat_get_float_at(wasm_cv_mat_borrow_mat_t self, uint32_t row, uint32_t col) {
  float ret = __wasm_import_wasm_cv_mat_method_mat_get_float_at((self).__handle, (int32_t) (row), (int32_t) (col));
  return ret;
}

void wasm_cv_mat_method_mat_set_float_at(wasm_cv_mat_borrow_mat_t self, uint32_t row, uint32_t col, float val) {
  __wasm_import_wasm_cv_mat_method_mat_set_float_at((self).__handle, (int32_t) (row), (int32_t) (col), val);
}

uint8_t wasm_cv_mat_method_mat_get_uchar_at(wasm_cv_mat_borrow_mat_t self, uint32_t row, uint32_t col) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_get_uchar_at((self).__handle, (int32_t) (row), (int32_t) (col));
  return (uint8_t) (ret);
}

void wasm_cv_mat_method_mat_set_uchar_at(wasm_cv_mat_borrow_mat_t self, uint32_t row, uint32_t col, uint8_t val) {
  __wasm_import_wasm_cv_mat_method_mat_set_uchar_at((self).__handle, (int32_t) (row), (int32_t) (col), (int32_t) (val));
}

wasm_cv_mat_own_mat_t wasm_cv_mat_method_mat_reshape(wasm_cv_mat_borrow_mat_t self, uint32_t channels, uint32_t rows) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_reshape((self).__handle, (int32_t) (channels), (int32_t) (rows));
  return (wasm_cv_mat_own_mat_t) { ret };
}

wasm_cv_mat_own_mat_t wasm_cv_mat_method_mat_row_range(wasm_cv_mat_borrow_mat_t self, uint32_t start, uint32_t end) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_row_range((self).__handle, (int32_t) (start), (int32_t) (end));
  return (wasm_cv_mat_own_mat_t) { ret };
}

wasm_cv_mat_own_mat_t wasm_cv_mat_method_mat_col_range(wasm_cv_mat_borrow_mat_t self, uint32_t start, uint32_t end) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_col_range((self).__handle, (int32_t) (start), (int32_t) (end));
  return (wasm_cv_mat_own_mat_t) { ret };
}

void wasm_cv_mat_method_mat_min_max_loc(wasm_cv_mat_borrow_mat_t self, wasm_cv_mat_mix_max_loc_result_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[24];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasm_cv_mat_method_mat_min_max_loc((self).__handle, ptr);
  *ret = (wasm_cv_types_mix_max_loc_result_t) {
    (float) *((float*) (ptr + 0)),
    (float) *((float*) (ptr + 4)),
    (wasm_cv_types_size_t) (wasm_cv_types_size_t) {
      (int32_t) *((int32_t*) (ptr + 8)),
      (int32_t) *((int32_t*) (ptr + 12)),
    },
    (wasm_cv_types_size_t) (wasm_cv_types_size_t) {
      (int32_t) *((int32_t*) (ptr + 16)),
      (int32_t) *((int32_t*) (ptr + 20)),
    },
  };
}

wasm_cv_net_own_layer_t wasm_cv_net_constructor_layer(void) {
  int32_t ret = __wasm_import_wasm_cv_net_constructor_layer();
  return (wasm_cv_net_own_layer_t) { ret };
}

void wasm_cv_net_method_layer_get_name(wasm_cv_net_borrow_layer_t self, cv_string_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasm_cv_net_method_layer_get_name((self).__handle, ptr);
  *ret = (cv_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

wasm_cv_net_own_net_t wasm_cv_net_static_net_read_net(cv_string_t *model, cv_string_t *config) {
  int32_t ret = __wasm_import_wasm_cv_net_static_net_read_net((uint8_t *) (*model).ptr, (*model).len, (uint8_t *) (*config).ptr, (*config).len);
  return (wasm_cv_net_own_net_t) { ret };
}

wasm_cv_net_own_net_t wasm_cv_net_static_net_read_net_from_onnx(cv_string_t *model) {
  int32_t ret = __wasm_import_wasm_cv_net_static_net_read_net_from_onnx((uint8_t *) (*model).ptr, (*model).len);
  return (wasm_cv_net_own_net_t) { ret };
}

void wasm_cv_net_method_net_close(wasm_cv_net_borrow_net_t self) {
  __wasm_import_wasm_cv_net_method_net_close((self).__handle);
}

bool wasm_cv_net_method_net_empty(wasm_cv_net_borrow_net_t self) {
  int32_t ret = __wasm_import_wasm_cv_net_method_net_empty((self).__handle);
  return ret;
}

void wasm_cv_net_method_net_set_input(wasm_cv_net_borrow_net_t self, wasm_cv_net_own_mat_t input, cv_string_t *name) {
  __wasm_import_wasm_cv_net_method_net_set_input((self).__handle, (input).__handle, (uint8_t *) (*name).ptr, (*name).len);
}

wasm_cv_net_own_mat_t wasm_cv_net_method_net_forward(wasm_cv_net_borrow_net_t self, cv_string_t *output_name) {
  int32_t ret = __wasm_import_wasm_cv_net_method_net_forward((self).__handle, (uint8_t *) (*output_name).ptr, (*output_name).len);
  return (wasm_cv_net_own_mat_t) { ret };
}

void wasm_cv_net_method_net_get_unconnected_out_layers(wasm_cv_net_borrow_net_t self, cv_list_u32_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasm_cv_net_method_net_get_unconnected_out_layers((self).__handle, ptr);
  *ret = (cv_list_u32_t) { (uint32_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

void wasm_cv_net_method_net_get_layer_names(wasm_cv_net_borrow_net_t self, cv_list_string_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasm_cv_net_method_net_get_layer_names((self).__handle, ptr);
  *ret = (cv_list_string_t) { (cv_string_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

wasm_cv_net_own_layer_t wasm_cv_net_method_net_get_layer(wasm_cv_net_borrow_net_t self, uint32_t id) {
  int32_t ret = __wasm_import_wasm_cv_net_method_net_get_layer((self).__handle, (int32_t) (id));
  return (wasm_cv_net_own_layer_t) { ret };
}

void cv_rectangle(cv_own_mat_t img, cv_rect_t *r, cv_rgba_t *c, uint8_t thickness) {
  __wasm_import_cv_rectangle((img).__handle, ((*r).min).x, ((*r).min).y, ((*r).max).x, ((*r).max).y, (int32_t) ((*c).r), (int32_t) ((*c).g), (int32_t) ((*c).b), (int32_t) ((*c).a), (int32_t) (thickness));
}

void cv_put_text(cv_own_mat_t img, cv_string_t *text, cv_size_t *org, cv_hershey_font_type_t font_face, double font_scale, cv_rgba_t *c, int32_t thickness) {
  __wasm_import_cv_put_text((img).__handle, (uint8_t *) (*text).ptr, (*text).len, (*org).x, (*org).y, (int32_t) font_face, font_scale, (int32_t) ((*c).r), (int32_t) ((*c).g), (int32_t) ((*c).b), (int32_t) ((*c).a), thickness);
}

cv_own_mat_t cv_adaptive_threshold(cv_own_mat_t src, float max_value, cv_adaptive_threshold_type_t adaptive_type, cv_threshold_type_t threshold_type, uint32_t block_size, float c) {
  int32_t ret = __wasm_import_cv_adaptive_threshold((src).__handle, max_value, (int32_t) adaptive_type, (int32_t) threshold_type, (int32_t) (block_size), c);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_blur(cv_own_mat_t src, cv_size_t *k_size) {
  int32_t ret = __wasm_import_cv_blur((src).__handle, (*k_size).x, (*k_size).y);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_box_filter(cv_own_mat_t src, uint32_t depth, cv_size_t *k_size) {
  int32_t ret = __wasm_import_cv_box_filter((src).__handle, (int32_t) (depth), (*k_size).x, (*k_size).y);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_gaussian_blur(cv_own_mat_t src, cv_size_t *size, float sigma_x, float sigma_y, cv_border_type_t border) {
  int32_t ret = __wasm_import_cv_gaussian_blur((src).__handle, (*size).x, (*size).y, sigma_x, sigma_y, (int32_t) border);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_threshold(cv_own_mat_t src, float thresh, float max_value, cv_threshold_type_t threshold_type) {
  int32_t ret = __wasm_import_cv_threshold((src).__handle, thresh, max_value, (int32_t) threshold_type);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_transpose_nd(cv_own_mat_t src, cv_list_s32_t *order) {
  int32_t ret = __wasm_import_cv_transpose_nd((src).__handle, (uint8_t *) (*order).ptr, (*order).len);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_blob_from_image(cv_own_mat_t image, float scale_factor, cv_size_t *size, cv_scalar_t *mean, bool swap_rb, bool crop) {
  int32_t ret = __wasm_import_cv_blob_from_image((image).__handle, scale_factor, (*size).x, (*size).y, (*mean).val1, (*mean).val2, (*mean).val3, (*mean).val4, swap_rb, crop);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_blob_from_image_with_params(cv_own_mat_t image, cv_blob_params_t *params) {
  int32_t ret = __wasm_import_cv_blob_from_image_with_params((image).__handle, (*params).scale_factor, ((*params).size).x, ((*params).size).y, ((*params).mean).val1, ((*params).mean).val2, ((*params).mean).val3, ((*params).mean).val4, (*params).swap_rb, (int32_t) ((*params).ddepth), (int32_t) (*params).data_layout, (int32_t) (*params).padding_mode, ((*params).border).val1, ((*params).border).val2, ((*params).border).val3, ((*params).border).val4);
  return (cv_own_mat_t) { ret };
}

void cv_blob_rects_to_image_rects(cv_blob_params_t *params, cv_list_rect_t *blob_rects, cv_size_t *image_size, cv_list_rect_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[64];
  uint8_t *ptr = (uint8_t *) &ret_area;
  *((float*)(ptr + 0)) = (*params).scale_factor;
  *((int32_t*)(ptr + 4)) = ((*params).size).x;
  *((int32_t*)(ptr + 8)) = ((*params).size).y;
  *((float*)(ptr + 12)) = ((*params).mean).val1;
  *((float*)(ptr + 16)) = ((*params).mean).val2;
  *((float*)(ptr + 20)) = ((*params).mean).val3;
  *((float*)(ptr + 24)) = ((*params).mean).val4;
  *((int8_t*)(ptr + 28)) = (*params).swap_rb;
  *((int8_t*)(ptr + 29)) = (int32_t) ((*params).ddepth);
  *((int8_t*)(ptr + 30)) = (int32_t) (*params).data_layout;
  *((int8_t*)(ptr + 31)) = (int32_t) (*params).padding_mode;
  *((float*)(ptr + 32)) = ((*params).border).val1;
  *((float*)(ptr + 36)) = ((*params).border).val2;
  *((float*)(ptr + 40)) = ((*params).border).val3;
  *((float*)(ptr + 44)) = ((*params).border).val4;
  *((size_t*)(ptr + 52)) = (*blob_rects).len;
  *((uint8_t **)(ptr + 48)) = (uint8_t *) (*blob_rects).ptr;
  *((int32_t*)(ptr + 56)) = (*image_size).x;
  *((int32_t*)(ptr + 60)) = (*image_size).y;
  uint8_t *ptr0 = (uint8_t *) &ret_area;
  __wasm_import_cv_blob_rects_to_image_rects(ptr, ptr0);
  *ret = (cv_list_rect_t) { (cv_rect_t*)(*((uint8_t **) (ptr0 + 0))), (*((size_t*) (ptr0 + 4))) };
}

void cv_nms_boxes(cv_list_rect_t *bboxes, cv_list_f32_t *scores, float score_threshold, float nms_threshold, cv_list_s32_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_cv_nms_boxes((uint8_t *) (*bboxes).ptr, (*bboxes).len, (uint8_t *) (*scores).ptr, (*scores).len, score_threshold, nms_threshold, ptr);
  *ret = (cv_list_s32_t) { (int32_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

__attribute__((__export_name__("wasm:cv/request#process")))
int32_t __wasm_export_exports_wasm_cv_request_process(int32_t arg) {
  exports_wasm_cv_request_own_mat_t ret = exports_wasm_cv_request_process((exports_wasm_cv_request_own_mat_t) { arg });
  return (ret).__handle;
}

// Ensure that the *_component_type.o object is linked in

extern void __component_type_object_force_link_cv(void);
void __component_type_object_force_link_cv_public_use_in_this_compilation_unit(void) {
  __component_type_object_force_link_cv();
}
