#include <stdio.h>

int main(void)
{
    int uno, dos, tres, cuatro;
    int a, b, c, d;
    int largest, smallest;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &uno, &dos, &tres, &cuatro);
    if (uno > dos)
    {
        a = uno;
        b = dos;
    }
    else
    {
        a = dos;
        b = uno;
    }
    if (tres > cuatro)
    {
        c = tres;
        d = cuatro;
    }
    else
    {
        c = cuatro;
        d = tres;
    }
    if (a > c)
    {
        largest = a;
    }
    else
    {
        largest = c;
    }
    if (b < d)
    {
        smallest = b;
    }
    else
    {
        smallest = d;
    }
    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
}