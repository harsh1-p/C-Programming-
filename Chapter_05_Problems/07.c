/*Find factorial using a function  */

#include <stdio.h>

int factorial(int n){
    int fact = 1;
    int i;
    for(i = 1; i <= n;i++){
        fact = fact * i;
    
    }
    return fact;
}

int main(){
    int n,result;

    printf("Enter a number : ");
    scanf("%d",&n);

    result = factorial(n);

    printf("The factorial is %d",result);
}