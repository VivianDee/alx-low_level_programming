#include "lists.h"

/**
 * pop_listint - deletes the first node on the linked list
 * @head: A pointer to the first node on the list
 *
 * Return: The content of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *first = *head;

	int n = first->n;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	*head = first->next;
	free(first);

	return (n);
}
