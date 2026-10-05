#pragma once

#include <vector>

#include "Button/Button.h"
#include "MoistureSensor/MoistureSensor.h"
#include "Mux/Mux.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "TempSensor/TempSensor.h"

using namespace std;

constexpr uint8_t CHANGE_PLANT_BUTTON_PIN = 18;
constexpr uint8_t RELEASE_WATER_BUTTON_PIN = 18;

typedef uint8_t PlantIdx;

template <size_t MuxChannelCount> struct Controller {
  Screen screen;
  Plants plants;
  PlantIdx plantIdx;
  Mux mux;
  ControllerSensors sensors;
  TempSensors tempSensors;
  MoistureSensors moistureSensors;
  ulong tick;

  void setup();
  void loop();
};

struct ControllerSensors {
  vector<TempSensor> temperature;
  vector<MoistureSensor> moisture;
};

struct ControllerButtons {
  Button changePlant{CHANGE_PLANT_BUTTON_PIN};
  Button releaseWater{RELEASE_WATER_BUTTON_PIN};
};