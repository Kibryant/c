#include <stdio.h>

int main() {

  int age = 10;
  printf("%d", age);

  double number = 12.45;
  printf("%lf", number);

  printf("%.2lf", number);

  float number1 = 10.9f;

  printf("%.2lf", number);
  printf("\n%f", number1);  

  printf("%.2lf", number);
  printf("\n%.1f", number1);  

  double numberExponential = 5.5e6;
  printf("%lf", numberExponential);

  char character = 'z';
  printf("%c", character);

  int age;
  double numberSize;

  printf("int size = %zu", sizeof (age));
  printf("\ndouble size = %zu", sizeof(numberSize));
  
  return 0;
}