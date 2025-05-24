#include <stdio.h>

int main()
{
    int _int;
    char _char;
    long _long;
    long long _longLong;
    double _double;
    long double _longDouble;

    printf("int: %zd\n", sizeof(_int));
    printf("char: %zd\n", sizeof(_char));
    printf("long: %zd\n", sizeof(_long));
    printf("long long: %zd\n", sizeof(_longLong));
    printf("double: %zd\n", sizeof(_double));
    printf("long double: %zd\n", sizeof(_longDouble));

    return 0;
}