/*## Electricity Bill
Create a simple billing program based on units consumed.
For example, define your own slabs such as:
0–100 units
101–200
201–300
300+
Calculate the bill using an `if-else` ladder.*/


#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = units * 7;
    }
    else if (units <= 300) {
        bill = units * 10;
    }
    else {
        bill = units * 12;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}

