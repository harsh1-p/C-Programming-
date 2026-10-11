/*Bill calculator
Input:
Item price
Quantity
Tax percentage
Calculate:
subtotal
tax
final amount
This is much closer to an actual application*/

#include <stdio.h>

int main(){
    int quantity;
    float subtotal,tax,final_amount,price,tax_percent;

    printf("Enter the Price of Product : ");
    scanf("%f",&price);

    printf("Enter the Quantity of Product : ");
    scanf("%d",&quantity);

    printf("Enter the tax rate on product : ");
    scanf("%f",&tax_percent);

    subtotal = price * quantity;
    tax = subtotal * tax_percent / 100;
    final_amount = subtotal + tax;

    printf("Subtotal = %.2f\n",subtotal);
    printf("Tax = %.2f\n",tax);
    printf("Final Amount = %.2f\n",final_amount);

}