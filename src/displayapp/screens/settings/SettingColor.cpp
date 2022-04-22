#include "displayapp/screens/settings/SettingColor.h"
#include <lvgl/lvgl.h>
#include "displayapp/Colors.h"
#include "displayapp/DisplayApp.h"
#include "displayapp/screens/Symbols.h"

using namespace Pinetime::Applications::Screens;
/*
namespace {
  static void event_handler(lv_obj_t* obj, lv_event_t event) {
    SettingColor* screen = static_cast<SettingColor*>(obj->user_data);
    screen->UpdateSelected(obj, event);
  }
}
*/
SettingColor::SettingColor(Pinetime::Applications::DisplayApp* app, Pinetime::Controllers::Settings& settingsController)
  : Screen(app), settingsController {settingsController} {
//Theme1P1
  theme1p1m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme1p1m, 220, 60);
  lv_obj_align(theme1p1m, lv_scr_act(), LV_ALIGN_CENTER, 0, -80);

  lv_draw_mask_line_param_t theme1m1;
  lv_draw_mask_line_points_init(&theme1m1, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme1p1m, &theme1m1);

  theme1p1 = lv_obj_create(theme1p1m, theme1p1m);
  lv_obj_align(theme1p1, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme1p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x19e3b1));
  lv_obj_set_style_local_bg_opa(theme1p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme1p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);
//Theme1P2
  theme1p2m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme1p2m, 220, 60);
  lv_obj_align(theme1p2m, lv_scr_act(), LV_ALIGN_CENTER, 0, -80);

  lv_draw_mask_line_param_t theme1m2;
  lv_draw_mask_line_param_t theme1m3;

  lv_draw_mask_line_points_init(&theme1m2, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_draw_mask_line_points_init(&theme1m3, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme1p2m, &theme1m2);
  lv_objmask_add_mask(theme1p2m, &theme1m3);

  theme1p2 = lv_obj_create(theme1p2m, theme1p2m);
  lv_obj_align(theme1p2, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme1p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xf5f6f3));
  lv_obj_set_style_local_bg_opa(theme1p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme1p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);

//Theme1P3
  theme1p3m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme1p3m, 220, 60);
  lv_obj_align(theme1p3m, lv_scr_act(), LV_ALIGN_CENTER, 0, -80);

  lv_draw_mask_line_param_t theme1m4;
  lv_draw_mask_line_points_init(&theme1m4, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_objmask_add_mask(theme1p3m, &theme1m4);

  theme1p3 = lv_obj_create(theme1p3m, theme1p3m);
  lv_obj_align(theme1p3, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme1p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x0236fb));
  lv_obj_set_style_local_bg_opa(theme1p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme1p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);

//Theme2P1
  theme2p1m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme2p1m, 220, 60);
  lv_obj_align(theme2p1m, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);

  lv_draw_mask_line_param_t theme2m1;
  lv_draw_mask_line_points_init(&theme2m1, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme2p1m, &theme2m1);

  theme2p1 = lv_obj_create(theme2p1m, theme2p1m);
  lv_obj_align(theme2p1, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme2p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x81d7ce));
  lv_obj_set_style_local_bg_opa(theme2p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme2p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);
//Theme2P2
  theme2p2m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme2p2m, 220, 60);
  lv_obj_align(theme2p2m, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);

  lv_draw_mask_line_param_t theme2m2;
  lv_draw_mask_line_param_t theme2m3;

  lv_draw_mask_line_points_init(&theme2m2, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_draw_mask_line_points_init(&theme2m3, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme2p2m, &theme2m2);
  lv_objmask_add_mask(theme2p2m, &theme2m3);

  theme2p2 = lv_obj_create(theme2p2m, theme2p2m);
  lv_obj_align(theme2p2, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme2p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xa2a1a1));
  lv_obj_set_style_local_bg_opa(theme2p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme2p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);

//Theme2P3
  theme2p3m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme2p3m, 220, 60);
  lv_obj_align(theme2p3m, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);

  lv_draw_mask_line_param_t theme2m4;
  lv_draw_mask_line_points_init(&theme2m4, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_objmask_add_mask(theme2p3m, &theme2m4);

  theme2p3 = lv_obj_create(theme2p3m, theme2p3m);
  lv_obj_align(theme2p3, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme2p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xf35162));
  lv_obj_set_style_local_bg_opa(theme2p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme2p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);

  //Theme3P1
  theme3p1m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme3p1m, 220, 60);
  lv_obj_align(theme3p1m, lv_scr_act(), LV_ALIGN_CENTER, 0, 80);

  lv_draw_mask_line_param_t theme3m1;
  lv_draw_mask_line_points_init(&theme3m1, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme3p1m, &theme3m1);

  theme3p1 = lv_obj_create(theme3p1m, theme3p1m);
  lv_obj_align(theme3p1, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme3p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xf0bd3c));
  lv_obj_set_style_local_bg_opa(theme3p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme3p1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);
//Theme3P2
  theme3p2m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme3p2m, 220, 60);
  lv_obj_align(theme3p2m, lv_scr_act(), LV_ALIGN_CENTER, 0, 80);

  lv_draw_mask_line_param_t theme3m2;
  lv_draw_mask_line_param_t theme3m3;

  lv_draw_mask_line_points_init(&theme3m2, 140, 0, 130, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_draw_mask_line_points_init(&theme3m3, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_LEFT);
  lv_objmask_add_mask(theme3p2m, &theme3m2);
  lv_objmask_add_mask(theme3p2m, &theme3m3);

  theme3p2 = lv_obj_create(theme3p2m, theme3p2m);
  lv_obj_align(theme3p2, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme3p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xe8e9eb));
  lv_obj_set_style_local_bg_opa(theme3p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme3p2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);

//Theme3P3
  theme3p3m = lv_objmask_create(lv_scr_act(), nullptr);
  lv_obj_set_size(theme3p3m, 220, 60);
  lv_obj_align(theme3p3m, lv_scr_act(), LV_ALIGN_CENTER, 0, 80);

  lv_draw_mask_line_param_t theme3m4;
  lv_draw_mask_line_points_init(&theme3m4, 160, 0, 150, 60, LV_DRAW_MASK_LINE_SIDE_RIGHT);
  lv_objmask_add_mask(theme3p3m, &theme3m4);

  theme3p3 = lv_obj_create(theme3p3m, theme3p3m);
  lv_obj_align(theme3p3, nullptr, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_style_local_bg_color(theme3p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x009ecb));
  lv_obj_set_style_local_bg_opa(theme3p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
  lv_obj_set_style_local_radius(theme3p3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);
/*
  tileColor = lv_obj_create(lv_scr_act(), nullptr);
  lv_obj_set_style_local_bg_color(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(settingsController.GetColorTile()));
  lv_obj_set_style_local_bg_opa(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, settingsController.GetOpacity());
  lv_obj_set_style_local_radius(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 15);
  lv_obj_set_size(tileColor, 220, 60);
  lv_obj_align(tileColor, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);
*/
  backgroundLabel = lv_label_create(lv_scr_act(), nullptr);
  lv_obj_set_click(backgroundLabel, true);
  lv_label_set_long_mode(backgroundLabel, LV_LABEL_LONG_CROP);
  lv_obj_set_size(backgroundLabel, 240, 240);
  lv_obj_set_pos(backgroundLabel, 0, 0);
  lv_label_set_text(backgroundLabel, "");
/*
  btnNextList = lv_btn_create(lv_scr_act(), nullptr);
  btnNextList->user_data = this;
  lv_obj_set_size(btnNextList, 110, 60);
  lv_obj_align(btnNextList, lv_scr_act(), LV_ALIGN_IN_RIGHT_MID, -10, -80);
  lv_obj_set_style_local_bg_opa(btnNextList, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0);
  lv_obj_set_style_local_value_str(btnNextList, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "    >");
  lv_obj_set_event_cb(btnNextList, event_handler);

  btnPrevList = lv_btn_create(lv_scr_act(), nullptr);
  btnPrevList->user_data = this;
  lv_obj_set_size(btnPrevList, 110, 60);
  lv_obj_align(btnPrevList, lv_scr_act(), LV_ALIGN_IN_LEFT_MID, 10, -80);
  lv_obj_set_style_local_bg_opa(btnPrevList, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0);
  lv_obj_set_style_local_value_str(btnPrevList, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "<    ");
  lv_obj_set_event_cb(btnPrevList, event_handler);
*/
  labelTheme1 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelTheme1, "Theme 1");
  lv_obj_align(labelTheme1, lv_scr_act(), LV_ALIGN_CENTER, -40, -80);

  labelTheme2 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelTheme2, "Theme 2");
  lv_obj_align(labelTheme2, lv_scr_act(), LV_ALIGN_CENTER, -40, 0);

  labelTheme3 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelTheme3, "Theme 3");
  lv_obj_align(labelTheme3, lv_scr_act(), LV_ALIGN_CENTER, -40, 80);

  labelIcon1 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelIcon1, Symbols::paintbrush);
  lv_obj_align(labelIcon1, lv_scr_act(), LV_ALIGN_CENTER, 80, -80);

  labelIcon2 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelIcon2, Symbols::paintbrush);
  lv_obj_align(labelIcon2, lv_scr_act(), LV_ALIGN_CENTER, 80, 0);

  labelIcon3 = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(labelIcon3, Symbols::paintbrush);
  lv_obj_align(labelIcon3, lv_scr_act(), LV_ALIGN_CENTER, 80, 80);
/*
  btnNextTile = lv_btn_create(lv_scr_act(), nullptr);
  btnNextTile->user_data = this;
  lv_obj_set_size(btnNextTile, 110, 60);
  lv_obj_align(btnNextTile, lv_scr_act(), LV_ALIGN_IN_RIGHT_MID, -10, 0);
  lv_obj_set_style_local_bg_opa(btnNextTile, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0);
  lv_obj_set_style_local_value_str(btnNextTile, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "    >");
  lv_obj_set_event_cb(btnNextTile, event_handler);

  btnPrevTile = lv_btn_create(lv_scr_act(), nullptr);
  btnPrevTile->user_data = this;
  lv_obj_set_size(btnPrevTile, 110, 60);
  lv_obj_align(btnPrevTile, lv_scr_act(), LV_ALIGN_IN_LEFT_MID, 10, 0);
  lv_obj_set_style_local_bg_opa(btnPrevTile, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0);
  lv_obj_set_style_local_value_str(btnPrevTile, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "<    ");
  lv_obj_set_event_cb(btnPrevTile, event_handler);

  btnOpacity = lv_btn_create(lv_scr_act(), nullptr);
  btnOpacity->user_data = this;
  lv_obj_set_size(btnOpacity, 150, 60);
  lv_obj_align(btnOpacity, lv_scr_act(), LV_ALIGN_IN_LEFT_MID, 10, 80);
  lv_obj_set_style_local_bg_opa(btnOpacity, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_50);
  lv_obj_set_style_local_value_str(btnOpacity, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Opacity");
  lv_obj_set_event_cb(btnOpacity, event_handler);

  btnReset = lv_btn_create(lv_scr_act(), nullptr);
  btnReset->user_data = this;
  lv_obj_set_size(btnReset, 60, 60);
  lv_obj_align(btnReset, lv_scr_act(), LV_ALIGN_IN_RIGHT_MID, -10, 80);
  lv_obj_set_style_local_bg_opa(btnReset, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_50);
  lv_obj_set_style_local_value_str(btnReset, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Rst");
  lv_obj_set_event_cb(btnReset, event_handler);
*/
}

SettingColor::~SettingColor() {
  lv_obj_clean(lv_scr_act());
  settingsController.SaveSettings();
}
/*
void SettingColor::UpdateSelected(lv_obj_t* object, lv_event_t event) {
  auto valueList = settingsController.GetColorList();
  auto valueTile = settingsController.GetColorTile();
  auto valueOpacity = settingsController.GetOpacity();

  if (event == LV_EVENT_CLICKED) {
    if (object == btnNextList) {
      valueList = GetNext(valueList);
      if(valueList == Controllers::Settings::Colors::White)
        valueList = GetNext(valueList);
      if(valueList == Controllers::Settings::Colors::Black)
        valueList = GetNext(valueList);
      settingsController.SetColorList(valueList);
      lv_obj_set_style_local_bg_color(listColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(valueList));
    }
    if (object == btnPrevList) {
      valueList = GetPrevious(valueList);
      if(valueList == Controllers::Settings::Colors::White)
        valueList = GetPrevious(valueList);
      if(valueList == Controllers::Settings::Colors::Black)
        valueList = GetPrevious(valueList);
      settingsController.SetColorList(valueList);
      lv_obj_set_style_local_bg_color(listColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(valueList));
    }
    if (object == btnNextTile) {
      valueTile = GetNext(valueTile);
      if(valueTile == Controllers::Settings::Colors::White)
        valueTile = GetNext(valueTile);
      if(valueTile == Controllers::Settings::Colors::Black)
        valueTile = GetNext(valueTile);
      settingsController.SetColorTile(valueTile);
      lv_obj_set_style_local_bg_color(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(valueTile));
    }
    if (object == btnPrevTile) {
      valueTile = GetPrevious(valueTile);
      if(valueTile == Controllers::Settings::Colors::White)
        valueTile = GetPrevious(valueTile);
      if(valueTile == Controllers::Settings::Colors::Black)
        valueTile = GetPrevious(valueTile);
      settingsController.SetColorTile(valueTile);
      lv_obj_set_style_local_bg_color(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(valueTile));
    }
    if (object == btnOpacity) {
      valueOpacity = valueOpacity + 51; 
      if (valueOpacity > 255)
        valueOpacity = 51;
      settingsController.SetOpacity(valueOpacity);
      lv_obj_set_style_local_bg_opa(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, valueOpacity);
      lv_obj_set_style_local_bg_opa(listColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, valueOpacity);
    }
     if (object == btnReset) {
      settingsController.SetColorList(Controllers::Settings::Colors::Cyan);
      lv_obj_set_style_local_bg_color(listColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(Controllers::Settings::Colors::Cyan));
      settingsController.SetColorTile(Controllers::Settings::Colors::Cyan);
      lv_obj_set_style_local_bg_color(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, Convert(Controllers::Settings::Colors::Cyan));
      settingsController.SetOpacity(51);
      lv_obj_set_style_local_bg_opa(tileColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 51);
      lv_obj_set_style_local_bg_opa(listColor, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 51);
    }
  }
}
*/
Pinetime::Controllers::Settings::Colors SettingColor::GetNext(Pinetime::Controllers::Settings::Colors color) {
  auto colorAsInt = static_cast<uint8_t>(color);
  Pinetime::Controllers::Settings::Colors nextColor;
  if (colorAsInt < 16) {
    nextColor = static_cast<Controllers::Settings::Colors>(colorAsInt + 1);
  } else {
    nextColor = static_cast<Controllers::Settings::Colors>(0);
  }
  return nextColor;
}

Pinetime::Controllers::Settings::Colors SettingColor::GetPrevious(Pinetime::Controllers::Settings::Colors color) {
  auto colorAsInt = static_cast<uint8_t>(color);
  Pinetime::Controllers::Settings::Colors prevColor;

  if (colorAsInt > 0) {
    prevColor = static_cast<Controllers::Settings::Colors>(colorAsInt - 1);
  } else {
    prevColor = static_cast<Controllers::Settings::Colors>(16);
  }
  return prevColor;
}
