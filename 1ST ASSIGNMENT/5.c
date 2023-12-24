#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Integer??\n");
    scanf("%d", &a);
    printf("Enter Second Integer??\n");
    scanf("%d", &b);
    printf("So The Quotient & Reminder Of %d / %d Is %d & %d", a, b, a / b, a % b);

    return 0;
}