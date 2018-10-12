#include <stdio.h>

int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d%d", &n, &m);
    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    printf("Greatest common divisor: %d\n", m);

    return 0;
}