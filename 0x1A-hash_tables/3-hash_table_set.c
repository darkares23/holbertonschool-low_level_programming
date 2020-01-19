#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
*@ht: hash table you want to add or update the key/value to
*@key: is th key
*@value: must be duyplicated can be empty string
*Return: 1 if succes or 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, idx;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);

	if (ht->array[idx] && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	newNode = malloc(sizeof(hash_table_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;

	return (1);
}
