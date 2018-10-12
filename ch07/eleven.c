// Write a program that displays name

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, first_initial;
    printf("Enter a first and last name: ");
    // cycle through white space
    while ((ch = getchar()) == ' ')
        ;
    first_initial = ch;
    // cycle through the remainder of the name
    while ((ch = getchar()) != ' ')
        ;
    // cycle through white space
    while ((ch = getchar()) == ' ')
        ;
    putchar(toupper(ch));
    while ((ch = getchar()) != '\n' && ch != ' ')
    {
        putchar(ch);
    }
    putchar(',');
    putchar(' ');
    putchar(first_initial);
    putchar('\n');
    return 0;
}