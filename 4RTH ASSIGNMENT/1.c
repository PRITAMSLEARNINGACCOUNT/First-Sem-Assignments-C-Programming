#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age??\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You Are Eligible To Vote\n");
    }
    else
    {
        printf("You Are Not Eligible To Vote\n");
    }

    return 0;
}