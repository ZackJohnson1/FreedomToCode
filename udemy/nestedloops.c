#include <stdio.h>

int main() {
    int numHouses = 5; // Let's say there are 5 houses on the street
    int peopleInHouse[] = {3, 4, 2, 5, 1}; // Number of people in each house

    printf("Counting houses on the street...\n");
    for (int i = 0; i < numHouses; i++) {
        printf("House %d:\n", i + 1);

        // Count people in each house
        for (int j = 0; j < peopleInHouse[i]; j++) {
            printf("  Person %d in House %d\n", j + 1, i + 1);
        }
    }

    return 0;
}
