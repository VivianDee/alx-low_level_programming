#include "lists.h"

/**
 * delete_dnodeint_at_index - A function deletes a node at an index
 * @head: a pointer to a doubly linked list
 * @index: index of the node
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL;
	dlistint_t *next = NULL;
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next = current->next;
		*head = next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
		else
		{
			free(current);
			return (-1);
		}

	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current != NULL)
	{
		prev = current->prev;
		next = current->next;
		prev->next = next;
		next->prev = prev;
		free(current);
		return (1);
	}
	return (-1);
}
