#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Todo: Finish
calculate_area_equilateral_triangle(float side) {
    float area = (side * side * sqrt(3)) / 4;

    return area;
}

float calculate_area_koch_snowflake(float side, int interators) {
    if (interators == 0) {
        return calculate_area_equilateral_triangle(side);
    }

    float areaFlocoKoch = calculate_area_equilateral_triangle(side);
    double controller = side * 3;
    for (int i = 0; i < interators; i++) {
        float new_side = 1.0 / 3 * side;
        controller = controller + (new_side * 3);
        printf("AAAAAAAAAAAAAAAAA: %lf\n", controller);
        float area_small_triangle = calculate_area_equilateral_triangle(new_side);
        printf("%f\n", area_small_triangle);
        areaFlocoKoch += area_small_triangle;
    }
    return areaFlocoKoch;

}


int main()
{   
    float result = calculate_area_koch_snowflake(4.0, 5);
    printf("Result: %.2f\n", result);
    return 0;
}

