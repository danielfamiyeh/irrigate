#include "Screen.h"

void Screen::setup() {
  _lcd.init();
  _lcd.backlight();
};
void Screen::loop() {};
void Screen::line(char *string, uint8_t line) { _lcd.setCursor(0, line); }