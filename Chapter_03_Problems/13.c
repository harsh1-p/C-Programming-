/*Calculator
Input:
number1
operator
number2
Example:
10 + 5
Output:
15
Support:
+
-
*
/*/

#include <stdio.h>

int main(){

    int a,b;
    char op;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter a number : ");
    scanf("%d",&b);

    printf("Enter a Operator : ");
    scanf(" %c",&op);

    switch(op){

        case '+':
            printf("%d",a + b);
            break;
        case '-':
            printf("%d",a - b);
            break;
        case '*':
            printf("%d",a * b);
            break;
        case '/':
            printf("%d",a / b);
            break;
    }

    


}