#include <stdio.h>

int main() {

  double a = 5.67;
  int b = 9;

  double result = (int)a + b;
  double result2 = (double)a / b;

  printf("%lf", result);
  return 0;
}