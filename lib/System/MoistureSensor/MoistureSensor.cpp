#include "MoistureSensor.h"

bool MoistureSensor::needsWater() {
  return MoistureSensor::val < MoistureSensor::min;
}