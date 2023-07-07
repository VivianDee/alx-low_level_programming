#include "hash_tables.h"

/**
* hash_table_print - A function that prints a hash table.
* @ht: The hash table
*
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item = NULL;
	int check = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (check)
			{
				printf(", ");
				check = 0;
			}
			printf("'%s': '%s'", item->key, item->value);
			check = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
