#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The First Integer?\n");
    scanf("%d", &a);
    printf("Enter The Second Integer?\n");
    scanf("%d", &b);
    c = a + b;
    printf("So the sum of %d + %d = %d", a, b, c);

    return 0;
}