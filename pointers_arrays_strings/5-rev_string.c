#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
    int len = 0;
    int i = 0;
    char temp;

    while (s[len] != '\0')
    {
        len++;
    }

    len--; /* last valid character index */

    while (i < len)
    {
        temp = s[i];
        s[i] = s[len];
        s[len] = temp;

        i++;
        len--;
    }
}
