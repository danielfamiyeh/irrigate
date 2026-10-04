#pragma once

#include <vector>

#include "MoistureSensor/MoistureSensor.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "TempSensor/TempSensor.h"

using namespace std;

typedef vector<Plant> Plants;
typedef vector<TempSensor> TempSensors;
typedef vector<MoistureSensor> MoistureSensors;

struct System {
  Screen *screen;
  Plants plants;
  SystemSensors sensors;
  TempSensors tempSensors;
  MoistureSensors moistureSensors;

  void setup();
  void loop();
};

struct SystemSensors {
  vector<TempSensor> temperature;
  vector<MoistureSensor> moisture;
};