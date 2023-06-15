#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth
 *node of a dlistint_t list
 * @head: a pointer to a doubly linked list
 * @index: index of the node
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int count = 0;

	if (index == 0)
		return (head);

	while (list != NULL && count != index)
	{
		list = list->next;
		count++;
	}

	return (list);
}
