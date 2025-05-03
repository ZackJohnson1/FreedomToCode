#include <stdio.h>
#include <math.h>

int p = 1000;   // Principle P
double r = 0.05;   // Interest rate R
int n = 1;      // Num times compounded per year
int t = 3;      // Time t in years

int main(void)
{
    int a;
    int paren;
    int exp;

    paren = (1 + r / n);
    printf(paren);
    exp = (n * t);
    a = p * pow(paren, exp);
    printf("Here's your compound interest: %.2d\n", a);
}