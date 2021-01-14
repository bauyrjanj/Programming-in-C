#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;

    while(guess != secretNumber && guessCount<=2){
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    }
    if(guess==secretNumber){
        printf("You Win!!!\n");
    } else {
        printf("You are out of guesses!\n");
    }
    

}