/*break statement in C is used to immediately stop a loop (for, while, or do-while).*/

#include <stdio.h>
 int main(){

    int i;

    for(i = 1;i <= 5;i++){
        if(i == 3){
            break;
        }
        printf("%d\n",i);
    }
 }