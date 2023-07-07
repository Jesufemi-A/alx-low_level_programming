#include "hash_tables.h"

/**
 * key_index - key index used to get the key value pair
 * @key: key value pair
 * @size: size of hash table
 * Return: key index
 * Description: djb2 algorithm
 */
 
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
