#include <stdio.h>
int main()
{
    int row;
    printf("Enter The Number Of Rows::");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }
        for (int ia = 1; ia <= i; ia++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}