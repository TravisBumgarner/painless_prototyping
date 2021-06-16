/*
 * Setup: 
 * 1. Install Keypad Library
 *  1.1 Click Sketch -> Include Library -> Manage Libraries
 *  1.2 Search "Keypad"
 *  1.3 Install library by Mark Stanley, Alexander Brevig
 */

 /* 
  *  Useful Resources:
  *  https://www.arduino.cc/reference/en/language/functions/usb/keyboard/
  *  https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
  *  For Media Keys, check out https://github.com/NicoHood/HID 
  */

#include "Keyboard.h"
#include "Keypad.h" 

const byte ROWS = 3; 
const byte COLUMNS = 3; 

/* 
 *  The matrix below is rotated by 90 degrees 
 *  so that the top left key on the
 *  keyboard is 1.
 */
char keys[ROWS][COLUMNS] = {
  {'7', '4', '1'},
  {'8', '5', '2'},
  {'9', '6', '3'},
};

byte rowPins[ROWS] = {11,12,13};
byte colPins[COLUMNS] = {7, 9, 10};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLUMNS );

void setup() {
  Serial.begin(9600);
  Serial.println("Working...");
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    
    switch (key) {
      case '1':
        Serial.println("1");
        break;
      case '2':
        Serial.println("2");
        break;
      case '3':
        Serial.println("3");
        break;
      case '4':
        Serial.println("4");
        break;
      case '5':
        Serial.println("5");
        break;
      case '6':
        Serial.println("6");
        break;
      case '7':
        Serial.println("7");
        break;
      case '8':
        Serial.println("8");
        break;
      case '9':
        Serial.println("9");
        break;
    }
     Keyboard.releaseAll(); 
    delay(100);
  }
}
