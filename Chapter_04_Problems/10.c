/*Sum of digits*/

#include <stdio.h>

int main(){

    int num,digit;
    int sum = 0;


    printf("Enter a number : ");
    scanf("%d",&num);

    while(num > 0){
        digit = num % 10;
        sum += digit;
        num = num/10;
    }

    printf("The sum of digits are %d",sum);
}