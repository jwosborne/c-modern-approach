/* Tests if two words are anagrams */
/* NOTE: the anagrams *must* be the same size of chars */

#include <stdio.h>
#include <ctype.h> /* isalpha and tolower */
#include <stdbool.h>

#define NUM_LETTERS 26

int main(void)
{
    char letters[NUM_LETTERS] = {0};
    char ch;
    bool isAnagram = true;

    printf("Enter first word: ");
    /* NOTE: We are assuming user ends word with '\n' */
    while ((ch = getchar()) != '\n')
    {
        /* If user input is a letter then increment array at 
           corresponding position in array */
        if (isalpha(ch))
        {
            letters[tolower(ch) - 'a']++;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        /* If user input is a letter then decrement array at 
           corresponding position in array */
        if (isalpha(ch))
        {
            letters[tolower(ch) - 'a']--;
        }
    }

    /* Check if words are anagrams by checking if
       all elements in the array are 0 */
    for (int i = 0; i < NUM_LETTERS; i++)
    {
        if (letters[i] != 0)
        {
            isAnagram = false;
        }
    }
    if (isAnagram)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}