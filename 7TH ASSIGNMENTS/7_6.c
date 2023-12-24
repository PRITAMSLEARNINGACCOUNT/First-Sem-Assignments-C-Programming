#include <stdio.h>
double Power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent < 0)
    {
        return 1 / (base * Power(base, -(exponent)-1));
    }

    else
    {
        return base * Power(base, exponent - 1);
    }
}
int main()
{
    double Base;
    int Exponent;
    printf("Enter The Base :: ");
    scanf("%lf", &Base);
    printf("Enter The Exponent :: ");
    scanf("%d", &Exponent);
    printf("%.2lf Raised To The Power Of %d Is %.2lf\n", Base, Exponent, Power(Base, Exponent));
    return 0;
}