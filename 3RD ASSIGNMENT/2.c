#include <stdio.h>
int main()
{
    float principal;
    int rate, time;
    printf("Enter The Principal Amount?\n");
    scanf("%f", &principal);
    printf("Enter Rate??\n");
    scanf("%d", &rate);
    printf("Enter Time??\n");
    scanf("%d", &time);
    printf("So The Simple Interest From Your Given Data Is %.2f", (principal * rate * time) / 100);
    return 0;
}