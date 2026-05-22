/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints numbers 0 to 9 without using char
 */

#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n <= 9)
    {
        putchar(n + '0');
        n++;
    }

    putchar('\n');

    return (0);
}
