#include <stdio.h>
int main()
{
    int row, num = 0;
    printf("Enter The Number Of Rows::");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}