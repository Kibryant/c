#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main() {
    int sum, i;
    // sum = 0;
    // for(int i = 0; i <= 10; i++){
    //     sum += i;
    // }

    i = 0;
    sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }

    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    

    printf("%d\n", sum);
}