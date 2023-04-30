#include "lists.h"

/**
 *listint_len - Returns the length of a linked list
 * @h: linked list
 *
 * Return: count (length of the linked list)
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
