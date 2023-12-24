#include <stdio.h>
int Calculate_Factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * Calculate_Factorial(num - 1);
    }
}
int main()
{
    int number;
    printf("Enter A Number ::");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial Is Not Defined For Negative Numbers");
    }
    else
    {
        printf("Factorial  Of %d Is %d\n", number, Calculate_Factorial(number));
    }

    return 0;
}