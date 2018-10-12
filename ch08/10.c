// Find departure time closest to time
// entered by the user.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NUM_FLIGHTS 8

int main(void)
{
    int hour, minute, usertime, closest;
    int time_diff, min_time_diff = INT_MAX;
    int departure_times[NUM_FLIGHTS] = {8 * 60,
                                        9 * 60 + 43,
                                        11 * 60 + 19,
                                        12 * 60 + 47,
                                        14 * 60,
                                        15 * 60 + 45,
                                        19 * 60,
                                        21 * 60 + 45};
    int arrival_times[NUM_FLIGHTS] = {60 * 10 + 16,
                                      60 * 11 + 52,
                                      60 * 13 + 31,
                                      60 * 14,
                                      60 * 16 + 8,
                                      60 * 17 + 55,
                                      60 * 21 + 20,
                                      60 * 11 + 58};
    printf("Enter a 24-hour time(hh:mm): ");
    scanf("%2d :%2d", &hour, &minute);
    // convert to minutes
    usertime = hour * 60 + minute;
    // find the closest flight time
    for (int i = 0; i < NUM_FLIGHTS; i++)
    {
        time_diff = usertime - departure_times[i];
        if (abs(time_diff) < min_time_diff)
        {
            min_time_diff = time_diff;
            closest = i;
        }
    }
    // get the hour and minute values of the closest departure time
    hour = departure_times[closest] / 60;
    minute = departure_times[closest] % 60;

    printf("closest departure time is %d:%02d", hour, minute);

    // get the hour and minute values of the closest arrival time
    hour = arrival_times[closest] / 60;
    minute = arrival_times[closest] % 60;
    printf(", arriving at %d:%02d\n", hour, minute);

    return 0;
}