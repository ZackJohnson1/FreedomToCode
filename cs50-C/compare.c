#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    printf("Enter an integer for x: ");
    scanf("%d", &num1);
    printf("Enter an integer for y: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("x is less than y\n");
    }
    else if (num1 > num2)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("Both numbers are equal.");
    }
}