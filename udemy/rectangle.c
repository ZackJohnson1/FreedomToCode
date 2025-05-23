#include <stdio.h>

double width = 8.33;
double height = 16.9;
double perimeter = 0.0;
double area =0.0;

int main (void)
{
    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("The perimeter is: %g\n", perimeter);
    printf("The area is: %g\n", area);
}