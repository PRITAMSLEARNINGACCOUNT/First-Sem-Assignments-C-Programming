#include <stdio.h>
// CREATE A CALCULATOR USING SWITCH CASE
int main()
{

   int Number1, Number2;
   char Operator;
   printf("Enter The Operator:: ");
   scanf("%c", &Operator);

   printf("Enter The First Number:: ");
   scanf("%d", &Number1);

   printf("Enter The Second Number:: ");
   scanf("%d", &Number2);

   switch (Operator)
   {
   case '*':
      printf("%d %c %d = %d\n", Number1, Operator, Number2, Number1 * Number2);
      break;

   case '/':
      printf("%d %c %d = %d\n", Number1, Operator, Number2, Number1 / Number2);
      break;

   case '+':
      printf("%d %c %d = %d\n", Number1, Operator, Number2, Number1 + Number2);
      break;

   case '-':
      printf("%d %c %d = %d\n", Number1, Operator, Number2, Number1 - Number2);
      break;

   case '%':
      printf("%d %c %d = %d\n", Number1, Operator, Number2, Number1 % Number2);
      break;

   default:
      printf("Not a Valid Operator\n");
      break;
   }

   return 0;
}