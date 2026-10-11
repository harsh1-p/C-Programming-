/*Total and average marks
Take five subject marks.
Print:
Total
Average*/

#include <stdio.h>

int main(){

    int Maths,Physics,Chemistry,Biology,English;
    int total,Average;

    printf("Enter marks of Maths : \n");
    scanf("%d",&Maths);
    printf("Enter marks of Physics : \n");
    scanf("%d",&Physics);
    printf("Enter marks of Chemistry : \n");
    scanf("%d",&Chemistry);
    printf("Enter marks of Biology : \n");
    scanf("%d",&Biology);
    printf("Enter marks of English : \n");
    scanf("%d",&English);

    total = Maths + Physics + Chemistry + Biology + English;
    Average = total / 5;

    printf("The total marks scored are %d and the average is %d",total,Average);


}