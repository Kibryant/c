#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
    float salary, increase_percentage, salary_increment, updated_salary;

    printf("Insert your salary: ");
    scanf("%f", &salary);
    printf("Your salary: %2.f\n", salary);

    printf("Enter the increase percentage: ");
    scanf("%f", &increase_percentage);
    printf("Percentual: %2.f%%\n", increase_percentage);

    salary_increment = (increase_percentage * salary) / 100;
    updated_salary = salary + salary_increment;

    printf("Salary increment: %2.f\n", salary_increment);
    printf("Updated salary: %2.f\n", updated_salary);

    return 0;

}