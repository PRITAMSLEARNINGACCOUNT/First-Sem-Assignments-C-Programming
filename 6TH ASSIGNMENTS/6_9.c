#include <stdio.h>
// find the factorial of a number using for loop.
int main()
{
	int number, fact = 1;

	printf("Enter the number:: ");
	scanf("%d", &number);

	printf("%d! = ", number);
	for (fact = 1; number > 0; number--)
	{
		fact = fact * number;
		if (number != 1)
		{
			printf("%d * ", number);
		}
		else
		{

			printf("%d ", number);
		}
	}

	printf("= %d", fact);

	return 0;
}