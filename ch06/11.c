#include <stdio.h>

int main(void)
{
    int n;
    float e = 1;
    float temp = 1;
    printf("Enter value n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp *= i;
        e += (1 / temp);
    }
    printf("%f\n", e);
    return 0;
}