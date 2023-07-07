#include "hash_tables.h"

/**
* hash_table_delete - A function that deletes a hash table.
* @ht: The hash table
*
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (ht->array[i])
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
