#include "main.h"

/**
 * convert_day - converts month/day to day of year
 * @month: month
 * @day: day
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int i;
    int sum = 0;

    int month_days[] = {31, 28, 31, 30, 31, 30,
                        31, 31, 30, 31, 30, 31};

    for (i = 0; i < month - 1; i++)
    {
        sum += month_days[i];
    }

    return (sum + day);
}
