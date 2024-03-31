#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[] = {4, 3, 6, 8, 9, 0};

  printf("%i\n", *numbers);
  printf("%i\n", *(numbers + 1));
  printf("%i\n", *(numbers + 2));
  printf("%i\n", *(numbers + 3));  

  return EXIT_SUCCESS;
}
