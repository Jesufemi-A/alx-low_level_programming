#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - converting binary to decimal
 * @b: string parameter
 * Return: Converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int conversion;
	unsigned int power;
	unsigned int length;

	conversion = 0;
	power = 1;
	if (b == NULL)
		return (0);
	while ((*b) != '\0')
	{
		if ((*b) != 0 || (*b) != 1)
			return (0);
		b++;
	}
	length = slength(b);
	for (num = length - 1; num >= 0; num--)
	{
		if (b[num] == '1')
			conversion = conversion + 1;
		power = power * 2;
	}


	return (conversion);
}

/**
 * slength - finds the length of a string
 * @string: parameter for string
 * Return: the length of a string
 */
unsigned int slength(const char  *string)
{
	unsigned int i;

	i = 0;
	for (; *string; string++)
		i++;
	return (i);
}
