#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    int month, date, year;
    scanf("%d/%d/%d", &month, &date, &year);
    if (month < 0 || month > 12 || date < 0 || date > 31 || year < 0 || year > 10000)
    {
        printf("Input is invalid. Please try again.\n");
        return 1;
    }
    printf("You entered the date: %.4d%.2d%.2d\n", year, date, month);
    return 0;
}