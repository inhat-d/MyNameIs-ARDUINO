#include <LiquidCrystal_I2C.h>  // This library must be installed (via IDE or browser - it doesn't matter)
#include <Wire.h>  // Additional library

LiquidCrystal_I2C lcd(0x27, 16, 2);  // ATTENTION - Some I2Cs have 
                                     // different addresses. Use the I2C Adress scanner to prevent errors
                                     // Also, sizes of your LCD can be not same as my

void setup()
{
  lcd.init();  // initialization
  lcd.backlight(); // USe this command for text visibility
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("My name is:");  //First line
  lcd.setCursor(0, 1);
  lcd.print("What?");  // Stop using clear :)
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("Who?  ");  // Additional spaces have been added to overlap the previous text
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("Chka-chka");
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("Slim shady");
  delay(2000);
  lcd.clear();
  delay(2000);  // And repeat. Thx for visisting m repo :*
  
}

// I'm not profecional in C/C++. I'll be glad if you fork and insert something. Thanks
