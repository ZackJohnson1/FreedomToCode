#include <stdio.h>

int main()
{
    int _int;
    char _char;
    long _long;
    long long _longLong;
    double _double;
    long double _longDouble;

    printf("int: %zu\n", sizeof(_int));
    printf("char: %zu\n", sizeof(_char));
    printf("long: %zu\n", sizeof(_long));
    printf("long long: %zu\n", sizeof(_longLong));
    printf("double: %zu\n", sizeof(_double));
    printf("long double: %zu\n", sizeof(_longDouble));

    return 0;
}