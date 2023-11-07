#include <stdio.h>
#include <string.h>

int main()
{   
    char food1[20];
    char food2[20];

    printf("Enter a food 1: ");
    fgets(food1, sizeof(food1), stdin);

    printf("Enter a food 2: ");
    fgets(food2, sizeof(food2), stdin);

    if(strlen(food1) > strlen(food2)) {
        printf("The biggest lenght is food1: %s\n", food1);
    }  else {
        printf("The biggest lenght is food2: %s\n", food2);
    }
    
    return 0;
}
