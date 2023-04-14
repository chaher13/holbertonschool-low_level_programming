#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size to hash table
 * Return: hash table create or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_create = NULL;
	unsigned long int i;

	hash_create = malloc(sizeof(hash_table_t));
	if (hash_create == NULL)
		return (NULL);

	hash_create->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_create->array == NULL)
	{
		free(hash_create);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_create->array[i] = NULL;
	}

	hash_create->size = size;
	return (hash_create);
}
