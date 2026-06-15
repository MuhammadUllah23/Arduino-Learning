#include <Arduino.h>

int pin4 = 13;
int pin3 = 11;
int pin2 = 9;
int pin1 = 7;

int lightUp(int);

void setup() {
  // put your setup code here, to run once:
  pinMode(pin4, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 15; i++) {
    lightUp(i);
    delay(500);
    digitalWrite(pin4, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin1, LOW);
  }
}

// put function definitions here:
int lightUp(int number) {
  if(number - 8 >= 0){
    digitalWrite(pin4, HIGH);
    number = number - 8;
  }

  if(number - 4 >= 0){
    digitalWrite(pin3, HIGH);
    number = number - 4;
  }

  if(number - 2 >= 0){
    digitalWrite(pin2, HIGH);
    number = number - 2;
  }

  if(number - 1 >= 0){
    digitalWrite(pin1, HIGH);
    number = number - 1;
  }
}