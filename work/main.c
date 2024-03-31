// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_NOMES 333
// #define MAX_TAM_NOME 100

// int compararNomes(const void *a, const void *b) {
//     return strcmp(*(const char **)a, *(const char **)b);
// }

// int main() {
//     FILE *arquivoEntrada, *arquivoSaida;
//     char *nomes[MAX_NOMES];
//     char linha[MAX_TAM_NOME];
//     int numNomes = 0;

//     arquivoEntrada = fopen("arquivo.txt", "r");
//     if (arquivoEntrada == NULL) {
//         perror("Erro ao abrir o arquivo de entrada");
//         return 1;
//     }

//     while (fgets(linha, MAX_TAM_NOME, arquivoEntrada) != NULL && numNomes < MAX_NOMES) {
//         linha[strcspn(linha, "\n")] = 0;

//         nomes[numNomes] = strdup(linha);

//         if (nomes[numNomes] == NULL) {
//             perror("Erro ao alocar memória");
//             fclose(arquivoEntrada);
//             return 1;
//         }

//         numNomes++;
//     }

//     fclose(arquivoEntrada);

//     qsort(nomes, numNomes, sizeof(nomes[0]), compararNomes);

//     arquivoSaida = fopen("saida.txt", "w");
//     if (arquivoSaida == NULL) {
//         perror("Erro ao abrir o arquivo de saída");
//         return 1;
//     }

//     for (int i = 0; i < numNomes; ++i) {
//         // fprintf(arquivoSaida, "%d - %s ✅\n", i + 1, nomes[i]);
//         printf(arquivoSaida, "%d - %s ✅\n", i + 1, nomes[i]);
//         free(nomes[i]);
//     }

//     fclose(arquivoSaida);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 333
#define MAX_NAME_LENGTH 100

int compare_names(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    FILE *input_file, *output_file;
    char *names[MAX_NAMES];
    char line[MAX_NAME_LENGTH];
    int num_names = 0;

    input_file = fopen("input_file.txt", "r");
    if (input_file == NULL) {
        perror("Error opening the input file");
        return 1;
    }

    while (fgets(line, MAX_NAME_LENGTH, input_file) != NULL && num_names < MAX_NAMES) {
        line[strcspn(line, "\n")] = 0;

        names[num_names] = strdup(line);

        if (names[num_names] == NULL) {
            perror("Error allocating memory");
            fclose(input_file);
            return 1;
        }

        num_names++;
    }

    fclose(input_file);

    qsort(names, num_names, sizeof(names[0]), compare_names);

    output_file = fopen("output_file.txt", "w");
    if (output_file == NULL) {
        perror("Error opening the output file");
        return 1;
    }

    for (int i = 0; i < num_names; ++i) {
        fprintf(output_file, "%d - %s ✅\n", i + 1, names[i]);
        free(names[i]);
    }

    fclose(output_file);

    return 0;
}
