#include <stdio.h>

int get_gridsize(void);
void print_column (int height);

int main (void)
{
    int x;
    x = get_gridsize();
    print_column(x);
}

int get_gridsize(void)
{
    int h = 0;
    while (h < 1)
    {
        printf("Enter Gridsize: ");
        scanf("%d", &h);
        if (h < 1)
        {
            printf("ERROR: Please enter a valid number.\n");
        }
    }
    return(h);
}

void print_column (int height)
{
    for (int i = 0; i < height; i++)
    printf("#\n");
}