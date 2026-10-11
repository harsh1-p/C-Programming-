/* Take temperature in Celsius and convert it to Fahrenheit*/

#include<stdio.h>

int main(){

    int F,C;

    printf("Enter the temperature in Celsius : ");
    scanf("%d",&C);
    F = (C * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is %d",F);

}