#ifndef MORSE_CODE_H
#define MORSE_CODE_H

#include <Arduino.h>

extern const int dot;
extern const int dash;
extern const int* morseAlphabet[];
extern const int morseLengths[];

void blinkLetter(char c, int pin);

#endif