// Program that reverses the words in a sentence.

#include <stdio.h>

#define max_len 200

int main(void)
{
    char ch, terminating_char;
    char sentence[max_len] = {0};
    int sentence_len = 0;
    int word_len = 0, i, j;
    printf("Enter a sentence: ");
    for (i = 0; (ch = getchar()) != '\n' && i < max_len; i++)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating_char = ch;
            break;
        }
        else
        {
            sentence[i] = ch;
            sentence_len++;
        }
    }

    printf("Reversal of sentence: ");

    // go backwards printing each word
    for (i = sentence_len - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ' || i == 0)
        {
            if (i == 0)
            {
                i--;
            }
            for (j = i + 1; j <= i + word_len + 1; j++)
            {
                printf("%c", sentence[j]);

                // this is necessary to ensure proper spacing
                if (j == sentence_len - 1)
                {
                    printf(" ");
                }
            }
            word_len = 0;
        }
        else
        {
            word_len++;
        }
    }
    printf("%c\n", terminating_char);

    return 0;
}