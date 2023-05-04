#include "main.h"

/**
 * print_binary - print the binary of a number
 * @n: input number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int shift_zero;

	unsigned int long masking;

	shift_zero = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (masking = 1UL << (64 - 1); masking; masking >>= 1)
	{
		if (n & masking)
		{
			shift_zero = 0;
			_putchar('1');
		}
		else if (!shift_zero)
		{
			_putchar('0');
		}
	}
}

