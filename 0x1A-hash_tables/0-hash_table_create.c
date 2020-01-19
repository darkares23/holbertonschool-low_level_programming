#include "hash_tables.h"
/**
 *  hash_table_create - creates a hash table.
 * @size: Size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!new_hash_t)
		return (NULL);
	if (size <= 0)
		return (NULL);

	new_hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_t->array)
	{
		free(new_hash_t);
		return (NULL);
	}
	while (i < size)
	{
		new_hash_t->array[i] = NULL;
		i++;
	}
	new_hash_t->size = size;

	return (new_hash_t);
}
