/*Extract the digits */


#include <stdio.h>

int main(){
    int num,digit;

    printf("Enter a number : ");
    scanf("%d",&num);

    while(num > 0){
        digit = num % 10;
        printf("%d\n",digit);
        num = num / 10;
    }
    
}