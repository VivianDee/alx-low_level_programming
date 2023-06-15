#include "lists.h"

/**
* dlistint_len - A function that prints the number of
*elements in a dlistint_t list
* @h: a doubly linked list
*
* Return: The length of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		list = list->next;
		count++;
	}
	return (count);
}
