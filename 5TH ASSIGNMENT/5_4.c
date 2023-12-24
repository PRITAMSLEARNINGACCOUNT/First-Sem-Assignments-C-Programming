#include<stdio.h>
//identify a number is positive, negative or equal to ZERO
int main()
{
	int number;
	
	printf("Enter A Number:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("The number is positive\n");
	}
	else if(number<0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is equal to zero\n");
	}
	
	return 0;

}