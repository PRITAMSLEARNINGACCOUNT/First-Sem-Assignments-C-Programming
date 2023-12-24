#include <stdio.h>
int main()
{
    int i = 1;
    int a;
    printf("Enter The Value Of N??\n");
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}