#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all program arguments into one string
 *             Each argument is followed by a newline (\n)
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: pointer to new string, or NULL if fails
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k = 0, total_len = 0;

    /* If no arguments, return NULL */
    if (ac == 0 || av == NULL)
        return (NULL);

    /* Step 1: Calculate total length needed */
    for (i = 0; i < ac; i++)
    {
        if (av[i] == NULL)  /* safety check */
            return (NULL);
        for (j = 0; av[i][j]; j++)  /* count characters */
            total_len++;
        total_len++;  /* +1 for '\n' after each argument */
    }

    /* Step 2: Allocate memory */
    str = malloc(sizeof(char) * (total_len + 1));  /* +1 for final '\0' */
    if (str == NULL)
        return (NULL);

    /* Step 3: Copy all arguments + newline */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';  /* add newline after each argument */
        k++;
    }
    str[k] = '\0';  /* end the big string */

    return (str);
}
