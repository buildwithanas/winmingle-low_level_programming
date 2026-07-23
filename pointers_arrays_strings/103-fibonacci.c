#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers under 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
    unsigned long a = 1, b = 2, next;
    unsigned long sum = 0;

    while (a <= 4000000)
    {
        if (a % 2 == 0)
            sum += a;

        next = a + b;
        a = b;
        b = next;
    }

    printf("%lu\n", sum);

    return (0);
}
