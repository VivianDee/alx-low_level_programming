#include "lists.h"
/**
 * sum_dlistint - A function that returns returns the sum
 *of all the data (n) in a dlistint_t list
 * @head: a pointer to a doubly linked list
 *
 * Return: sum of data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int sum = 0;
	    
	if (head == NULL)
		return (sum);

	while(list != NULL)
	{
		 sum += list->n;
		 list = list->next;
	}

	return (sum);
}
