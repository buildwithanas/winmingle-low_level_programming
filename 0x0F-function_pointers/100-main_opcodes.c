#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *ptr = (unsigned char *)main;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", ptr[i]);
        if (i < bytes - 1)
            printf(" ");
        else
            printf("\n");
    }

    return (0);
}
