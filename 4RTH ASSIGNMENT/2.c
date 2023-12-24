#include <stdio.h>
int main()
{
    int num;
    printf("Enter A Number??\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The Number Is An Even Number\n");
    }
    else
    {
        printf("The Number Is An Odd Number\n");
    }

    return 0;
}