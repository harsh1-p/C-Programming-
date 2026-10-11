/*Rock Paper Scissors

Two players enter:

1 → Rock
2 → Paper
3 → Scissors

Determine:

Player 1 wins
Player 2 wins
Draw
Invalid input

You can solve this with switch or if-else*/



#include <stdio.h>
int main(){
    int p1,p2;

    printf("Player 1(1-Rock ,2-Paper ,3-Scissor)");
    scanf("%d",&p1);
    printf("Player 2(1-Rock ,2-Paper ,3-Scissor)");
    scanf("%d",&p2);


    if(p1 < 0 || p1 > 3 || p2 < 0 || p1 > 3){
        printf("Invalid Output");
    }else if(p1 == p2){
        printf("Match Draw");
    }else if((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2)){
        printf("Player 1 Wins");
    }else{
        printf("Player 2 Wins");
    }

}
