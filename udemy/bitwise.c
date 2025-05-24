#include <stdio.h>

int main() {
    unsigned int a = 60;   // 0000 0000 0011 1100
    unsigned int b = 13;   // 0000 0000 0000 1101 (not used)
    int result = 0;

    result = a << 4;       // 0011 1100 << 4 = 1111 0000 0000 (binary) = 960 (decimal)

    printf("result is %d", result);

    return 0;
}
