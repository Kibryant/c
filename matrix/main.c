#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
    int rows = 3;
    int columns = 3;
    // row, column
    int matrix[rows][columns];
    // int matrix[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < columns; c++) {
            printf("%d\t", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;

}
