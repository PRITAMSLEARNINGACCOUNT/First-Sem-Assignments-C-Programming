#include <stdio.h>
double Power(double base, int exponent)
{
    double result = 1.0;
    if (exponent < 0)
    {
        base = 1 / base;
        exponent = -exponent;
    }
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    double base;
    int exponent;
    printf("Enter The Base :");
    scanf("%lf", &base);
    printf("Enter The Exponent :");
    scanf("%d", &exponent);
    printf("%.2lf Raised TO The Power Of %d Is %.2lf\n", base, exponent, Power(base, exponent));
    return 0;
}