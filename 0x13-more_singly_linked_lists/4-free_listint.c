#include "lists.h"

/**
 * free_listint - Frees a singly linked list
 * @head: A pointer to the first node on the list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
