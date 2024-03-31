#include <stdio.h>
#include <stdlib.h>

typedef char *str;

int main(int argc, char *argv[])
{
  str s;
  printf("s: ");
  scanf("%s", s);
  printf("s = %s", s);

  return EXIT_SUCCESS;
}
