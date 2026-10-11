/*Circle calculations
Input:
radius
Calculate:
Area
Circumference
Use a constant for π.*/

#include <stdio.h>

int main(){

    float radius,area,circumference;
    float pi = 3.14;

    printf("Enter the radius of circle : ");
    scanf("%f",&radius);

    area = pi * (radius * radius);
    circumference =  2 * pi * radius;

    printf("The area of circle is %f and circumference of circle is %f",area,circumference);
}