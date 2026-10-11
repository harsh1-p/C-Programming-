/*Triangle Validity
Given:
a
b
c
determine whether these sides can form a triangle.
Then determine whether it is:
Equilateral
Isosceles
Scalene
This is a very good logic-building problem.*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }

    }
    else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

