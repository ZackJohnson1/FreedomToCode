#include <stdio.h>

// Function prototype
int get_int(const char *prompt);

int main(void) 
{
    int scores[5]; // Array of 5 integers

    for (int i = 0; i < 5; i++) {
        char prompt[20];
        sprintf(prompt, "Enter number %d: ", i + 1);
        scores[i] = get_int(prompt);
    }
    printf("\n");

    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("Average: ");
    printf("%f ", (scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) / 5.0);
    printf("\n");

    return 0;
}

int get_int(const char *prompt) 
{
    int num;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &num) == 1) {
            return num;
        }
        printf("Invalid input. Try again.\n");
        while (getchar() != '\n');
    }
}