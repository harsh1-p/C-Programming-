/*Strong Logic Problems
Now try these.
Simple interest
Inputs:
Principal
Rate
Time*/

#include<stdio.h>

int main(){

    int P,R,T,SI;

    printf("Enter Principal  amount : ");
    scanf("%d",&P);
    printf("Enter Rate : ");
    scanf("%d",&R);
    printf("Enter Time : ");
    scanf("%d",&T);

    SI = (P*R*T)/100;

    printf("The Simple Intrest is %d",SI);

}