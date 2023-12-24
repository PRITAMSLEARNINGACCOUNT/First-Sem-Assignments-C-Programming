#include<stdio.h>
//Leap year using while
int main(){
	int n,m;
	
	printf("Enter your Range from:: ");
	scanf("%d",&n);
	
	printf("Enter your Range to:: ");
	scanf("%d",&m);
	while(n<=m)
	{             
		if(n%4==0)
		{
			printf("%d is a LEAPYEAR\n",n);
		}
		n++;
	}
	
	return 0;
}