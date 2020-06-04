#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pt, count = 0;
	hash_node_t *here;

	if (ht == NULL)
		return;

	printf("{");
	for (pt = 0; pt < ht->size; pt++)
	{
		here = ht->array[pt];
		while (here != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", here->key, here->value);
			here = here->next;
			count++;
		}
	}
	printf("}\n");
}
