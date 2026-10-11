/*Tricky Question*/

#include <stdio.h>

int main(){
    int x = 2;

    if (x = 1){
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }
}

/* Here we get answer x is equal to 1 because we have used = not == as = will assign new value
instead of comapring == compares the value. */