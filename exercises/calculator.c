#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
    int selector;
    float number_1, number_2;
    float result;
    
    printf("Enter 1 to add:\n");
    printf("Enter 2 to subtract:\n");
    printf("Enter 3 to divide:\n");
    printf("Enter 4 to multiplicate:\n");
    scanf("%d", &selector);

    printf("Enter the first number: ");
    scanf("%f", &number_1);

    printf("Enter the second number: ");
    scanf("%f", &number_2);

    //  switch (selector) {
    //     case 1:
    //         result = number_1 + number_2;
    //         break;
    //     case 2:
    //         result = number_1 - number_2;
    //         break;
    //     case 3:
    //         if (number_1 != 0) {
    //             result = number_1 / number_2;
    //         } else {
    //              printf("Division by zero is invalid");
    //         }
    //         break
    //     case 4:
    //         result = number_1 * number_2;
    //         break;
    //     default:
    //         printf("Invalid selection\n");
    //         return 1;
    // }

    // printf("Result: %.2f\n", result);

    if (selector < 1 || selector > 4) {
        printf("Invalid selection\n");
        return 1;
    }

    if (selector == 1)
    {
        result = number_1 + number_2;
        printf("Result: %2.f\n", result);
        return 0;
    }
   
    if (selector == 2)
    {
        result = number_1 - number_2;
        printf("Result: %2.f\n", result);
        return 0;
    }
   
    if (selector == 3)
    {
        if (number_2 == 0)
        {
            printf("Division by zero is invalid")
            return 1;
        }
        
        result = number_1 / number_2;
        printf("Result: %2.f\n", result);
        return 0;
    }
    
    if (selector == 4)
    {
        result = number_1 * number_2;
        printf("Result: %2.f\n", result);
        return 0;
    }
    
}