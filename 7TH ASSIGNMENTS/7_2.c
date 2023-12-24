#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int Number;
    printf("Enter A Number:");
    scanf("%d", &Number);
    if (isPrime(Number))
    {
        printf("%d Is A Prime Number\n", Number);
    }
    else
    {
        printf("%d Is Not A Prime Number\n", Number);
    }

    return 0;
}