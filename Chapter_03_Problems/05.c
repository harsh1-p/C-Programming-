/*Greatest of Three

Input:

a
b
c

Print the greatest.*/

#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);

    if(a > b && a > c){
        printf("First number is the greatest");
    }else if(b > a && b > c){
        printf("Second number is the greatest");
    }else{
        printf("Third number is the greatest");
    }
}