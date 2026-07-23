#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
    int i;
    unsigned long a_high = 0, a_low = 1;
    unsigned long b_high = 0, b_low = 2;
    unsigned long next_high, next_low;
    unsigned long max = 1000000000; /* 1e9 base split */

    printf("%lu, %lu", a_low, b_low);

    for (i = 3; i <= 98; i++)
    {
        next_low = (a_low + b_low) % max;
        next_high = a_high + b_high + (a_low + b_low) / max;

        printf(", ");

        if (next_high > 0)
            printf("%lu%09lu", next_high, next_low);
        else
            printf("%lu", next_low);

        a_high = b_high;
        a_low = b_low;
        b_high = next_high;
        b_low = next_low;
    }

    printf("\n");

    return (0);
}
