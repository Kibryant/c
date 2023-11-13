#include <stdlib.h>
#include <stdio.h>

int main() {
    int n = 4; 
    int *ages;

    ages = (int *) malloc(n * sizeof(int));

    printf("Enter ages values:\n");
    for(int i = 0; i < n; ++i) {
      scanf("%d", ages + i);
    }

    n = 6;

    ages = realloc (ages, n * sizeof(int));

    ages[4] = 32;
    ages[5] = 59;

    printf("Ages Values\n");
    for(int i = 0; i < n; ++i) {
      printf("%d\n", *(ages + i));
    }

    free(ages);

    return 0;
}