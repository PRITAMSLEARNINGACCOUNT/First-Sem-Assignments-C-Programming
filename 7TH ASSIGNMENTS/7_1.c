#include <stdio.h>
int CalculateFact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
int main()
{
    int num;
    printf("Enter The Number=");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Factorial Of 0 Is 1\n");
    }
    else
    {
        int Factorial=CalculateFact(num);
        printf("Factorial Of %d Is %d\n",num,Factorial);
    }
    
    return 0;
}