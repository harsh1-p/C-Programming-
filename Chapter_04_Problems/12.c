
/*Check palindrome number

A number is a palindrome if it reads the same backward.

Examples:

121 → palindrome
1331 → palindrome
123 → not palindrome*/

#include <stdio.h>

int main()
{
    int num, original, digit;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}