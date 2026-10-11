/*Create a function to check whether a number is even*/

#include <stdio.h>

void is_even(int n){
    if (n % 2 == 0){
        printf("Is_even");
    }else{
        printf("Is_odd");
    }
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    is_even(n);
}