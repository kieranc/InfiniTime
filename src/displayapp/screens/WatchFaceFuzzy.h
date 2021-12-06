#pragma once

#include <lvgl/src/lv_core/lv_obj.h>
#include "Screen.h"
#include "systemtask/SystemTask.h"
#include "components/datetime/DateTimeController.h"
#include "components/motor/MotorController.h"
#include "components/motion/MotionController.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class WatchFaceFuzzy : public Screen {
      public:
        WatchFaceFuzzy(DisplayApp* app,
          System::SystemTask& systemTask,
          Controllers::DateTime& dateTimeController,
          Controllers::MotorController& motorController,
          Controllers::MotionController& motionController);
        ~WatchFaceFuzzy() override;
        void Refresh() override;

      private:
        System::SystemTask& systemTask;
        Controllers::DateTime& dateTimeController;
        Controllers::MotorController& motorController;
        Controllers::MotionController& motionController;
        lv_task_t* taskRefresh;
        lv_obj_t *fuzzyLabel;
        lv_obj_t *digitalView, *digitalViewLine, *timeLabel, *dateLabel;
        lv_point_t digitalViewLinePoints[2] {{0, 1}, {239, 1}};
        const char* timeAccent = "ffffff";
        static const char* timeSectors[12];
        static const char* hourNames[12];
        int32_t isDigitalView = 0;
        uint32_t lastTickCount;
        uint32_t digitalViewDuration = 5 * 1024; // [ticks]
      };
    }
  }
}
