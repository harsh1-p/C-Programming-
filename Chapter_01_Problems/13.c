/*Calculate total bill
Input:
price
quantity
Calculate:
total = price × quantity*/


#include <stdio.h>

int main(){

    int price,quantity,total;

    printf("Enter the price of Product : ");
    scanf("%d",&price);
    printf("Enter the quantity of Product : ");
    scanf("%d",&quantity);

    total = price * quantity;

    printf("The total price is %d",total);

    
}

