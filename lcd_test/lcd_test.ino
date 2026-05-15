#include <Wire.h>
#include <LiquidCrystal_I2C.h>

/**
 * LCD address: 0x3F
 * Columns: 16, Rows: 2
 * Note: For Arduino Uno, SDA is A4 and SCL is A5
 */
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();
  
  // Turn on the backlight
  lcd.backlight();
  
  // Clear any garbage data
  lcd.clear();
  
  // Set cursor to column 0, row 0 (top line)
  lcd.setCursor(0, 0);
  lcd.print("ADEKUNJO");
  
  // Optional: Set cursor to bottom line
  lcd.setCursor(0, 1);
  lcd.print("LCD TEST OK");
}

void loop() {
  // Nothing to do here for a static display
}
