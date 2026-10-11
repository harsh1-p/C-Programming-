#include <stdio.h>

int main(){

    int age = 20;
    int *ptr = &age;
    
    printf("%p\n",&age);        /*Address of age*/
    printf("%p\n",ptr);         /*Address of age which is stored in ptr*/
    printf("%p\n",&ptr);        /*Address of pointer newly created for ptr*/


    /*      * helps to print the value      */
    printf("%d\n",*ptr);        /*Value at that place*/
    printf("%d\n",age);         /*Value at that place*/          
    printf("%d\n",*(&age));     /*Value at that place*/
}