#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DAYS_IN_YEAR 365

// Function prototype
int generate_random_day(void);

int main(void) {
    srand(time(NULL)); // Seed random number generator

    bool birthday_set[DAYS_IN_YEAR] = { false };
    int people = 0;

    while (true) {
        int day = generate_random_day();
        people++;

        if (birthday_set[day - 1]) {
            printf("Match found after %d people. Shared birthday on day %d.\n", people, day);
            break;
        }

        birthday_set[day - 1] = true;
    }

    return 0;
}

int generate_random_day(void) {
    return (rand() % DAYS_IN_YEAR) + 1; // Day from 1 to 365
}