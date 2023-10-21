#include <stdlib.h>
#include <stdio.h>

int main() {
    int sum = 0;  // Inicialize a soma com zero
    int accumulate;

    for(int i = 1; i <= 4; i++) {
        printf("Type the %d number: ", i);
        scanf("%d", &accumulate);
        sum += accumulate;
    }

    printf("sum: %d\n", sum);

    return 0;
} 