#pragma once

namespace System {
  struct MoistureSensor {
    int pin;
    int val;
    int min;

    bool needsWater();
  };
}
