/*Take a character and print it.

Then try:

printf("%d", ch);

and observe what happens.*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);

    printf("The character is %c",ch);
    printf("\nThe ASIIC value is %d",ch);

    
}