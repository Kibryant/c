#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>

typedef struct People
{
    char name[80];
    int age;
    float weight;
    float height;
} People;

int main()
{
    People peoples[3];

    int r, c;
    for(r = 0; r < 3; r++) {
        printf("Name [%d]: ", r + 1);
        scanf("%s", &peoples[r].name);
        fflush(stdin);

        printf("Age [%d]: ", r + 1);
        scanf("%d", &peoples[r].age);
        fflush(stdin);

        printf("Weight [%d]: ", r + 1);
        scanf("%f", &peoples[r].weight);
        fflush(stdin);

        printf("Height [%d]: ", r + 1);
        scanf("%f", &peoples[r].height);
        fflush(stdin);

    }

        for(c = 0; c < 3; c++) {
        printf("Name PEOPLE[%d]: %s\n", c + 1, peoples[c].name);

        printf("Age [%d]: %d\n", c + 1), peoples[c].age;

        printf("Weight [%d]: %2.f\n", c + 1, peoples[c].weight);

        printf("Height [%d]: %2.f\n", c + 1, peoples[c].height);
    }
}
