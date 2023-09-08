#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
  char name[20];
  int year, number1, number2, soma;

  printf("Digite seu nome: ");
  scanf("%s", name);
  printf("Seu nome é: %s\n", name);
  printf("Seu ano de nascimento: ");
  scanf("%d", &year);
  printf("Digite um número: ");
  scanf("%d", &number1);
  printf("Digite outro número: ");
  scanf("%d", &number2);
  soma = number1 + number2;
  printf("%d\n", soma);

  return 0;
}