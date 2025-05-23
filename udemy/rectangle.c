#include <stdio.h>

double width = 8.33;
double height = 16.9;
double perimeter = 0.0;
double area =0.0;

int main (void)
{
    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Rectangle Program\nWidth: %.2f\nHeight: %2f\n", width, height);
    printf("The perimeter is: %.2f\n", perimeter);
    printf("The area is: %.2f\n", area);
}