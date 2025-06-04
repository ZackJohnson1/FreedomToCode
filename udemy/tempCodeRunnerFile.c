#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed once at program start

    int min = 0;
    int max = 20;
    int randomInRange = rand() % (max - min + 1) + min;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    printf("Random number between %d and %d: %d\n", min, max, randomInRange);
    return 0;
}
