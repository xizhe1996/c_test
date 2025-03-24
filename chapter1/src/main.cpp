#include <stdio.h>

void trans() {
  int f, c = 0;
  int upper = 300, lower = 0, step = 20;
  f = lower;
  while (f <= upper) {
    c = 5 * (f - 32) / 9;
    printf("%3d  %6d\n", f, c);
    f += step;
  }
  return;
}

void float_trans() {
  float f, c = 0;
  int upper = 300, lower = 0, step = 20;
  f = lower;
  while (f <= upper) {
    c = (5.0 / 9.0) * (f - 32);
    printf("%3.0f  %3.2f\n", f, c);
    f += step;
  }
  return;
}

int main() {
  printf("hello, world. \n");
  trans();
  float_trans();
  return 0;
}