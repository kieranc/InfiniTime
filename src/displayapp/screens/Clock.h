#pragma once

#include <lvgl/src/lv_core/lv_obj.h>
#include <chrono>
#include <cstdint>
#include <memory>
#include <components/heartrate/HeartRateController.h>
#include "Screen.h"
#include "components/datetime/DateTimeController.h"
#include "systemtask/SystemTask.h"

namespace Pinetime {
  namespace Controllers {
    class Settings;
    class Battery;
    class Ble;
    class NotificationManager;
    class MotionController;
    class MotorController;
  }

  namespace Applications {
    namespace Screens {
      class Clock : public Screen {
      public:
        Clock(DisplayApp* app,
              System::SystemTask& systemTask,
              Controllers::DateTime& dateTimeController,
              Controllers::Battery& batteryController,
              Controllers::Ble& bleController,
              Controllers::NotificationManager& notificatioManager,
              Controllers::Settings& settingsController,
              Controllers::HeartRateController& heartRateController,
              Controllers::MotionController& motionController,
              Controllers::MotorController& motorController);
        ~Clock() override;

        bool OnTouchEvent(TouchEvents event) override;
        bool OnButtonPushed() override;

      private:
        System::SystemTask& systemTask;
        Controllers::DateTime& dateTimeController;
        Controllers::Battery& batteryController;
        Controllers::Ble& bleController;
        Controllers::NotificationManager& notificatioManager;
        Controllers::Settings& settingsController;
        Controllers::HeartRateController& heartRateController;
        Controllers::MotionController& motionController;
        Controllers::MotorController& motorController;

        std::unique_ptr<Screen> screen;
        std::unique_ptr<Screen> WatchFaceDigitalScreen();
        std::unique_ptr<Screen> WatchFaceAnalogScreen();
        std::unique_ptr<Screen> WatchFaceFuzzyScreen();
        std::unique_ptr<Screen> PineTimeStyleScreen();
      };
    }
  }
}
