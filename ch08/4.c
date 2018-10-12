// modified reverse.c

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = N - 1; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}