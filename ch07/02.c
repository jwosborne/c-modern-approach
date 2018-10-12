#include <stdio.h>

int main(void)
{
    int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    ch = getchar();
    /* dispose of new-line char following num of entries */

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press Enter to continue...");
            ch = getchar();
        }
    }

    return 0;
}