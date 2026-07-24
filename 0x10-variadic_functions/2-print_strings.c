#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, separated by a given separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to print
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
