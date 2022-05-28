#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: address of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a, b = 0;
	hash_node_t *node;

	if (!ht)
		return;

	putchar('{');
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node)
		{
			b++;
			if (b > 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
