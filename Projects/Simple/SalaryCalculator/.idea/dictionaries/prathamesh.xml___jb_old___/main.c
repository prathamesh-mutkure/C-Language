#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int random, input;

    time_t t;

    // A C function
    srand((unsigned) time(&t));

    // Generating a random number
    random = rand()%21;

    printf("\nThis is a Guessing game\nI have chosen a number between 1 and 20, which you have to guess");

    for (int i = 0; i < 5; ++i) {

        printf("\n\nYou have %d tries left.", (5 - i));
        printf("\nEnter a guess: \n");
        scanf("%d", &input);

        if (input == random){
            printf("\nCongratulations! You guessed it right.");
            break;
        }
        else if (input > random) {
            printf("Sorry, %d is wrong. My number is less than that.", input);
        }
        else if (input < random){
            printf("Sorry, %d is wrong. My number is more than that.", input);
        }
        else {
            printf("Invalid Guess");
        }

    }

    if (input != random){
        printf("\n\nYou lost! The number was %d\n", random);
    }

    return 0;
}