#include <stdio.h>

void meow(int n);

int main(void)
{
    int num_meows;
    printf("Meow this many times: ");
    scanf("%d", &num_meows);
    {
        meow(num_meows);
    }
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    printf("meow\n");
}