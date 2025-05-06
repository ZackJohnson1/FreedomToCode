#include <stdio.h>

int main(void)
{
    char name_string[100];
    printf("Name: ");
    scanf("%s", name_string);

    int n = 0;
    while (name_string[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}