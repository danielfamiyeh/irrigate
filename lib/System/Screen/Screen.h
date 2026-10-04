#pragma once

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

struct Screen {
  LiquidCrystal_I2C _lcd;

  void setup();
  void loop();
  void line(char *string, uint8_t line);
};