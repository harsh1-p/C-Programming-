/*Area and perimeter of rectangle
Input:
length
width
Calculate:
Area
Perimeter*/


#include <stdio.h>

int main(){

    int length,width,area,perimeter;

    printf("Enter the length of rectangle : ");
    scanf("%d",&length);
    printf("Enter the width of rectangle : ");
    scanf("%d",&width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("The area of rectangle is %d and perimeter is %d",area,perimeter);
}