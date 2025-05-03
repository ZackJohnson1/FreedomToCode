#include <stdio.h>
#include <math.h>

int p = 1000;       // Principal
double r = 0.05;    // Interest rate
int n = 1;          // Times compounded per year
int t = 3;          // Time in years

int main(void)
{
    printf("Compound interest: %.2f\n", p * pow(1 + r / n, n * t));

    return 0;
}