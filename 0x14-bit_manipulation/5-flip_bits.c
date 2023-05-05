#include "main.h"

/**
 * flip_bits - number of bit flip from num to num
 * @n: first binary num
 * @m: second binary num
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	unsigned long int xor_value;

	xor_value = n ^ m;
	flip = 0;
	for (; xor_value != 0; xor_value >>= 1)
	{
		flip = flip + (xor_value & 1);
	}
	return (flip);
}

