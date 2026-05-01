#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("Random Number: %d\n", randomNumber);

    int no_of_guesses = 0;
    int guessed;

    printf("GUESS THE NUMBER!! \n");
    printf("Welcome to the game.... \n");
    printf("Lets\'s start! \n");
    do{
        printf("Guess a number! ");
        scanf("%d", &guessed);

        if(guessed > randomNumber){
            printf("Think a smaller number! \n");
        }else if(guessed < randomNumber){
            printf("Think a higher number! \n");
        }else{
            printf("Congrats!! \n");
        }

        no_of_guesses++;

    }
    while(guessed != randomNumber);
    printf("You guessed the number in %d attempt! \n", no_of_guesses);
    return 0;
}
