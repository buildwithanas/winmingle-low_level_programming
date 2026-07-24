#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Create a pointer for our new node */
	list_t *new_node;
	
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

	/* Step 4: Make the new node point to the old head */
	new_node->next = *head;

	/* Step 5: Update head to point to the new node */
	*head = new_node;

	/* Step 6: Return the address of the new node */
	return (new_node);
}
