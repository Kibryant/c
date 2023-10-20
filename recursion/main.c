#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int fact(int n) {
    if(n >= 1) {
        // recursion
        return n * fact(n - 1);
    } else {
        return 1;
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    printf("%d\n",  fact(4));

     int n = 10; 
    
    printf("Fibonacci,  n = %d:\n", n);
    for (int i = 1; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}