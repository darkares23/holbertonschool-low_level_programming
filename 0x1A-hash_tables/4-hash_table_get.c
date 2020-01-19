#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key.
*@ht: is the hash table you want to look into
*@key:  is the key you are looking for
*Return:  Returns the value associated with the element,
* or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
