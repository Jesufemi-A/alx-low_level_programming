#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - converting binary to decimal
 * @b: string parameter
 * Return: Converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int conversion;
	unsigned int power;

	index = 0;
	conversion = 0;
	power = 1;
	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] == '0' || b[index] == '1')
			index++;
		else
			return (0);
	}
	while (--index >= 0)
	{
		if (b[index] == '1')
			conversion = conversion + power;
		power = power << 1;
	}
	return (conversion);
}
