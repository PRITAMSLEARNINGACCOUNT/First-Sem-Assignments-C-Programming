#include<stdio.h>
//identify a character is vowel or not
int main()
{
	char letter;

	printf("Enter A Charecter:");
	scanf("%c",&letter);

	if(letter=='a'|| letter=='e'|| letter=='i'|| letter=='o'|| letter=='u'&&
	letter=='A'|| letter=='E'|| letter=='I'|| letter=='O'|| letter=='U')
	{
		printf("%c is a vowel",letter);
	}
	else
	{
		printf("%c is not a vowel",letter);
	}
	
	return 0;
}