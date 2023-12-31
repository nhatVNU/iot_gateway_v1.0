#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_ICON_HUMIDITY
#define LV_ATTRIBUTE_IMG_ICON_HUMIDITY
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_ICON_HUMIDITY uint8_t icon_humidity_map[] = {
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xD0,0x00,0x00,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x70,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xF0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xF0,0x00,0x00,0x10,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x30,0x00,0x00,0xFF,0x00,0x00,0xB0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xB0,0x00,0x00,0xFF,0x00,0x00,0x30,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0x00,0x00,0xC0,0x00,0x00,0xF0,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xF0,0x00,0x00,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0x80,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x80,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xF0,0x00,0x00,0xE0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x40,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0x80,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xFF,0x00,0x00,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xC0,0x00,0x00,0xFF,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xA0,0x00,0x00,0xFF,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0x00,0x00,0x20,0x00,0x00,0xFF,0x00,0x00,0xA0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xFF,0x00,0x00,0xA0,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xD0,0x00,0x00,0xF0,0x00,0x00,0x20,0x00,0x00,0xA0,0x00,0x00,0xFF,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xA0,0x00,0x00,0xFF,0x00,0x00,0x20,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0x00,0x00,0xA0,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xF0,0x00,0x00,0xB0,0xFF,0xFF,0x00,0x00,0x00,0x80,
    0x00,0x00,0xFF,0x00,0x00,0x70,0x00,0x00,0xFF,0x00,0x00,0x80,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0xA0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xB0,0x00,0x00,0xE0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xFF,0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x74,0x00,0x00,0xF0,0x00,0x00,0xD0,0x00,0x00,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x80,0x00,0x00,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x40,0x00,0x00,0xFF,0x00,0x00,0x40,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xC0,0x00,0x00,0x90,0x00,0x00,0xD0,0x00,0x00,0xFF,0x00,0x00,0x4A,0x00,0x00,0x40,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0x30,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x30,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0x00,0x00,0x82,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00,0x00,0xF0,0x00,0x00,0x10,0xFF,0xFF,0x00,0x00,0x00,0x70,0x00,0x00,0xFF,0x00,0x00,0x20,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x50,0x00,0x00,0xFF,0x00,0x00,0xB0,0x00,0x00,0x80,0x00,0x00,0xFF,0x00,0x00,0xC0,0x00,0x00,0xFF,0x00,0x00,0x70,0xFF,0xFF,0x00,0x00,0x00,0x90,0x00,0x00,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xD0,0x00,0x00,0xE0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xF0,0x00,0x00,0xE0,0x00,0x00,0x10,0x00,0x00,0x80,0x00,0x00,0xFF,0x00,0x00,0xB0,0x00,0x00,0xFF,
    0x00,0x00,0x70,0xFF,0xFF,0x00,0x00,0x00,0xF0,0x00,0x00,0xB0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00,0xC0,0x00,0x00,0xFF,0x00,0x00,0x30,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00,0x00,0xF0,0x00,0x00,0x20,0x00,0x00,0x80,0x00,0x00,0xFF,0x00,0x00,0x60,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0xC0,0x00,0x00,0xFF,0x00,0x00,0x74,0x00,0x00,0x80,0x00,0x00,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x20,0x00,0x00,0x80,0x00,0x00,0x20,0x00,0x00,0x60,0x00,0x00,0xFF,0x00,0x00,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xD0,0x00,0x00,0xFF,
    0x00,0x00,0x80,0x00,0x00,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0x80,0x00,0x00,0xFF,0x00,0x00,0xD0,0x00,0x00,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x10,0x00,0x00,0xC0,0x00,0x00,0xFF,0x00,0x00,0xF0,0x00,0x00,0xA0,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0xA0,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00,0x00,0xC0,0x00,0x00,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x40,0x00,0x00,0xB0,0x00,0x00,0xF0,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xF0,0x00,0x00,0xB0,0x00,0x00,0x40,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
};

const lv_img_dsc_t icon_humidity = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 24 * 24 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = icon_humidity_map,
};
