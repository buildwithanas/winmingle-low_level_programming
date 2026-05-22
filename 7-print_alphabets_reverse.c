/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet in reverse
 */

#include <stdio.h>

int main(void)
{
    char ch = 'z';

    while (ch >= 'a')
    {
        putchar(ch);
        ch--;
    }

    putchar('\n');

    return (0);
}
