/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints alphabet except q and e
 */

#include <stdio.h>

int main(void)
{
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }

        ch++;
    }

    putchar('\n');

    return (0);
}
