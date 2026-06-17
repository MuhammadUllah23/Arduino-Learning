#include <Arduino.h>

int red = 11;
int low = 10;
int medium = 100;
int high = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int i = 0; i < 256; i++) {
    analogWrite(red, i);
    delay(150);
  }
  // analogWrite(red, low);
  // delay(1000);

  // analogWrite(red, medium);
  // delay(1000);

  // analogWrite(red, high);
  // delay(1000);
}

