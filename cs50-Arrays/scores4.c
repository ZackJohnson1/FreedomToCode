#include <stdio.h>

const int N = 3;

int main(void)
{
    int scores[N];
    scores[0] = 73;
    scores[1] = 72;
    scores[2] = 33;

    printf("Averages: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}