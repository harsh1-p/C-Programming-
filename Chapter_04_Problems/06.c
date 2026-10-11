/*Sum from 1 to N*/

#include <stdio.h>
int main(){
    int i,n;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(i= 1;i <= n;i++){
        sum+=i;
    }

    printf("The sum is %d",sum);
}