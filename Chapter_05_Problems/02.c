/*Create a function to add two numbers*/

#include <stdio.h>
int a,b,c;

void add(int a,int b){
    c = a + b;
    printf("The sum is %d",c);
}

int main(){
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);

    add(a,b);
}
