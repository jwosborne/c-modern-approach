#include <stdio.h>

int main(void)
{
    int den, num, x, y, temp;
    printf("Enter a fraction: ");
    scanf("%d/%d", &den, &num);
    x = den;
    y = num;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    printf("In lowest terms: %d/%d\n", den / x, num / x);
    return 0;
}
