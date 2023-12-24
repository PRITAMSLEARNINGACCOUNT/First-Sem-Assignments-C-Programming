#include <stdio.h>
int main()
{
    int Coin_1, Coin_2, Coin_3, Coin_4;
    printf("Enter How Many Coin Of Rs.10 Do You Have??\n");
    scanf("%d", &Coin_1);
    printf("Enter How Many Coin Of Rs.5 Do You Have??\n");
    scanf("%d", &Coin_2);
    printf("Enter How Many Coin Of Rs.2 Do You Have??\n");
    scanf("%d", &Coin_3);
    printf("Enter How Many Coin Of Rs.1 Do You Have??\n");
    scanf("%d", &Coin_4);
    printf("So The Total Amount Of Coin In My PiggyBank Is %d\n", Coin_1 * 10 + Coin_2 * 5 + Coin_3 * 2 + Coin_4 * 1);

    return 0;
}