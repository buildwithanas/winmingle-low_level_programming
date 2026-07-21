#include <stdlib.h>
#include "main.h"

/* Helper function: count number of words */
int count_words(char *str)
{
    int i, words = 0, in_word = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && in_word == 0)
        {
            words++;
            in_word = 1;
        }
        else if (str[i] == ' ')
            in_word = 0;
    }
    return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of words (NULL-terminated), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k = 0, start, len, word_count;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));  /* +1 for NULL */
    if (words == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
    {
        /* Skip spaces */
        while (str[i] == ' ')
            i++;

        if (str[i] == '\0')
            break;

        /* Find end of word */
        start = i;
        while (str[i] && str[i] != ' ')
            i++;

        len = i - start;

        /* Allocate space for this word */
        words[k] = malloc(sizeof(char) * (len + 1));
        if (words[k] == NULL)
        {
            /* Free everything if one word fails */
            while (k > 0)
                free(words[--k]);
            free(words);
            return (NULL);
        }

        /* Copy the word */
        for (j = 0; j < len; j++)
            words[k][j] = str[start + j];
        words[k][len] = '\0';
        k++;
    }

    words[k] = NULL;  /* end the array with NULL */
    return (words);
}
