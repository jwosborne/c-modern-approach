/* This calculates the power of a number using recursion */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("Answer: %d\n", power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }
    if ((n % 2) == 0)
    {
        return power(x, n / 2) * power(x, n / 2);
    }
    else
    {
        return x * power(x, n - 1);
    }
}