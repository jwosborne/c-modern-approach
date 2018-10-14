#include <stdio.h>

int main(void)
{
    int day, month, year, ed, em, ey, count = 0;

    while (1)
    {

        printf("Enter a date (mm/dd/yy) (0/0/0 to terminate): ");
        scanf("%d /%d /%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0)
        { //terminate on 0/0/0
            break;
        }

        if (count == 0)
        { //initialize earliest variables on first input
            ed = day;
            em = month;
            ey = year;
            count++;
            continue;
        }

        if (year > ey)
        { //Later year
            continue;
        }
        else if (year < ey)
        { //Earlier year
            ed = day;
            em = month;
            ey = year;
        }
        else
        { //Same year

            if (month > em)
            { //Later month
                continue;
            }
            else if (month < em)
            { //Earlier month
                ed = day;
                em = month;
                ey = year;
            }
            else
            { //Same month

                if (day > ed)
                { //Later day
                    continue;
                }
                else
                { //Earlier or same day
                    ed = day;
                    em = month;
                    ey = year;
                }
            }
        }
    }
    printf("%.2d/%.2d/%.2d is the earliest date\n", em, ed, ey);

    return 0;
}