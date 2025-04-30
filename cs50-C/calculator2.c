#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int x;
    int y;
    int z = add(x, y);

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("%d\n", z);
}

int add(int a, int b)
{
    return a + b;
}