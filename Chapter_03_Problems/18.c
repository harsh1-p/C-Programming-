/*Login System
Inputs:
username
password
Check:
correct username + correct password
correct username + wrong password
wrong username

Use nested conditions.*/

#include <stdio.h>
#include<string.h>

int main(){

    char username[20];
    char password[20];

    printf("Enter username : ");
    scanf("%s",&username);

    printf("Enter password : ");
    scanf("%s",&password);

    if (strcmp(username,"Harshp1")== 0){
        if (strcmp(password,"12345678")== 0){
            printf("Login Succesful");
        }else{
            printf("wrong Password");
        }
    }else{
        printf("Wrong Username");
    }
}