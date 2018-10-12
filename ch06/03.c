#include <stdio.h>

int main(void)
{
    int num, den, x, y, temp;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);
    x = num;
    y = den;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("In lowest terms: %d/%d\n", num / x, den / x);
    return 0;
}
