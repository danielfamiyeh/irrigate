#pragma once

#include <vector>

#include "Button/Button.h"
#include "MoistureSensor/MoistureSensor.h"
#include "Mux/Mux.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "TempSensor/TempSensor.h"

using namespace std;

typedef uint8_t PlantIdx;

struct ControllerSensors {
  TempSensors temperature;
  MoistureSensors moisture;
};

struct ControllerButtons {
  Button changePlant{};
  Button releaseWater{};
};

template <size_t MuxChannelCount = 16> struct Controller {
  Screen screen;
  Plants plants;
  PlantIdx plantIdx;
  Mux mux;
  ControllerSensors sensors;
  ControllerButtons buttons;
  ulong tick;

  void setup() {
    Serial.begin(BAUD_RATE);
    Wire.begin(SDA_PIN, SCL_PIN);

    screen.setup();
  }

  void loop() {
    ulong now = millis();
    ulong delta = now - tick;

    for (size_t i; i < plants.size(); i++) {
      sensors.temperature[i].loop(delta);
      sensors.moisture[i].loop(delta);
    }

    screen.loop(delta);

    tick = now;
  }
};