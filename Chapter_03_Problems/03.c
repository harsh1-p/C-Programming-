/*Voting Eligibility
Input age.
If age is 18 or above:
Eligible
otherwise:
Not eligible*/

#include <stdio.h>

int main(){

    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if (age >= 18){
        printf("You are eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
}