#include "MotionController.h"

using namespace Pinetime::Controllers;

void MotionController::Update(int16_t x, int16_t y, int16_t z, uint32_t nbSteps) {
  this->x = x;
  this->y = y;
  this->z = z;
  this->nbSteps = nbSteps;
}

bool MotionController::ShouldWakeUp(bool isSleeping) {
  if ((x + 335) <= 670 && z < 0) {
    if (not isSleeping) {
      if (y <= 0) {
        return false;
      } else {
        lastYForWakeUp = 0;
        return false;
      }
    }

    if (y >= 0) {
      lastYForWakeUp = 0;
      return false;
    }
    if (y + 230 < lastYForWakeUp) {
      lastYForWakeUp = y;
      return true;
    }
  }
  return false;
}

/* TODO: might need reset when stepping in a new screen */
/* TODO: reset when going to sleep */
bool MotionController::Shaken(uint32_t sinceLastCall) {
  static uint8_t shakeState = 0;
  static uint32_t shakeTime = 0;
  static int16_t shakeStart = y;
  shakeTime += sinceLastCall;
  if (shakeTime < shakeSpeed) {
    if (shakeState == 0 && y > shakeStart + shakeThreshold) {
      shakeState += 1;
      shakeTime = 0;
    } else if (shakeState == 1 && y < shakeStart) {
      shakeState += 1;
      shakeTime = 0;
    } else if (shakeState == 2 && y > shakeStart + shakeThreshold) {
      /* shakeState += 1; */
      /* shakeTime = 0; */
    /* } else if (shakeState == 3 && y < shakeStart) { */
      shakeState = 0;
      shakeTime = 0;
      return true;
    }
  } else {
    shakeState = 0;
    shakeStart = y;
    shakeTime = 0;
  }
  return false;
}

void MotionController::IsSensorOk(bool isOk) {
  isSensorOk = isOk;
}

void MotionController::Init(Pinetime::Drivers::Bma421::DeviceTypes types) {
  switch(types){
    case Drivers::Bma421::DeviceTypes::BMA421: this->deviceType = DeviceTypes::BMA421; break;
    case Drivers::Bma421::DeviceTypes::BMA425: this->deviceType = DeviceTypes::BMA425; break;
    default: this->deviceType = DeviceTypes::Unknown; break;
  }
}
