#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added to
 * @key: key to be passed through hash function, can not be empty string
 * @value: associated with key, can be empty string
 * Return: 1 for success, else 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *new_val = NULL;
	hash_node_t *next = NULL;
	hash_node_t *element = NULL;
	unsigned long int i = 0;

	i = hash_djb2(key) % ht->size;
	element = ht->array[i];

	if (key == 0)
		return (0);
	while(element != NULL)
	{
		if(!strcmp(element->key, key))
		{
			new_val = strdup(element->value);
			new_val = value;
			return (1);
		}
		element = element->next;
	}
	if ((element = malloc(sizeof(hash_table_t) + strlen(key) + 1)) == NULL)
		return (0);
	strcpy(element->key, key);
	element->value = new_val;

	element->next = ht->array[i];
	ht->array[i] = element;
	return(1);
}
