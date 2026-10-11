/*Create a function to convert Celsius to Fahrenheit*/

#include <stdio.h>

void convert(float C){
    float F = C * 9 / 5 + 32;
    printf("The value in Fahrenheit is %.2f",F);
}

void main(){
    float a;
    printf("Enter celsius : ");
    scanf("%f",&a);
    convert(a);
}