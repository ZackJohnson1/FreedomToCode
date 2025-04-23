#include <stdio.h>

int main(void)
{
    char input;

    printf("Do you agree? T or F: ");
    scanf(" %c", &input); // Space before %c skips any leftover whitespace

    if (input == 'T') {
        printf("Fantastic! You agree!\n");
    }
    else {
        printf("I'm sorry, we disagree!\n");
    }

    return 0;
}