#include "main.h"

/**
 * get_endianness - check for endiannes
 * Return: 1 if little endian, 0 big endian
 */


int get_endianness(void)
{
	unsigned char *pointer;
	unsigned int number;

	number = 1;
	pointer = (unsigned char *)&number;
	if (*pointer == 1)
		return (1);
	else
		return (0);
}
