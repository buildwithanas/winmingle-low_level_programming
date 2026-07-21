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
	int sum;
 
	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
=======
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);

    r = _abs(0);
    printf("%d\n", r);

    r = _abs(1);
    printf("%d\n", r);

    r = _abs(-98);
    printf("%d\n", r);

    return (0);
>>>>>>> 9d97a020829fa50149a4aac444aa1abfb200d9ba
}
