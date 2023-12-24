#include <stdio.h>
int main()
{
    float item_Price, Discounted_Price, Price_With_Tax, Discount, Tax, Quantity;
    printf("Enter The Price Of The Item??\n");
    scanf("%f", &item_Price);
    printf("Enter The Quantity Of The Item??\n");
    scanf("%f", &Quantity);
    printf("Enter The Discount??\n");
    scanf("%f", &Discount);
    printf("Enter The Tax??\n");
    scanf("%f", &Tax);
    Discounted_Price = (item_Price * Quantity) - item_Price * Quantity * Discount / 100;
    Price_With_Tax = Discounted_Price + (Discounted_Price * Tax / 100);
    printf("\n\n\n********Bill Calculated********\n");
    printf("Price Of Every Item = %.2f\n",item_Price);
    printf("No Of Item Sold = %.2f\n",Quantity);
    printf("Price After Discount = %.2f\n",Discounted_Price);
    printf("Taxation On Discounted Price = %.2f\n",Discounted_Price * Tax / 100);
    printf("Final Amount With Tax = %.2f\n",Price_With_Tax);
    
    return 0;
}