#pragma once

#include <cstdint>
#include <lvgl/lvgl.h>
#include "components/settings/Settings.h"
#include "displayapp/screens/Screen.h"

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class SettingColor : public Screen{
        public:
          SettingColor(DisplayApp* app, Pinetime::Controllers::Settings &settingsController);
          ~SettingColor() override;

          void UpdateSelected(lv_obj_t *object, lv_event_t event);
         
        private:          
          Controllers::Settings& settingsController;

          Pinetime::Controllers::Settings::Colors GetNext(Controllers::Settings::Colors color);
          Pinetime::Controllers::Settings::Colors GetPrevious(Controllers::Settings::Colors color);

          lv_obj_t * btnNextList;
          lv_obj_t * btnPrevList;
          lv_obj_t * btnNextTile;
          lv_obj_t * btnPrevTile;
          lv_obj_t * btnOpacity;
          lv_obj_t * btnReset;
         // lv_obj_t * listColor;
          //lv_obj_t * listColorM;
          lv_obj_t * theme1p1;
          lv_obj_t * theme1p1m;
          lv_obj_t * theme1p2;
          lv_obj_t * theme1p2m;
          lv_obj_t * theme1p3;
          lv_obj_t * theme1p3m;
          lv_obj_t * theme2p1;
          lv_obj_t * theme2p1m;
          lv_obj_t * theme2p2;
          lv_obj_t * theme2p2m;
          lv_obj_t * theme2p3;
          lv_obj_t * theme2p3m;
          lv_obj_t * theme3p1;
          lv_obj_t * theme3p1m;
          lv_obj_t * theme3p2;
          lv_obj_t * theme3p2m;
          lv_obj_t * theme3p3;
          lv_obj_t * theme3p3m;
          lv_obj_t * tileColor;
          lv_obj_t * labelTheme1;
          lv_obj_t * labelTheme2;
          lv_obj_t * labelTheme3;
          lv_obj_t * labelIcon1;
          lv_obj_t * labelIcon2;
          lv_obj_t * labelIcon3;
          lv_obj_t * backgroundLabel;
          //lv_draw_mask_line_param_t * mask1;
      };
    }
  }
}