#include "lists.h"

/**
 * print_listint - Prints out a singly linked list
 * @h: A linked list
 *
 * Return: count(length of linked list)
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);

		temp = temp->next;
		count++;
	}

	return (count);
}
