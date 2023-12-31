// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Keyboard1 = lv_keyboard_create(ui_Screen1);
    lv_obj_set_width(ui_Keyboard1, 321);
    lv_obj_set_height(ui_Keyboard1, 147);
    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 46);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Keyboard1, lv_color_hex(0xB3B7BB), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Keyboard1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_TextArea2 = lv_textarea_create(ui_Screen1);
    lv_obj_set_width(ui_TextArea2, 305);
    lv_obj_set_height(ui_TextArea2, 78);
    lv_obj_set_x(ui_TextArea2, 0);
    lv_obj_set_y(ui_TextArea2, -73);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextArea2, "Input...");



}
