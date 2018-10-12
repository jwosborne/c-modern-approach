#include <stdio.h>

int main(void)
{
    int num, oct_num1, oct_num2, oct_num3, oct_num4, oct_num5;
    oct_num1 = oct_num2 = oct_num3 = oct_num4 = oct_num5 = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    oct_num5 = num % 8;
    oct_num4 = (num /= 8) % 8;
    oct_num3 = (num /= 8) % 8;
    oct_num2 = (num /= 8) % 8;
    oct_num1 = (num /= 8) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", oct_num1, oct_num2, oct_num3, oct_num4, oct_num5);

    return 0;
}