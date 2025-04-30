#include <stdio.h>

int main(void)
{
    int x;
    int y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("%d\n", x + y);
}