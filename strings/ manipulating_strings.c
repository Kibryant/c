// You cannot change stringar using =, you must copy yourself
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>

#define N 20 // constant

int main() {
    setlocale(LC_ALL, "Portuguese");

    char origin[N] = {"Hello, World!"};
    char destiny[N];

    printf("Before strcpy:\n");
    puts(origin);
    puts(destiny);

    strcpy(destiny, origin);
    printf("After strcpy:\n");
    puts(origin);
    puts(destiny);

    char first_string[N] = "Hello, ";
    char second_string[] = "world!";
    
    strcat(first_string, second_string);

    printf("Concatenated string: %s\n", first_string);

    char first_string_using_strlen[N] = "Hello, ";
    char second_string_usign_strlen[] = "world!";
    
    int length = strlen(first_string_using_strlen);
    
    for (int i = 0; second_string_usign_strlen[i] != '\0'; i++) {
        first_string_using_strlen[length + i] = second_string_usign_strlen[i];
        puts(first_string_using_strlen);
    }

    printf("Concatenated string using strlen: %s\n", first_string_using_strlen);

    return 0;
}