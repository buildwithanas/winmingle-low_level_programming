#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int num_started = 0;
    unsigned int result = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            num_started = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (num_started == 1)
        {
            break;
        }

        i++;
    }

    return (result * sign);
}
