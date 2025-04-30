#include <stdio.h>

int get_gridsize(void);

int main(void)
{
    int grid_size;
    grid_size = get_gridsize();
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