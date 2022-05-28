#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - that retrieves a value associated with a key
 * @ht: pointer
 * @key: pointer
 *
 * Return: value NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int a;
	hash_node_t *item;

	if (!ht)
		return (NULL);

	for (a = 0; a < ht->size; a++)
	{
		item = ht->array[a];
		while (item)
		{
			if (!strcmp(item->key, key))
				return (item->value);
			item = item->next;
		}
	}
	return (NULL);
}
