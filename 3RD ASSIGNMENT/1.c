#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter First Number?\n");
    scanf("%d", &num1);
    printf("Enter Second Number?\n");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("So The Numbers After Swaping Is %d And %d\n", num1, num2);

    return 0;
}