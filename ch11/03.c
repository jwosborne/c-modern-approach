#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int den, num, reduced_numerator = 0, reduced_denominator = 0;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    reduce(num, den, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)

{
    int temp, x, y;
    x = numerator;
    y = denominator;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    *reduced_numerator = numerator / x;
    *reduced_denominator = denominator / x;
}
