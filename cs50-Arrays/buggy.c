#include <stdio.h>

int main (void)
{
    // Wanted 3 #, not 4... indexing error on purpose for example
    for (int i = 0; i <= 3; i++) 
    {
        printf("i is %i\n", i);  // Example of printf debugging
        printf("#\n");
    }
}