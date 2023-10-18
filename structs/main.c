#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>

// typedef creates a new typing, creates a new type

#define lenght 50
#define lenght_of_list_people 3

typedef struct People {
    char name[lenght];
    int age;
    float weight;
} People;

int main() {
    setlocale(LC_ALL, "Portuguese");

    People people = {"arthur", 18, 90.0};
    printf("%s\n", people.name);
    printf("%d\n", people.age);
    
    People list_of_people[lenght_of_list_people];
    int i;

    for(i = 0; i < lenght_of_list_people; i++) {
        printf("Insert the datas of people (%d):\n", i + 1);
        puts("Name: ");
        scanf("%49s", &list_of_people[i].name);
        fflush(stdin);

        puts("Age: ");
        scanf("%d", &list_of_people[i].age);
        fflush(stdin);

        puts("Weight: ");
        scanf("%f", &list_of_people[i].weight);
        fflush(stdin);
    }

    system("clear");

    for(i = 0; i < lenght_of_list_people; i++) {
        printf("--------------------------- People %d -----------------------------\n", i + 1);
        printf("\tName: %s\n", list_of_people[i].name);
        printf("\tAge: %d\n", list_of_people[i].age);
        printf("\tWeight: %.2f\n", list_of_people[i].weight);
        
    }
    printf("------------------------------------------------------------------\n");
}

// struct People arthur;
// typedef struct People;