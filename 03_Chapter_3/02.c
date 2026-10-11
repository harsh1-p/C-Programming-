/*In C, a switch statement is a conditional statement used when you want to choose one option from several fixed choices.
*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter a day(1-7) : ");
    scanf("%d",&day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid day");
    }

    
}