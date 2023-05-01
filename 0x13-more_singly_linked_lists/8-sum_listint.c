#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 *listint_t linked list.
 * @head: A pointer to the first node on the list
 *
 * Return: sum (success)
 */

int sum_listint(listint_t *head)
{
	listint_t *first = head;
	int sum = 0;

	while (first != NULL)
	{
		sum += first->n;
		first = first->next;
	}

	return (sum);
}
