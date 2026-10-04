#pragma once

#include "MoistureSensor/MoistureSensor.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "TempSensor/TempSensor.h"

struct System {
  Plant *plants;
  Screen *screen;
  TempSensor *tempSensors;
  MoistureSensor *moistureSensors;

  void setup();
  void loop();
};