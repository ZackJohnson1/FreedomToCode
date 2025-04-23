#include <stdio.h>

int main(void)
{
    char input;

    printf("Do you agree? T or F: ");
    scanf(" %c", &input); // Space before %c skips any leftover whitespace

    if (input == 'T' || input == 't') {
        printf("Fantastic! You agree!\n");
    }
    else if (input == 'F' || input == 'f') {
        printf("I'm sorry, we disagree!\n");
    }

    return 0;
}