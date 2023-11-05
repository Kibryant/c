#include <stdio.h>

int main()
{   
    while (1)
    {   
        int number;
        printf("Number: %d\n", number);
        printf("Type a number: ");
        scanf("%d", &number);
        if (number == 0)
        {
            continue;
        }

    }
    
}
