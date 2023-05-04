#include "main.h"

/**
 * binary_to_uint - converts binary to decimal number
 * @b: string input
 * Return: the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num, num, bin;

	if (b == NULL)
		return (0);

	decimal_num = 0;
	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] == '1')
			bin = 1;
		else if (b[num] == '0')
			bin = 0;
		else
			return (0);
		/* << multiplies decimal_num by 2*/
		decimal_num = (decimal_num << 1) + bin;
	}
	return (decimal_num);
}




