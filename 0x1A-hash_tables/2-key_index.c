#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: is the key to be passed for returned index
 * @size: size of the array of the hash table
 * Return: the index where the key and its value pair are stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
