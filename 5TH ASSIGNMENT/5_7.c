#include <stdio.h>
// FIND THE TAXABLE INCOME OF A PERSON AND CALCULATE THE TAX
int main()
{
	int income, tax, taxable_income;

	printf("Enter your income:: ");
	scanf("%d", &income);

	taxable_income = income - 150000;

	if (taxable_income <= 150000)
	{
		tax = 0;
		printf("You Income Isn't Taxable Income.\n");
	}
	else if (taxable_income > 150000 && taxable_income <= 300000)
	{
		printf("Taxable_income = %d \n", taxable_income);
		tax = taxable_income * 0.1;
	}
	else if (taxable_income > 300000 && taxable_income <= 500000)
	{
		printf("Taxable_income = %d \n", taxable_income);
		tax = taxable_income * 0.2;
	}
	else
	{
		printf("Taxable_income = %d \n", taxable_income);
		tax = taxable_income * 0.3;
	}

	printf("Your Payable Tax Amount is %d", tax);

	return 0;
}