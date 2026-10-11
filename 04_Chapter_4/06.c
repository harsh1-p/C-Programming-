/*Print the sum of first n natural numbers*/

#include <stdio.h>

int main(){

    int sum = 0;
    int i,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i = 1;i <= n;i++){
        sum+=i;
    }
    printf("Sum is %d\n",sum);

    for(i = n;i >=1;i--){
        printf("%d\n",i);
    }

    
}