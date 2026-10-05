#pragma once
#include <sys/types.h>
#include <vector>

extern constexpr ulong MOISTURE_SENSOR_DELAY_MS = 1500;

struct MoistureSensor {
  uint8_t pin;
  ulong val;
  ulong min;
  ulong max;

  bool needsWater();
};

typedef std::vector<MoistureSensor> MoistureSensors;
