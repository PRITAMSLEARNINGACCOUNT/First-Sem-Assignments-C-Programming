#include <stdio.h>
// Reverse number using For loop
int main()
{

	int number, reverse, reminder = 0;

	printf("Enter the number:: ");
	scanf("%d", &number);
	printf("The reverse of %d", number);
	for (number; number != 0; number /= 10)
	{
		reminder = number % 10;
		reverse = reverse * 10 + reminder;
	}

	printf(" is %d", reverse);

	return 0;
}