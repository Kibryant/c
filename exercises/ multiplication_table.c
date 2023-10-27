#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {


    // int number, i;

    // printf("Enter a number for the multiplication table: ");
    // scanf("%d", &number);

    // printf("Multiplication table for %d:\n", number);

    // for (i = 1; i <= 10; i++) {
    //     printf("%d x %d = %d\n", number, i, number * i);
    // }



    int r;

    for (int i = 1; i <= 10; i++)
    {   
        printf("---------------------------\n");
        for(int j = 1; j <= 10; j++)
        {
            r = i * j;
            printf("%d x %d = %d\n", i, j, r);
        }
    }

    return 0;
    
}