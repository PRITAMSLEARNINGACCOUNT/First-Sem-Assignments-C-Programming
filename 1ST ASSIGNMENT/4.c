#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter The First Number?\n");
    scanf("%f", &a);
    printf("Enter The Second Number?\n");
    scanf("%f", &b);
    c = a + b;
    printf("So the sum of %.2f + %.2f = %.2f", a, b, c);

    return 0;
}