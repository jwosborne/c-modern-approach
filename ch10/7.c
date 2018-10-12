/* Simulate a seven-segment display */

#include <stdio.h>

#define MAX_DIGITS 10

/*   ___
 *  | 0 |
 * 5|   |1
 *  |___|
 *  | 6 |
 * 4|   |2
 *  |___|  segments array layout
 *    3
 */
char segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},  /* 0 */
                        {0, 1, 1, 0, 0, 0, 0},  /* 1 */
                        {1, 1, 0, 1, 1, 0, 1},  /* 2 */
                        {1, 1, 1, 1, 0, 0, 1},  /* 3 */
                        {0, 1, 1, 0, 0, 1, 1},  /* 4 */
                        {1, 0, 1, 1, 0, 1, 1},  /* 5 */
                        {1, 0, 1, 1, 1, 1, 1},  /* 6 */
                        {1, 1, 1, 0, 0, 0, 0},  /* 7 */
                        {1, 1, 1, 1, 1, 1, 1},  /* 8 */
                        {1, 1, 1, 0, 0, 1, 1}}; /* 9 */
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/*******************************************************************
 * main: clear digits array, get input and process the input, and  *               *
 *       then print the digits array                               *
 *******************************************************************/
int main(void)
{
    char input;
    int num_digits = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((input = getchar()) != '\n' && num_digits != MAX_DIGITS)
    {
        if (input >= '0' && input <= '9')
        {
            process_digit(input - '0', num_digits++);
        }
    }

    print_digits_array();

    return 0;
}

/*******************************************************************
 * clear_digits_array: store blank characters into all elements    *
 *                     of the array                                *
 *******************************************************************/
void clear_digits_array(void)
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < MAX_DIGITS * 4; col++)
        {
            digits[row][col] = ' ';
        }
    }
}

/*******************************************************************
 * print_digits_digit: convert segments array to fill the digits   *
 *                     array. We are using an offset of 4 because  *
 *                     there are 3 col for each number and 1 col   *  
 *                     for each space                              *
 *******************************************************************/
void process_digit(int digit, int position)
{
    int offset = position * 4;
    digits[0][offset + 1] = segments[digit][0] ? '_' : ' ';
    digits[1][offset] = segments[digit][5] ? '|' : ' ';
    digits[1][offset + 1] = segments[digit][6] ? '_' : ' ';
    digits[1][offset + 2] = segments[digit][1] ? '|' : ' ';
    digits[2][offset] = segments[digit][4] ? '|' : ' ';
    digits[2][offset + 1] = segments[digit][3] ? '_' : ' ';
    digits[2][offset + 2] = segments[digit][2] ? '|' : ' ';
}

/*******************************************************************
 * print_digits_array: display the digits to the screen            *
 *******************************************************************/
void print_digits_array(void)
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < MAX_DIGITS * 4; col++)
        {
            printf("%c", digits[row][col]);
        }
        printf("\n");
    }
}
