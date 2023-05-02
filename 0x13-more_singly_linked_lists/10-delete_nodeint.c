#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at an index
 * @head: A pointer to the first element on the linked list
 * @index: An index in the linked list
 *
 * Return:
 * - 1 (Success)
 * - 0 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first = *head;
	listint_t *temp = NULL;
	unsigned int current_index = 0;

	if (index > 0 && *head != NULL)
	{
		while (first != NULL && current_index != (index - 1))
		{
			first = first->next;
			current_index++;
		}

		temp = first->next->next;
		first->next = temp;
		return (1);
	}
	else if (index == 0 && *head != NULL)
	{
		temp = first->next;
		*head = temp;
		return (1);
	}
	return (-1);
}

