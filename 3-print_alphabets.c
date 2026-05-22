/**
 * Author: Anas Amoo
 * Program: WinMingle Community C Training
 * Description: Prints lowercase and uppercase alphabets
 */

#include <stdio.h>

int main(void)
{
    char ch;

    ch = 'a';

    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }

    ch = 'A';

    while (ch <= 'Z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return (0);
}
