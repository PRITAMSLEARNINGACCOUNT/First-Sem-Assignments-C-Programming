#include <stdio.h>
// find the largest among Six numbers using the ternary operator and while loop.
int main()
{
    int number, i = 0, large = 0;

    while (i <= 5)
    {
        printf("Enter the Number:: ");
        scanf("%d", &number);

        large = number > large ? number : large;
        i++;
    }
    printf("\n%d is the Largest Number", large);

    return 0;
}