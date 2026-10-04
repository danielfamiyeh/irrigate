#pragma once

#include "MoistureSensor/MoistureSensor.h"
#include "Plant/Plant.h"
#include "TempSensor/TempSensor.h"

struct System {
  Plant *plants;
  TempSensor *tempSensors;
  MoistureSensor *moistureSensors;
};