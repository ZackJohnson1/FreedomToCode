#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);

    printf("a == b: %d\n", a == b);   // Equal to
    printf("a != b: %d\n", a != b);   // Not equal to
    printf("a > b:  %d\n", a > b);    // Greater than
    printf("a < b:  %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);   // Greater than or equal to
    printf("a <= b: %d\n", a <= b);   // Less than or equal to

    return 0;
}
