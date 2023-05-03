#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list
 * @head: A pointer to the first node
 *
 * Return: 'count' (length of the linked list)
 */


size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *temp = head;
	const listint_t *check = NULL;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		check = temp;
		temp = temp->next;
		count++;

		if (check <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit (98);
		}
	}

	return (count);
}
