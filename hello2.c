#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct

Class Person // Parece o Type/Interface;
{
  char name[10];
  uint8_t age;
  uint8_t height;
  void(*showPerson)(Class Person *);
};

void personPrint(Class Person *self) {
  printf("Name: %s\nAge: %d\nHeight: %d\n",
    self->name,
    self->age,
    self->height
  );
}

Class Person * newPerson(
  char name[],
  uint8_t age,
  uint8_t height
  ) {
  Class Person *self = (Class Person *) malloc(sizeof(Class Person)); // Constructor;
  strcpy(self->name, name);
  self->age = age;
  self->height = height;
  self->showPerson = &personPrint;
  return self;
}

int main() {
  Class Person *person2 = (struct Person *) newPerson("Arthur", 18, 91);
  person2->showPerson(person2);
  return 0;
}
