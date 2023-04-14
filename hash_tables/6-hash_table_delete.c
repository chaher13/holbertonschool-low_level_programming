#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp2 = NULL, *tmp = NULL;

	if (ht == NULL)
		return;
	if (ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				tmp = ht->array[i];
				while (tmp)
				{
					tmp2 = tmp->next;
					if (tmp->value)
						free(tmp->value);
					if (tmp->key)
						free(tmp->key);
					free(tmp);
					tmp = tmp2;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
