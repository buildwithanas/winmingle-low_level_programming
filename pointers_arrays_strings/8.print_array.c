#include "main.h"

/**
 * print_number - helper function to print an integer
 * @n: number to print
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0');
}

/**
 * print_array - prints n elements of an array of integers
 * @a: array pointer
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        print_number(a[i]);

        if (i != n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');
}
