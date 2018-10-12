#include <stdio.h>

int main(void)
{
    int gsi, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &pub_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}