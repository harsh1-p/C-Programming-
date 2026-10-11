/*## Convert seconds
Input:
3672
Convert into:
1 hour
1 minute
12 seconds
This is a fantastic real-world-style problem*/

#include <stdio.h>

int main(){

    int totalseconds;
    int hours,minutes,seconds;

    printf("Enter the totalseconds ");
    scanf("%d",&totalseconds);

    hours = totalseconds / 3600;
    totalseconds = totalseconds % 3600;

    minutes = totalseconds / 60;
    seconds = totalseconds % 60;

    printf("%d Hour\n",hours);
    printf("%d Minutes\n",minutes);
    printf("%d Seconds\n",seconds);
}