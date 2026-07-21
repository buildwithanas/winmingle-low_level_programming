<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
 
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
 
	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
=======
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');

    r = _isalpha('o');
    _putchar(r + '0');

    r = _isalpha(108);
    _putchar(r + '0');

    r = _isalpha(';');
    _putchar(r + '0');

    _putchar('\n');

    return (0);
>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba
}
