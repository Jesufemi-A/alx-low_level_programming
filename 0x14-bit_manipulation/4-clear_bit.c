#include "main.h"

/**
 * clear_bit - set bit at index to 0
 * @n: binary number
 * @index: given index
 * Return: 1 if it works or -1 if it fails
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masking;

	if  (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	masking = 1UL << index;
	*n = *n & (~masking);
	return (1);
}

