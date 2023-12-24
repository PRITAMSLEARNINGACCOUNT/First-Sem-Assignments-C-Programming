#include <stdio.h>
int main()
{
    float a, b, add, subtract, multiplication, division;
    printf("Enter First Number??\n");
    scanf("%f", &a);
    printf("Enter Second Number??\n");
    scanf("%f", &b);
    add = a + b;
    subtract = a - b;
    multiplication = a * b;
    division = a / b;
    printf("So The Addition,Subtraction,Multiplication And Division Of %.2f and %.2f Is %.2f,%.2f,%.2f,%.2f", a, b, add, subtract, multiplication, division);

    return 0;
}