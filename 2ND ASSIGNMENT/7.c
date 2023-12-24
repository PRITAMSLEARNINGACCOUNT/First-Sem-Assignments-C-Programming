#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter First Number??\n");
    scanf("%d", &num1);
    printf("Enter Second Number??\n");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("So The Numbers After Swaping Is %d And %d\n", num1, num2);

    return 0;
}