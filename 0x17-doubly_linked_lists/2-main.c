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
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
=======
#include "main.h" 
/** * main - check the code. * * Return: Always 0. */
int main(void)
{
       	print_alphabet_x10();
       	return (0);
>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba
}
