/*Print the  number from 0 to n,if n is given by user*/

#include<stdio.h>

int main(){
    int n,i = 0;

    printf("Enter a n : ");
    scanf("%d",&n);


    while(i <= n){
        printf("%d\n",i);
        i++;
    }
}