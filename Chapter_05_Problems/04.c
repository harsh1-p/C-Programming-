/*Create a function to find the square of a number*/

#include<stdio.h>

void square(int n){
    int square = n * n;
    printf("The square of %d is %d",n,square);
}

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    square(a);
}