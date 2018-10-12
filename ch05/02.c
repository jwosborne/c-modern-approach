#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int hour;
    int min;
    bool pm = false;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &min);
    /* no error checking */
    if (hour >= 12)
    {
        pm = true;
    }
    if (hour >= 13)
    {
        hour -= 12;
    }
    else if (hour == 0)
    {
        hour += 12;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d ", hour, min);
    if (pm)
    {
        printf("PM\n");
    }
    else
    {
        printf("AM\n");
    }
}