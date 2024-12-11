#include <stdio.h>

int LeapYear(int year)
{

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not leap year", year);
    }
}

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (LeapYear(year))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
