#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a three-digit number: ");
    scanf("%d", &input);
    printf("The reversal is: %d%d%d\n", input % 10, (input / 10) % 10, input / 100);

    return 0;
}