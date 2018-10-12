/* Write a program that prints an n x n magic square */

#include <stdio.h>

int main(void)
{
    int size, x, y, old_x, old_y;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    int square[size][size];
    /* Initialize square */
    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            square[y][x] = 0;
        }
    }
    /* Start by placing the number 1 in middle of row 0 */
    x = size / 2;
    y = 0;
    square[x][y] = 1;

    for (int i = 2; i <= size * size; i++)
    {
        /* Save the original position of x and y */
        old_x = x;
        old_y = y;

        /* Calculate test position */
        x = ((x + 1) % size);
        if (y - 1 >= 0)
            --y;
        else
            y = size - 1;

        /* if test position is good, place it there */
        if (!square[x][y])
        {
            square[x][y] = i;
        }
        /* if test position isn't good, go back to the old value and go down y-axis */
        else
        {
            x = old_x;
            y = old_y;
            y = (y + 1) % size;
            square[x][y] = i;
        }
    }

    /* print the square */
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            printf("%4d", square[x][y]);
        }
        printf("\n");
    }
    return 0;
}