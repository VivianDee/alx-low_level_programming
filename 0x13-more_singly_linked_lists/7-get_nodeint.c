#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: linked list
 * @index: nth node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int count = 0;

	while (count < (index))
	{
		list = list->next;
		count++;
	}
	return (list);
}
