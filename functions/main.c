#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

float bigger(float first_number, float second_number) {
    if (first_number > second_number) {
        return first_number;
    } else {
        return second_number;
    }
}

int main() {
    float x, y, r;

    printf("Insert the first number: ");
    scanf("%f", &x);

    printf("Insert the second number: ");
    scanf("%f", &y);

    r = bigger(x, y);
    printf("Bigger: %2.f\n", r);

    return 0;
}