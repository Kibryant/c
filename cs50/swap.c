#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, char *argv[])
{
  int x = 1;
  int y = 2;
 
  printf("x=%i y=%i\n", x, y);
  swap(&x, &y);
  printf("x=%i, y=%i\n", x, y);

  return EXIT_SUCCESS;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
