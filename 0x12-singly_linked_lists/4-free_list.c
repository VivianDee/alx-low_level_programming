#include "lists.h"

/**
 * free_list - Free the allocated memory for the linked list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
