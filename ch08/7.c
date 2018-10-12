// Write a program that reads a 5x5 array of integer
// and then prints the row sums and the column sums

#include <stdio.h>

int main(void)
{
    int total = 0;
    int arr[5][5];
    printf("Enter row 1: ");
    scanf("%d%d%d%d%d", &arr[0][0], &arr[0][1], &arr[0][2], &arr[0][3], &arr[0][4]);
    printf("Enter row 2: ");
    scanf("%d%d%d%d%d", &arr[1][0], &arr[1][1], &arr[1][2], &arr[1][3], &arr[1][4]);
    printf("Enter row 3: ");
    scanf("%d%d%d%d%d", &arr[2][0], &arr[2][1], &arr[2][2], &arr[2][3], &arr[2][4]);
    printf("Enter row 4: ");
    scanf("%d%d%d%d%d", &arr[3][0], &arr[3][1], &arr[3][2], &arr[3][3], &arr[3][4]);
    printf("Enter row 5: ");
    scanf("%d%d%d%d%d", &arr[4][0], &arr[4][1], &arr[4][2], &arr[4][3], &arr[4][4]);

    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total += arr[i][j];
        }
        printf("%d ", total);
        total = 0;
    }
    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total += arr[j][i];
        }
        printf("%d ", total);
        total = 0;
    }
    printf("\n");

    return 0;
}
