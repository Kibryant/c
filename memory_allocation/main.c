#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int n = 5;
  
  int *ptr;

  ptr = (int*) malloc(n * sizeof(int));

  if (ptr == NULL) {
      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Enter input values:\n");
  for(int i = 0; i < n; ++i) {
      scanf("%d", ptr + i);
  }

  printf("Input Values\n");
  for(int i = 0; i < n; ++i) {
      printf("%d\n", *(ptr + i));
  }

  free(ptr);

  return 0;
}