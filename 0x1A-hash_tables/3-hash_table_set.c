#include "hash_tables.h"

/**
* hash_table_set - A function that adds an element to the hash table.
* @ht: The hash table
* @key: The key
* @value: The value associated with the key
*
* Return: 1 (Success) or 0 (Failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (!key || !ht || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
	}
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = (char *)malloc(strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (0); }
	item->value = (char *)malloc(strlen(value) + 1);
	if (!item->value)
	{
		free(item->key);
		free(item);
		return (0); }
	strcpy(item->key, key);
	strcpy(item->value, value);
	if (!ht->array[index])
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	return (1);
}
