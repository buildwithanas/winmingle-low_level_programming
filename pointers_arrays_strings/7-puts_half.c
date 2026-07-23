#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0;
    int start;
    int i;

    while (str[len] != '\0')
    {
        len++;
    }

    start = (len + 1) / 2;

    for (i = start; i < len; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
