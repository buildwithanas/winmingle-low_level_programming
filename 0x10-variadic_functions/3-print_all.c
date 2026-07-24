#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments passed to the function
 *          c: char, i: int, f: float, s: char * (string)
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j = 0;
    char *str;
    char *separator = "";

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (j < 1)
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(args, int));
                    separator = ", ";
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(args, int));
                    separator = ", ";
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(args, double));
                    separator = ", ";
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        printf("%s(nil)", separator);
                    else
                        printf("%s%s", separator, str);
                    separator = ", ";
                    break;
                default:
                    break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
