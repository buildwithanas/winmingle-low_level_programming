#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the first node (head) of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	/* This variable will keep track of how many nodes we have */
	size_t count = 0;

	/* Start from the head and go through each node until we reach NULL */
	while (h != NULL)
	{
		/* We found a node, so add 1 to our count */
		count = count + 1;

		/* Move to the next node in the list */
		h = h->next;
	}

	/* Return the total number of nodes we counted */
	return (count);
}
