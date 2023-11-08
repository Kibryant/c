#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float* multiplication_of_two_numbers(float* x, float* y, float* result) {
    *result = *x * *y;

    return result;
}

int main()
{
    float x, y;
    float multiply;
    float *result;
    x = 13;
    y = 9;
    result = multiplication_of_two_numbers(&x, &y, &multiply);

    printf("%.2f\n", *result);

    return 0;
}

// #include <stdio.h>

// int* multiplication (int* a, int* b, int* c) {
//     *c = *a * *b;
//     return c;
// }

// int main() {
    
//     int num1 = 13;
//     int num2 = 9;
//     int multiple;
    
//     int* result = multiplication(&num1, &num2, &multiple);
    
//     printf("The multiplication is: %d", *result);
    
//     return 0;
// }
