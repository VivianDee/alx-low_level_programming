#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created hash table, NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Inserts a key/value pair into the sorted hash table
 * @ht: The hash table
 * @key: The key string
 * @value: The value corresponding to the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	prev = NULL;

	while (temp != NULL && strcmp(temp->key, key) < 0)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp != NULL && strcmp(temp->key, key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (prev == NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = prev->next;
		prev->next = new_node;
	}

	if (ht->shead == NULL || strcmp(ht->shead->key, key) >= 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;

		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}

	if (new_node->snext == NULL)
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a given key
 * @ht: The hash table
 * @key: The key string
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL && strcmp(temp->key, key) < 0)
		temp = temp->next;

	if (temp != NULL && strcmp(temp->key, key) == 0)
		return (temp->value);

	return (NULL);
}

/**
 * shash_table_print - Prints the hash table using the sorted linked list
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;

	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (ht == NULL)
        return;

    temp = ht->stail;

    printf("{");
    while (temp != NULL)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        temp = temp->sprev;
        if (temp != NULL)
            printf(", ");
    }
    printf("}\n");
}



/**
 * shash_table_delete - Deletes the hash table
 * @ht: The hash table
 */


void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
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
