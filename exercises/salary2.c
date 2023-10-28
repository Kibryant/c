#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

float wage_final(int work_hours, float minimum_wage) 
{
    float hourly_rate_worked = minimum_wage / 2;
    float gross_salary = hourly_rate_worked * work_hours;
    float taxes = (gross_salary * 3) / 100;
    
    return gross_salary - taxes;
}

int main()
{   
    int work_hours;
    float minimum_wage;
    float wage;

    printf("Enter the number of hours worked: ");
    scanf("%d", &work_hours);

    printf("Enter your minimum wage: ");
    scanf("%f", &minimum_wage);

    wage = wage_final(work_hours, minimum_wage);

    printf("Wage final: %2.f\n", wage);
    return 0;
}
