#include "lists.h"

/**
 * add_node - A function that adds a node to a singly linked list
 * @head: head of the linked list
 * @str: A string to be added to the linked list
 *
 * Return: New list address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->len = 0;

	first->str = strdup(str);
	first->len = strlen(str);

	first->next = *head;

	*head = first;

	return (first);
}
