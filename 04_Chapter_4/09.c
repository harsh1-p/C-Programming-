/*A continue statement in C is used to skip the current iteration of a loop and move to the next iteration.*/

#include <stdio.h>

int main(){

    for(int i = 0;i  <= 10;i++){ 
        if(i == 3){
            continue;
        }
        printf("%d\n",i);

    }
}