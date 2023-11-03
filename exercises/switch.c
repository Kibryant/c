#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("JANUARY");
        break;
    case 2:
        printf("FEBUARY");
        break;
    case 3:
        printf("MARCH");
        break;
    case 4:
        printf("April");
    case 5:
        printf("May");
    case 6:
        printf("June");
    case 7:
        printf("July");
    case 8:
        printf("August"); 
    case 9:
        printf("September");
    case 10:
        printf("October");
    case 11:
        printf("November");
    case 12:
        printf("December");
    default:
        break;
    }
    return 0;
}
