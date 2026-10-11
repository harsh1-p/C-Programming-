/*Positive or Negative

Input an integer and determine whether it is:

Positive
Negative
Zero*/

#include <stdio.h>

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if (num > 0){
        printf("Positive");
    }
    else if(num < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}