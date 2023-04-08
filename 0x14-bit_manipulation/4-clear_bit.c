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
	unsigned int f;
	unsigned int k;

	f = 0;
	k = 0;

	while (n[f])
		f++;
	if (index > f)
		return (-1);
	while (n[k])
	{
		if (k != index)
			++k;
		else
			n[k] = n[k] & 0;
	}
	return (1);
}

