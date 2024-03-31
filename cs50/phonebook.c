#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[100];
  char phone_number[100];
} Person;

int main(void){
  Person persons[3];

  strcpy(persons[0].name, "arthur");
  strcpy(persons[0].phone_number, "123-456-7890");

  strcpy(persons[1].name, "bob");
  strcpy(persons[1].phone_number, "123-456-7891");

  strcpy(persons[2].name, "charlie");
  strcpy(persons[2].phone_number, "123-456-7892");

  char *name = "bob";

  for (int i = 0; i < 3; i++){
    if (strcmp(persons[i].name, name) == 0){
      printf("Found %s\n", persons[i].phone_number);
      return 0;
    }
  }

  printf("Not found\n");
  return 1;
}
