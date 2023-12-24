#include <stdio.h>
float Constant = 0.5;
int main()
{
    float base, height;
    printf("Enter The Base Of The Triangle?\n");
    scanf("%f", &base);
    printf("Enter The Height Of The Triangle?\n");
    scanf("%f", &height);
    printf("So The Area Of The Triangle Is %.2f\n", Constant * base * height);

    return 0;
}