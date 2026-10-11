/*Challenge 1 — ATM
Create a program that accepts:
balance
withdrawal amount
Conditions:
withdrawal must be positive
withdrawal must not exceed balance
after withdrawal, minimum balance must be maintained
otherwise display appropriate message*/

#include <stdio.h>

int main(){

    float balance,withdrawal_amount;
    float min_balance = 500;

    printf("Enter your balance : ");
    scanf("%f",&balance);

    printf("Enter withdrawal amount : ");
    scanf("%f",&withdrawal_amount);

    if (withdrawal_amount > balance){
        printf("Insufficient Balance");
    }else if(balance - withdrawal_amount < min_balance){
        printf("The minimum balance after withdrawal should be 500");
    }else{
        balance = balance - withdrawal_amount;
        printf("Withdrawal sucessful\n");
        printf("Remaining balance is %f",balance);
    }

}