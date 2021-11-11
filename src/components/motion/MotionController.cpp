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
  bool ret = false;

  if (x >= -384 && x <= 384 &&
      z <= 0 &&
      y <= lastYForWakeUp - 192 &&
      isSleeping) {
    ret = true;
  }

  lastYForWakeUp = (y < 0) ? y : 0;

  return ret;
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
