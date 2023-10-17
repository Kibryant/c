#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// string === vectors char
// 10 characters === 11 characters because \n

int main() {
    char s[10], a[10];
    printf("Type something:\n");
    fgets(s, sizeof(s), stdin);
    fflush(stdin); // Good practice
    puts("Result:");
    puts(s);
    puts("");

    printf("Type one more:\n");
    fgets(a, sizeof(a), stdin);
    fflush(stdin); // Good practice

    puts("Result:");
    puts(a);
    puts("");

    return 0;
}


