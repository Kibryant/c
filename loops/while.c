#include <stdio.h>

int main() {
    int n, i = 0;
    double soma = 0.0;
    
    printf("Quantos números deseja calcular a média? ");
    scanf("%d", &n);

    while (i < n) {
        double num;
        printf("Digite o %dº o número: ", i + 1);
        scanf("%lf", &num);
        soma += num;
        i++;
    }

    if (n > 0) {
        double media = soma / n;
        printf("A média dos números é: %.2lf\n", media);
    } else {
        printf("Não é possível calcular a média de 0 números.\n");
    }

    return 0;
}
