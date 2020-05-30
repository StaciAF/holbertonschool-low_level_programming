#include "hash_tables.h"

/**
 * hash_table_get - gets a value associate with a key
 * @ht: hash table to be searched
 * @key: key to be searched
 * Returns: value or NULL if key isn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *here;
	const unsigned char *new_key;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || (strcmp("", key) == 0))
		return (NULL);
	new_key = (const unsigned char*) key;
	idx = hash_djb2(new_key) % ht->size;
	here = ht->array[idx];
	while(here != NULL)
	{
		if (strcmp(here->key, key) == 0)
		{
			return (here->value);
		}
		here = here->next;
	}
	return (NULL);
}
