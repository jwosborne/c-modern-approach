// Ceaser Cipher

#include <stdio.h>

#define MAX_LEN 200

int main(void)
{
    char message[MAX_LEN], ch;
    int shift_amount, message_len;

    printf("Enter message to be encrypted: ");
    /* Loop through and scan in the input */
    for (message_len = 0; (ch = getchar()) != '\n' && message_len < MAX_LEN; message_len++)
    {
        message[message_len] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    printf("%d", shift_amount);
    /* Apply the shift */
    for (int i = 0; i < message_len; i++)
    {
        /* Shift uppercase */
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = ((message[i] - 'A' + shift_amount) % 26 + 'A');
        }
        /* Shift lowercase */
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = ((message[i] - 'a' + shift_amount) % 26 + 'a');
        }
    }

    printf("Encrypted message: ");
    /* Cycle through printing the message */
    for (int i = 0; i < message_len; i++)
    {
        printf("%c", message[i]);
    }
    putchar('\n');

    return 0;
}