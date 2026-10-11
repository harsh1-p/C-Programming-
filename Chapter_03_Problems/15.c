/*Income Tax Slab

Create a simplified tax calculator using different income ranges.

The exact tax rules aren't important here—the goal is practicing multiple conditions and ranges.*/

#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = income * 0.05;
    }
    else if (income <= 1000000) {
        tax = income * 0.20;
    }
    else {
        tax = income * 0.30;
    }

    printf("Tax = Rs. %.2f\n", tax);

    return 0;
}

