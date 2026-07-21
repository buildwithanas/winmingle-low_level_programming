#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string to modify
 * @to: the string to set it to
 */
void set_string(char **s, char *to)
{
    *s = to;
}
