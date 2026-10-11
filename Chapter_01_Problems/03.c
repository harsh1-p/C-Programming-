/*Take the user's:

name
age

and display:*/

#include <stdio.h>

int main(){
    char name[50];
    int age;
    printf("Enter you name : ",name);
    scanf("%s",&name);
    printf("Enter you age : ",age);
    scanf("%d",&age);

    printf("My name is %s and my age is %d",name,age);

}