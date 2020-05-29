#include "hash_tables.h"

/**
 * hash_table_get - gets a value associate with a key
 * @ht: hash table to be searched
 * @key: key to be searched
 * Returns: value or NULL if key isn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = hash_djrb2(key);
	hash_node_t *curr = NULL;
	hash_table_t *here;

	here = ht->array[idx];
	if (here != NULL && strcmp(here->key, key) == 0)
	{
		return (here->value);
		here = here->next;
	}
	else
		return (NULL);
}
