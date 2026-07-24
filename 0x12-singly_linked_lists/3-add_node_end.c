#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Create a pointer for our new node */
	list_t *new_node;
	list_t *current;
	
	/* Copy the string so we have our own version */
	char *new_str;

	/* Step 1: Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	/* Step 2: Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		/* If malloc fails, free the duplicated string and return NULL */
		free(new_str);
		return (NULL);
	}

	/* Step 3: Fill in the new node's data */
	new_node->str = new_str;        /* Store the duplicated string */
	new_node->len = strlen(str);    /* Store the length of the string */
	new_node->next = NULL;          /* This will be the last node, so next is NULL */

	/* Step 4: If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Step 5: Find the last node in the list */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Step 6: Make the last node point to the new node */
	current->next = new_node;

	/* Step 7: Return the address of the new node */
	return (new_node);
}
