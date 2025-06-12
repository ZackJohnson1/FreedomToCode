#include <stdio.h>

#define NUM_HOMES 27

int main(void) {
    /* theCove[i] = number of occupants in house (i+1) */
    int theCove[NUM_HOMES] = {
        3, 2, 4, 1, 5, 2, 3,
        2, 4, 1, 3, 2, 2, 5,
        1, 4, 3, 2, 3, 1, 4,
        2, 3, 2, 1, 3, 7
    };

    for (int h = 0; h < NUM_HOMES; ++h) {
        int occ = theCove[h];
        printf("House %d has %d occupant%s:\n",
               h + 1, occ, occ == 1 ? "" : "s");

        for (int p = 1; p <= occ; ++p) {
            printf("  Occupant %d\n", p);
        }
    putchar('\n');
    }

    return 0;
}
