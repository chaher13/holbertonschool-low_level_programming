#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int printed = 0;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			if (printed > 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);

			printed++;

			node = node->next;
		}
	}
	printf("}\n");
}
