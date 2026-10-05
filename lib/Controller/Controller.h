#pragma once

#include <Arduino.h>
#include <Wire.h>
#include <vector>

#include "config.h"

#include "Button.h"
#include "MoistureSensor.h"
#include "Mux.h"
#include "Plant.h"
#include "Screen.h"
#include "TempSensor.h"

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