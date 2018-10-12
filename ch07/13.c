// Word Counter in C
// For simplicity, punctuation is counted as a part of the word

#include <stdio.h>

int main(void)
{
    char ch;
    float avg_len;
    int letter_num = 0;
    int word_num = 0;
    int in_word = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
        {
            if (!in_word)
            {
                word_num++;
                in_word = 1;
            }
            letter_num++;
        }
        else
        {
            in_word = 0;
        }
    }
    avg_len = (float)letter_num / (float)word_num;

    printf("Average word length: %.1f\n", avg_len);
}