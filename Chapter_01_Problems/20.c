/*Currency conversion

Take an amount in one currency and convert using a user-provided exchange rate.

This teaches you why hard-coding values isn't always desirable.*/

#include <stdio.h>

int main(){
    int amount,rate,converted;

    printf("Enter the amount : ");
    scanf("%d",&amount);
    printf("Enter the rate : ");
    scanf("%d",&rate);

    converted = amount * rate ;

    printf("The converted amount is %d",converted);

}