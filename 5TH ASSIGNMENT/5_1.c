#include<stdio.h>
//FIND LEAPYEAR OR NOT
int main()
{
    int year;
    printf("Enter A Year::");
    scanf("%d",&year);

    if((year%4==0)&&((year%400==0)||(year%100!=0)))
    printf("This year is a Leap year");
    else
    printf("This year is not a Leap year");

    return 0;

}