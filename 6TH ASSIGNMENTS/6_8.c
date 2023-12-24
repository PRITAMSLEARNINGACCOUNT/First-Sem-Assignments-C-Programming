#include <stdio.h>
// generate a Fibonacci sequence using a while loop.
int main()
{

	int a, b, c, i = 0, range;

	printf("Enter the series range:: ");
	scanf("%d", &range);

	printf("Write the First Number:: ");
	scanf("%d", &a);

	printf("Write the second Number:: ");
	scanf("%d", &b);

	while (i <= range)
	{
		printf("%d\n", a);
		c = a + b;
		a = b;
		b = c;
	}

	return 0;
}