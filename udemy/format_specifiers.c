#include <stdio.h>

int main(void)
{
    int     integerVar = 100;
    float   floatingVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';
    _Bool   boolVar = 0;

    printf("integerVar = %i\n", integerVar);      // %i for signed int
    printf("floatingVar = %f\n", floatingVar);    // %f for float
    printf("doubleVar = %e\n", doubleVar);        // %e for scientific notation
    printf("doubleVar = %g\n", doubleVar);        // %g for shortest representation
    printf("charVar = %c\n", charVar);            // %c for single character
    printf("boolVar = %i\n", boolVar);            // %i also works for _Bool (prints 0 or 1)

    return 0;
}
