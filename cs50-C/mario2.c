#include <stdio.h>

int get_gridsize(void);

int main(void)
{
    int grid_size = get_gridsize();

    for (int i = 0; i < grid_size; i++)
    {
        for (int j = 0; j < grid_size; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

int get_gridsize(void)
{
    int x = 0;
    while (x < 1)
    {
        printf("Enter Gridsize: ");
        scanf("%d", &x);
        if (x < 1)
        {
            printf("ERROR: Please enter a valid number.\n");
        }
    }
    return(x);
}