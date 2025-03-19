#include <iostream>

int main() 
{
    int start_hour, start_minute, end_hour, end_minute;
    int duration_hours, duration_minutes;

    // Read the start and end time
    std::cin >> start_hour >> start_minute >> end_hour >> end_minute;

    // Calculate the duration in minutes
    int start_time_minutes = start_hour * 60 + start_minute;
    int end_time_minutes = end_hour * 60 + end_minute;

    // Check if the start time and end time are the same
    if (start_time_minutes == end_time_minutes) 
    {
        duration_hours = 24;
        duration_minutes = 0;
    } 
    else 
    {
        // Calculate the absolute duration in minutes
        int absolute_duration = (end_time_minutes - start_time_minutes + 24 * 60) % (24 * 60);

        // Calculate the duration in hours and minutes
        duration_hours = absolute_duration / 60;
        duration_minutes = absolute_duration % 60;
    }

    // Print the result
    std::cout << "O JOGO DUROU " << duration_hours << " HORA(S) E " << duration_minutes << " MINUTO(S)" << std::endl;

    return 0;
}
