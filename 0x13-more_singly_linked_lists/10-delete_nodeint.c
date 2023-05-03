#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a singly linked list
 * @head: A pointer to the first node on the linked list
 * @index: An index on the linked list
 *
 * Return: (1) Success
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first = *head;
	listint_t *temp = NULL;
	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (index > 0 && *head != NULL)
	{
		while (first != NULL && current_index != (index - 1))
		{
			first = first->next;
			current_index++;
		}

		temp = first->next->next;
		free(first->next);
		first->next = temp;
		return (1);
	}
	else if (index == 0 && *head != NULL)
	{
		temp = first->next;
		free(*head);
		*head = temp;
		return (1);
	}
	return (-1);
}
