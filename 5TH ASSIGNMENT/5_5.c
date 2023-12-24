#include <stdio.h>
// GIVE GRADE TO A STUDENT BY HIS MARKS
int main()
{
    int Marks;

    printf("Enter the Obtained Percentage In Last Examination:: ");
    scanf("%d", &Marks);

    if (Marks >= 75)
    {
        printf("EXTENGUES");
    }
    else if (Marks >= 60 && Marks < 75)
    {
        printf("FIRST DIVISION\n");
    }
    else if (Marks >= 50 && Marks < 60)
    {
        printf("SECOND DIVISION\n");
    }
    else if (Marks >= 30 && Marks < 50)
    {
        printf("THIRD DIVISION\n");
    }
    else if (Marks >= 0 && Marks < 30)
    {
        printf("FAIL\n");
    }
    else
    {
        printf("PUT THE CORRECT MARKS\n");
    }

    return 0;
}