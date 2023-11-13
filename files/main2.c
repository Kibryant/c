#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("newFile.txt", "w");

    fputs("Hello, world!", fptr);
    fputs("\nHello, Niggas!", fptr);

    fclose(fptr);

    return 0;
}
