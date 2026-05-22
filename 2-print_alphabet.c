/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints alphabet in lowercase
 */

#include <stdio.h>

int main(void)
{
    char ch = 'a';

    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return (0);
}
