#include <stdio.h>

int get_gridsize(void);

int main(void)
{
    int grid_size;
    grid_size = get_gridsize();
    if (grid_size < 1)
    {
        printf("Error: Choose a valid number.\n");
    }

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
    int x;
    printf("Enter Gridsize: ");
    scanf("%d", &x);
    return(x);
}