#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

typedef struct Person
{
    char first_name[100], last_name[100];
    int age;
    double weight;
    double height;
    double salary;
} Person;


int main(){

    Person person1;
    
    strcpy(person1.first_name, "John");
    strcpy(person1.last_name, "Doe");

    person1.age = 25;
    person1.weight = 70;
    person1.height = 1.80;
    person1.salary = 1000;

    printf("person 1: %d\n", person1.age);

    return 0;
}
