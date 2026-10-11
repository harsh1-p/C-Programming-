/*2.Arithmetic Instruction
Used to perform mathematical calculations.*/

#include <stdio.h>
#include <math.h>

int main(){

    int a = 6, b = 2;
    int sum = a + b;
    int multiply = a * b;

    int power = pow(a,b);
    printf("Power is %d",power);
}