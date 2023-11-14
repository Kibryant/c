#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define PI 3.1415
#define circle_area(r) (PI * r * r)

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