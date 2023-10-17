#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *string1 = NULL;
    char *string2 = NULL;

    printf("Enter the first string: ");
    scanf(" %m[^\n]", &string1);
    fflush(stdin);

    printf("Enter the second string: ");
    scanf(" %m[^\n]", &string2);
    fflush(stdin);

    int result = strcmp(string1, string2);

    if (result < 0) {
        printf("'%s' comes before '%s'\n", string1, string2);
    } else if (result > 0) {
        printf("'%s' comes after '%s'\n", string1, string2);
    } else {
        printf("'%s' and '%s' are equal\n", string1, string2);
    }

    free(string1);
    free(string2);

    return 0;
}
