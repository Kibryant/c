#include <stdio.h>

int main() {
    int rows;
    int i, k;

    printf("Digite o número de linhas do triângulo: ");
    scanf("%d", &rows);
  // &rows acessa o endereço na mémoria;

    for (i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
