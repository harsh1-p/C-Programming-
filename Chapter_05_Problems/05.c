/*Create a function to find the maximum of two numbers*/

#include <stdio.h>

void max(int a,int b){
    if (a > b){
        printf("First number is the greatest.");
    }else{
        printf("Second number is the greatest.");
    }
}

int main(){
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);

    max(x,y);
}