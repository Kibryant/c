#include <stdio.h>

int main(int argc, char *argv[])
{  
  int numbers[] = {4, 6, 8, 9};
    
  if(argc != 2)
  {
      printf("Usage: ./main.c <name>\n");
      return 1;
  }

  printf("Hello, %s\n", argv[1]);
  printf("Number of arguments: %d\n", argc);
  return 0;
}
