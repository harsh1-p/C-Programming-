/*A conditional statement in C is a statement that allows the program to make a decision based on whether a condition is true or false.
*/

#include <stdio.h>

int main(){

    int age;

    if (age >= 20){
        printf("Adult");
    }
    else if (age > 12 && age < 18 ){
        printf("Teenager");
    }
    else{
        printf("Mature");
    }
}