#include <stdio.h>
int main()
{
    int size, even_count = 0, odd_count = 0;
    printf("Enter The Size Of An Array ::");
    scanf("%d", &size);
    int array[size], even[size], odd[size];
    printf("Enter %d Numbers :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            even[even_count] = array[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = array[i];
            odd_count++;
        }
    }
    printf("Even Numbers:\n");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d\n", even[i]);
    }
    printf("Odd Numbers :\n");
    for (size_t i = 0; i < odd_count; i++)
    {
        printf("%d\n", odd[i]);
    }

    return 0;
}