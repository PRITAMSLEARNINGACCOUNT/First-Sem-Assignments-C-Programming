#include <stdio.h>
int main()
{
    int a, b, add, subtract, multiply, int_div, mod_div;
    float ab, bc, div;
    printf("Enter First Number??\n");
    scanf("%d", &a);
    printf("Enter Second Number??\n");
    scanf("%d", &b);
    add = a + b;
    subtract = a - b;
    multiply = a * b;
    int_div = a / b;
    mod_div = a % b;
    ab = a;
    bc = b;
    div = ab / bc;
    printf("So The Addition,Subtraction,Multiplication,Division,Modulus Division And Integer Division Of %d and %d Is %d,%d,%d,%f,%d,%d\n", a, b, add, subtract, multiply, div, mod_div, int_div);
    return 0;
}