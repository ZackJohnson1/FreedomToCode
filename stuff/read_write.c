#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char input[100];

    // --- Step 1: Get user input ---
    printf("Enter a line of text: ");
    fgets(input, sizeof(input), stdin); // safer than gets()

    // --- Step 2: Write input to file ---
    fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fptr, "%s", input);
    fclose(fptr);

    // --- Step 3: Read it back from file ---
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading from file:\n");

    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch); // Print each character as it's read
    }
    fclose(fptr);

    return 0;
}