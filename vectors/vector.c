#include <stdio.h>

int main() {
    int size = 5;
    int numbers[size]; // vector
    int sum = 0;
    double average;

    for (int i = 0; i < size; i++) {
        int count = i + 1;
        printf("Enter the %dth number: ", count);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (double)sum / size;

    printf("Entered numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nAverage of the numbers: %.2lf\n", average);

    // float media;

    // v[0] = 1;
    // v[1] = 2;
    // v[2] = 3;
    // v[3] = 4;
    // v[4] = 0;

    // media = (v[0] + v[1] + v[2] + v[3] + v[4]) /  5;

    // printf("%.2lf\n", media);

    return 0;
}