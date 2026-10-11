/*Print the table of number entered by the user*/

#include <stdio.h>

int main(){

    int i,n;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i = 1;i <=10;i++){
        printf("%d *  %d = %d\n",n,i,i*n);
    }
}