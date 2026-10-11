/*Input two numbers and print the greater number.*/

#include <stdio.h>
int main(){

    int a,b;

    printf("Enter a number : ");
    scanf("%d",&a);
    
    printf("Enter a number : ");
    scanf("%d",&b);

    if (a > b){
        printf("First number is greater.");
    }else{
        printf("Second number is greater");
    }
}