#include <stdio.h>
#include <string.h>

int main()
{   
    double number;
    double *ptr;

    printf("Type a number: ");
    scanf("%lf", &number);

    printf("%.2lf\n", number);
    ptr = &number;

    *ptr *=  2; 

    printf("New salary: %.2lf\n", *ptr);

    return 0;
}
