#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mover, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		mover = ht->array[idx];
		if (mover != NULL)
		{
			temp = mover->next;
			if (mover->key != NULL)
				free(mover->key);
			if (mover->value != NULL)
				free(mover->value);
			if (mover != NULL)
				free(mover);
			mover = temp;
		}
	}
	free(ht->array);
	free(ht);
}
