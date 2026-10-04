#pragma once

constexpr unsigned long MOISTURE_SENSOR_DELAY_MS = 1500;

struct MoistureSensor {
  int pin;
  int val;
  int min;

  bool needsWater();
};
