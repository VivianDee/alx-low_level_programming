#include "lists.h"

size_t listint_len(const listint_t *h);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A linked list
 *
 * Return: A pointer to the first node on the linked list
 */


listint_t *reverse_listint(listint_t **head)
{
	int len = listint_len(*head), n = 0;

	while (len > 0)
	{
		n = (*head)->n;
		delete_nodeint_at_index(head, 0);
		insert_nodeint_at_index(head, len - 1, n);
		len--;
	}
	return (*head);
}

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

	if (listint_len(*head) < idx)
		return (NULL);

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


/**
  *listint_len - Returns the length of a linked list
  * @h: linked list
  *
  * Return: count (length of the linked list)
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
