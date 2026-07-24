#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void (nothing)
 */
void free_list(list_t *head)
{
	/* Create a pointer to keep track of the next node */
	list_t *current;
	list_t *next_node;

	/* Start from the head of the list */
	current = head;

	/* Loop through the list until we reach the end */
	while (current != NULL)
	{
		/* Save the pointer to the next node before we free the current one */
		next_node = current->next;

		/* Free the string that was duplicated (malloc'ed) */
		free(current->str);

		/* Free the current node itself */
		free(current);

		/* Move to the next node */
		current = next_node;
	}
}
