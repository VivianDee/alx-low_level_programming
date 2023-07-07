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
	hash_node_t *item = NULL;
	unsigned long int index = 0;

	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	if (!key)
		return (0);
	index = key_index((const unsigned char *)key, 1024);
	ht->size = 1024;
	item->key = (char *)malloc(strlen(key) + 1);
	if (!item->key)
		return (0);

	item->value = (char *)malloc(strlen(value) + 1);
	if (!item->value)
		return (0);
	strcpy(item->key, key);
	strcpy(item->value, value);

	if (!ht->array[index])
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		free(ht->array[index]->key);
		free(ht->array[index]->value);
		free(ht->array[index]);
		ht->array[index] = NULL;
		ht->array[index] = item;
		return (1);
	}
	return (0);
}
