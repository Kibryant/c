#include <stdio.h>

typedef enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} Day;

int main() {
    
    Day weekend1 = Sunday;
    Day weekend2 = Saturday;
    
    printf("%d \n%d\n", weekend1, weekend2);
    
    return 0;
}