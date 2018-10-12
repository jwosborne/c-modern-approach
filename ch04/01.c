#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a two-digit number: ");
    scanf("%d", &input);
    printf("The reversal is: %d%d\n", input % 10, input / 10);

    return 0;
}