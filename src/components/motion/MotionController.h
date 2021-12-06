#pragma once

#include <cstdint>
#include <drivers/Bma421.h>
#include <components/ble/MotionService.h>

namespace Pinetime {
  namespace Controllers {
    class MotionController {
    public:
      enum class DeviceTypes{
        Unknown,
        BMA421,
        BMA425,
      };

      void Update(int16_t x, int16_t y, int16_t z, uint32_t nbSteps);

      int16_t X() const {
        return x;
      }
      int16_t Y() const {
        return y;
      }
      int16_t Z() const {
        return z;
      }
      uint32_t NbSteps() const {
        return nbSteps;
      }
      bool ShouldWakeUp(bool isSleeping);
      bool Shaken(uint32_t sinceLastCall);

    
      bool Should_ShakeWake(uint16_t thresh);
      bool Should_RaiseWake(bool isSleeping);
      int32_t currentShakeSpeed();
      void IsSensorOk(bool isOk);
      bool IsSensorOk() const {
        return isSensorOk;
      }

      DeviceTypes DeviceType() const {
        return deviceType;
      }

      void Init(Pinetime::Drivers::Bma421::DeviceTypes types);
      void SetService(Pinetime::Controllers::MotionService* service);

    private:
      uint32_t nbSteps;
      int16_t x;
      int16_t y;
      int16_t z;
      int16_t lastYForWakeUp = 0;
      bool isSensorOk = false;
      uint8_t shakeState = 0;
      /* Minimum value to be considered a positive wrist turn.
       * Higher requires a higher wrist turn */
      int16_t shakeThreshold = 512;
      /* Lower requires a quicker shake */
      uint32_t shakeSpeed = 300; // [ticks]
      uint32_t shakeTimer = 0;
      DeviceTypes deviceType = DeviceTypes::Unknown;
      Pinetime::Controllers::MotionService* service = nullptr;

      int16_t lastXForShake = 0;
      int16_t lastYForShake = 0;
      int16_t lastZForShake = 0;
      int32_t accumulatedspeed = 0;
      uint32_t lastShakeTime = 0;
    };
  }
}
