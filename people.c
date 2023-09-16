#include "people.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct People
{
  char firstName[100], lastName[100];
};

struct People *fullName(char firstName[100], char lastName[100])
{
  struct People *p = malloc(sizeof(struct People));
  strncpy(p->firstName, firstName, sizeof(p->firstName) - 1);
  p->firstName[sizeof(p->firstName) - 1] = '\0'; // Certifique-se de terminar a string com '\0'

  strncpy(p->lastName, lastName, sizeof(p->lastName) - 1);
  p->lastName[sizeof(p->lastName) - 1] = '\0'; // Certifique-se de terminar a string com '\0'
  return p;
}

char* name(struct People *p1, struct People *p2) {
  // Tamanho total do nome é a soma dos tamanhos dos nomes mais um espaço para separação
  int totalSize = strlen(p1->firstName) + strlen(p1->lastName) + strlen(p2->firstName) + strlen(p2->lastName) + 3;
  
  // Aloque memória para o nome completo
  char* fullName = malloc(totalSize);
  
  // Construa o nome completo concatenando os nomes
  snprintf(fullName, totalSize, "%s %s%s %s", p1->firstName, p1->lastName, p2->firstName, p2->lastName);
  
  return fullName;
}

int main() {
  struct People* person1 = fullName("John", "Doe");
  struct People* person2 = fullName("Jane", "Smith");
  
  char* fullNameResult = name(person1, person2);
  
  printf("FUll NAME: %s\n", fullNameResult);
  
  // Libere a memória alocada
  free(person1);
  free(person2);
  free(fullNameResult);
  
  return 0;
}
