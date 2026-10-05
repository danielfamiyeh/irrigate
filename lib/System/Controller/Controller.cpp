#include "Controller.h"
#include <Arduino.h>
#include <Wire.h>
#include <cstddef>

constexpr ulong BAUD_RATE = 115200UL;
constexpr ulong SDA_PIN = 21;
constexpr ulong SCL_PIN = 22;

template <std::size_t MuxChannelCount>
void Controller<MuxChannelCount>::setup() {
  Serial.begin(BAUD_RATE);
  Wire.begin(SDA_PIN, SCL_PIN);

  screen.setup();
}

template <std::size_t MuxChannelCount>
void Controller<MuxChannelCount>::loop() {
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