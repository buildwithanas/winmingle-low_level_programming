#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints a number stored as string
 */
void print_number(char *num)
{
	int i = 0;

	while (num[i] == '0' && num[i + 1] != '\0')
		i++;

	while (num[i])
	{
		_putchar(num[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;
	int len1, len2, i, j, carry, sum, total_len;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2
