#include <Arduino.h>

int pin = 13;
int dot = 100;
int dash = 500;
int letterBreak = 500;
int wordBreak = 1000;

void letterS();
void letterO();

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  letterS();
  delay(letterBreak);
  letterO();
  delay(letterBreak);
  letterS();
  delay(wordBreak);
}

void letterS() {
  for(int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(dot);
    digitalWrite(pin, LOW);
    if(i != 2) {
      delay(dot);
    }
  }
}

void letterO() {
  for(int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(dash);
    digitalWrite(pin, LOW);
    if(i != 2) {
      delay(dash);
    }
  }
}

