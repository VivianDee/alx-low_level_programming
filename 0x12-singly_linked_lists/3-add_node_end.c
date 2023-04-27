#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a singly linked list
 * @head: Singly linked list head
 * @str: String added to the linked list
 *
 * Return: Address of new list
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *last_node = NULL;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);

	last->str = strdup(str);
	last->len = strlen(str);
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = last;
	}

	return (last);
}
