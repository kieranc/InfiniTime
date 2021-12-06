#include "components/motion/MotionController.h"

using namespace Pinetime::Controllers;

void MotionController::Update(int16_t x, int16_t y, int16_t z, uint32_t nbSteps) {
  if (this->nbSteps != nbSteps && service != nullptr) {
    service->OnNewStepCountValue(nbSteps);
  }

  if(service != nullptr && (this->x != x || this->y != y || this->z != z)) {
    service->OnNewMotionValues(x, y, z);
  }

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
bool MotionController::Shaken(uint32_t sinceLastCall) {
  static int16_t shakeStart = y;
  shakeTimer += sinceLastCall;
  if (shakeTimer < shakeSpeed) {
    if ((shakeState == 0 && y > shakeStart + shakeThreshold) ||
        (shakeState == 1 && y < shakeStart)) {
      shakeState += 1;
      shakeTimer = 0;
    } else if (shakeState == 2 && y > shakeStart + shakeThreshold) {
      shakeState = 0;
      shakeTimer = 0;
      return true;
    }
  } else {
    shakeState = 0;
    shakeStart = y;
    shakeTimer = 0;
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
void MotionController::SetService(Pinetime::Controllers::MotionService* service) {
  this->service = service;
}
