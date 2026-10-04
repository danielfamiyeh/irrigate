// DS18B20 Waterproof Temperature Sensor
#pragma once

constexpr unsigned long TEMP_SENSOR_DELAY_MS = 1000;

struct TempSensor {
  int val;
  int max;
  int min;
};