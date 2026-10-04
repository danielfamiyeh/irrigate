#pragma once

#include <LiquidCrystal_I2C.h>

struct Screen {

  void setup();
  void loop();

  void clearLine(uint8_t line);
  void line(char *string, uint8_t line);
};