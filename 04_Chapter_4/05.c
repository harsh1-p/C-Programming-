/*A do-while loop in C is used to repeat a block of code as long as a condition is true.
The important difference is that a do-while loop always runs at least once, because the condition is checked after the code runs.
Syntax
do
{
    // code to repeat
} while (condition);*/

#include <stdio.h>

int main(){

    int i = 0;

    do{
        printf("%d\n",i);
        i++;

    }while(i<=5);
}


