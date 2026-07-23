#include "main.h"

/**
 * print_last_digit - prints and returns last digit of a number
 * @n: input number
 *
 * Return: last digit (always positive)
 */

int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;

    if (last_digit < 0)
        last_digit = -last_digit;

    _putchar('0' + last_digit);

    return (last_digit);
}
