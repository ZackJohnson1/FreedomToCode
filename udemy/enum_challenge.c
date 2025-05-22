#include <stdio.h>


enum Company {
    GOOGLE,
    FACEBOOK, 
    XEROX, 
    YAHOO, 
    EBAY, 
    MICROSOFT};

int main()
{
    enum Company companyA = XEROX;
    enum Company companyB = GOOGLE;
    enum Company companyC = EBAY;

    printf("Here are the requested variables index locations\n");
    printf("%d\n", companyA);
    printf("%d\n", companyB);
    printf("%d\n", companyC);

    return 0;
}