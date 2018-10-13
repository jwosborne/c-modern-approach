#include <stdio.h>

int main(void)
{
    double income = 999;
    printf("Enter amount of taxable income: ");
    scanf("%lf", &income);
    if (income < 750)
    {
        income = income * 0.01;
    }
    else if (income < 2250)
    {
        income = 7.50 + income * 0.02;
    }
    else if (income < 3750)
    {
        income = 37.50 + income * 0.03;
    }
    else if (income < 5250)
    {
        income = 82.50 + income * 0.04;
    }
    else if (income < 7000)
    {
        income = 142.50 + income * 0.05;
    }
    else /* >$7000 */
    {
        income = 230.00 + (income * 0.06);
    }
    printf("You owe: %lf in income tax.\n", income);
    return 0;
}