#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 *position.
 * @head: A pointer to the head of a linked list
 * @idx: Index in the linked list
 * @n: A number
 *
 * Return: Address of the new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first = *head;
	unsigned int current_idx = 0;
	listint_t  *node = NULL;


	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	while (first != NULL &&  current_idx != idx - 1)
	{
		current_idx++;
		first = first->next;
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	} else
	{
		node->next = first->next;
		first->next = node;
	}
	return (node);
}
