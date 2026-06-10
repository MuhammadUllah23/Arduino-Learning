#include <Arduino.h>

int redLED = 2;
int greenLED = 7;
int blueLED = 13;
int fastSpd = 100;
int normalSpd = 500;
int slowSpd = 750;

void redLoop();
void greenLoop();
void blueLoop();

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  blueLoop();
  greenLoop();
  redLoop();
}

void redLoop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED, HIGH);
    delay(slowSpd);
    digitalWrite(redLED, LOW);
    delay(slowSpd);
  }
}

void greenLoop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(greenLED, HIGH);
    delay(normalSpd);
    digitalWrite(greenLED, LOW);
    delay(normalSpd);
  }
}

void blueLoop() {
  for (int i = 0; i < 15; i++) {
    digitalWrite(blueLED, HIGH);
    delay(fastSpd);
    digitalWrite(blueLED, LOW);
    delay(fastSpd);
  }
}