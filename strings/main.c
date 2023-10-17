#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// string === vectors char
// 10 characters === 11 characters because \n
int main() {
    char s[10], a[10];
    printf("Type something:\n");
    scanf("%s", s); // Using %10s to read a maximum of 10 characters
    fflush(stdin); // Good practice, function Clear, stdin === keyboard
    printf("Result: %s\n\n", s);

    printf("Type one more:\n");
    scanf(" %9[^\n]", a);
    printf("Result: %s\n\n", a);
    fflush(stdin); // Good practice

    return 0;
}


