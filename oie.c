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

int main() {
    printf("%d\n",  fact(4));

    return 0;
}