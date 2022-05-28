#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer
 * @key: pointer
 * @value: pointer
 *
 * Return: 1 if it succeeded,
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nodes, *header, *unode_1;


	if (!strcmp(key, "") || !key || !strcmp(value, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	header = ht->array[index];
	unode_1 = header;

	while (unode_1)
	{
		if (!strcmp(unode_1->key, key))
		{
			free(unode_1->value);
			unode_1->value = strdup(value);
			return (1);
		}
		unode_1 = unode_1->next;
	}

	nodes = malloc(sizeof(hash_node_t));
	if (nodes == NULL)
		return (0);

	nodes->key = strdup((char *)key);
	nodes->value = strdup(value);
	nodes->next = header;

	header = nodes;

	ht->array[index] = header;
	return (1);
}
