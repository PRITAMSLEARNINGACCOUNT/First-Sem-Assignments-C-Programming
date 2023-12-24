#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }

    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int number;
    printf("Enter The Value Of N:");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Fibonacci Sequence Is Not Defined For Negative Values Of N\n");
    }
    else
    {
        printf("The %dth Term Of Fibonacci Sequence Is : %d\n", number, fibonacci(number));
    }

    return 0;
}