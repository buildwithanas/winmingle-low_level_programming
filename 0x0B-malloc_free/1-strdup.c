#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string into heap memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, NULL on failure or if str is NULL
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate length of string */
    while (str[len])
        len++;

    /* Allocate exact memory needed (length + 1 for '\0') */
    dup = malloc(sizeof(char) * (len + 1));

    if (dup == NULL)
        return (NULL);

    /* Copy characters */
    for (i = 0; i < len; i++)
        dup[i] = str[i];

    /* Add null terminator */
    dup[len] = '\0';

    return (dup);
}
