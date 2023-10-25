#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

int main() {
    // int n = 10; 
    
    // printf("Fibonacci,  n = %d:\n", n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", fibonacci(i));
    // }

    // printf("\n");

    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");

    return 0;
}