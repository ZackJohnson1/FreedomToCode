#include <stdio.h>
#include <math.h>

int p = 1000;       // Principal
double r = 0.05;    // Interest rate
int n = 1;          // Times compounded per year
int t = 3;          // Time in years

int main(void)
{
    double paren;
    int exp;
    double a;

    paren = (1 + r / n);
    printf("Parenthesis value: %.4f\n", paren);

    exp = n * t;
    printf("Exponent value: %i\n", exp);

    a = p * pow(paren, exp);
    printf("Here's your compound interest: %.2f\n", a);

    return 0;
}