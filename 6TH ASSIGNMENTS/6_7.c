#include <stdio.h>
// print to find whether a number is Palindrome or not.
int main()
{
	int number, reverse = 0, reminder = 0;

	printf("Enter the number:: ");
	scanf("%d", &number);

	int original = number;

	while (number != 0)
	{
		reminder = number % 10;
		reverse = reverse * 10 + reminder;
		number = number / 10;
	}

	if (original == reverse)
	{

		printf("It's a PALINDROME NUMBER");
	}
	else
	{

		printf("It's NOT a PALINDROME NUMBER");
	}

	return 0;
}