#include "lists.h"

/**
* print_dlistint - A function that prints all the
*elements of a dlistint_t list
* @h: a doubly linked list
*
* Return: The length of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		count++;
	}
	return (count);
}
