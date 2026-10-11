/*
Q7 — Find average
Take three integers:
10 20 30
Output:
20.0
Important: avoid accidental integer division*/

#include<stdio.h>

int main(){
    int a,b,c;
    float avg;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("The average is %.1f",avg);
}