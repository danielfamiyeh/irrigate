#pragma once

struct MoistureSensor {
  int pin;
  int val;
  int min;

  bool needsWater();
};
