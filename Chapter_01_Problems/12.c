/*Convert days

Input:

367

Find approximately:

years
remaining days*/

#include<stdio.h>

int main(){

    int totaldays,days,years;

    printf("Enter the days : ");
    scanf("%d",&totaldays);

    years =  totaldays / 365;
    days = totaldays % 365;

    printf("%d Year ",years);
    printf("%d Days ",days);
}