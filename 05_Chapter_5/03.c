/*Print Namaste if user is Indian and Bonjuver if user is French*/

#include <stdio.h>

char ch;

void namaste();
void bonjover();

int main(){
    printf("Enter country name 'F' for French and 'I' for India : ");
    scanf("%c",&ch);

    if (ch == 'I'){
        namaste();
    }else{
        bonjover();
    }
}

void namaste(){
    printf("Namaste");
}

void bonjover(){
    printf("Bonjover");
}