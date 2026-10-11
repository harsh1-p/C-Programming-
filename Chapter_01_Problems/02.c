/*Take two integers from the user and print:

Sum
Difference
Product
Quotient
Remainder*/

#include<stdio.h>

int main(){

    int sum,difference,product,quotient,remainder,a,b;

    printf("Enter a number :",a);
    scanf("%d",&a);
    printf("Enter b number :",b);
    scanf("%d",&b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("Sum is %d\n",sum);
    printf("Difference is %d\n",difference);
    printf("Product is %d\n",product);
    printf("Quotient is %d\n",quotient);
    printf("Remainder is %d\n",remainder);
    


}