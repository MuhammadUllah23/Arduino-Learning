#include <Arduino.h>
struct BitPinEntry {
    int bit;
    int pin;
};

BitPinEntry bitsAndPins[] = {
    {128, 13},
    {64, 12},
    {32, 11},
    {16, 10},
    {8, 9},
    {4, 8},
    {2, 7},
    {1, 6}
};

void lightUp(int);
int searchPin(int);

void setup() {
  // put your setup code here, to run once:
  for(BitPinEntry pin : bitsAndPins){
    pinMode(pin.pin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 255; i++) {
    lightUp(i);
    delay(500);

    for(BitPinEntry pin : bitsAndPins){
      digitalWrite(pin.pin, LOW);
    }
  }
}

// put function definitions here:
void lightUp(int number) {
  for(BitPinEntry bit : bitsAndPins) {
    if(number - bit.bit >= 0){
      digitalWrite(bit.pin, HIGH);
      number = number - bit.bit;
    }
  }

}
