#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of An Array:");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter %d Numbers\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d :",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Even Numbers :\n");
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]%2==0)
        {
            printf("%d\n",numbers[i]);
        }
        
    }
    printf("Odd Numbers :\n");
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]%2!=0)
        {
            printf("%d\n",numbers[i]);
        }
        
    }
    
    

    return 0;
}