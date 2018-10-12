/* Implementation of selection sort */

#include <stdio.h>

#define MAX_LEN 11

void selection_sort(int n, int a[n]);

int main(void)
{
    int num_entries = 0, arr[MAX_LEN];
    char ch;
    printf("Enter a series of up to %d integers: ", MAX_LEN - 1);
    for (int i = 0; i < MAX_LEN; i++)
    {
        scanf("%d", &arr[i]);
        num_entries++;
        if ((ch = getchar()) == '\n')
        {
            break;
        }
        ungetc(ch, stdin);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < num_entries; i++)
    {
        printf("%d ", arr[i]);
    }

    selection_sort(num_entries, arr);
    printf("\nSorted array: ");
    for (int i = 0; i < num_entries; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void selection_sort(int num_entries, int arr[num_entries])
{
    if (num_entries == 0)
        return;

    int temp, max = 0;
    for (int i = 0; i < num_entries; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }

        temp = arr[max];
        arr[max] = arr[num_entries - 1];
        arr[num_entries - 1] = temp;

        selection_sort(num_entries - 1, arr);
    }
}
