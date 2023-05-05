#include "main.h"

/**
 * get_bit - get bit at given index
 * @n: binary num
 * @index: given index
 * Return: bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
