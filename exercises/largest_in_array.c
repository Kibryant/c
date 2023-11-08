#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int array[5] = {34, 12, 21, 54, 40};
    int largest = *array;

    for(int i = 0; i < 5; i++) {
        if (*(array + i) > largest) {
            printf("%d\n", *(array + i));
            largest = *(array + i);
        }
    }

    printf("The largest is: %d\n", largest);

    return 0;
}
