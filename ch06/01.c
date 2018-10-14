#include <stdio.h>

int main(void)
{
    double num;
    double max = 0;
    do
    {
        printf("Enter a number: \n");
        scanf("%lf", &num);
        if (num > max)
        {
            max = num;
        }
    } while (num > 0);

    printf("The largest number entered was %lf\n", max);
    return 0;
}