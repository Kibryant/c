#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;
    
    printf("Quantos números deseja calcular a média? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Não é possível calcular a média de 0 números ou menos.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        double num;
        printf("Digite o %do número: ", i);
        scanf("%lf", &num);
        soma += num;
    }

    double media = soma / n;
    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
