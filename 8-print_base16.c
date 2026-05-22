/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints hexadecimal numbers in lowercase
 */

#include <stdio.h>

int main(void)
{
    int n = 0;
    char ch = 'a';

    /* print numbers 0 - 9 */
    while (n <= 9)
    {
        putchar(n + '0');
        n++;
    }

    /* print letters a - f */
    while (ch <= 'f')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return (0);
}
