#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *list = malloc(3 * sizeof(int));

  if (list == NULL) {
    return EXIT_FAILURE;
  }

  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  for (int i = 0; i < 3; i++) {
    printf("%i\n", list[i]);  
  }

  int *temp = malloc(4 * sizeof(int));

  for (int i = 0; i < 3; i++) {
    temp[i] = list[i];
  }
  
  temp[3] = 4;
  
  free(list); 
  
  list = temp;

  for (int i = 0; i < 4; i++) {
    printf("%i", list[i]);
  }

  free(list);

  return EXIT_SUCCESS;
}
