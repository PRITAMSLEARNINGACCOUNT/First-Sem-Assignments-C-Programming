#include <stdio.h>
int main()
{
    char var;
    printf("Enter An UpperCase Charecter???\n");
    scanf("%c", &var);
    printf("So The LoweCase Of Your Given Charecter Is %c\n", var + 32);

    return 0;
}