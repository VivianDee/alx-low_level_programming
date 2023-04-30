#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list.
 * @head: A pointer to the first node
 * @n: A number
 *
 * Return: Address of the added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL;
	listint_t *list;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
		*head = end;
	else
	{
		list = *head;
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = end;
	}

	return (end);
}
