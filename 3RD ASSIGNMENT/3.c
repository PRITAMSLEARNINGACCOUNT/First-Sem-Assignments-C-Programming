#include<stdio.h>
float Constant=1.8;
int main(){
    float Celcius;
    printf("Enter The Temperature In Celcius??\n");
    scanf("%f",&Celcius);
    printf("So The Temperature In Farenheit Is %.2f\n",(Celcius*Constant)+32);

    return 0;
}