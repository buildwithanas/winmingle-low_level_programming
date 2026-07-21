#include "main.h"

char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    if (s[i] == c)
        return (&s[i]);
    return (0);
}
