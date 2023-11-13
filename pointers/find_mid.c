#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int *find_mid_of_array(int array[], int size_of_array);

int main()
{
    int array[7] = {0, 1, 2, 3, 4, 5, 6};
    int size_of_array = sizeof(array) / sizeof(array[0]);

    int *mid = find_mid_of_array(array, size_of_array);

    printf("%d\n", *mid);
    printf("%p\n", mid);

    return 0;
}

int *find_mid_of_array(int array[], int size_of_array){
    return &array[size_of_array / 2];
}
