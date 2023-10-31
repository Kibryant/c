#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define number_of_rows 3
#define number_of_columns 3

void find_item_in_matrix(int x, int matrix[3][3]){
    int r, c;
    int count = 0;
    for(r = 0; r < number_of_rows; r++) {
        for(c = 0; c < number_of_columns; c++){
            if(matrix[r][c] == x){
                printf("Founded! %d in matrix, %d times, position: [%d, %d]\n", x, count ,r + 1, c + 1);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("Not found!\n");
    }
}
                

int main() {

    int matrix[number_of_rows][number_of_columns];
    int data_of_user;

    int r, c;
    for(r = 0; r < number_of_rows; r++){
        for(c = 0; c < number_of_columns; c++){
            printf("Enter data into the matrix[%d][%d]: ", r + 1, c + 1);
            scanf("%d", &data_of_user);
            matrix[r][c] = data_of_user;
        }
    }

    find_item_in_matrix(3, matrix);
    return 0;
}