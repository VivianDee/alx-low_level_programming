#include "lists.h"

/**
 * list_len: A function that returns the length of a singly linked list
 * @h: singly linked list
 *
 * Return: Length of the linked list
 */


size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = NULL;

	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
