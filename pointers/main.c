#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main()
{
    int x = 5, *ptr = &x;
    
    int num = 42;
    int *ptr = &num; // `ptr` now points to the memory location of `num`.

    int value = *ptr; // `value` now holds the value at the memory location pointed to by `ptr`.   

    printf("%p\n", (void*)ptr); // Print the pointer using %p
    printf("%d\n", value); // Print the integer using %d

    return 0;
}
