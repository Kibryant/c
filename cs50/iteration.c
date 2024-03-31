#include <stdio.h>
#include <stdlib.h>

void draw(int height);

int main(int argc, char *argv[])
{
  int height;

  printf("Enter height of triangle: \n");
  scanf("%d", &height);
  
  draw(height);

  return EXIT_SUCCESS;
}

void draw(int height)
{

  if (height <= 0)
  {
    printf("Height must be between 1 and 8\n");
    return;
  }

  draw(height - 1);

  for (int i = 0; i < height; i++)
  {
    printf("#");
  }

  printf("\n");
}