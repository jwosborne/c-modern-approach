#include <stdio.h>

#define none 0;
#define add 1;
#define sub 2;
#define mul 3;
#define div 4;

typedef char flag;

int main(void)
{
    int token;
    double valA = 0;
    double valB = 0;
    flag operation = none;
    printf("Enter an expression: ");
    while ((token = getchar()) != '\n')
    {
        switch (token)
        {
        // NUMBERS
        case '0':
            valB = valB * 10 + 0;
            break;
        case '1':
            valB = valB * 10 + 1;
            break;
        case '2':
            valB = valB * 10 + 2;
            break;
        case '3':
            valB = valB * 10 + 3;
            break;
        case '4':
            valB = valB * 10 + 4;
            break;
        case '5':
            valB = valB * 10 + 5;
            break;
        case '6':
            valB = valB * 10 + 6;
            break;
        case '7':
            valB = valB * 10 + 7;
            break;
        case '8':
            valB = valB * 10 + 8;
            break;
        case '9':
            valB = valB * 10 + 9;
            break;
        // OPERATIONS
        case '+':
            if (operation != 0)
                valA = valB;
            operation = add;
            break;
        case '-':
            valA = valB;
            operation = sub;
            break;
        case '*':
            valA = valB;
            operation = mul;
            break;
        case '/':
            valA = valB;
            operation = div;
            break;
        default:
            // do nothing
            break;
        }
    }
    printf("Value of expression: ");
    return 0;
}