/*Find the greater of two numbers.*/

#include <stdio.h>

int main(){

    int a ,b;

    printf("Enter a number a :");
    scanf("%d",&a);
    printf("Enter a number b :");
    scanf("%d",&b);

    printf("The greater of two numbers is %s",(a>b)? "A" : "B");
}