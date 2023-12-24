#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of An Array??\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Numbers %d:", i);
        scanf("%d", &arr[i]);
    }
    printf("So You Have Entered The Following Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}