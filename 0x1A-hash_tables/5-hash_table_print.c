#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pt;
	hash_node_t *here;

	if (ht == NULL)
		return;

	while(ht != NULL)
	{
		printf("{");
		for (pt = 0; pt < ht->size; pt++)
		{
			if (ht->array[pt] != NULL)
			{
				here = ht->array[pt];
				printf("%s'%s': ", here->key, here->value);
				pt++;
				here = here->next;
			}
		}
		printf("}\n");
	}
}
