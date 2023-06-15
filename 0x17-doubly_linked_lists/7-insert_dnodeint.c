#include "lists.h"

/**
 * insert_dnodeint_at_index - A function inserts a new node at idx
 * @h: a pointer to a doubly linked list
 * @idx: index of the node
 * @n: A number
 *
 * Return: sum of data (n)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *current = *h;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = node;
		}
		*h = node;
		return (node);
	}
	while (current != NULL && count != (idx - 1))
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(node);
		return (NULL);
	} else if (current->next != NULL)
		current->next->prev = node;
	node->next = current->next;
	node->prev = current;
	current->next = node;
	return (node);
}
