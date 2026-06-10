#include "MorseCode.h"
#include <Arduino.h>

const int dot = 100;
const int dash = 500;
const int letterBreak = 500;

const int A[] = {dot, dash};
const int B[] = {dash, dot, dot, dot};
const int C[] = {dash, dot, dash, dot};
const int D[] = {dash, dot, dot};
const int E[] = {dot};
const int F[] = {dot, dot, dash, dot};
const int G[] = {dash, dash, dot};
const int H[] = {dot, dot, dot, dot};
const int I[] = {dot, dot};
const int J[] = {dot, dash, dash, dash};
const int K[] = {dash, dot, dash};
const int L[] = {dot, dash, dot, dot};
const int M[] = {dash, dash};
const int N[] = {dash, dot};
const int O[] = {dash, dash, dash};
const int P[] = {dot, dash, dash, dot};
const int Q[] = {dash, dash, dot, dash};
const int R[] = {dot, dash, dot};
const int S[] = {dot, dot, dot};
const int T[] = {dash};
const int U[] = {dot, dot, dash};
const int V[] = {dot, dot, dot, dash};
const int W[] = {dot, dash, dash};
const int X[] = {dash, dot, dot, dash};
const int Y[] = {dash, dot, dash, dash};
const int Z[] = {dash, dash, dot, dot};

const int* morseAlphabet[] = {
  A, B, C, D, E, F, G, H, I, J, K, L, M,
  N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};

const int morseLengths[] = {
  2, 4, 4, 3, 1, 4, 3, 4, 2, 4, 3, 4, 2,
  2, 3, 4, 4, 3, 3, 1, 3, 4, 3, 4, 4, 4
};

void blinkLetter(char c, int pin) {
  if (c < 'A' || c > 'Z') return;
  int index = c - 'A';
  const int* pattern = morseAlphabet[index];
  int len = morseLengths[index];

  for (int i = 0; i < len; i++) {
    digitalWrite(pin, HIGH);
    delay(pattern[i]);
    digitalWrite(pin, LOW);
    if (i != len - 1) {
      delay(dot);
    }
  }
}