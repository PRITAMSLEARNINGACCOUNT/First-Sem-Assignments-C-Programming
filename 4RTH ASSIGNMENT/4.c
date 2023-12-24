#include <stdio.h>
int main()
{
    int num1, num2, num3, big;
    printf("Enter First Number??\n");
    scanf("%d", &num1);
    printf("Enter Second Number??\n");
    scanf("%d", &num2);
    printf("Enter Third Number??\n");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        big = num1;
    }
    else
    {
        big = num2;
    }

    if (big < num3)
    {
        big = num3;
    }
    printf("%d Is Bigger\n", big);
    return 0;
}