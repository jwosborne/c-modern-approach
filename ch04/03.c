#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter the first (single) digit: ");
    scanf("%d", &num1);
    printf("Enter the second (single) digit: ");
    scanf("%d", &num2);
    printf("Enter the third (single) digit: ");
    scanf("%d", &num3);
    printf("The reversal is: %d%d%d\n", num3, num2, num3);

    return 0;
}