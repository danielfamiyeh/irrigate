#include "Screen.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void Screen::setup() {
  lcd.init();
  lcd.backlight();
};

void Screen::loop(ulong delta) {
  if (delta < SCREEN_UPDATE_DELAY_MS)
    return;
};

void Screen::line(char *string, uint8_t line) {
  lcd.setCursor(0, line);
  lcd.print(string);
}

void Screen::clearLine(uint8_t line) {
  lcd.setCursor(0, line);
  lcd.print("                ");
  lcd.setCursor(0, line);
}