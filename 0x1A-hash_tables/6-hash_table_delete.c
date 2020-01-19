#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to del
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *nextNode = NULL, *actualNode = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				actualNode = ht->array[i];
				while (actualNode)
				{
					nextNode = actualNode->next;
					if (actualNode->value)
						free(actualNode->value);
					if (actualNode->key)
						free(actualNode->key);
					free(actualNode);
					actualNode = nextNode;
				}
			}
			i++;
		}
		free(ht->array);
	}
	free(ht);
}
