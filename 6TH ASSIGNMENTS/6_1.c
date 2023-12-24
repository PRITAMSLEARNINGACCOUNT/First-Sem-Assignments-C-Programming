#include<stdio.h>
//find the largest among three numbers using the ternary operator.
int main(){
    int num1,num2,num3,large;

    printf("Enter the First Number:: ");
    scanf("%d",&num1);

    printf("Enter the Second Number:: ");
    scanf("%d",&num2);

    printf("Enter the Third Number:: ");
    scanf("%d",&num3);
    
    large=num1>num2?(num1>num3?num1:num3):(num2>num3)?num2:num3;
    
    printf("The Largest Number is %d",large);

    return 0;

}