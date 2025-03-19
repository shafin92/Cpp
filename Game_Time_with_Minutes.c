#include <stdio.h>

int main() 

    int a , b , c ,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    // Calculate the duration of the game
    int c = a* 60 + c;
    int end_time_in_mnutes = b * 60 + d;

    int duration_in_minutes;
    if (c <= end_time_in_minutes) {
        duration_in_minutes = end_time_in_minutes - start_time_in_minutes;
    } else 
        duration_in_minutes = 24 * 60 - start_time_in_minutes + end_time_in_minutes;
    

    // Ensure the duration is at least 1 minute and at most 24 hours
    if (duration_in_minutes < 1) {
        duration_in_minutes = 1;
    } else if (duration_in_minutes > 24 * 60) {
        duration_in_minutes = 24 * 60;
    }

    // Convert duration back to hours and minutes
    duration_hour = duration_in_minutes / 60;
    duration_minute = duration_in_minutes % 60;

    // Output the result
    printf("The game lasted %d hour(s) and %d minute(s).\n", duration_hour, duration_minute);

    return 0;

