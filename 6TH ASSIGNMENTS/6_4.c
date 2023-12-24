#include <stdio.h>
int main()
{
    int Sum = 0;
    int i = 1;
    int a;
    printf("Enter The Value Of N??\n");
    scanf("%d", &a);
    while (i <= a)
    {
        Sum += i;
        i++;
    }

    printf("%d", Sum);
    return 0;
}