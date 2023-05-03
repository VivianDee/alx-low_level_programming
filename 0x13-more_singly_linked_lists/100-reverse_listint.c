#include "lists.h"


/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A linked list
 *
 * Return: A pointer to the first node on the linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_list = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = new_list;
		new_list = *head;
		*head = next;
	}

	(*head)->next = new_list;
	return (*head);
}
