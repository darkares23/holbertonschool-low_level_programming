#include "hash_tables.h"
/**
*hash_table_print - prints a hash table.
*@ht: hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, flag = 0;
	hash_node_t *tmp;

	if (ht)
	{
		printf("{");
		while (idx < ht->size)
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (idx > 0 && flag != 0)
					printf(", ");

				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
				{
					flag = 0;
					printf(", ");
					continue;
				}
				flag = 1;
			}
			idx++;
		}
		printf("}\n");
	}
} 