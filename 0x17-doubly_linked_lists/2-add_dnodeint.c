#include "lists.h"

/**
* add_dnodeint - A function that adds a node
*to a dlistint_t list
* @head: a pointer to a doubly linked list
* @n: a number
*
* Return: extended dlistint_t list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = node;
	*head = node;

	return (*head);
}
