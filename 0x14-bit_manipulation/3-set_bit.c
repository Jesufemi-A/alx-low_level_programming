#include "main.h"

/**
 * set_bit - set bit at index to 11
 * @n: binary number
 * @index: given index
 * Return: 1 if it works or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}

