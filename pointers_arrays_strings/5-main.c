#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
    char s[] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
=======

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba

    return (0);
}
