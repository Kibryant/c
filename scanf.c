#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
  #define amar "amar"
  printf("%s\n", amar);

  char name[20];
  int year, number1, number2, soma;
  int long newYear;
  float floatNumber = 0.0;
  float nota;

  nota = 7.1;

  if(nota >= 7.0){
    printf("NOTA: %f\n", nota);
  }

  char arthur[7] = "arthur";
  printf("%s\n", arthur);

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

  if(soma == 4) {
    printf("amor");
  }

  printf("%d\n", soma);

  return 0;
}