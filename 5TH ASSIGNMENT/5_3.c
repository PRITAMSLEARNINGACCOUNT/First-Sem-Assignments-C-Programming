#include <stdio.h>
// READ A CHARACTER AND PRINT IT IN ITS OPPSITE CASE
int main()
{
	char alphabet;

	printf("Enter the Alphabet:: ");
	scanf("%c", &alphabet);

	if (alphabet >= 97 && alphabet <= 122) // a=97;z=122
	{
		printf("The Alphabet is in LOWER CASE\n");
		printf("In upper case %c is '%c'\n", alphabet, alphabet - 32);
	}
	else if (alphabet >= 65 && alphabet <= 90) // A=65;Z=90
	{
		printf("The Alphabet is in HIGER CASE\n");
		printf("In lower case %c is '%c'\n", alphabet, alphabet + 32);
	}
	else
	{
		printf("NOT a VALID ALPHABET");
	}

	return 0;
}