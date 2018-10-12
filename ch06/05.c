#include <stdio.h>

int main(void)
{
    int user_num;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    printf("Number reversed: ");
    do
    {
        printf("%d", user_num % 10);
        user_num /= 10;
    } while (user_num != 0);
    printf("\n");
}