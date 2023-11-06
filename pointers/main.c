#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main()
{
    // int x = 5, *ptr = &x;
    int *ptr, *ptr2;
    
    int num = 42;
    ptr = &num; // `ptr` now points to the memory location of `num`.
    ptr2 = ptr; // `ptr2` now points to the memory location of ptr

    *ptr2 = 20; 

    // int value = *ptr; // `value` now holds the value at the memory location pointed to by `ptr`.   

    printf("%p\n", (void*)ptr); // Print the pointer using %p
    printf("%p\n", (void*)ptr2); // Print the pointer using %p
    printf("%d\n", *ptr); // Print the integer using %d

    return 0;
}
