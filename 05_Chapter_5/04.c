/*Calculate value and GST*/


#include<stdio.h>

void price(float value){
    value = value + (0.18 * value);
    printf("The final price is %.2f",value);
}


int main(float value){
    printf("Enter value : ");
    scanf("%f",&value);

    price(value);
}