#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define SIXTY_SECONDS 60
#define THREE_THOUSAND_SIX_HUNDRED_SECONDS 3600 //1 HOUR

int main() {
    int time_in_seconds, time_in_minutes, time_in_hours;

    printf("Enter the clocked time: ");
    scanf("%d", &time_in_seconds);
    fflush(stdin);

    time_in_hours = time_in_seconds / THREE_THOUSAND_SIX_HUNDRED_SECONDS;

    time_in_seconds = time_in_seconds - (THREE_THOUSAND_SIX_HUNDRED_SECONDS * time_in_hours);

    time_in_minutes = time_in_seconds / SIXTY_SECONDS;

    time_in_seconds = time_in_seconds - (SIXTY_SECONDS * time_in_minutes);


    printf("Hours: %d\n", time_in_hours);
    printf("Minutes: %d\n", time_in_minutes);
    printf("Seconds: %d\n", time_in_seconds);

    system("pause");

    return 0;
}