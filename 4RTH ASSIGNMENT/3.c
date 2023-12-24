#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter The First Number??\n");
    scanf("%d", &num1);
    printf("Enter The Seccond Number??\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d Is Bigger", num1);
    }
    else
    {
        printf("%d Is Bigger", num2);
    }

    return 0;
}