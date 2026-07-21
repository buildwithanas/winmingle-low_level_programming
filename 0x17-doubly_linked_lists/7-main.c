<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
=======
#include "main.h"
>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba
 
/**
 * main - check the code
 *
<<<<<<< HEAD
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
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
=======
 * Return: Always 0.
 */
int main(void)
{
	int r;
 
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba
