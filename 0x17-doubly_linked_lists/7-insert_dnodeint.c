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
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	dlistint_t *next = NULL;
	unsigned int count = 0;

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = node;
	}
	else
	{
		while (current != NULL && count != (idx - 1))
		{
			current = current->next;
			count++;
		}
		next = current->next;
		next->prev = node;
		node->next = next;
		node->prev = current;
		current->next = node;
	}

	return (node);
}
