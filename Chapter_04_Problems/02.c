/*Print N to 1*/

#include <stdio.h>

int main(){
    int i,n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i = n;i >= 1;i--){
        printf("%d",i);
    }
}