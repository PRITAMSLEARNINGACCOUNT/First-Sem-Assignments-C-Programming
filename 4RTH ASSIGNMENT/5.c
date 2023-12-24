#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter First Number??\n");
    scanf("%d", &num1);
    printf("Enter Second Number??\n");
    scanf("%d", &num2);
    printf("Enter Third Number??\n");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d Is Bigger\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d Is Bigger\n", num2);
    }
    else
    {
        printf("%d Is Bigger\n", num3);
    }

    return 0;
}