#pragma once

#include <lvgl/src/lv_core/lv_obj.h>
#include <chrono>
#include <cstdint>
#include <memory>
#include "Screen.h"
#include "ScreenList.h"
#include "components/datetime/DateTimeController.h"

namespace Pinetime {
  namespace Controllers {
    class Settings;
  }

  namespace Applications {
    namespace Screens {

      class AwesomeFace : public Screen {
      public:
        AwesomeFace(DisplayApp* app,
                         Controllers::DateTime& dateTimeController,
                         Controllers::Settings& settingsController);
        ~AwesomeFace() override;

        bool Refresh() override;

        void OnObjectEvent(lv_obj_t* pObj, lv_event_t i);

      private:
        char displayedChar[5];

        uint16_t currentYear = 1970;
        Pinetime::Controllers::DateTime::Months currentMonth = Pinetime::Controllers::DateTime::Months::Unknown;
        Pinetime::Controllers::DateTime::Days currentDayOfWeek = Pinetime::Controllers::DateTime::Days::Unknown;
        uint8_t currentDay = 0;

        DirtyValue<std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>> currentDateTime {};


        lv_obj_t* label_time;
        lv_obj_t* label_date;
        lv_obj_t* backgroundLabel;
        lv_obj_t* bgimg;
        
        Controllers::DateTime& dateTimeController;
        Controllers::Settings& settingsController;
      };
    }
  }
}
