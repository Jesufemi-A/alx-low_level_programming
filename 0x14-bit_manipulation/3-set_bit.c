#include <stdio.h>
#define char_b 8
/**
 * set_bit - sets bit to 1 at index
 * @n: bits
 * @index: given index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * char_b))
		return (-1);
	*n = *n | 1UL << index;
	return (1);
}


