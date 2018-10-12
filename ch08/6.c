// translate from English to BIFF

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char message[100] = {0};
    int msg_len;
    printf("Enter message: ");
    scanf("%d", &message);
    for (msg_len = 0; (message[msg_len] = toupper(getchar())) != '\n'; msg_len++)
    {
        /* empty loop body */
    }

    printf("In B1FF-speak: ");

    for (int i = 0; i < msg_len; i++)
    {
        switch (message[i])
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('8');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(message[i]);
            break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}