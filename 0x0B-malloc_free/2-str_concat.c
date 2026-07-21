#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings into a new allocated string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int i, j, len1 = 0, len2 = 0;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concat == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy s2 */
    for (j = 0; j < len2; j++)
        concat[len1 + j] = s2[j];

    concat[len1 + len2] = '\0';

    return (concat);
}
