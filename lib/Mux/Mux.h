#pragma once

// CD74HC4067 Mux
// C0-C7 = Moisture
// C8-C15 = Temperature

#include <Arduino.h>
#include <array>
#include <cmath>
#include <sys/types.h>

#include "config.h"
#include "math.h"

struct Mux {
  int val;
  size_t numSelectPins = sizeof(MUX_SELECT_PINS) / sizeof(*MUX_SELECT_PINS);
  size_t numChannels = pow(2, numSelectPins);

  void loop() {
    for (int i = 0; i < numChannels; i++) {
      for (uint8_t bit = 0; bit < numSelectPins; ++bit) {
      }
    }
  }
};