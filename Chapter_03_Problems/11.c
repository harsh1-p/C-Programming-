/*Character Type

Input a character and determine whether it is:

Uppercase
Lowercase
Digit
Special character*/


#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character :  ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercasse");
    }else if(ch >= '0' && ch <= '9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}
