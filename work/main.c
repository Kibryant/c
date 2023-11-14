#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 333
#define MAX_TAM_NOME 100

int compararNomes(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char *nomes[MAX_NOMES];
    char linha[MAX_TAM_NOME];
    int numNomes = 0;

    arquivoEntrada = fopen("arquivo.txt", "r");
    if (arquivoEntrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    while (fgets(linha, MAX_TAM_NOME, arquivoEntrada) != NULL && numNomes < MAX_NOMES) {
        linha[strcspn(linha, "\n")] = 0;

        nomes[numNomes] = strdup(linha);

        if (nomes[numNomes] == NULL) {
            perror("Erro ao alocar memória");
            fclose(arquivoEntrada);
            return 1;
        }

        numNomes++;
    }

    fclose(arquivoEntrada);

    qsort(nomes, numNomes, sizeof(nomes[0]), compararNomes);

    arquivoSaida = fopen("saida.txt", "w");
    if (arquivoSaida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        return 1;
    }

    for (int i = 0; i < numNomes; ++i) {
        // fprintf(arquivoSaida, "%d - %s ✅\n", i + 1, nomes[i]);
        printf(arquivoSaida, "%d - %s ✅\n", i + 1, nomes[i]);
        free(nomes[i]);
    }

    fclose(arquivoSaida);

    return 0;
}
