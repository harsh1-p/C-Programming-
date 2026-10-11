/*Check whether a number is positive, negative, or zero.*/

#include <stdio.h>

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("The number is %s",(num>0)? "postive" :(num = 0)?"Zero":"negative");
}