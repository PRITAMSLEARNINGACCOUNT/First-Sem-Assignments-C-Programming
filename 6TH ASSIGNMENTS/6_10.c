#include <stdio.h>
#include <math.h>
// print to find whether a number is Armstrong or not.
int main()
{
	int number, result=0, reminder, n = 0, num;

	printf("Enter the number:: ");
	scanf("%d", &num);
	for (number = num; number != 0; ++n)
	{
		number /= 10;
	}

	for (number = num; number != 0; number /= 10)
	{
		reminder = number % 10;
		result += pow(reminder, n);
	}
	if (result == num)
	{
		printf("%d Is Definately An Amstrong Number\n", num);
	}
	else
	{
		printf("%d Is Definately Not An Amstrong Number\n", num);
	}

	return 0;
}