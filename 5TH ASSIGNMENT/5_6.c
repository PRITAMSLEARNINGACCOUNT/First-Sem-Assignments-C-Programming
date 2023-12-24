#include <stdio.h>
// give pujo bonus to the employee by given condition
int main()
{
	char gender;
	float salary, bonus, paid_amount;

	printf("Enter the gender of the employee(m for male/f for female):");
	scanf("%c", &gender);

	printf("Enter the salary of the employee:");
	scanf("%f", &salary);

	if (gender == 'm')
	{
		bonus = salary * 0.05;
	}
	else
	{
		bonus = salary * 0.10;
	}
	if (salary < 10000)
	{
		bonus += salary * 0.02;
		paid_amount = salary + bonus;
	}

	printf("\n salary=%.2f\n", salary);
	printf("\n bonus=%.2f\n", bonus);
	printf("\n paid_amount=%.2f\n", paid_amount);

	return 0;
}