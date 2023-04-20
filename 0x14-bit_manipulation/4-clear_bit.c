#include "main.h"
#include <stdio.h>

/**
 * clear_bit - changes bit to 0
 * @n: pointer to the binary string
 * @index: index of the bit to be changed
 * Return: the value after clesring bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	i = 1UL << index;
	i = ~i;
	*n = *n & i;
	return (1);
}

