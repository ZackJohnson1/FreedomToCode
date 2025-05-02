#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = 73;
    scores[1] = 72;
    scores[2] = 33;

    printf("Averages: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}