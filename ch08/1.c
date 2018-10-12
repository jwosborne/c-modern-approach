// Program to find repeated digits

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_seen_twice[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            digit_seen_twice[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");

    for (int i = 0; i < 10; i++)
    {
        if (digit_seen_twice[i] == true)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}