#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a singly linked list.
 * @head: A pointer to the first element on the list
 * @n: A number to be added to the linked list
 *
 * Return: The address of the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
