#include <stdio.h>

const double minutesInDay = (60 * 24);
const double minutesInYear = (60 * 24 * 365);

int main()
{
    int minutes = 0;
    double years = 0;
    double days = 0;

    printf("How many minutes for the calculation? Enter a number: ");
    scanf("%d", &minutes);

    days = minutes / minutesInDay;
    years = minutes / minutesInYear;

    printf("Minutes: %d\n", minutes);
    printf("Days: %.2f\n", days);
    printf("Years: %.2f\n", years);

    return 0;
}
