#include <Arduino.h>
#include <MorseCode.h>

int pin = 13;
int letterBreak = 500;
int wordBreak = 5000;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  blinkLetter('S', pin);
  delay(letterBreak);
  blinkLetter('O', pin);
  delay(letterBreak);
  blinkLetter('S', pin);
  delay(wordBreak);
}

