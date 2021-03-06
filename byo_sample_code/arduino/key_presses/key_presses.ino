#include "Keyboard.h"
#include "Keypad.h"

// Uncomment the following code for 6 Key (V2.5)
/*
const byte ROWS = 3;
const byte COLUMNS = 2;

char keys[ROWS][COLUMNS] = {
    {'1', '4'},
    {'2', '5'},
    {'3', '6'},
};

byte rowPins[ROWS] = {11, 12, 13};
byte colPins[COLUMNS] = {9, 10};
*/

// Uncomment the following code for 9 Key (V2.6)
/* 
const byte ROWS = 3;
const byte COLUMNS = 3;

char keys[ROWS][COLUMNS] = {
    {'1', '4', '7'},
    {'2', '5', '8'},
    {'3', '6', '9'},
};

byte rowPins[ROWS] = {11, 12, 13};
byte colPins[COLUMNS] = {10, 9, 7};
*/

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLUMNS);

void setup()
{
    Keyboard.begin();
}

void loop()
{
    char key = keypad.getKey();
    if (key)
    {
        Keyboard.print(key);
        Keyboard.releaseAll();
        delay(100);
    }
}