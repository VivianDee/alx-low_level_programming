#include "lists.h"

/**
* add_dnodeint_end - A function that adds a node
*to the end of a dlistint_t list
* @head: a pointer to a doubly linked list
* @n: a number
*
* Return: extended dlistint_t list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
		node->prev = current;
	}

	return (node);
}
