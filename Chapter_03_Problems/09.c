/*Three Numbers in Ascending Order

Input:

a = 5
b = 2
c = 8

Output:

2 5 8*/

#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 8;
    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}