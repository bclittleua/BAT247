// C++ code
//
/*
  LiquidCrystal Library - Hello World.
  Demonstrates the use of a 16x2 LCD display.
  The LiquidCrystal library works with all LCD
  displays that are compatible with the  Hitachi
  HD44780 driver. There are many of them out
  there, and you  can usually tell them by the
  16-pin interface.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  Materials:
  * small breadboard
  * variable resistor, 10k
  * 220 Ohm fixed resistor
  * Arduino Uno

  The circuit:
  * LCD RS pin to digital pin 12
  * LCD Enable pin to digital pin 11
  * LCD D4 pin to digital pin 5
  * LCD D5 pin to digital pin 4
  * LCD D6 pin to digital pin 3
  * LCD D7 pin to digital pin 2
  * LCD R/W pin to ground
  * LCD VSS pin to ground
  * LCD VCC pin to 5V
  * 10K variable resistor/potentiometer:
  * ends to +5V and ground
  * wiper to LCD VO pin (pin 3)
  * LED anode tied to +rail w/ a 220 Ohm fixed resistor
  
  Only unused pins: DB0-DB3

  Library originally added 18 Apr 2008  by David A. Mellis
  modified 22 Nov 2010  by Tom Igoe

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/

#include <LiquidCrystal.h>
int seconds = 0;
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.
  lcd_1.print("hello world!");// Print a message to the LCD.
}

void loop()
{
  // set the cursor to column 0, line 1 (note: line 1 is the second row, since counting begins with 0):
  lcd_1.setCursor(0, 1);
  lcd_1.print(seconds);   // print the number of seconds since reset
  delay(1000); // Wait for 1000 millisecond(s)
  seconds += 1;
}
