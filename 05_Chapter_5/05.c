/*Use Library funnction to find the square of number */

#include <stdio.h>
#include<math.h>

void square(int n){
   
    printf("%.2f",pow(n,2));
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    square(n);
}