/*Convert lowercase to uppercase
Input:
b
Output:
B*/

#include <stdio.h>

int main(){

    char ch;

    printf("Enter a lowercase character : ");
    scanf("%c",&ch);

    ch = ch - 32;

    printf("The Uppercase is %c",ch);
}