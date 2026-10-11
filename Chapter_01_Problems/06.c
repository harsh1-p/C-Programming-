/*Swap two numbers
Input:
a = 10
b = 20
Output:
a = 20
b = 10
First solve using a third variable.*/


#include <stdio.h>

int main(){

    int a,b,temp;

    a = 10;
    b = 20;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d",a);
    printf("\nb = %d",b);
    
}