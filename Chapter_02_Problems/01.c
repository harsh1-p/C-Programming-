/*Write a C program to determine whether a number is even or odd.*/

#include <stdio.h>

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);
    
    printf("The number is %s",(num % 2 == 0) ? "Even" : "Odd");

}