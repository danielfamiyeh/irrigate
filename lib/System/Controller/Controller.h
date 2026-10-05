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
constexpr uint8_t RELEASE_WATER_BUTTON_PIN = 19;

constexpr ulong BAUD_RATE = 115200UL;
constexpr ulong SDA_PIN = 21;
constexpr ulong SCL_PIN = 22;

typedef uint8_t PlantIdx;

template <size_t MuxChannelCount = 16> struct Controller {
  Screen screen;
  Plants plants;
  PlantIdx plantIdx;
  Mux mux;
  ControllerSensors sensors;
  TempSensors tempSensors;
  MoistureSensors moistureSensors;
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
      if (delta > TEMP_SENSOR_DELAY_MS) {
        sensors.temperature[i].val = analogRead(sensors.temperature[i].pin);
      }

      if (delta > MOISTURE_SENSOR_DELAY_MS) {
        sensors.moisture[i].val = analogRead(sensors.moisture[i].pin);
      }
    }

    if (delta > SCREEN_UPDATE_DELAY_MS) {
    }

    tick = now;
  }
};

struct ControllerSensors {
  vector<TempSensor> temperature;
  vector<MoistureSensor> moisture;
};

struct ControllerButtons {
  Button changePlant{CHANGE_PLANT_BUTTON_PIN};
  Button releaseWater{RELEASE_WATER_BUTTON_PIN};
};