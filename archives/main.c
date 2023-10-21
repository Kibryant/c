#include "soma.c"
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    int x = 5;
    int y = 3;
    int result = soma(x, y);

    printf("Sum: %d + %d = %d\n", x, y, result);

    return 0;
}