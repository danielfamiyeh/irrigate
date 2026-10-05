// DS18B20 Waterproof Temperature Sensor
#pragma once
#include <sys/types.h>
#include <vector>

extern constexpr ulong TEMP_SENSOR_DELAY_MS = 1000;

struct TempSensor {
  uint8_t pin;
  ulong val;
  ulong max;
  ulong min;
};

typedef std::vector<TempSensor> TempSensors;