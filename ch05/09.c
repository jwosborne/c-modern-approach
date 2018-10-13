#include <stdio.h>

#define FIRSTDATE 1
#define SECONDDATE 2

int main(void)
{
    int month1, month2, day1, day2, year1, year2;
    int date = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month2, &day2, &year2);

    /* check years then if necessary months then if necessary years */
    if (year1 > year2)
    {
        date = FIRSTDATE;
    }
    else if (year1 < year2)
    {
        date = SECONDDATE;
    }
    else if (month1 > month2)
    {
        date = FIRSTDATE;
    }
    else if (month2 < month1)
    {
        date = SECONDDATE;
    }
    else if (day1 > day2)
    {
        date = FIRSTDATE;
    }
    else if (day2 < day1)
    {
        date = SECONDDATE;
    }

    if (date == FIRSTDATE)
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day2, month2, year2,
               day1, month1, year1);
    }
    else if (date == SECONDDATE)
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day1, month1, year1,
               day2, month2, year2);
    }
    else
    {
        printf("The dates are the same\n");
    }
    return 0;
}