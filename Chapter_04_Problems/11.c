/*Product of digits*/

#include <stdio.h>

int main(){

    int num,digit;
    int product = 1;


    printf("Enter a number : ");
    scanf("%d",&num);

    while(num > 0){
        digit = num % 10;
        product *= digit;
        num = num/10;
    }

    printf("The product of digits is %d",product);
}