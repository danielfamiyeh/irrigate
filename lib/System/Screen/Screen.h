#pragma once

#include <LiquidCrystal_I2C.h>

extern constexpr float SCREEN_UPDATE_DELAY_MS = 1000 / 30;

struct Screen {

  void setup();
  void loop();

  void clearLine(uint8_t line);
  void line(char *string, uint8_t line);
};