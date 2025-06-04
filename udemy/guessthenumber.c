#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess;
    const int MAX_GUESSES = 5;
    int tries_left = MAX_GUESSES;

    /* Seed the RNG using the current time */
    srand((unsigned)time(NULL));
    secret = rand() % 21;  // random number in [0..20]

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n\n");

    while (tries_left > 0) {
        printf("You have %d %s left.\n", 
               tries_left, (tries_left == 1) ? "try" : "tries");

        printf("Enter a guess: ");
        if (scanf("%d", &guess) != 1) {
            /* If the user types something that isn’t an integer,
               clear stdin and prompt again. */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            printf("Please enter a valid integer.\n\n");
            continue;
        }

        if (guess == secret) {
            printf("\nCongratulations. You guessed it!\n");
            return 0;
        }

        /* If wrong, give a hint */
        if (guess < secret) {
            printf("Sorry, %d is wrong. My number is greater than that.\n\n", guess);
        } else {
            printf("Sorry, %d is wrong. My number is less than that.\n\n", guess);
        }

        tries_left--;
    }

    /* If we exit the loop, the user ran out of tries */
    printf("You have no tries left. The correct number was %d.\n", secret);
    return 0;
}
