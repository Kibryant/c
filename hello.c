#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person
{
  char name[10];
  uint8_t age;
  uint8_t height;
};

void createPerson(
  char name[],
  uint8_t age,
  uint8_t height,
  void(*function_pointer)/*o * serve como "ponteiro"*/(struct Person)
) {
  struct Person person;
  strcpy(person.name, name);
  person.age = age;
  person.height = height;

  (*function_pointer)(person);
}

void printPerson(struct Person person) {
  printf("Person: %s %d %d\n",
    person.name,
    person.age,
    person.height
  );
}


void printPersonPersonalizated(struct Person person) {
  printf("Name: %s\nAge: %d\nHeight: %d\n",
    person.name,
    person.age,
    person.height
  );
}

void main() {
  createPerson("Arthur", 18, 91, &printPerson);
  createPerson("Arthur", 18, 91, &printPersonPersonalizated);

  return;
}