#include <stdio.h>
#include <stdlib.h>

typedef char *string;

int main(int argc, char *argv[])
{
  int number = 50;
  int *pointer = &number;

  string s = "arthur";
  string pointer_string = &s[0];
  
  printf("%s\n", s);
  printf("%s\n", pointer_string);

  printf("%p", pointer);
  return EXIT_SUCCESS;
}
