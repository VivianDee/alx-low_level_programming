#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: a pointer to a doubly linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *node = NULL;

	while (current != NULL)
	{
		node = current;
		current = current->next;
		free(node);
	}
}
