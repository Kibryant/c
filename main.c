#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
 
void f2(char hello[]) {
  printf("from f2: %p\n", &hello);
  printf("%s\n", hello);
  // &hello acessa o endereço na mémoria;
}

void f1(char hello[]) {
  printf("from f1: %p\n", &hello);
  f2(hello);
}

struct Person
{
  char name[10];
  uint8_t age;
  uint8_t height;
};

void main(){
  char hello[] = "Hello World!";
  printf("from main: %p\n", &hello);
  f1(hello);

  char *hello2 = malloc(sizeof(hello));
  strcpy(hello2, hello); // CÓPIA A STRING (a copia, o copiado)
  printf("hello 2: %x\n", hello2);

  char *hello3 = hello2 + 6; // Pega apenas a palavra word; hello2[6] === hello2 + 6
  printf("hello 2: %s\n", hello2);
  printf("hello 3: %s\n", hello3);

  struct Person person;
  strcpy(person.name, "Arthur");
  person.age = 18;
  person.height = 91;
  printf("from person: %p\n", &person);


  return;
}