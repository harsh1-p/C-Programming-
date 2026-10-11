/*Count digits
Input:
58392*/


#include <stdio.h>

int main(){

    int num;
    int count = 0;


    printf("Enter a number : ");
    scanf("%d",&num);

    while(num > 0){
        count++;
        num = num/10;
    }

    printf("The total number of digits are %d",count);
}