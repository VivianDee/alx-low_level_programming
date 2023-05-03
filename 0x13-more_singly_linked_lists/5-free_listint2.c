#include "lists.h"

/**
 * free_listint2 - Frees a singly linked list
 * @head: Pointer to the first node on the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *list = *head;
	listint_t *next = NULL;

	if (head != NULL || *head != NULL)
	{
		while (list != NULL)
		{
			next = list->next;
			free(list);
			list = next;
		}
	}
	*head = NULL;
}
