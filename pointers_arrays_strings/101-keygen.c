#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password
 *
 * Return: Always 0
 */
int main(void)
{
    char password[100];
    int i = 0;
    int sum = 0;

    srand(time(NULL));

    /* generate characters until we reach a target sum */
    while (sum < 2772)
    {
        password[i] = 33 + rand() % 94; /* printable ASCII */
        sum += password[i];
        i++;
    }

    /* adjust last character to match exactly 2772 */
    password[i - 1] -= (sum - 2772);

    password[i] = '\0';

    printf("%s", password);

    return (0);
}
