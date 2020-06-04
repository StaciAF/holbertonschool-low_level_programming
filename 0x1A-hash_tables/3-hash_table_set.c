#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added to
 * @key: key to be passed through hash function, can not be empty string
 * @value: associated with key, can be empty string
 * Return: 1 for success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{       hash_node_t *element, *new_el = NULL;
	const unsigned char *new_key = (const unsigned char *) key;
	unsigned long int i;

	if (ht == NULL)
		return (0);
	i = hash_djb2(new_key) % ht->size;
	if (key == NULL || (strcmp(key, "") == 0) || value == NULL)
		return (0);
	if (ht->array[i] == NULL)
	{	new_el = malloc(sizeof(hash_node_t));
		if (new_el == NULL)
			return (0);
		ht->array[i] = new_el;
		new_el->key = strdup(key);
		new_el->value = strdup(value), new_el->next = NULL;
		return (1);
	}
	element = ht->array[i];
	while (element)
	{
		if (strcmp(element->key, key) == 0)
		{
			free(element->value);
			element->value = strdup(value);
			return (1);
		}
		element = element->next;
	}
	element = ht->array[i];
	while (element != NULL)
	{       new_el = malloc(sizeof(hash_node_t));
		if (new_el == NULL)
			return (0);
		ht->array[i] = new_el;
		new_el->key = strdup(key);
		new_el->value = strdup(value);
		new_el->next = element, ht->array[i] = new_el;
		return (1);
	}
	return (0);
}
