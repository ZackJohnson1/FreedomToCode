#include <stdio.h>

const double basicPayRate = 12.00;
double overtime = (basicPayRate * 1.5);
double hoursWorked = 0;

int main()
{
    double weeklyPay = 0.00;
    double weeklyPaywOT = 0.00;
    double fullWeek = 480.00;

    printf("How many hours did you work this week? Enter a number: ");
    scanf("%lf", &hoursWorked);

    if (hoursWorked <= 40) 
    {
        weeklyPay = (hoursWorked * basicPayRate);
        printf("Total Pay: %.2f\n", weeklyPay);
    }
    else if (hoursWorked > 40)
    {
        weeklyPaywOT = (fullWeek + ((hoursWorked - 40) * overtime ));
        printf("Total Pay: %.2f\n", weeklyPaywOT);
    }
    else
    {
        printf("You worked no hours this week!\n");
    }
    
    return 0;
}