#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
 srand(time(0));
int player, computer = (rand() % 3);
int count = 0;
int win = 0;
// 0 = stone
// 1 = paper
// 2 = scissor
// if you choose any other number then code show error

printf("choose 0 for stone,1 for paper,2 for scissor : ");
scanf("%d", &player);
printf("compuet choose %d\n", computer);

if(player == 0 && computer == 0){
    printf("its a draw\n");
    count++;
} else if(player == 0 && computer == 1){
    printf("you lose\n");
    count++;
} else if(player == 0 && computer == 2){
    printf("you win\n");
    count++;
    win++;
} else if(player == 1 && computer == 0){
    printf("you win\n");
    count++; 
    win++;
} else if(player == 1 && computer == 1){
    printf("its a draw\n");
    count++;
} else if(player == 1 && computer == 2){
    printf("you lose\n");
    count++;
} else if(player == 2 && computer == 0){
    printf("you lose\n");
    count++;
} else if(player == 2 && computer == 1){
    printf("you win\n");
    count++;
    win++;
}
 else if(player == 2 && computer == 2){
    printf("its a draw\n");
    count++;
} else {
    printf("somthing went wrong:\n");
    count++;
}

printf("the game was played %d time and you win %d times", count, win);

return 0;
}