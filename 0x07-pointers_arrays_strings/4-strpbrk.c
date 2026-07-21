#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the first occurrence in s of any byte from accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    int j;

    while (*s != '\0')
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (*s == accept[j])
            {
                return (s);
            }
        }
        s++;
    }
    return (NULL);
}
