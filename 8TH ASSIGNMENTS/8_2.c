#include <stdio.h>
int main()
{
    int even_count = 0, odd_count = 0, num;
    printf("Enter The Number Of Elements:");
    scanf("%d", &num);
    int Numbers[num];
    printf("Enter %d Numbers\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &Numbers[i]);
        if (Numbers[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("You Entered The %d Even Number(S) And %d Odd Number(S)\n", even_count, odd_count);
    return 0;
}