#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array hash table
 * Return: index of the hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
