#include "lists.h"

/**
 * print_list - A function that prints out a singly linked list
 * @h: Singly linked list
 *
 * Return: count
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = NULL;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", temp->len, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}

	return (count);
}
